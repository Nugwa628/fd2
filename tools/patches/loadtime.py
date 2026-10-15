"""Load-time contents of ProjectDiablo.dll's patch tables (shared by build_patches.py and
tools/features/extract_feature.py, so there is one implementation).

Part of the main patch table is not initialised data in the file: a C++ static initializer (run by the CRT's
`_initterm` before DllMain, i.e. before the installer) writes it with straight-line code.  This module

  * finds every function that writes into a given address range (raw scan of `.text` for the range's addresses,
    confirmed by disassembly: only instructions whose memory *destination* lies in the range count),
  * checks that each writer is registered in the static-initializer pointer array (and reports that array),
  * runs each writer symbolically (a small x86 emulator over the instructions; values are tracked per register
    and per byte; calls to small pure helpers are emulated inline, other calls clobber eax/ecx/edx),
  * returns the table as the installer sees it: file bytes overlaid with the writes, plus for every field
    whether it came from the file or from the initializer and how the value was formed.

A value that cannot be known statically (read from a writable global or a game-pointer cell, returned by a
non-inlined call, uninitialised stack) is an `RT` object that names its source; callers record it as run-time
only instead of guessing.  An instruction the emulator does not model raises `Unsupported` (fail loudly).
Static analysis only; nothing is executed.
"""
import bisect
import collections
import struct

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_OP_REG

_md = Cs(CS_ARCH_X86, CS_MODE_32)
_md.detail = True

FIELDS = ('dll', 'offset', 'data', 'relative', 'size')


class Unsupported(Exception):
    pass


class RT:
    """a value only known at run time"""
    __slots__ = ('desc',)

    def __init__(self, desc):
        self.desc = desc

    def __repr__(self):
        return 'RT(%s)' % self.desc


class Val:
    """a 32-bit value: v (int) or rt (RT), with a short description of how it was formed"""
    __slots__ = ('v', 'rt', 'how')

    def __init__(self, v=None, how='imm', rt=None):
        self.v = None if v is None else v & 0xffffffff
        self.rt = rt
        self.how = how

    @property
    def known(self):
        return self.rt is None


def _rt(desc):
    return Val(rt=RT(desc), how='run-time')


class PEImage:
    def __init__(self, path):
        self.path = path
        pe = pefile.PE(path, fast_load=True)
        self.base = pe.OPTIONAL_HEADER.ImageBase
        self.img = bytes(pe.get_memory_mapped_image())
        self.secs = [(s.Name.rstrip(b'\0').decode(), self.base + s.VirtualAddress,
                      self.base + s.VirtualAddress + s.Misc_VirtualSize, s.Characteristics) for s in pe.sections]

    def read(self, va, n):
        return self.img[va - self.base:va - self.base + n]

    def d(self, va):
        return struct.unpack('<I', self.read(va, 4))[0]

    def sec(self, va):
        for n, lo, hi, ch in self.secs:
            if lo <= va < hi:
                return n, ch
        return None, 0

    def is_text(self, va):
        n, ch = self.sec(va)
        return bool(ch & 0x20000000)            # IMAGE_SCN_MEM_EXECUTE

    def writable(self, va):
        n, ch = self.sec(va)
        return bool(ch & 0x80000000)            # IMAGE_SCN_MEM_WRITE

    def text_range(self):
        t = [s for s in self.secs if s[3] & 0x20000000]
        return t[0][1], t[0][2]


# ------------------------------------------------------------------------------------------------ emulator
_SUB = {'al': ('eax', 0, 8), 'ah': ('eax', 8, 8), 'ax': ('eax', 0, 16), 'bl': ('ebx', 0, 8), 'bh': ('ebx', 8, 8),
        'bx': ('ebx', 0, 16), 'cl': ('ecx', 0, 8), 'ch': ('ecx', 8, 8), 'cx': ('ecx', 0, 16), 'dl': ('edx', 0, 8),
        'dh': ('edx', 8, 8), 'dx': ('edx', 0, 16), 'si': ('esi', 0, 16), 'di': ('edi', 0, 16), 'bp': ('ebp', 0, 16),
        'sp': ('esp', 0, 16)}
