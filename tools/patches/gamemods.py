"""Game-module helpers for build_patches.py: shipped 1.13c PE images, reference names (sigmaRE/5_game_source),
function containment by recursive-descent disassembly, instruction text.  Static analysis only."""
import csv, os, re, struct, bisect
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_IMM, X86_OP_MEM

_md = Cs(CS_ARCH_X86, CS_MODE_32)
_md.detail = True
_md_plain = Cs(CS_ARCH_X86, CS_MODE_32)

# reference trees that were loaded at another base than the shipped file (compare by RVA)
REF_BASE_OVERRIDE = {'storm': 0x6f600000}


def ci_find(directory, name):
    """case-insensitive file/dir lookup"""
    if not os.path.isdir(directory):
        return None
    low = name.lower()
    for f in os.listdir(directory):
        if f.lower() == low:
            return os.path.join(directory, f)
    return None


class GameModule:
    def __init__(self, name, path, refroot):
        self.name = name                      # e.g. D2Client.dll
        self.path = path
        self.pe = pefile.PE(path, fast_load=True)
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        self.img = bytearray(self.pe.get_memory_mapped_image())
        self.sections = [(s.Name.rstrip(b'\0').decode(errors='replace'), self.base + s.VirtualAddress,
                          self.base + s.VirtualAddress + max(s.Misc_VirtualSize, s.SizeOfRawData),
                          s.Characteristics) for s in self.pe.sections]
        stem = os.path.splitext(name)[0]
        self.refdir = ci_find(refroot, stem) if refroot else None
        self.refbase = REF_BASE_OVERRIDE.get(stem.lower(), self.base)
        self.delta = self.base - self.refbase
        self.funcs = {}        # shipped VA -> (name, file)
        self.conf = {}         # shipped VA -> reference placement confidence (anchor/range/linked/inferred/nearest/gap)
        self.starts = []
        self.globals = {}      # shipped VA -> (label, users)
        self.gstarts = []
        self._flow = {}
        if self.refdir:
            self._load_ref()

    # ---------------------------------------------------------------- reference names
    def _load_ref(self):
        sym = os.path.join(self.refdir, 'symbols.csv')
        if os.path.exists(sym):
            for r in csv.DictReader(open(sym, encoding='utf-8', errors='replace')):
                a = int(r['address'], 16) + self.delta
                self.funcs[a] = (r['new_name'], r['file'])
                self.conf[a] = r.get('confidence', '')
        exp = os.path.join(self.refdir, 'exports.tsv')
        self.exports = {}
        if os.path.exists(exp):
            for l in open(exp, encoding='utf-8', errors='replace'):
                p = l.rstrip('\n').split('\t')
                if len(p) >= 3 and p[0].isdigit():
                    self.exports[int(p[1], 16) + self.delta] = p[2]
        self.starts = sorted(self.funcs)
        for g in ('globals.h', 'missing_globals.h'):
            gp = os.path.join(self.refdir, 'include', g)
            if not os.path.exists(gp):
                continue
            for l in open(gp, encoding='utf-8', errors='replace'):
                m = re.search(r'\b(DAT_|PTR_|s_\w*_|u_\w*_)?([0-9a-f]{8})\b[^;]*;\s*/\*\s*(.*?)\*/', l)
                m2 = re.search(r'\b((?:DAT|PTR|BYTE|WORD|DWORD|LAB)_([0-9a-f]{8}))\b', l)
                if m2:
                    a = int(m2.group(2), 16) + self.delta
                    users = ''
                    mu = re.search(r'/\*\s*x\d+\s+(.*?)\*/', l)
                    if mu:
                        users = mu.group(1).split(',')[0].strip()
                    self.globals.setdefault(a, (m2.group(1), users))
        self.gstarts = sorted(self.globals)

    def ref_va(self, va):
        return va - self.delta

    def section_of(self, va):
        for n, lo, hi, ch in self.sections:
            if lo <= va < hi:
                return n, bool(ch & 0x20000000)
        return None, False

    def is_code(self, va):
        return self.section_of(va)[1]

    def read(self, va, n):
        o = va - self.base
        b = bytes(self.img[o:o + n]) if o >= 0 else b''
        return b + b'\0' * (n - len(b))  # uninitialised (bss) part of a section reads as zero

    def dword(self, va):
        return struct.unpack('<I', self.read(va, 4))[0]

    # ---------------------------------------------------------------- function containment
    def func_at(self, va):
        """nearest reference function start <= va: (start, name, file, next_start)"""
        i = bisect.bisect_right(self.starts, va) - 1
        if i < 0:
            return None
        s = self.starts[i]
        nxt = self.starts[i + 1] if i + 1 < len(self.starts) else s + 0x10000
        n, f = self.funcs[s]
        return s, n, f, nxt

    def flow(self, start, end):
        """recursive descent from start, bounded by [start,end): dict insn_addr -> size"""
        key = (start, end)
        if key in self._flow:
            return self._flow[key]
        seen = {}
        work = [start]
        while work:
            a = work.pop()
            while start <= a < end and a not in seen:
                code = self.read(a, 16)
                ins = next(_md.disasm(code, a), None)
                if ins is None:
                    break
                seen[a] = ins.size
                mn = ins.mnemonic
                if mn in ('ret', 'retf', 'int3', 'hlt', 'ud2'):
                    break
                if mn == 'jmp' or (mn.startswith('j') and mn != 'jmp'):
                    op = ins.operands[0]
                    if op.type == X86_OP_IMM:
                        work.append(op.imm)
                    elif op.type == X86_OP_MEM and op.mem.base == 0 and op.mem.scale == 4 and op.mem.disp:
                        # jump table: dwords pointing into the function
                        t = op.mem.disp
                        for k in range(512):
                            try:
                                v = self.dword(t + 4 * k)
                            except Exception:
                                break
                            if start <= v < end:
                                work.append(v)
                            else:
                                break
                    if mn == 'jmp':
                        break
                a += ins.size
        self._flow[key] = seen
        return seen

    def locate(self, va):
        """map a patched address to its reference function.
        returns dict(func_start, name, file, offset, status) status in
        {flow (reached by recursive descent, on/inside an insn), range (between start and next start only),
        none (before first function / not code)}"""
        if not self.starts:
            return dict(func_start=None, name='', file='', offset=0, status='noref')
        sec, code = self.section_of(va)
        if not code:
            return dict(func_start=None, name='', file='', offset=0, status='data')
        f = self.func_at(va)
        if f is None:
            return dict(func_start=None, name='', file='', offset=0, status='none')
        s, n, fl, nxt = f
        seen = self.flow(s, nxt)
        ok = self._covers(seen, va)
        if ok:
            return dict(func_start=s, name=n, file=fl, offset=va - s, status='flow', boundary=(va in seen),
                        conf=self.conf.get(s, ''))
        # not reached from the reference start: look for a function start the reference did not split off
        # (code after int3/nop padding between the reference start and the patch)
        # Starts after alignment padding are tried first: a C3/C2 byte may just as well be part of an operand
        # (e.g. `mov eax, [0x6fbcc3ec]`), so an entry point right after it is only a fallback.
        blob = self.read(s, va - s + 1)
        for want_pad in (True, False):
            for p in range(va, s, -1):
                o = p - s
                pad = blob[o - 1] in (0xcc, 0x90) and blob[o] not in (0xcc, 0x90) and p % 4 == 0
                after_ret = blob[o - 1] == 0xc3 or (o >= 3 and blob[o - 3] == 0xc2 and blob[o - 1] == 0)
                if (pad if want_pad else after_ret):
                    seen2 = self.flow(p, nxt)
                    if self._covers(seen2, va):
                        return dict(func_start=p, name='sub_%08x' % self.ref_va(p), file=fl, offset=va - p,
                                    status='unref', boundary=(va in seen2), ref_prev=n, conf=self.conf.get(s, ''))
        return dict(func_start=s, name=n, file=fl, offset=va - s, status='range', boundary=False)

    @staticmethod
    def _covers(seen, va):
        for a in range(va, va - 16, -1):
            if a in seen and a + seen[a] > va:
                return True
        return False

    def insn_start(self, va):
        """start of the instruction covering va, using recursive-descent flow of its function"""
        f = self.func_at(va)
        if f:
            loc = self.locate(va)
            start = loc.get('func_start') or f[0]
            seen = self.flow(start, f[3])
            for a in range(va, va - 16, -1):
                if a in seen and a + seen[a] > va:
                    return a
        return va

    def global_at(self, va):
        i = bisect.bisect_right(self.gstarts, va) - 1
        if i < 0:
            return None
        g = self.gstarts[i]
        if va - g > 0x2000:
            return None
        return g, self.globals[g][0], self.globals[g][1]


def disasm(code, va, maxn=12, names=None):
    out = []
    for ins in _md_plain.disasm(code, va):
        s = (ins.mnemonic + ' ' + ins.op_str).strip()
        if names:
            s = re.sub(r'0x[0-9a-f]{6,8}', lambda m: names(int(m.group(0), 16)) or m.group(0), s)
        out.append(s)
        if len(out) >= maxn:
            break
    return out


def _parse_bodies(mod):
    import glob
    bodies = {}
    for f in glob.glob(os.path.join(mod.refdir, '**', '*.cpp'), recursive=True):
        cur, buf = None, []
        for l in open(f, encoding='utf-8', errors='replace'):
            m = re.match(r'// 0x([0-9a-f]+)  \(ghidra', l)
            if m:
                if cur:
                    bodies[cur] = ''.join(buf)
                cur, buf = int(m.group(1), 16) + mod.delta, []
            elif cur:
                buf.append(l)
        if cur:
            bodies[cur] = ''.join(buf)
    return bodies


def ref_body(mod, start):
    """decompiled body of the reference function at shipped VA start ('' if none)"""
    if not hasattr(mod, '_bodies'):
        mod._bodies = _parse_bodies(mod) if mod.refdir else {}
    return mod._bodies.get(start, '')