_GPR = ('eax', 'ebx', 'ecx', 'edx', 'esi', 'edi', 'ebp', 'esp')
STACK_TOP = 0x00f00000          # fake stack address (outside every image)


class Emu:
    """symbolic execution of straight-line code (no conditional branches)"""

    def __init__(self, pe, pure_cache=None, max_insns=200000):
        self.pe = pe
        self.reg = {r: _rt('%s at entry' % r) for r in _GPR}
        self.reg['esp'] = Val(STACK_TOP, 'stack')
        self.xmm = {}
        self.mem = {}           # byte address -> (int byte | RT, writer insn address)
        self.writes = []        # (insn address, dst address, size)
        self.max_insns = max_insns
        self.pure = pure_cache if pure_cache is not None else {}
        self.calls = []         # (insn address, target, inlined?)

    # ---- registers
    def get(self, name):
        if name in self.reg:
            return self.reg[name]
        if name in _SUB:
            full, sh, bits = _SUB[name]
            v = self.reg[full]
            if not v.known:
                return v
            return Val((v.v >> sh) & ((1 << bits) - 1), 'part of %s' % full)
        if name.startswith('xmm'):
            raise Unsupported('xmm read as gpr')
        raise Unsupported('register %s' % name)

    def set(self, name, val):
        if name in self.reg:
            self.reg[name] = val
            return
        if name in _SUB:
            full, sh, bits = _SUB[name]
            old = self.reg[full]
            if not (old.known and val.known):
                self.reg[full] = val if not val.known else _rt('partial write of %s' % full)
                return
            m = ((1 << bits) - 1) << sh
            self.reg[full] = Val((old.v & ~m) | ((val.v << sh) & m), val.how)
            return
        raise Unsupported('register %s' % name)

    # ---- memory
    def addr(self, ins, op):
        m = op.mem
        if m.segment:
            raise Unsupported('segment override')
        a = m.disp
        for r, sc in ((m.base, 1), (m.index, m.scale)):
            if r:
                v = self.get(ins.reg_name(r))
                if not v.known:
                    return None
                a += v.v * sc
        return a & 0xffffffff

    def load(self, a, n):
        if a is None:
            return _rt('load through unknown pointer')
        bs, rts = [], []
        for k in range(n):
            x = a + k
            if x in self.mem:
                b = self.mem[x][0]
            elif self.pe.base <= x < self.pe.base + len(self.pe.img):
                if self.pe.writable(x):
                    b = RT('global DAT_%08x (writable; file value 0x%x)' % (a, int.from_bytes(self.pe.read(a, n), 'little')))
                else:
                    b = self.pe.img[x - self.pe.base]
            elif STACK_TOP - 0x100000 <= x < STACK_TOP + 0x1000:
                b = RT('uninitialised stack')
            else:
                b = RT('memory 0x%08x outside ProjectDiablo.dll (game memory)' % a)
            if isinstance(b, RT):
                rts.append(b)
            bs.append(b)
        if rts:
            return Val(rt=rts[0], how='run-time')
        return Val(int.from_bytes(bytes(bs), 'little'), 'loaded from 0x%08x' % a)

    def store(self, insaddr, a, val, n):
        if a is None:
            raise Unsupported('store through unknown pointer at %x' % insaddr)
        for k in range(n):
            b = val.rt if not val.known else (val.v >> (8 * k)) & 0xff
            self.mem[a + k] = (b, insaddr, val)
        self.writes.append((insaddr, a, n))

    # ---- operands
    def opval(self, ins, op, size=None):
        if op.type == X86_OP_IMM:
            return Val(op.imm, 'imm')
        if op.type == X86_OP_REG:
            return self.get(ins.reg_name(op.reg))
        if op.type == X86_OP_MEM:
            return self.load(self.addr(ins, op), size or op.size)
        raise Unsupported('operand')

    def opstore(self, ins, op, val):
        if op.type == X86_OP_REG:
            self.set(ins.reg_name(op.reg), val)
        elif op.type == X86_OP_MEM:
            self.store(ins.address, self.addr(ins, op), val, op.size)
        else:
            raise Unsupported('store operand')

    # ---- helpers
    def is_pure(self, fn):
        """a short straight-line function without memory writes outside its own stack frame and without calls"""
        if fn in self.pure:
            return self.pure[fn]
        ok = False
        n = 0
        for ins in _md.disasm(self.pe.read(fn, 0x200), fn):
            n += 1
            if ins.mnemonic == 'ret':
                ok = True
                break
            if n > 64 or ins.mnemonic.startswith('j') or ins.mnemonic in ('call', 'int3') or ins.mnemonic.startswith('rep'):
                break
            if ins.operands and ins.operands[0].type == X86_OP_MEM and ins.mnemonic not in ('cmp', 'test') and \
                    ins.reg_name(ins.operands[0].mem.base) not in ('esp', 'ebp'):
                break
        self.pure[fn] = ok
        return ok

    def run(self, va, depth=0):
        """emulate from va to its ret; returns the number of instructions"""
        n = 0
        a = va
        while True:
            ins = next(_md.disasm(self.pe.read(a, 16), a), None)
            if ins is None:
                raise Unsupported('cannot decode at %x' % a)
            n += 1
            if n > self.max_insns:
                raise Unsupported('too long at %x' % a)
            a = ins.address + ins.size
            m = ins.mnemonic
            ops = ins.operands
            if m == 'ret':
                self.reg['esp'] = Val(self.reg['esp'].v + 4 + (ops[0].imm if ops else 0), 'stack')
                return n
            if m in ('nop', 'endbr32'):
                continue
            if m == 'int3' or m.startswith('j') or m.startswith('loop') or m.startswith('rep') or m.startswith('cmov') \
                    or m.startswith('set'):
                raise Unsupported('%s %s at %x (not straight-line)' % (m, ins.op_str, ins.address))
            if m == 'call':
                if ops[0].type != X86_OP_IMM:
                    raise Unsupported('indirect call at %x' % ins.address)
                t = ops[0].imm
                if depth < 4 and self.is_pure(t):
                    args = (self.reg['ecx'], self.reg['edx'])
                    sp = self.reg['esp'].v
                    self.reg['esp'] = Val(sp - 4, 'stack')
                    self.store(ins.address, sp - 4, Val(a, 'ret'), 4)
                    self.writes.pop()
                    self.run(t, depth + 1)
                    r = self.reg['eax']
                    if r.known:
                        self.reg['eax'] = Val(r.v, 'computed by helper 0x%08x(ecx=%s, edx=%s)' % (
                            t, *[('0x%x' % x.v) if x.known else '?' for x in args]))
                    self.calls.append((ins.address, t, True))
                else:
                    for r in ('eax', 'ecx', 'edx'):
                        self.reg[r] = _rt('%s after call 0x%08x' % (r, t))
                    self.calls.append((ins.address, t, False))
                continue
            if m == 'push':
                v = self.opval(ins, ops[0], 4)
                sp = self.reg['esp'].v - 4
                self.reg['esp'] = Val(sp, 'stack')
                self.store(ins.address, sp, v, 4)
                self.writes.pop()
                continue
            if m == 'pop':
                sp = self.reg['esp'].v
                self.opstore(ins, ops[0], self.load(sp, 4))
                self.reg['esp'] = Val(sp + 4, 'stack')
                continue
            if m in ('xorps', 'pxor') and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                self.xmm[ins.reg_name(ops[0].reg)] = [Val(0, 'imm')] * 4
                continue
            if m in ('movups', 'movaps', 'movdqu', 'movdqa', 'movq', 'movd') and any(
                    o.type == X86_OP_REG and ins.reg_name(o.reg).startswith('xmm') for o in ops):
                if ops[0].type == X86_OP_MEM:
                    x = self.xmm.get(ins.reg_name(ops[1].reg)) or [_rt('xmm')] * 4
                    ad = self.addr(ins, ops[0])
                    for k in range(ops[0].size // 4):
                        self.store(ins.address, None if ad is None else ad + 4 * k, x[k], 4)
                elif ops[1].type == X86_OP_MEM:
                    ad = self.addr(ins, ops[1])
                    self.xmm[ins.reg_name(ops[0].reg)] = [self.load(None if ad is None else ad + 4 * k, 4) for k in range(4)]
                else:
                    raise Unsupported('%s %s' % (m, ins.op_str))
                continue
            if m == 'mov':
                v = self.opval(ins, ops[1], ops[0].size)
                if v.known and ops[0].size < 4:
                    v = Val(v.v & ((1 << (8 * ops[0].size)) - 1), v.how)
                self.opstore(ins, ops[0], v)
                continue
            if m in ('movzx', 'movsx'):
                v = self.opval(ins, ops[1])
                if v.known:
                    bits = 8 * ops[1].size
                    x = v.v & ((1 << bits) - 1)
                    if m == 'movsx' and x >> (bits - 1):
                        x -= 1 << bits
                    v = Val(x, v.how)
                self.opstore(ins, ops[0], v)
                continue
            if m == 'lea':
                ad = self.addr(ins, ops[1])
                self.opstore(ins, ops[0], Val(ad, 'lea') if ad is not None else _rt('lea of unknown'))
                continue
            if m in ('xor', 'sub') and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                self.set(ins.reg_name(ops[0].reg), Val(0, 'imm'))
                continue
            if m in ('add', 'sub', 'and', 'or', 'xor', 'shl', 'sal', 'shr', 'sar', 'imul') and len(ops) == 2:
                x = self.opval(ins, ops[0])
                y = self.opval(ins, ops[1])
                if not (x.known and y.known):
                    self.opstore(ins, ops[0], x if not x.known else y)
                    continue
                bits = 8 * ops[0].size
                mask = (1 << bits) - 1
                xv, yv = x.v & mask, y.v
                if m == 'add':
                    r = xv + yv
                elif m == 'sub':
                    r = xv - yv
                elif m == 'and':
                    r = xv & yv
                elif m == 'or':
                    r = xv | yv
                elif m == 'xor':
                    r = xv ^ yv
                elif m == 'imul':
                    r = xv * yv
                elif m in ('shl', 'sal'):
                    r = xv << (yv & 31)
                elif m == 'shr':
                    r = xv >> (yv & 31)
                else:   # sar
                    sx = xv - (1 << bits) if xv >> (bits - 1) else xv
                    r = sx >> (yv & 31)
                self.opstore(ins, ops[0], Val(r & mask, 'computed'))
                continue
            if m in ('inc', 'dec', 'neg', 'not') and len(ops) == 1:
                x = self.opval(ins, ops[0])
                if x.known:
                    bits = 8 * ops[0].size
                    r = {'inc': x.v + 1, 'dec': x.v - 1, 'neg': -x.v, 'not': ~x.v}[m]
                    x = Val(r & ((1 << bits) - 1), 'computed')
                self.opstore(ins, ops[0], x)
                continue
            if m in ('cmp', 'test'):
                continue        # flags only matter for branches, which are rejected
            raise Unsupported('%s %s at %x' % (m, ins.op_str, ins.address))


# ------------------------------------------------------------------------------------------------ writers
def find_writers(pe, ranges, func_starts):
    """{insn address: (insn address, address, size, mnemonic, op_str, indexed)} for instructions that store into one
    of ranges [(lo, hi)] (indexed: base/index register + displacement) or take an address in a range as a value
    (size 0).
    Candidates are the .text positions holding a dword inside a range; each is confirmed by a linear sweep of the
    containing function (from func_starts) so that only real instruction boundaries count."""
    lo_t, hi_t = pe.text_range()
    code = pe.read(lo_t, hi_t - lo_t)
    cand = set()
    for align in range(4):
        n = (len(code) - align) // 4
        for k, (v,) in enumerate(struct.iter_unpack('<I', code[align:align + 4 * n])):
            for lo, hi in ranges:
                if lo <= v < hi:
                    cand.add(lo_t + align + 4 * k)
    starts = sorted(func_starts)
    byfn = collections.defaultdict(set)
    for pos in cand:
        i = bisect.bisect_right(starts, pos) - 1
        byfn[starts[i] if i >= 0 else lo_t].add(pos)
    out = {}
    for fn, poss in sorted(byfn.items()):
        poss = sorted(poss)
        last = poss[-1]
        for addr, size, mn, opstr in _md.disasm_lite(pe.read(fn, last + 16 - fn), fn):
            if addr > last:
                break
            j = bisect.bisect_right(poss, addr)
            if j == len(poss) or poss[j] >= addr + size:
                continue
            ins = next(_md.disasm(pe.read(addr, size), addr))
            hit = [poss[j] - addr]
            back = hit[0]
            if ins.imm_size == 4 and ins.imm_offset == back:
                # a pointer into the range taken as a value (e.g. `mov ecx, table` before the installer call)
                out[ins.address] = (ins.address, ins.operands[-1].imm & 0xffffffff, 0, ins.mnemonic, ins.op_str, False)
                continue
            if not (ins.disp_size == 4 and ins.disp_offset == back):
                continue
            mo = [k for k, o in enumerate(ins.operands) if o.type == X86_OP_MEM]
            if not mo:
                continue
            o = ins.operands[mo[0]]
            if ins.mnemonic == 'lea':
                out[ins.address] = (ins.address, o.mem.disp & 0xffffffff, 0, ins.mnemonic, ins.op_str, False)
            elif mo[0] == 0 and ins.mnemonic not in ('cmp', 'test', 'push', 'bt'):
                # a store; with an index/base register only its displacement is static (indexed store)
                out[ins.address] = (ins.address, o.mem.disp & 0xffffffff, o.size, ins.mnemonic, ins.op_str,
                                    bool(o.mem.index or o.mem.base))
    return out


def _code_pointer_slots(pe):
    """{code address: [slot]} for every dword in a non-executable section that points into .text (cached)"""
    if getattr(pe, '_cps', None) is None:
        lo_t, hi_t = pe.text_range()
        cps = collections.defaultdict(list)
        for n, lo, hi, ch in pe.secs:
            if ch & 0x20000000:
                continue
            data = pe.read(lo, hi - lo)
            for k, (v,) in enumerate(struct.iter_unpack('<I', data[:len(data) // 4 * 4])):
                if lo_t <= v < hi_t:
                    cps[v].append(lo + 4 * k)
        pe._cps = cps
    return pe._cps


def initializer_array(pe, fn):
    """(slot address, array start, array end) of the static-initializer pointer array (the CRT `_initterm` list
    run before DllMain) that lists fn directly or through a jmp stub, or None"""
    lo_t, hi_t = pe.text_range()
    cps = _code_pointer_slots(pe)
    cands = list(cps.get(fn, []))
    for v, slots in cps.items():          # jmp stubs to fn
        b = pe.read(v, 5)
        if b[:1] == b'\xe9' and (v + 5 + struct.unpack('<i', b[1:])[0]) & 0xffffffff == fn:
            cands += slots
    for slot in sorted(cands):
        def ok(a):
            return lo_t <= pe.d(a) < hi_t
        s = slot
        while ok(s - 4):
            s -= 4
        e = slot
        while ok(e):
            e += 4
        if (e - s) // 4 >= 16:            # an array of code pointers, not a lone function pointer
            return slot, s, e
    return None


class LoadTimeTable:
    """main/conditional patch table as the installer reads it after the static initializers ran.

    writers   : functions storing into [table, table + span) -> emulated when listed in a static-initializer array
    refs      : functions that only take the table's address (e.g. Init passing it to the installer)
    entries   : the entries the installer processes (up to the end marker, or up to its abort condition)
    """

    def __init__(self, path, table, func_starts, entry=20, end_mark=27, span_entries=4096, pe=None):
        self.pe = pe or PEImage(path)
        self.table = table
        self.entry = entry
        self.end_mark = end_mark
        hi = table + span_entries * entry
        starts = sorted(func_starts)
        w = find_writers(self.pe, [(table, hi)], starts)

        def fstart(a):
            return starts[bisect.bisect_right(starts, a) - 1]
        stores = collections.defaultdict(list)
        refs = collections.defaultdict(list)
        for x in w.values():
            (stores if x[2] else refs)[fstart(x[0])].append(x)
        self.refs = {f: v for f, v in refs.items() if f not in stores}
        self.writers = []
        self.mem = {}
        self.notes = []
        failed = {}
        for fn in sorted(stores):
            reg = initializer_array(self.pe, fn)
            info = dict(fn=fn, registered=reg, stores=stores[fn], insns=0, writes=0, dwords=0, calls=[], error='')
            self.writers.append(info)
            if reg is None:
                info['error'] = 'not listed in a static-initializer array (may run after the installer)'
                failed[fn] = info
                continue
            emu = Emu(self.pe)
            try:
                info['insns'] = emu.run(fn)
            except Unsupported as e:
                info['error'] = 'not emulated: %s' % e
                failed[fn] = info
                continue
            own = [(wa, a, sz) for wa, a, sz in emu.writes if table <= a < hi]
            info['writes'] = len(set(wa for wa, a, sz in own))      # store instructions
            info['dwords'] = len(own)                                  # dword stores (a 16-byte movups = 4)
            info['calls'] = emu.calls
            for a, (b, wa, val) in emu.mem.items():
                if table <= a < hi:
                    self.mem[a] = (b, wa, val, fn)
        # the installer's loop: stop at nDLL == end mark (success) or at nDLL out of range / dwAddress == 0 (abort)
        self.entries = []
        i = 0
        while True:
            ent = self.read_entry(i)
            dll = ent['dll']['value']
            off = ent['offset']['value']
            if dll == self.end_mark:
                self.end = ('end marker', i)
                break
            if not isinstance(dll, int) or not isinstance(off, int) or dll >= self.end_mark or dll < 0 or off == 0:
                self.end = ('abort (installer returns FALSE)', i)
                break
            self.entries.append(ent)
            i += 1
        end_addr = table + (self.end[1] + 1) * entry
        # writers that store only past the end marker write other objects that follow the table: dropped.  A writer
        # we could not follow that stores into the entries the installer reads (or through an index) is an error.
        self.other_objects = 0
        keep = []
        for info in self.writers:
            mine = [d for _, d, *_ in info['stores'] if d < end_addr]
            if not mine:
                self.other_objects += 1
                continue
            if info['error']:
                raise Unsupported('table 0x%08x: writer 0x%08x %s' % (table, info['fn'], info['error']))
            keep.append(info)
        self.writers = keep
        self.refs = {f: v for f, v in self.refs.items() if any(x[1] < end_addr for x in v)}
        self.static_count = 0
        while self.static_count < len(self.entries) and not any(
                f['source'] == 'load-time' for f in self.entries[self.static_count]['fields'].values()):
            self.static_count += 1

    def read_entry(self, i):
        a0 = self.table + i * self.entry
        out = dict(index=i, table_addr=a0, fields={})
        for k, name in enumerate(FIELDS):
            a = a0 + 4 * k
            bs = []
            src, how, writer, fn, rt = 'file', '', None, None, None
            for j in range(4):
                if a + j in self.mem:
                    b, wa, val, fn = self.mem[a + j]
                    src, writer, how = 'load-time', wa, val.how
                    if isinstance(b, RT):
                        rt = b
                        b = 0
                    bs.append(b)
                else:
                    bs.append(self.pe.img[a + j - self.pe.base])
            v = int.from_bytes(bytes(bs), 'little')
            out['fields'][name] = out[name] = dict(value=v if rt is None else rt, source=src, how=how, writer=writer, fn=fn)
        return out

    def runtime_only(self, ent):
        return [n for n in FIELDS if isinstance(ent[n]['value'], RT)]
