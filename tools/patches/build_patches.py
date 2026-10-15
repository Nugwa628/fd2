#!/usr/bin/env python3
"""Phase 4 of fd2: reconstruct every change Project Diablo 2 makes to the Diablo II 1.13c game code.

Static analysis only (nothing is executed).  Sources decoded:
  * ProjectDiablo.dll patch tables (installer + conditional table + block table), found from the installer's
    call sites in the binary, read from the file's initialised .data/.rdata;
  * ProjectDiablo.dll init-time writes into game function-pointer/data tables (the init functions DllMain runs
    after the installer), the window-procedure subclass;
  * PD2_EXT.dll's four runtime patches (decoded from its VirtualProtect sequences);
  * the on-disk byte changes of D2Win.dll and Storm.dll (found by scanning section padding, imports and
    cross-checking against the reference decompile, and verified with the PE checksum);
  * BH.dll's patches (4_pd2_source/BH/patches.tsv, produced by the BH phase).
Outputs (all regenerated): 5_game_patches/patches.csv, HOOKS.md, FEATURES.md, README.md (counts section),
4_pd2_source/ProjectDiablo/patches/{Patches.h,Patches.cpp,PatchInstaller.cpp,InitTables.cpp},
4_pd2_source/PD2_EXT/patches/Loader.cpp.

Usage: build_patches.py [--repo DIR] [--work DIR]  (defaults: /home/user/fd2, /home/user/fd2_work)
"""
import argparse, collections, csv, io, json, os, re, struct, sys, textwrap
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_OP_REG

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from gamemods import GameModule, ci_find, disasm, ref_body  # noqa: E402
import loadtime  # noqa: E402

md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True

ap = argparse.ArgumentParser()
ap.add_argument('--repo', default='/home/user/fd2')
ap.add_argument('--work', default='/home/user/fd2_work')
ap.add_argument('--pd2-dll', default=None)
ap.add_argument('--ext-dll', default=None)
ap.add_argument('--game-dir', default=None)
ap.add_argument('--ref', default=None)
ap.add_argument('--bh-patches', default=None)
ap.add_argument('--quiet', action='store_true')
A = ap.parse_args()
REPO, WORK = A.repo, A.work
PD2_DLL = A.pd2_dll or f'{WORK}/bin/ProjectDiablo.dll'
EXT_DLL = A.ext_dll or f'{WORK}/bin/PD2_EXT.dll'
GAME = A.game_dir or f'{WORK}/inputs/ProjectD2/ProjectD2'
REF = A.ref or f'{WORK}/inputs/sigmaRE/sigmaRE/5_game_source'
PD2SRC = f'{REPO}/4_pd2_source/ProjectDiablo'
EXTSRC = f'{REPO}/4_pd2_source/PD2_EXT'
BH_TSV = A.bh_patches or f'{REPO}/4_pd2_source/BH/patches.tsv'
OUT = f'{REPO}/5_game_patches'
TOOLS = os.path.dirname(os.path.abspath(__file__))
DECOMP = f'{WORK}/3_ghidra_fixed/ProjectDiablo_decompiled.c'
DECOMP_X = f'{WORK}/3_ghidra_fixed/ProjectDiablo_decompiled.extra.c'


def log(*a):
    if not A.quiet:
        print(*a, file=sys.stderr)


def h(v):
    return '' if v is None or v == '' else '0x%x' % v


# ======================================================================== PD2 image
class Image:
    def __init__(self, path):
        self.pe = pefile.PE(path, fast_load=True)
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        self.img = self.pe.get_memory_mapped_image()
        self.secs = [(s.Name.rstrip(b'\0').decode(), self.base + s.VirtualAddress,
                      self.base + s.VirtualAddress + s.Misc_VirtualSize, s.Characteristics) for s in self.pe.sections]
        self.pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT']])
        self.iat = {}
        for e in getattr(self.pe, 'DIRECTORY_ENTRY_IMPORT', []):
            for i in e.imports:
                if i.name:
                    self.iat[i.address] = i.name.decode()
        self.iat_by_name = {v: k for k, v in self.iat.items()}

    def read(self, va, n):
        return self.img[va - self.base: va - self.base + n]

    def d(self, va):
        return struct.unpack('<I', self.read(va, 4))[0]

    def sec(self, va):
        for n, lo, hi, ch in self.secs:
            if lo <= va < hi:
                return n
        return None

    def is_text(self, va):
        return self.sec(va) == '.text'

    def insns(self, va, maxbytes=0x2000, stop_ret=True):
        for ins in md.disasm(self.read(va, maxbytes), va):
            yield ins
            if stop_ret and ins.mnemonic == 'ret':
                return

    def wstr(self, va):
        b = self.read(va, 200)
        return b.decode('utf-16le', errors='replace').split('\0')[0]


pd2 = Image(PD2_DLL)
ext = Image(EXT_DLL)

# ------------------------------------------------------------------ PD2 symbols / game pointers
pd2sym = {}
for r in csv.DictReader(open(f'{PD2SRC}/symbols.csv', encoding='utf-8')):
    pd2sym[int(r['address'], 16)] = (r['new_name'], r['file'], r['ghidra_name'])
pd2starts = sorted(pd2sym)

gp_thunk = {}     # thunk address -> row (verified lazy thunks)
gp_wrapper = {}   # game_pointers rows whose address is not the thunk itself
gp_copy = {}      # global (cell or per-file copy) -> row
for l in open(f'{PD2SRC}/game_pointers.tsv', encoding='utf-8'):
    if l.startswith('#') or l.startswith('address\t'):
        continue
    p = l.rstrip('\n').split('\t')
    row = dict(address=int(p[0], 16), kind=p[1], pd2_name=p[2], cell=p[3], cell_name=p[4], copies=p[5], dll=p[6],
               v113c=p[8], v113d=p[9], target=p[10], ref=p[11], inside=p[12], defined_in=p[13])
    if row['kind'] in ('wrapper', 'jmp-stub'):
        # since the generator fix: a PD2 function that ends in the lazy thunk (which has its own row with this cell)
        gp_wrapper[row['address']] = row
        continue
    if row['kind'] == 'lazy-thunk':
        # a real D2Template lazy thunk starts with 'cmp dword ptr [cell], 0'; some rows of game_pointers.tsv name a
        # PD2 wrapper or a jmp stub that ends in the thunk instead (kept apart: those are real handlers)
        b = pd2.read(row['address'], 6)
        if b[:2] == b'\x83\x3d' and 'DAT_%08x' % struct.unpack('<I', b[2:6])[0] == row['cell']:
            gp_thunk[row['address']] = row
        else:
            gp_wrapper[row['address']] = row
    for g in [p[3]] + [x for x in p[5].split(',') if x]:
        if g.startswith('DAT_'):
            gp_copy[int(g[4:], 16)] = row


def thunk_of(va):
    """PD2 lazy thunk reached from va directly or through one jmp stub"""
    if va in gp_thunk:
        return va
    if PD2_BASE <= va < PD2_BASE + len(pd2.img) and pd2.read(va, 1) == b'\xe9':
        t = va + 5 + struct.unpack('<i', pd2.read(va + 1, 4))[0]
        if t in gp_thunk:
            return t
    return None


def thunk_game_target(t):
    row = gp_thunk[t]
    mod = gmod(row['dll'])
    if mod is None:
        return None
    v = row['v113c']
    if v.startswith('+'):
        return mod.base + int(v[1:], 16)
    if v.startswith('ordinal'):
        o = int(v.split()[1])
        pe = pefile.PE(mod.path, fast_load=True)
        pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT']])
        for e in pe.DIRECTORY_ENTRY_EXPORT.symbols:
            if e.ordinal == o:
                return mod.base + e.address
    return None


def pd2_name(va):
    """(name, file) of the PD2 function containing va (with +off when inside)"""
    if va is None:
        return '', ''
    t = thunk_of(va)
    if t is not None and t != va:
        tt = gp_thunk[t]
        return f"{tt['pd2_name']} (jmp stub 0x{va:08x} -> PD2 lazy thunk 0x{t:08x} -> {tt['dll']} {tt['v113c']})", pd2sym.get(t, ('', ''))[1]
    if va in gp_wrapper:
        t = gp_wrapper[va]
        b = pd2.read(va, 1)
        what = 'jmp stub' if b == b'\xe9' else 'PD2 wrapper'
        return (f"{pd2sym.get(va, ('PD2_%08x' % va,))[0]} ({what} that ends in the lazy thunk of {t['dll']} {t['v113c']} = "
                f"{t['ref']})"), pd2sym.get(va, ('', ''))[1]
    if va in gp_thunk:
        t = gp_thunk[va]
        return f"{t['pd2_name']} (PD2 lazy thunk -> {t['dll']} {t['v113c']})", pd2sym.get(va, ('', ''))[1]
    import bisect
    i = bisect.bisect_right(pd2starts, va) - 1
    if i < 0:
        return '', ''
    s = pd2starts[i]
    n, f, g = pd2sym[s]
    if va == s:
        return n, f
    if not pd2.is_text(va):
        return f'DAT_{va:08x}', ''
    return f'{n}+0x{va - s:x}', f


# ------------------------------------------------------------------ game modules
_mods = {}


def gmod(name):
    k = name.lower()
    if k not in _mods:
        path = ci_find(GAME, name)
        _mods[k] = GameModule(os.path.basename(path), path, REF) if path else None
    return _mods[k]


# ======================================================================== locate tables from the installer
def find_installers():
    """functions calling VirtualProtect through the IAT inside D2Template's patch loop; return the
    word-table installer, the block installer and the init function with the table arguments."""
    vp = pd2.iat_by_name.get('VirtualProtect')
    text = [s for s in pd2.secs if s[0] == '.text'][0]
    code = pd2.read(text[1], text[2] - text[1])
    # call [VirtualProtect] = FF 15 <iat>  or  mov reg,[VirtualProtect]
    pat = struct.pack('<I', vp)
    users = set()
    for m in re.finditer(re.escape(pat), code):
        va = text[1] + m.start()
        f = pd2_func_start(va)
        if f:
            users.add(f)
    # find init: calls with 'mov ecx, imm(data)' right before 'call <user>'
    calls = collections.defaultdict(list)
    for m in re.finditer(rb'\xb9(....)\xe8(....)', code, re.S):
        va = text[1] + m.start()
        imm = struct.unpack('<I', m.group(1))[0]
        tgt = va + 10 + struct.unpack('<i', m.group(2))[0]
        if tgt in users and pd2.sec(imm) in ('.data', '.rdata'):
            calls[tgt].append((va, imm))
    return users, calls


def pd2_func_start(va):
    import bisect
    i = bisect.bisect_right(pd2starts, va) - 1
    return pd2starts[i] if i >= 0 else None


users, calls = find_installers()
word_inst = [u for u in calls if len(calls[u]) >= 1]
assert len(word_inst) == 1, (word_inst, users)
WORD_INSTALLER = word_inst[0]
BLOCK_INSTALLER = [u for u in users if u != WORD_INSTALLER and u in pd2sym][0]
INIT = pd2_func_start(calls[WORD_INSTALLER][0][0])
word_tables = [imm for va, imm in sorted(calls[WORD_INSTALLER])]
# block table: the data address the block installer loads
BLOCK_TABLE = None
for ins in pd2.insns(BLOCK_INSTALLER, 0x300, stop_ret=False):
    for op in ins.operands:
        if op.type == X86_OP_IMM and pd2.sec(op.imm) in ('.rdata', '.data'):
            BLOCK_TABLE = op.imm
            break
    if BLOCK_TABLE:
        break
# conditional flag: the byte compared right before the second installer call
COND_FLAG = None
second_call = sorted(calls[WORD_INSTALLER])[1][0] if len(word_tables) > 1 else None
if second_call:
    back = list(pd2.insns(second_call - 0x20, 0x20, stop_ret=False))
    for ins in md.disasm(pd2.read(second_call - 0x40, 0x40), second_call - 0x40):
        if ins.mnemonic in ('cmp', 'mov') and '[0x' in ins.op_str:
            m = re.search(r'\[0x([0-9a-f]+)\]', ins.op_str)
            if m and pd2.sec(int(m.group(1), 16)) == '.data':
                COND_FLAG = int(m.group(1), 16)
log('installer %x block %x init %x tables %s block_table %s flag %s' % (
    WORD_INSTALLER, BLOCK_INSTALLER, INIT, [hex(t) for t in word_tables], h(BLOCK_TABLE), h(COND_FLAG)))

# module table: the installer indexes {wchar_t* name, HMODULE} pairs; find it from the code
MODTAB = None
for ins in pd2.insns(WORD_INSTALLER, 0x200, stop_ret=False):
    if ins.mnemonic == 'cmp' and ins.operands[0].type == X86_OP_MEM and ins.operands[0].mem.scale == 8:
        MODTAB = ins.operands[0].mem.disp - 4
        break
    if ins.operands and any(o.type == X86_OP_MEM and o.mem.scale == 8 for o in ins.operands):
        o = [o for o in ins.operands if o.type == X86_OP_MEM and o.mem.scale == 8][0]
        MODTAB = o.mem.disp - 4
        break
MODULES = []
for i in range(64):
    p = pd2.d(MODTAB + 8 * i)
    if pd2.sec(p) not in ('.rdata', '.data'):
        break
    MODULES.append(pd2.wstr(p))
END_MARK = len(MODULES)
log('module table %x: %d modules, end mark %d' % (MODTAB, len(MODULES), END_MARK))

D2T_ENUM = {'D2Client.dll': 'D2DLL_D2CLIENT', 'D2CMP.dll': 'D2DLL_D2CMP', 'D2Common.dll': 'D2DLL_D2COMMON',
            'D2Game.dll': 'D2DLL_D2GAME', 'D2Gfx.dll': 'D2DLL_D2GFX', 'D2Lang.dll': 'D2DLL_D2LANG',
            'D2MCPClient.dll': 'D2DLL_D2MCPCLIENT', 'D2Net.dll': 'D2DLL_D2NET', 'D2Sound.dll': 'D2DLL_D2SOUND',
            'D2Win.dll': 'D2DLL_D2WIN', 'Fog.dll': 'D2DLL_FOG', 'Ijl11.dll': 'D2DLL_IJL11', 'Storm.dll': 'D2DLL_STORM',
            'D2Gdi.dll': 'D2DLL_D2GDI', 'D2DDraw.dll': 'D2DLL_D2DDRAW', 'D2Direct3D.dll': 'D2DLL_D2DIRECT3D',
            'D2Glide.dll': 'D2DLL_D2GLIDE', 'D2Multi.dll': 'D2DLL_D2MULTI', 'D2Launch.dll': 'D2DLL_D2LAUNCH',
            'SmackW32.dll': 'D2DLL_SMACKW32', 'Binkw32.dll': 'D2DLL_BINKW32', 'Bnclient.dll': 'D2DLL_BNCLIENT',
            'BH.dll': 'D2DLL_BH', 'ddraw.dll': 'D2DLL_DDRAW', 'glide3x.dll': 'D2DLL_GLIDE3X',
            'SGD2FreeDisplayFix.dll': 'D2DLL_SGD2FREEDISPLAYFIX', 'SGD2FreeRes.dll': 'D2DLL_SGD2FREERES'}


LT = {}   # table address -> loadtime.LoadTimeTable


def word_table(start):
    """the table as the installer reads it at run time: the file's .data overlaid with what the static initializers
    (run by the CRT before DllMain) write into it, read with the installer's own loop condition"""
    t = loadtime.LoadTimeTable(PD2_DLL, start, pd2starts, end_mark=END_MARK, pe=PD2LT)
    LT[start] = t
    # entries the file alone holds: the installer would stop at the first entry with dwAddress 0 / bad nDLL
    nfile = 0
    while True:
        e = struct.unpack('<5I', pd2.read(start + 20 * nfile, 20))
        if e[0] >= END_MARK or e[1] == 0:
            break
        nfile += 1
    t.file_count = nfile
    out = []
    for ent in t.entries:
        rt = t.runtime_only(ent)
        lt = [f for f in loadtime.FIELDS if ent[f]['source'] == 'load-time']
        out.append(dict(table_addr=ent['table_addr'], index=ent['index'],
                        **{f: (None if f in rt else ent[f]['value']) for f in loadtime.FIELDS},
                        rt={f: ent[f]['value'].desc for f in rt}, lt=lt,
                        lt_writer=next((ent[f]['writer'] for f in lt), None), lt_fn=next((ent[f]['fn'] for f in lt), None),
                        how={f: ent[f]['how'] for f in lt if ent[f]['how'] not in ('imm', '')},
                        loadtime_entry=ent['index'] >= nfile))
    return out, start + 20 * len(t.entries)


def block_table(start):
    out, a = [], start
    while True:
        w = struct.unpack('<259I', pd2.read(a, 259 * 4))
        if w[0] == END_MARK:
            return out, a
        n = w[0x102]
        hi = [x for x in w[2:2 + n] if x > 0xff]
        out.append(dict(table_addr=a, dll=w[0], offset=w[1], size=n, bytes=bytes(x & 0xff for x in w[2:2 + n]),
                        hi=bool(hi)))
        a += 259 * 4


PD2LT = loadtime.PEImage(PD2_DLL)
T_MAIN, T_MAIN_END = word_table(word_tables[0])
T_COND, T_COND_END = word_table(word_tables[1]) if len(word_tables) > 1 else ([], None)
T_BLOCK, T_BLOCK_END = block_table(BLOCK_TABLE)
log('main %d (%d from the file), conditional %d, block %d' % (len(T_MAIN), LT[word_tables[0]].file_count, len(T_COND),
                                                              len(T_BLOCK)))
# other tables the installers read: writers into the block table and the module table (besides the module loader)
OTHER_WRITERS = {}
for _name, _lo, _hi in (('block table', BLOCK_TABLE, T_BLOCK_END + 4), ('module table', MODTAB, MODTAB + 8 * END_MARK)):
    _w = loadtime.find_writers(PD2LT, [(_lo, _hi)], pd2starts)
    OTHER_WRITERS[_name] = sorted(set(pd2_func_start(x[0]) for x in _w.values() if x[2]))
    OTHER_WRITERS[_name + ' refs'] = sorted(set(pd2_func_start(x[0]) for x in _w.values()))
log('other writers: %s' % {k: [h(x) for x in v] for k, v in OTHER_WRITERS.items()})

PD2_BASE = pd2.base


# ======================================================================== records
RECORDS = []
COLUMNS = ['id', 'source', 'module', 'rva_113c', 'va_113c', 'rva_113d', 'game_function', 'game_file', 'kind', 'size',
           'orig_bytes', 'new_bytes', 'handler_addr', 'handler_name', 'handler_file', 'condition', 'feature', 'notes',
           'group', 'table_addr', 'orig_asm', 'new_asm', 'func_check']

# patched copies of each game module image (to show the new instructions in context)
PATCHED = {}


def patched_img(mod):
    k = mod.name.lower()
    if k not in PATCHED:
        PATCHED[k] = bytearray(mod.img)
    return PATCHED[k]


def apply_bytes(mod, va, b):
    im = patched_img(mod)
    o = va - mod.base
    im[o:o + len(b)] = b


def name_game_target(mod, va):
    """name for an address inside a game module (function+off or global+off)"""
    if mod is None:
        return ''
    if va in mod.funcs:
        return mod.funcs[va][0]
    if mod.is_code(va):
        f = mod.func_at(va)
        if f:
            return '%s+0x%x' % (f[1], va - f[0])
    g = mod.global_at(va)
    if g:
        return g[1] if g[0] == va else '%s+0x%x' % (g[1], va - g[0])
    return 'DAT_%08x' % va


def any_name(va):
    """resolve an absolute address in any loaded game module or PD2"""
    if PD2_BASE <= va < PD2_BASE + len(pd2.img):
        return pd2_name(va)[0]
    for m in list(_mods.values()):
        if m and m.base <= va < m.base + len(m.img):
            return '%s!%s' % (os.path.splitext(m.name)[0], name_game_target(m, va))
    return None


def add(**kw):
    r = {c: '' for c in COLUMNS}
    r.update(kw)
    RECORDS.append(r)
    return r


def fill_location(r, mod, va):
    r['module'] = mod.name if mod else r.get('module', '')
    if mod:
        r['va_113c'] = h(va)
        r['rva_113c'] = h(va - mod.base)
        loc = mod.locate(va)
        if loc['status'] in ('flow', 'range', 'unref'):
            r['game_function'] = loc['name'] + ('' if loc['offset'] == 0 else '+0x%x' % loc['offset'])
            r['game_file'] = loc['file']
            r['_gconf'] = loc.get('conf', '')
            r['func_check'] = loc['status']
            if loc['status'] == 'unref':
                r['func_check'] = 'unref (start not in reference; after %s)' % loc['ref_prev']
        elif loc['status'] == 'data':
            g = mod.global_at(va)
            r['game_function'] = name_game_target(mod, va)
            r['game_file'] = (g[2] if g and g[2] else ('include/globals.h' if g else ''))
            sec = mod.section_of(va)[0]
            r['func_check'] = 'data(%s)' % sec
        else:
            r['func_check'] = loc['status']


# ------------------------------------------------------------------ word tables
def decode_word_tables():
    srcs = [('PD2 table', T_MAIN, ''), ]
    if T_COND:
        srcs.append(('PD2 cond table', T_COND,
                     'skipped when the command line contains -plugy (flag DAT_%08x != 0)' % (COND_FLAG or 0)))
    for src, tab, cond in srcs:
        prev = None
        gid = 0
        for i, e in enumerate(tab):
            modname = MODULES[e['dll']]
            mod = gmod(modname)
            va = (mod.base if mod else 0) + e['offset']
            rsrc = src + ' (load-time)' if e.get('loadtime_entry') else src
            r = add(source=rsrc, table_addr=h(e['table_addr']), condition=cond)
            r['_e'] = e
            r['module'] = modname
            if e.get('lt'):
                hw = '; '.join('%s %s' % (f, e['how'][f]) for f in e['lt'] if f in e['how'])
                r['notes'] = ('entry %d: %s written at load time by static initializer %s (store at %s)%s' % (
                    e['index'], '/'.join(e['lt']) if len(e['lt']) < 5 else 'all fields', h(e['lt_fn']), h(e['lt_writer']),
                    ('; ' + hw) if hw else ''))
            fill_location(r, mod, va)
            if e['rt']:
                # a field whose value exists only at run time: recorded as such, no bytes computed
                r['size'] = '' if 'size' in e['rt'] else (4 if e['size'] == 0 else e['size'])
                r['kind'] = 'run-time value (not decodable statically)'
                r['notes'] += '; run-time only: ' + '; '.join('%s = %s' % kv for kv in sorted(e['rt'].items()))
                r['_va'] = va
                r['_mod'] = mod
                r['_nb'] = b''
                if r['size']:
                    r['orig_bytes'] = mod.read(va, int(r['size'])).hex(' ') if mod else ''
                r['group'] = '%s-%04d' % ('M' if src == 'PD2 table' else 'C', gid + 1)
                gid += 1
                prev = None
                continue
            size = 4 if e['size'] == 0 else e['size']
            r['size'] = size
            orig = mod.read(va, size) if mod else b''
            r['orig_bytes'] = orig.hex(' ')
            if e['relative']:
                rel = (e['data'] - (va + 4)) & 0xffffffff
                nb = struct.pack('<I', rel)
                r['new_bytes'] = nb.hex(' ')
                r['handler_addr'] = h(e['data'])
            elif e['size'] == 0:
                nb = struct.pack('<I', e['data'])
                r['new_bytes'] = nb.hex(' ')
                if PD2_BASE <= e['data'] < PD2_BASE + len(pd2.img):
                    r['handler_addr'] = h(e['data'])
            else:
                nb = bytes([e['data'] & 0xff]) * e['size']
                r['new_bytes'] = nb.hex(' ')
            r['_nb'] = nb
            r['_va'] = va
            r['_mod'] = mod
            if mod:
                apply_bytes(mod, va, nb)
            # grouping: contiguous with previous record of the same table and module
            if prev and prev['_e']['dll'] == e['dll'] and prev['_va'] + int(prev['size']) == va:
                r['group'] = prev['group']
            else:
                gid += 1
                r['group'] = '%s-%04d' % ('M' if src == 'PD2 table' else 'C', gid)
            prev = r


def decode_block_table():
    gid = 0
    prev = None
    for e in T_BLOCK:
        modname = MODULES[e['dll']]
        mod = gmod(modname)
        va = mod.base + e['offset']
        r = add(source='PD2 block table', table_addr=h(e['table_addr']), module=modname)
        r['_e'] = e
        fill_location(r, mod, va)
        r['size'] = e['size']
        r['orig_bytes'] = mod.read(va, e['size']).hex(' ')
        r['new_bytes'] = e['bytes'].hex(' ')
        r['_nb'] = e['bytes']
        r['_va'] = va
        r['_mod'] = mod
        apply_bytes(mod, va, e['bytes'])
        if prev and prev['_e']['dll'] == e['dll'] and 0 <= va - (prev['_va'] + int(prev['size'])) <= 8:
            r['group'] = prev['group']
        else:
            gid += 1
            r['group'] = 'B-%04d' % gid
        prev = r


# ------------------------------------------------------------------ init-time table writes
def decode_init_writes():
    """direct calls made by the init function after the block installer; each callee that loads a game
    pointer copy and stores immediates through it is a run-time table patch"""
    callees = []
    seen_block = False
    for ins in pd2.insns(INIT, 0x800, stop_ret=False):
        if ins.mnemonic == 'call' and ins.operands[0].type == X86_OP_IMM:
            t = ins.operands[0].imm
            if t == BLOCK_INSTALLER:
                seen_block = True
                continue
            if seen_block:
                callees.append((ins.address, t))
        if ins.address > INIT + 0x700:
            break
    n_funcs = 0
    gid = 0
    init_groups = {}
    for site, fn in callees:
        regs = {}
        writes = []
        copy = None
        ok = False
        for ins in pd2.insns(fn, 0x600):
            ops = ins.operands
            if ins.mnemonic == 'mov' and len(ops) == 2 and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_MEM \
                    and ops[1].mem.base == 0 and ops[1].mem.index == 0 and ops[1].mem.disp in gp_copy:
                regs[ins.reg_name(ops[0].reg)] = ops[1].mem.disp
            elif ins.mnemonic == 'mov' and len(ops) == 2 and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_IMM:
                regs[ins.reg_name(ops[0].reg)] = ('imm', ops[1].imm)
            elif ins.mnemonic == 'mov' and len(ops) == 2 and ops[0].type == X86_OP_MEM and ops[1].type == X86_OP_IMM \
                    and ops[0].mem.base and ins.reg_name(ops[0].mem.base) in regs \
                    and not isinstance(regs[ins.reg_name(ops[0].mem.base)], tuple):
                writes.append(('dword', regs[ins.reg_name(ops[0].mem.base)], ops[0].mem.disp, ops[1].imm, ops[0].size))
            elif ins.mnemonic.startswith('rep movs'):
                d, s, c = regs.get('edi'), regs.get('esi'), regs.get('ecx')
                if d is not None and isinstance(s, tuple) and isinstance(c, tuple):
                    writes.append(('copy', d, 0, s[1], c[1] * 4))
                    regs['_copy'] = (d, c[1] * 4, s[1])
            elif ins.mnemonic == 'movsb' and '_copy' in regs:
                d, n, s = regs['_copy']
                writes[-1] = ('copy', d, 0, s, n + 1)
        if not writes:
            continue
        n_funcs += 1
        gid += 1
        fname, ffile = pd2_name(fn)
        for kind, copy, off, val, sz in writes:
            row = gp_copy[copy]
            mod = gmod(row['dll'])
            base_off = int(row['v113c'][1:], 16) if row['v113c'].startswith('+') else None
            if mod is None or base_off is None:
                continue
            va = mod.base + base_off + off
            r = add(source='PD2 init writes', module=mod.name)
            fill_location(r, mod, va)
            gkey = (fn, copy)
            if gkey not in init_groups:
                init_groups[gkey] = 'I-%04d' % (len(init_groups) + 1)
            r['group'] = init_groups[gkey]
            r['table_addr'] = h(fn)
            r['_va'] = va
            r['_mod'] = mod
            d113 = row['v113d']
            r['rva_113d'] = ('0x%x' % (int(d113[1:], 16) + off)) if d113.startswith('+') else ''
            r['notes'] = 'written by %s (%s, called from init %s); base pointer %s = %s %s (%s)' % (
                fname, h(fn), h(INIT), 'DAT_%08x' % copy, row['dll'], row['v113c'], row['ref'])
            if kind == 'dword':
                r['size'] = sz
                r['orig_bytes'] = mod.read(va, sz).hex(' ')
                nb = struct.pack('<I', val & 0xffffffff)[:sz]
                r['new_bytes'] = nb.hex(' ')
                if PD2_BASE <= val < PD2_BASE + len(pd2.img):
                    r['handler_addr'] = h(val)
                r['_nb'] = nb
            else:
                data = pd2.read(val, sz)
                r['size'] = sz
                r['orig_bytes'] = mod.read(va, sz).hex(' ')
                r['new_bytes'] = data.hex(' ')
                r['_nb'] = data
                r['notes'] += '; block copy of %d bytes from PD2 %s' % (sz, h(val))
                r['handler_addr'] = h(val)
            apply_bytes(mod, va, r['_nb'])
    log('init writes: %d functions' % n_funcs)


# ------------------------------------------------------------------ window subclass / other API patch sites
def decode_api_sites():
    """SetWindowLongW(GWL_WNDPROC) callers: window procedure subclass of the game window"""
    swl = pd2.iat_by_name.get('SetWindowLongW')
    if not swl:
        return
    text = [s for s in pd2.secs if s[0] == '.text'][0]
    code = pd2.read(text[1], text[2] - text[1])
    done = set()
    for m in re.finditer(re.escape(b'\xff\x15' + struct.pack('<I', swl)), code):
        va = text[1] + m.start()
        fn = pd2_func_start(va)
        if fn in done:
            continue
        done.add(fn)
        # the new window procedure is SetWindowLongW's third argument (dwNewLong): follow the pushes from the
        # function start (stdcall imports pop their arguments; direct calls here take none from this frame)
        argc = {'GetWindowLongW': 2, 'GetWindowLongA': 2, 'SetWindowLongW': 3, 'SetWindowLongA': 3}
        stack, proc, index = [], None, None
        for ins in md.disasm(pd2.read(fn, va + 6 - fn), fn):
            ops = ins.operands
            if ins.mnemonic == 'push':
                stack.append(ops[0].imm & 0xffffffff if ops[0].type == X86_OP_IMM else None)
            elif ins.mnemonic == 'call' and ops[0].type == X86_OP_MEM and ops[0].mem.disp in pd2.iat:
                n = argc.get(pd2.iat[ops[0].mem.disp], 0)
                if ins.address == va and len(stack) >= 3:
                    index, proc = stack[-2], stack[-3]
                del stack[len(stack) - n:]
        assert index == 0xfffffffc and proc and pd2.is_text(proc), (h(va), index, proc)   # GWL_WNDPROC
        fname = pd2_name(fn)[0]
        hn, hf = pd2_name(proc)
        add(source='PD2 API', module='D2gfx.dll (game window)', kind='window subclass (SetWindowLongW GWL_WNDPROC)',
            size='', game_function='game window procedure (HWND from D2gfx_10048)', game_file='',
            handler_addr=h(proc), handler_name=hn, handler_file=hf, group='W-%04d' % len(done), table_addr=h(fn),
            notes='%s (%s) replaces the main window procedure; the old one is kept and called through '
                  'CallWindowProcA' % (fname, h(fn)), func_check='n/a')


# ------------------------------------------------------------------ PD2_EXT
def decode_pd2_ext():
    """walk PD2_EXT's code (0x10001000..first CRT function) for VirtualProtect(addr,len,0x40) + writes"""
    vp = ext.iat_by_name.get('VirtualProtect')
    gmh = ext.iat_by_name.get('GetModuleHandleA')
    code_start = ext.base + 0x1000
    insns = list(md.disasm(ext.read(code_start, 0x250), code_start))
    regs = {}
    vp_reg = None
    pushes = []
    modname = 'Game.exe'
    guard = ''
    pending = None
    gid = 0
    stringat = lambda a: ext.read(a, 64).split(b'\0')[0].decode(errors='replace')
    for k, ins in enumerate(insns):
        ops = ins.operands
        if ins.mnemonic == 'push':
            pushes.append(ins)
        if ins.mnemonic == 'mov' and len(ops) == 2 and ops[1].type == X86_OP_MEM and ops[1].mem.disp == vp:
            vp_reg = ins.reg_name(ops[0].reg)
        if ins.mnemonic == 'call' and ops[0].type == X86_OP_MEM and ops[0].mem.disp == gmh:
            modname = stringat(pushes[-1].operands[0].imm) if pushes and pushes[-1].operands[0].type == X86_OP_IMM else '?'
            regs['eax'] = ('module', modname)
        if ins.mnemonic == 'cmp' and ops[0].type == X86_OP_MEM and ops[1].type == X86_OP_IMM:
            guard += '%s+0x%x == %08x; ' % (modname, ops[0].mem.disp, ops[1].imm)
        if ins.mnemonic == 'lea' and ops[1].type == X86_OP_MEM and regs.get(ins.reg_name(ops[1].mem.base), (None,))[0] == 'module':
            regs[ins.reg_name(ops[0].reg)] = ('modoff', modname, ops[1].mem.disp)
        is_vp = ins.mnemonic == 'call' and ((ops[0].type == X86_OP_REG and ins.reg_name(ops[0].reg) == vp_reg) or
                                           (ops[0].type == X86_OP_MEM and ops[0].mem.disp == vp))
        if is_vp and len(pushes) >= 4:
            addr_p, len_p, prot_p = pushes[-1], pushes[-2], pushes[-3]
            if prot_p.operands[0].type == X86_OP_IMM and prot_p.operands[0].imm == 0x40:
                ln = len_p.operands[0].imm
                if addr_p.operands[0].type == X86_OP_IMM:
                    tgt = ('abs', 'Game.exe', addr_p.operands[0].imm)
                else:
                    tgt = regs.get(addr_p.reg_name(addr_p.operands[0].reg))
                # look ahead for what is written until the restoring VirtualProtect
                handler = None
                nops = False
                for j in insns[k + 1:k + 20]:
                    for op in j.operands:
                        if op.type == X86_OP_IMM and ext.is_text(op.imm) and op.imm != code_start - 1:
                            handler = op.imm
                        if op.type == X86_OP_IMM and op.imm == 0x90909090:
                            nops = True
                    if j.mnemonic == 'call':
                        break
                gid += 1
                mod = gmod(tgt[1])
                va = tgt[2] if tgt[0] == 'abs' else mod.base + tgt[2]
                r = add(source='PD2_EXT', module=mod.name, group='E-%04d' % gid, table_addr=h(ins.address))
                fill_location(r, mod, va)
                r['size'] = ln
                r['orig_bytes'] = mod.read(va, ln).hex(' ')
                if nops:
                    nb = b'\x90' * ln
                else:
                    nb = b'\xe8' + struct.pack('<I', (handler - (va + 5)) & 0xffffffff)
                    r['handler_addr'] = h(handler)
                r['new_bytes'] = nb.hex(' ')
                r['_nb'] = nb
                r['_va'] = va
                r['_mod'] = mod
                if tgt[0] == 'modoff' and guard:
                    r['condition'] = 'only if ' + guard.strip('; ')
                apply_bytes(mod, va, nb)
            pushes = []


# ------------------------------------------------------------------ on-disk changes
def decode_on_disk():
    """D2Win.dll / Storm.dll: bytes past section VirtualSize, redirected string operands, branches into the
    cave, renamed import DLLs.  Each module is verified by undoing the changes and recomputing the PE checksum."""
    verdicts = {}
    for name in ('D2Win.dll', 'Storm.dll'):
        mod = gmod(name)
        raw = bytearray(open(mod.path, 'rb').read())
        pe = pefile.PE(mod.path)
        restored = bytearray(raw)
        found = []
        caves = []
        for s in pe.sections:
            if s.Misc_VirtualSize < s.SizeOfRawData:
                lo, hi = s.PointerToRawData + s.Misc_VirtualSize, s.PointerToRawData + s.SizeOfRawData
                nz = [i for i in range(lo, hi) if raw[i]]
                if nz:
                    a, b = nz[0], nz[-1] + 1
                    caves.append((s.Name.rstrip(b'\0').decode(), s, a, b))
        # 1) caves
        cave_ranges = []
        for sname, s, a, b in caves:
            va = mod.base + s.VirtualAddress + (a - s.PointerToRawData)
            vend = va + (b - a)
            cave_ranges.append((va, vend, sname))
            for i in range(a, b):
                restored[i] = 0
        # 2) references into the caves from inside the original image
        img = mod.img
        refs = []
        for i in range(0, len(img) - 3):
            v = struct.unpack_from('<I', img, i)[0]
            va = mod.base + i
            for lo, hi, sname in cave_ranges:
                if lo <= v < hi and not any(l2 <= va < h2 for l2, h2, _ in cave_ranges):
                    refs.append((va, v, sname))
        for va, v, sname in refs:
            # absolute operand (string pointer) -> find the original string by stripping a '..\\' prefix
            s = mod.read(v, 80).split(b'\0')[0]
            base_s = re.sub(rb'^(\.\.\\+)', b'', s)
            orig = None
            for sec in pe.sections:
                if sec.Name.startswith(b'.rdata'):
                    lo = sec.VirtualAddress
                    blob = bytes(img[lo:lo + sec.Misc_VirtualSize])
                    for m in re.finditer(re.escape(base_s) + b'\0', blob):
                        st = m.start()
                        if st == 0 or blob[st - 1] == 0:
                            orig = mod.base + lo + st
                            break
            ins_va = mod.insn_start(va)
            r = add(source='on-disk', module=name, group='D-%s' % name[:4], kind='string operand redirect (on-disk)')
            fill_location(r, mod, va)
            r['size'] = 4
            r['orig_bytes'] = struct.pack('<I', orig).hex(' ') if orig else '?'
            r['new_bytes'] = struct.pack('<I', v).hex(' ')
            r['handler_addr'] = h(v)
            r['handler_name'] = '"%s" (%s padding)' % (s.decode(errors='replace'), sname)
            r['notes'] = 'was "%s" @ %s; operand of `%s`' % (base_s.decode(), h(orig),
                                                               '; '.join(disasm(mod.read(ins_va, 15), ins_va, 1)))
            r['orig_asm'] = 'push "%s"' % base_s.decode()
            r['new_asm'] = 'push "%s"' % s.decode(errors='replace')
            if orig:
                o = va - mod.base
                struct.pack_into('<I', restored, o, orig)  # raw==rva for these sections
        # 3) relative branches into the caves
        text = [s for s in pe.sections if s.Name.startswith(b'.text')][0]
        tlo, thi = mod.base + text.VirtualAddress, mod.base + text.VirtualAddress + text.Misc_VirtualSize
        for lo, hi, sname in cave_ranges:
            if sname != '.text':
                continue
            for i in range(text.VirtualAddress, text.VirtualAddress + text.Misc_VirtualSize - 5):
                if img[i] in (0xe8, 0xe9):
                    t = mod.base + i + 5 + struct.unpack_from('<i', img, i + 1)[0]
                    if t == lo:
                        va = mod.base + i
                        loc = mod.locate(va)
                        r = add(source='on-disk', module=name, group='D-%s' % name[:4],
                                kind='jmp detour (E9, on-disk)' if img[i] == 0xe9 else 'call redirect (E8, on-disk)')
                        fill_location(r, mod, va)
                        cave = bytes(img[lo - mod.base:hi - mod.base])
                        r['size'] = 5
                        # the reference decompile ends the function with 'return 1' here
                        r['orig_bytes'] = 'b8 01 00 00 00'
                        r['new_bytes'] = bytes(img[i:i + 5]).hex(' ')
                        r['handler_addr'] = h(lo)
                        r['handler_name'] = 'code cave %s..%s (%s padding)' % (h(lo), h(hi), sname)
                        r['orig_asm'] = 'mov eax, 1'
                        r['new_asm'] = 'jmp %s' % h(lo)
                        r['notes'] = ('original bytes inferred: the reference decompile has `return 1` here and the '
                                      'cave ends with mov eax,1; ret; checksum-verified')
                        restored[i:i + 5] = bytes.fromhex('b801000000')
        for lo, hi, sname in cave_ranges:
            data = mod.read(lo, hi - lo)
            r = add(source='on-disk', module=name, group='D-%s' % name[:4],
                    kind='code cave (on-disk)' if sname == '.text' else 'added strings (on-disk)')
            r['va_113c'] = h(lo)
            r['rva_113c'] = h(lo - mod.base)
            r['size'] = hi - lo
            r['orig_bytes'] = '00 x %d (section padding past VirtualSize)' % (hi - lo)
            r['new_bytes'] = data.hex(' ')
            r['game_function'] = '(%s padding past VirtualSize)' % sname
            r['func_check'] = 'padding'
            if sname == '.text':
                r['new_asm'] = ' ; '.join(disasm(data, lo, 8, names=lambda a: _cave_name(mod, a)))
            else:
                strs = [x.decode(errors='replace') for x in data.split(b'\0') if x]
                r['new_asm'] = ' | '.join(strs)
            r['notes'] = 'bytes inside the raw section padding (mapped with the section)'
        # 4) import DLL renamed to a PD2 DLL
        for e in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []):
            dn = e.dll.decode()
            if dn.lower().startswith(('pd2', 'projectdiablo')):
                off = pe.get_offset_from_rva(e.struct.Name)
                names = [i.name.decode() for i in e.imports if i.name]
                orig = 'VERSION.dll' if all(n in ('GetFileVersionInfoA', 'GetFileVersionInfoSizeA', 'VerQueryValueA',
                                                  'GetFileVersionInfoW', 'GetFileVersionInfoSizeW', 'VerQueryValueW')
                                            for n in names) else '?'
                r = add(source='on-disk', module=name, group='D-%s' % name[:4], kind='import DLL rename (on-disk)')
                r['va_113c'] = h(mod.base + e.struct.Name)
                r['rva_113c'] = h(e.struct.Name)
                r['size'] = len(dn)
                r['orig_bytes'] = orig.encode().hex(' ')
                r['new_bytes'] = dn.encode().hex(' ')
                r['game_function'] = '(import directory, name of descriptor for %s)' % ', '.join(names)
                r['func_check'] = 'data(.rdata)'
                r['handler_name'] = dn
                r['notes'] = ('"%s" -> "%s" (file offset 0x%x); Windows loads %s together with %s; %s forwards the '
                              'three functions to the real version.dll' % (orig, dn, off, dn, name, dn))
                restored[off:off + len(dn)] = orig.encode()
                variants = [orig, orig.lower(), orig.upper(), orig.capitalize()]
                for v in variants:
                    tmp = bytearray(restored)
                    tmp[off:off + len(dn)] = v.encode()
                    if pefile.PE(data=bytes(tmp), fast_load=True).generate_checksum() == pe.OPTIONAL_HEADER.CheckSum:
                        restored = tmp
                        r['orig_bytes'] = v.encode().hex(' ')
                        break
                r['_variants'] = variants
        # checksum verification
        rpe = pefile.PE(data=bytes(restored), fast_load=True)
        stored = rpe.OPTIONAL_HEADER.CheckSum
        comp = rpe.generate_checksum()
        cur = pe.generate_checksum()
        verdicts[name] = dict(stored=stored, computed_shipped=cur, computed_restored=comp, match=(stored == comp),
                              variants=[v for x in RECORDS if x['module'] == name for v in x.get('_variants', [])])
        # reference consistency check of every function
        verdicts[name]['consistency'] = consistency_check(mod)
    return verdicts


def _cave_name(mod, a):
    if mod.base <= a < mod.base + len(mod.img):
        s = mod.read(a, 40).split(b'\0')[0]
        if len(s) > 3 and all(32 <= c < 127 for c in s):
            return '"%s"' % s.decode()
        for e_va, nm in iat_names(mod).items():
            if e_va == a:
                return '[%s]' % nm
    return None


_iatcache = {}
_impcache = {}


def import_target(mod, iat_va):
    """address (in the shipped game module it imports from) of the function behind an IAT slot"""
    if mod.name not in _impcache:
        pe = pefile.PE(mod.path)
        d = {}
        for e in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []):
            for i in e.imports:
                d[i.address] = (e.dll.decode(), i.ordinal if i.name is None else i.name.decode())
        _impcache[mod.name] = d
    dll, what = _impcache[mod.name].get(iat_va, (None, None))
    m2 = gmod(dll) if dll else None
    if not m2:
        return None
    pe = pefile.PE(m2.path, fast_load=True)
    pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT']])
    for e in pe.DIRECTORY_ENTRY_EXPORT.symbols:
        if e.ordinal == what or (e.name and e.name.decode() == what):
            return m2.base + e.address
    return None


def iat_names(mod):
    if mod.name not in _iatcache:
        pe = pefile.PE(mod.path)
        d = {}
        for e in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []):
            for i in e.imports:
                d[i.address] = (i.name or b'#%d' % i.ordinal).decode()
        _iatcache[mod.name] = d
    return _iatcache[mod.name]


def consistency_check(mod):
    """compare every reference function's calls/strings with the shipped bytes; returns flagged functions
    (a call to a function the reference does not call AND a reference call missing, a branch out of .text, or
    a string operand whose text differs from the decompile's literal)"""
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
    name2a = {}
    for a, (n, f) in mod.funcs.items():
        name2a.setdefault(n, a)
    for a, n in mod.exports.items():
        name2a.setdefault(n, a)
    text = [s for s in mod.sections if s[0] == '.text'][0]
    tlo = text[1]
    pe = pefile.PE(mod.path, fast_load=True)
    ts = [s for s in pe.sections if s.Name.startswith(b'.text')][0]
    thi = mod.base + ts.VirtualAddress + ts.Misc_VirtualSize
    flagged = []
    starts = mod.starts
    for k, s in enumerate(starts):
        body = bodies.get(s)
        if body is None:
            continue
        e = starts[k + 1] if k + 1 < len(starts) else s + 0x200
        seen = mod.flow(s, e)
        calls, strs, bad = set(), set(), []
        for a in sorted(seen):
            ins = next(md.disasm(mod.read(a, 16), a), None)
            if ins is None:
                continue
            if ins.mnemonic == 'call' or ins.mnemonic.startswith('j'):
                op = ins.operands[0]
                if op.type == X86_OP_IMM:
                    if ins.mnemonic == 'call':
                        calls.add(op.imm)
                    if not (tlo <= op.imm < thi):
                        bad.append('branch %s -> %s outside .text' % (h(a), h(op.imm)))
            for op in ins.operands:
                if op.type == X86_OP_IMM and mod.base <= op.imm < mod.base + len(mod.img):
                    st = mod.read(op.imm, 120).split(b'\0')[0]
                    if len(st) >= 4 and all(32 <= c < 127 for c in st):
                        strs.add(st.decode())
        dnames = set(re.findall(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\(', body))
        dcalls = set(name2a[n] for n in dnames if n in name2a)
        bcalls = set(t for t in calls if t in mod.funcs and not mod.funcs[t][0].startswith(('Ordinal_', '_'))
                     and mod.read(t, 2) != b'\xff\x25')
        dstrs = set()
        for x in re.findall(r'"((?:[^"\\]|\\.)*)"', body):
            try:
                dstrs.add(x.encode().decode('unicode_escape'))
            except Exception:
                dstrs.add(x)
        smiss = sorted(x for x in strs if x not in dstrs and any(len(d) >= 4 and d in x for d in dstrs))
        if bad or smiss:
            flagged.append(dict(func=mod.funcs[s][0], va=s, bad=bad, strings=smiss))
    return flagged


# ------------------------------------------------------------------ BH
def decode_bh():
    if not os.path.exists(BH_TSV):
        log('BH patches.tsv absent')
        return False
    rows = list(csv.DictReader(open(BH_TSV, encoding='utf-8'), delimiter='\t'))
    for k, b in enumerate(rows):
        mod = gmod(b['module'])
        va = int(b['va_113c'], 16) if b.get('va_113c') else None
        r = add(source='BH', module=b['module'], group='H-%04d' % (k + 1), table_addr=b.get('bh_patch_initializer', ''))
        if mod and va:
            fill_location(r, mod, va)
        else:
            r['rva_113c'] = b.get('rva_113c', '')
        r['rva_113d'] = b.get('rva_113d', '')
        n = int(b['length']) if b.get('length', '').isdigit() else 0
        r['size'] = n
        if mod and va and n:
            r['orig_bytes'] = mod.read(va, n).hex(' ')
        kind = b['kind']
        hv = int(b['bh_handler_va'], 16) if b.get('bh_handler_va', '').startswith('0x') else None
        r['handler_addr'] = h(hv)
        r['handler_name'] = b.get('bh_handler', '')
        r['handler_file'] = 'BH: ' + b.get('upstream_def', '')
        if kind.lower() == 'nop' and mod and va and n:
            r['new_bytes'] = ('90 ' * n).strip()
            r['_nb'] = b'\x90' * n
            apply_bytes(mod, va, r['_nb'])
        if kind.lower() in ('call', 'jump') and hv and mod and va:
            op = 0xe8 if kind.lower() == 'call' else 0xe9
            nb = bytes([op]) + struct.pack('<I', (hv - (va + 5)) & 0xffffffff) + b'\x90' * max(0, n - 5)
            r['new_bytes'] = nb.hex(' ') + ' (BH.dll at its preferred base)'
            r['_nb'] = nb
            apply_bytes(mod, va, nb)
        r['_bhkind'] = kind
        r['notes'] = 'BH %s patch (%s); status vs upstream BH: %s' % (kind, b.get('bh_var', ''),
                                                                      b.get('status_vs_upstream', ''))
        r['_va'] = va
        r['_mod'] = mod
    return True


# ======================================================================== classification
def classify():
    by_group = collections.defaultdict(list)
    for r in RECORDS:
        by_group[r['group']].append(r)
    for r in RECORDS:
        if r['kind']:
            continue
        src = r['source']
        mod = r.get('_mod')
        va = r.get('_va')
        e = r.get('_e')
        if src == 'BH':
            k = r['_bhkind'].lower()
            r['kind'] = {'call': 'call redirect (E8)', 'jump': 'jmp detour (E9)', 'nop': 'NOP fill',
                         'data': 'data/constant change'}.get(k, k)
            continue
        if src == 'PD2_EXT':
            r['kind'] = 'NOP fill' if set(r['new_bytes'].split()) == {'90'} else 'call redirect (E8)'
            continue
        if src == 'PD2 init writes':
            hv = int(r['handler_addr'], 16) if r['handler_addr'] else None
            if 'block copy' in r['notes']:
                r['kind'] = 'data block replace'
            elif hv and pd2.is_text(hv):
                r['kind'] = 'function-pointer swap (table)'
            else:
                r['kind'] = 'data/constant change'
            continue
        if src in ('PD2 table', 'PD2 table (load-time)', 'PD2 cond table'):
            if e['relative']:
                op_rec = [x for x in by_group[r['group']] if x.get('_va') == va - 1 and x is not r]
                opc = op_rec[0]['_nb'][0] if op_rec else mod.read(va - 1, 1)[0]
                origop = mod.read(va - 1, 1)[0]
                pre = mod.read(va - 2, 1)[0]
                if pre == 0x0f and 0x80 <= origop <= 0x8f and not op_rec:
                    r['kind'] = 'jcc target redirect (0F 8x)'
                elif opc == 0xe8:
                    r['kind'] = 'call redirect (E8)' if origop == 0xe8 else 'call insertion (E8)'
                elif opc == 0xe9:
                    r['kind'] = 'jmp detour (E9)' if origop != 0xe9 else 'jmp target redirect (E9)'
                else:
                    r['kind'] = 'rel32 operand (%02x)' % opc
                r['_opc'] = opc
                hn, hf = pd2_name(e['data'])
                r['handler_name'], r['handler_file'] = hn, hf
            elif e['size'] == 0:
                val = e['data']
                in_pd2 = PD2_BASE <= val < PD2_BASE + len(pd2.img)
                if mod.is_code(va):
                    if in_pd2 and pd2.is_text(val):
                        r['kind'] = 'code-pointer operand (imm32 -> PD2 function)'
                    elif in_pd2:
                        r['kind'] = 'data-pointer operand (imm32 -> PD2 data)'
                    else:
                        r['kind'] = 'constant change (imm32/disp32)'
                else:
                    if in_pd2 and pd2.is_text(val):
                        r['kind'] = 'function-pointer swap (table)'
                    elif in_pd2:
                        r['kind'] = 'data-pointer swap (-> PD2 data)'
                    else:
                        r['kind'] = 'data/constant change'
                if in_pd2:
                    hn, hf = pd2_name(val)
                    r['handler_name'], r['handler_file'] = hn, hf
            else:
                b = e['data'] & 0xff
                nxt = [x for x in by_group[r['group']] if x.get('_va') == va + 1 and x.get('_e', {}).get('relative')]
                if not mod.is_code(va):
                    r['kind'] = 'data byte change' if e['size'] == 1 else 'data byte fill (0x%02x x %d)' % (b, e['size'])
                elif e['size'] == 1 and nxt and b in (0xe8, 0xe9):
                    r['kind'] = 'opcode byte (%s) for hook' % ('E8 call' if b == 0xe8 else 'E9 jmp')
                elif b == 0x90:
                    r['kind'] = 'NOP fill'
                elif e['size'] == 1:
                    r['kind'] = 'opcode byte change' if mod.insn_start(va) == va else 'operand byte change'
                else:
                    r['kind'] = 'byte fill (0x%02x x %d)' % (b, e['size'])
            continue
        if src == 'PD2 block table':
            nb = r['_nb']
            if set(nb) == {0x90}:
                r['kind'] = 'NOP fill (block)'
            elif len(nb) == 1 and nb[0] in (0xeb,) and mod.read(va, 1)[0] in range(0x70, 0x80):
                r['kind'] = 'conditional jump -> jmp short (block)'
            elif len(nb) == 1:
                ob = mod.read(va, 1)[0]
                ins_start = mod.insn_start(va)
                r['kind'] = 'opcode change (block)' if ins_start == va else 'operand/immediate byte change (block)'
            else:
                r['kind'] = 'block replace'
            continue


def detect_noop_thunks():
    """handlers that are PD2 lazy thunks to the very function the original code already called/pointed at"""
    n = 0
    for r in RECORDS:
        if not r['handler_addr'] or r['source'] not in ('PD2 table', 'PD2 table (load-time)', 'PD2 cond table',
                                                        'PD2 init writes'):
            continue
        t = thunk_of(int(r['handler_addr'], 16))
        if t is None:
            continue
        gt = thunk_game_target(t)
        mod = r['_mod']
        ob = bytes.fromhex(r['orig_bytes'].replace(' ', ''))
        if len(ob) != 4:
            continue
        if r.get('_e', {}).get('relative'):
            orig_t = (r['_va'] + 4 + struct.unpack('<i', ob)[0]) & 0xffffffff
            # through an import thunk (jmp [IAT]) of the game module?
            if mod.read(orig_t, 2) == b'\xff\x25':
                imp = struct.unpack('<I', mod.read(orig_t + 2, 4))[0]
                orig_t = import_target(mod, imp) or orig_t
        else:
            orig_t = struct.unpack('<I', ob)[0]
        if gt is not None and gt == orig_t:
            r['notes'] = ('no-op: the handler is PD2\'s lazy thunk to the same game function the original code '
                          'already used (%s)' % (any_name(gt) or h(gt))) + ('; ' + r['notes'] if r['notes'] else '')
            n += 1
    log('no-op thunk redirects: %d' % n)


EXTSYM = {}
if os.path.exists(f'{EXTSRC}/symbols.csv'):
    for _r in csv.DictReader(open(f'{EXTSRC}/symbols.csv', encoding='utf-8')):
        EXTSYM[int(_r['address'], 16)] = (_r['new_name'], _r['file'])


def fix_ext_names():
    """PD2_EXT handlers are named from 4_pd2_source/PD2_EXT/symbols.csv (not ProjectDiablo's); BH handlers keep
    BH's names (BH.dll and ProjectDiablo.dll share the preferred base 0x10000000)"""
    for r in RECORDS:
        if r['source'] == 'BH' and r['handler_name'] and r.get('_nb'):
            n = int(r['size'] or 0)
            op = 'call' if r['_nb'][:1] == b'\xe8' else 'jmp'
            r['new_asm'] = ' ; '.join(['%s %s' % (op, r['handler_name'])] + ['nop'] * max(0, n - 5))
        if r['source'] != 'PD2_EXT':
            continue
        if r['handler_addr']:
            a = int(r['handler_addr'], 16)
            n, f = EXTSYM.get(a, ('FUN_%08x' % a, 'dllmain.cpp'))
            r['handler_name'], r['handler_file'] = n, 'PD2_EXT: ' + f
            r['new_asm'] = 'call %s' % n
        else:
            r['new_asm'] = 'nop x %d' % int(r['size'])


def asm_context():
    """original vs patched disassembly per group (from the group's first instruction boundary)"""
    by_group = collections.defaultdict(list)
    for r in RECORDS:
        by_group[r['group']].append(r)
    for g, rs in by_group.items():
        rs2 = [r for r in rs if r.get('_va') and r.get('_mod') and not r['orig_asm']]
        if not rs2:
            continue
        mod = rs2[0]['_mod']
        if not mod.is_code(rs2[0]['_va']):
            for r in rs2:
                ov = mod.dword(r['_va']) if int(r['size'] or 0) == 4 else None
                if ov is not None:
                    r['orig_asm'] = 'dd %s' % (any_name(ov) or h(ov))
                    nv = struct.unpack('<I', r['_nb'][:4])[0] if len(r.get('_nb', b'')) >= 4 else None
                    if nv is not None:
                        r['new_asm'] = 'dd %s' % (any_name(nv) or h(nv))
                elif r['orig_bytes'] and r['new_bytes']:
                    r['orig_asm'] = 'db ' + r['orig_bytes'].replace(' ', ', ')
                    r['new_asm'] = 'db ' + r['new_bytes'].replace(' ', ', ')
            continue
        lo = min(r['_va'] for r in rs2)
        hi = max(r['_va'] + int(r['size'] or 0) for r in rs2)
        if rs2[0].get('_e', {}).get('relative') and mod.read(lo - 1, 1)[0] in (0xe8, 0xe9) or \
                any(r.get('_opc') for r in rs2):
            lo = min(lo, min(r['_va'] - 1 for r in rs2 if r.get('_e', {}).get('relative')) if any(
                r.get('_e', {}).get('relative') for r in rs2) else lo)
        st = mod.insn_start(lo)
        orig = mod.read(st, hi - st + 15)
        pimg = patched_img(mod)
        new = bytes(pimg[st - mod.base: hi - mod.base + 15])

        def nm(a):
            n = any_name(a)
            return n

        oa, na = [], []
        for ins in md.disasm(orig, st):
            oa.append(re.sub(r'0x[0-9a-f]{6,8}', lambda m: nm(int(m.group(0), 16)) or m.group(0),
                             (ins.mnemonic + ' ' + ins.op_str).strip()))
            if ins.address + ins.size >= hi:
                break
        for ins in md.disasm(new, st):
            na.append(re.sub(r'0x[0-9a-f]{6,8}', lambda m: nm(int(m.group(0), 16)) or m.group(0),
                             (ins.mnemonic + ' ' + ins.op_str).strip()))
            if ins.address + ins.size >= hi:
                break
        for r in rs2:
            r['orig_asm'] = ' ; '.join(oa[:8])
            r['new_asm'] = ' ; '.join(na[:8])



# ======================================================================== evidence for feature assignment
class Pd2Tree:
    """functions of the reconstructed ProjectDiablo tree: address -> (name, file, body)"""

    def __init__(self, root):
        self.funcs = {}
        self.byname = {}
        for dp, dn, fn in os.walk(root):
            if '/patches' in dp or '/include' in dp:
                continue
            for f in fn:
                if not f.endswith('.cpp'):
                    continue
                path = os.path.join(dp, f)
                rel = os.path.relpath(path, root)
                cur, buf = None, []
                for l in open(path, encoding='utf-8', errors='replace'):
                    m = re.match(r'// 0x([0-9a-f]{8})  \(ghidra', l)
                    if m:
                        if cur:
                            self._add(cur, rel, buf)
                        cur, buf = int(m.group(1), 16), []
                    elif cur:
                        buf.append(l)
                if cur:
                    self._add(cur, rel, buf)
        gpn = {}
        for t in list(gp_thunk.values()):
            gpn[t['pd2_name']] = t
        for row in gp_copy.values():
            gpn[row['cell_name']] = row
            gpn[row['pd2_name']] = row
        self.gp_by_name = gpn

    def _add(self, a, rel, buf):
        body = ''.join(buf)
        m = re.search(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\(', body)
        # function name = first identifier followed by '(' on the signature line
        sig = ''
        for l in buf:
            if '(' in l and not l.startswith(('/*', '//')):
                sig = l
                break
        mm = re.search(r'([A-Za-z_][A-Za-z0-9_@]*)\s*\(', sig)
        name = mm.group(1) if mm else 'sub_%08x' % a
        self.funcs[a] = (name, rel, body)
        self.byname[name] = a

    def evidence(self, addr, depth=2, limit=40):
        toks = []
        seen = set()
        frontier = [addr]
        for d in range(depth + 1):
            nxt = []
            for a in frontier:
                if a in seen or a not in self.funcs or len(seen) >= limit:
                    continue
                seen.add(a)
                name, rel, body = self.funcs[a]
                toks.append('pd2fn:' + name)
                toks.append('pd2file:' + rel)
                for s in re.findall(r'"((?:[^"\\]|\\.){3,})"', body):
                    toks.append('str:' + s)
                for ident in set(re.findall(r'\b([A-Za-z_][A-Za-z0-9_]*)\b', body)):
                    if ident in self.gp_by_name:
                        g = self.gp_by_name[ident]
                        toks.append('game:%s %s %s' % (g['dll'], g['ref'], g['defined_in']))
                    elif ident in self.byname and ident != name:
                        nxt.append(self.byname[ident])
            frontier = nxt
        return toks


def load_rules():
    rules = []
    for l in open(os.path.join(TOOLS, 'feature_rules.tsv'), encoding='utf-8'):
        if l.startswith('#') or not l.strip():
            continue
        p = l.rstrip('\n').split('\t')
        rules.append(dict(feature=p[0], scope=p[1], rx=re.compile(p[2], re.I), weight=float(p[3]),
                          reason=p[4] if len(p) > 4 else ''))
    return rules


def load_overrides():
    ov = {}
    path = os.path.join(TOOLS, 'overrides.tsv')
    if os.path.exists(path):
        for l in open(path, encoding='utf-8'):
            if l.startswith('#') or not l.strip():
                continue
            p = l.rstrip('\n').split('\t')
            ov[p[0].strip()] = dict(feature=p[1].strip(), reason=p[2].strip() if len(p) > 2 else '')
    return ov


FEATURES = json.load(open(os.path.join(TOOLS, 'features.json'), encoding='utf-8'))
FEATURE_ORDER = [f['name'] for f in FEATURES['features']]


def assign_features(tree):
    rules = load_rules()
    ov = load_overrides()
    groups = collections.OrderedDict()
    for r in RECORDS:
        groups.setdefault(r['group'], []).append(r)
    used_ov = set()
    stats = collections.Counter()
    for g, rs in groups.items():
        site = []
        for r in rs:
            site += ['src:' + r['source'], 'module:' + r['module'], 'gfunc:' + r['game_function'],
                     'gconf:%s:%s' % (r.get('_gconf', ''), r['game_file']),
                     'obytes:' + r['orig_bytes'], 'nbytes:' + r['new_bytes'],
                     'gfile:' + r['game_file'], 'kind:' + r['kind'], 'note:' + r['notes'], 'cond:' + r['condition']]
        for r in rs:
            # the game function the original instruction called/jumped to says what the site was doing
            mod = r.get('_mod')
            if mod and r.get('_e', {}).get('relative') and r['orig_bytes']:
                tgt = (r['_va'] + 4 + struct.unpack('<i', bytes.fromhex(r['orig_bytes'].replace(' ', '')))[0]) & 0xffffffff
                loc = mod.locate(tgt) if mod.base <= tgt < mod.base + len(mod.img) else None
                if loc and loc.get('name'):
                    site += ['tfunc:' + loc['name'], 'tfile:' + loc['file']]
                    r['_orig_target'] = '%s (%s)' % (loc['name'] + ('' if not loc['offset'] else '+0x%x' % loc['offset']), loc['file'])
        hand = []
        for r in rs:
            if r['handler_name']:
                hand.append('handler:' + r['handler_name'] + ' ' + r['handler_file'])
            if r['handler_addr'] and r['source'] not in ('BH', 'PD2_EXT', 'on-disk'):
                try:
                    hand += tree.evidence(int(r['handler_addr'], 16))
                except ValueError:
                    pass
        score = collections.Counter()
        why = collections.defaultdict(list)
        for ru in rules:
            pool = site if ru['scope'] == 'site' else hand if ru['scope'] == 'handler' else site + hand
            hits = sum(1 for t in pool if ru['rx'].search(t))
            if hits:
                w = ru['weight'] * min(hits, 3)
                score[ru['feature']] += w
                why[ru['feature']].append('%s(%g)' % (ru['rx'].pattern[:40], w))
        key_candidates = [g] + ['%s+%s' % (r['module'], r['rva_113c']) for r in rs] + [r['table_addr'] for r in rs] + \
            ['handler:' + r['handler_addr'] for r in rs if r['handler_addr']]
        o = next((ov[k] for k in key_candidates if k in ov), None)
        if o:
            feat = o['feature']
            reason = 'override: ' + o['reason']
            used_ov.update(k for k in key_candidates if k in ov)
            stats['override'] += 1
        elif score:
            best = max(score.values())
            feat = [f for f in FEATURE_ORDER if score.get(f) == best][0]
            reason = 'rules: ' + ', '.join(why[feat][:4])
            stats['rules'] += 1
        else:
            feat = 'misc'
            reason = 'no rule matched'
            stats['none'] += 1
        for r in rs:
            r['feature'] = feat
            r['_feature_reason'] = reason
    unused = set(ov) - used_ov
    return stats, unused


# ======================================================================== outputs
GEN = 'Generated by tools/patches/build_patches.py from the binaries; do not edit (re-run the script).'


def group_map():
    g = collections.OrderedDict()
    for r in RECORDS:
        g.setdefault(r['group'], []).append(r)
    return g


def group_kind(rs):
    kinds = [r['kind'] for r in rs]
    rel = [r for r in rs if r.get('_e', {}).get('relative')]
    if rel:
        k = rel[0]['kind']
        extra = sorted(set(x for x in kinds if x != k and not x.startswith('opcode byte')))
        nopn = sum(int(r['size']) for r in rs if r['kind'].startswith('NOP'))
        s = k.replace('call redirect (E8)', 'call redirect').replace('call insertion (E8)', 'call hook (E8 written)')
        if nopn:
            s += ' + %d NOP' % nopn
            extra = [x for x in extra if not x.startswith('NOP')]
        if extra:
            s += ' + ' + ', '.join(extra)
        return s
    u = sorted(set(k.replace('call redirect (E8)', 'call redirect').replace('jmp detour (E9)', 'jmp detour')
                   for k in kinds))
    if len(rs) > 1 and all(k.endswith('byte change') for k in u):
        return 'instruction rewrite (%d bytes)' % sum(int(r['size']) for r in rs)
    return ' + '.join(u)


def apply_notes():
    path = os.path.join(TOOLS, 'notes.tsv')
    if not os.path.exists(path):
        return 0
    n = 0
    for l in open(path, encoding='utf-8'):
        if l.startswith('#') or not l.strip():
            continue
        key, note = l.rstrip('\n').split('\t', 1)
        for r in RECORDS:
            hit = key in ('%s+%s' % (r['module'], r['rva_113c']), r['group'])
            if key.startswith('bytes:'):
                o, nw = key[6:].split('->')
                hit = r['orig_bytes'] == o and r['new_bytes'] == nw
            if hit:
                r['notes'] = note + ('; ' + r['notes'] if r['notes'] else '')
                n += 1
    return n


def finalize_records():
    """ids, ordering, cleanup"""
    # ids are stable across the fix that added the load-time part of the main table: those records come last
    order = {'PD2_EXT': 0, 'on-disk': 1, 'PD2 table': 2, 'PD2 cond table': 3, 'PD2 block table': 4,
             'PD2 init writes': 5, 'PD2 API': 6, 'BH': 7, 'PD2 table (load-time)': 8}
    RECORDS.sort(key=lambda r: (order.get(r['source'], 9),))
    for i, r in enumerate(RECORDS, 1):
        r['id'] = 'P%04d' % i
        if r.get('_orig_target') and 'orig call target' not in r['notes']:
            r['notes'] = ('orig call target ' + r['_orig_target'] + ('; ' + r['notes'] if r['notes'] else ''))
        for k in ('orig_asm', 'new_asm'):
            r[k] = r[k][:400]


def write_csv():
    os.makedirs(OUT, exist_ok=True)
    with open(f'{OUT}/patches.csv', 'w', newline='', encoding='utf-8') as f:
        w = csv.writer(f)
        w.writerow(COLUMNS)
        for r in RECORDS:
            w.writerow([r[c] for c in COLUMNS])


def md_escape(s):
    return str(s).replace('|', '\\|').replace('\n', ' ')


def short(s, n=110):
    s = str(s)
    return s if len(s) <= n else s[:n - 1] + '…'


def counts_tables():
    out = io.StringIO()
    mods = collections.Counter(r['module'] for r in RECORDS)
    srcs = sorted(set(r['source'] for r in RECORDS))
    out.write('| Module | ' + ' | '.join(srcs) + ' | records | hooks (groups) |\n')
    out.write('|---|' + '---:|' * (len(srcs) + 2) + '\n')
    gm = group_map()
    for m, n in mods.most_common():
        row = [str(sum(1 for r in RECORDS if r['module'] == m and r['source'] == s) or '') for s in srcs]
        ng = sum(1 for g, rs in gm.items() if rs[0]['module'] == m)
        out.write('| %s | %s | %d | %d |\n' % (m, ' | '.join(row), n, ng))
    tot = [str(sum(1 for r in RECORDS if r['source'] == s)) for s in srcs]
    out.write('| **total** | %s | **%d** | **%d** |\n\n' % (' | '.join(tot), len(RECORDS), len(gm)))
    kinds = collections.Counter(r['kind'] for r in RECORDS)
    out.write('| Kind (per record) | records |\n|---|---:|\n')
    for k, n in kinds.most_common():
        out.write('| %s | %d |\n' % (md_escape(k), n))
    out.write('\n')
    gk = collections.Counter(group_kind(rs).split(' + ')[0] for rs in gm.values())
    out.write('| Kind (per hook, main part) | hooks |\n|---|---:|\n')
    for k, n in gk.most_common():
        out.write('| %s | %d |\n' % (md_escape(k), n))
    return out.getvalue()


def write_hooks(V):
    gm = group_map()
    out = io.StringIO()
    out.write('# Game patches and hooks of Project Diablo 2 (1.13c)\n\n')
    out.write('<!-- %s -->\n\n' % GEN)
    out.write('Every change PD2 makes to the 1.13c game code, one row per **hook** (a group of contiguous patch '
              'records written by one table run, e.g. the `E8` byte + its rel32 + the NOPs after it). The per-record '
              'data (original/new bytes, table address, condition) is in `patches.csv`; `FEATURES.md` groups the hooks '
              'by feature. "Original" is the disassembly of the shipped stock DLL at that spot, "PD2" the same bytes '
              'after the patch (relative targets computed with ProjectDiablo.dll at its preferred base 0x10000000). '
              'Game names come from `sigmaRE/5_game_source/<Module>/symbols.csv`; `sub_<va>` marks an entry point the '
              'reference did not split off.\n\n')
    out.write('## Counts\n\n')
    out.write(counts_tables())
    feats = collections.Counter(r['feature'] for r in RECORDS)
    fg = collections.Counter(rs[0]['feature'] for rs in gm.values())
    out.write('\n| Feature | hooks | records |\n|---|---:|---:|\n')
    for f in FEATURE_ORDER:
        if fg.get(f):
            out.write('| %s | %d | %d |\n' % (f, fg[f], feats[f]))
    out.write('\n')
    mods = [m for m, _ in collections.Counter(rs[0]['module'] for rs in gm.values()).most_common()]
    for m in mods:
        out.write('## %s\n\n' % m)
        for f in FEATURE_ORDER:
            rows = [(g, rs) for g, rs in gm.items() if rs[0]['module'] == m and rs[0]['feature'] == f]
            if not rows:
                continue
            out.write('### %s — %s (%d)\n\n' % (m, f, len(rows)))
            out.write('| RVA | Game function (file) | Kind | Original | PD2 | Handler | Hook / src | Notes |\n')
            out.write('|---|---|---|---|---|---|---|---|\n')
            rows.sort(key=lambda x: int(x[1][0]['rva_113c'] or '0', 16))
            for g, rs in rows:
                r0 = rs[0]
                hn = [r for r in rs if r['handler_name']]
                hand = ''
                if hn:
                    hand = '`%s` %s' % (short(hn[0]['handler_name'], 70), hn[0]['handler_addr'])
                cond = ' *(%s)*' % short(r0['condition'], 60) if r0['condition'] else ''
                gfile = r0['game_file']
                notes = [x for x in rs[0]['notes'].split('; ') if x and not x.startswith(('orig call target', 'written by',
                                                                                          'BH ', 'bytes inside'))]
                out.write('| %s | %s<br>`%s` | %s | `%s` | `%s` | %s | %s %s%s | %s |\n' % (
                    r0['rva_113c'], md_escape(short(r0['game_function'], 60)), md_escape(short(gfile, 80)),
                    md_escape(group_kind(rs)), md_escape(short(r0['orig_asm'] or r0['orig_bytes'], 110)),
                    md_escape(short(r0['new_asm'] or r0['new_bytes'], 110)), md_escape(hand), g,
                    md_escape(r0['source']), md_escape(cond), md_escape(short('; '.join(notes), 160))))
            out.write('\n')
    open(f'{OUT}/HOOKS.md', 'w', encoding='utf-8').write(out.getvalue())


def config_keys():
    path = ci_find(GAME, 'ProjectDiablo.json')
    keys = []
    if path:
        def walk(o, p=''):
            if isinstance(o, dict):
                for k, v in o.items():
                    yield from walk(v, p + '/' + k)
            else:
                yield p, o
        keys = list(walk(json.load(open(path, encoding='utf-8'))))
    return keys


def isc_code_evidence(tree):
    """PD2 functions that index ItemStatCost (sgptDataTables+0xbcc) with the 336-byte stride"""
    hits = []
    for a, (name, rel, body) in sorted(tree.funcs.items()):
        if re.search(r'0x150\b', body) and '0xbcc' in body:
            hits.append((a, name, rel))
    return hits


def isc_inlined_hooks():
    """hook groups inside game functions whose reference body adds id*0x144 to pItemStatCostTxt (+0xbcc)"""
    res = collections.OrderedDict()
    for g, rs in group_map().items():
        r = rs[0]
        mod = r.get('_mod')
        if not mod or not mod.is_code(r.get('_va') or 0) or not r['game_function']:
            continue
        loc = mod.locate(r['_va'])
        body = ref_body(mod, loc['func_start']) if loc.get('func_start') else ''
        ids = sorted(set(int(x, 16) // 0x144 for x in re.findall(r'0xbcc\) \+ (0x[0-9a-f]+)', body)
                         if int(x, 16) % 0x144 == 0))
        if ids:
            k = '%s!%s' % (mod.name.split('.')[0], loc['name'])
            n, _ = res.get(k, (0, ids))
            res[k] = (n + 1, ids)
    return [(k, n, ids) for k, (n, ids) in res.items()]


def write_features(V, tree):
    gm = group_map()
    keys = config_keys()
    out = io.StringIO()
    out.write('# Project Diablo 2 features and the game hooks behind them\n\n<!-- %s -->\n\n' % GEN)
    out.write('Hooks (see `HOOKS.md`) grouped by feature. The assignment is rule-based (`tools/patches/feature_rules.tsv`: '
              'the patched game file/function, the game function the original instruction called, and what the PD2 '
              'handler and its callees reference: PD2 source files, game functions, strings), with manual overrides in '
              '`tools/patches/overrides.tsv`. It is a navigation aid; hooks that touch two features are listed under the '
              'stronger one.\n\n')
    out.write('| Feature | hooks | records | modules |\n|---|---:|---:|---|\n')
    for f in FEATURE_ORDER:
        rs = [rs for rs in gm.values() if rs[0]['feature'] == f]
        if not rs:
            continue
        mods = collections.Counter(x[0]['module'] for x in rs)
        out.write('| [%s](#%s) | %d | %d | %s |\n' % (f, re.sub(r'[^a-z0-9 -]', '', f.lower()).replace(' ', '-'), len(rs),
                                                    sum(len(x) for x in rs),
                                                    ', '.join('%s %d' % (m, n) for m, n in mods.most_common())))
    out.write('\n')
    pd2txt = os.path.join(REPO, '2_txt', 'pd2')
    diffdir = os.path.join(REPO, '2_txt', 'diff')
    isc = isc_code_evidence(tree)
    for fd in FEATURES['features']:
        f = fd['name']
        rows = [(g, rs) for g, rs in gm.items() if rs[0]['feature'] == f]
        out.write('## %s\n\n%s\n\n' % (f, fd['summary']))
        if not rows:
            out.write('No hook was assigned to this feature.\n\n')
        else:
            mods = collections.Counter(rs[0]['module'] for g, rs in rows)
            kinds = collections.Counter(group_kind(rs).split(' + ')[0] for g, rs in rows)
            out.write('**%d hooks** (%s); kinds: %s.\n\n' % (
                len(rows), ', '.join('%s %d' % kv for kv in mods.most_common()),
                ', '.join('%s %d' % kv for kv in kinds.most_common())))
            # handlers
            hs = collections.Counter()
            hfile = {}
            for g, rs in rows:
                for r in rs:
                    if r['handler_name'] and r['source'] not in ('on-disk',):
                        hs[(r['handler_addr'], r['handler_name'])] += 1
                        hfile[(r['handler_addr'], r['handler_name'])] = r['handler_file']
            if hs:
                out.write('Handlers (%d distinct; most used first):\n\n| Handler | address | file | records |\n|---|---|---|---:|\n' % len(hs))
                for (a, n), c in hs.most_common(25):
                    out.write('| `%s` | %s | `%s` | %d |\n' % (md_escape(short(n, 80)), a, md_escape(short(hfile[(a, n)], 90)), c))
                if len(hs) > 25:
                    out.write('| … %d more (patches.csv) | | | |\n' % (len(hs) - 25))
                out.write('\n')
            # game files touched
            gf = collections.Counter((rs[0]['module'], rs[0]['game_file']) for g, rs in rows if rs[0]['game_file'])
            out.write('Game files patched: %s.\n\n' % ', '.join('%s `%s` (%d)' % (m.split('.')[0], fl, n)
                                                             for (m, fl), n in gf.most_common(12)))
            # hooks list (compact)
            out.write('<details><summary>Hooks</summary>\n\n| Hook | Module | RVA | Game function | Kind | Handler | why |\n|---|---|---|---|---|---|---|\n')
            for g, rs in rows:
                r0 = rs[0]
                hn = next((r['handler_name'] for r in rs if r['handler_name']), '')
                out.write('| %s | %s | %s | %s | %s | %s | %s |\n' % (
                    g, r0['module'], r0['rva_113c'], md_escape(short(r0['game_function'], 50)),
                    md_escape(group_kind(rs)), md_escape(short(hn, 60)), md_escape(short(r0['_feature_reason'], 90))))
            out.write('\n</details>\n\n')
        # data tables
        tabs = []
        for t in fd.get('tables', []):
            d = os.path.join(diffdir, t + '.md')
            p = [x for x in (os.listdir(pd2txt) if os.path.isdir(pd2txt) else []) if os.path.splitext(x)[0].lower() == t.lower()]
            summ = ''
            if os.path.exists(d):
                txt = open(d, encoding='utf-8').read()
                m = re.search(r'Summary: ([^\n]+)', txt)
                summ = m.group(1) if m else ''
                tabs.append('`%s` (%s; diff: `2_txt/diff/%s.md`)' % (p[0] if p else t, summ, t))
            elif p:
                tabs.append('`2_txt/pd2/%s` (no vanilla baseline)' % p[0])
        if tabs:
            out.write('Data tables: ' + '; '.join(tabs) + '.\n\n')
        if f == 'items/crafting/cube' and isc:
            out.write('**ItemStatCost record 324 -> 336 bytes.** PD2\'s `itemstatcost.bin` records are 0x150 bytes (the '
                      'three `Save * S12` columns). PD2 code indexes the table at `sgptDataTables+0xbcc` with stride '
                      '0x150 in %d functions, e.g. %s. ' % (len(isc), ', '.join('`%s` (%s, `%s`)' % (n, h(a), r) for a, n, r in isc[:5])))
            strid = [r for r in RECORDS if re.search(r'\b44 01 00 00\b', r['orig_bytes']) and re.search(r'\b50 01 00 00\b', r['new_bytes'])]
            if strid:
                out.write('Game code patched from 0x144 to 0x150: %s.\n\n' % ', '.join('%s %s' % (r['module'], r['rva_113c']) for r in strid))
            else:
                out.write('No patch record rewrites a 0x144 constant (the game multiplies by 324 with lea/shl sequences '
                          'or inlines `id*0x144` offsets).\n\n')
            inl = isc_inlined_hooks()
            if inl:
                out.write('Game functions that inline ItemStatCost record offsets (`pItemStatCostTxt + id*0x144`, read '
                          'from the reference decompile) and are hooked by PD2: %d hooks in %d functions, e.g. %s. '
                          'These are sites where the 324-byte layout is compiled into game code, so they cannot work '
                          'with 336-byte records unpatched; that the handlers apply the 0x150 stride is inferred, not '
                          'checked handler by handler.\n\n' % (
                              sum(n for _, n, _ in inl), len(inl),
                              ', '.join('%s (%d hooks; stat ids %s)' % (f, n, ', '.join(str(i) for i in ids[:6])) for f, n, ids in inl[:6])))
        rx = re.compile(fd.get('config', '^$'))
        ck = [k for k, v in keys if rx.search(k)]
        if ck:
            out.write('Config keys (`ProjectDiablo.json`): %s.\n\n' % ', '.join('`%s`' % k for k in ck))
        if f == 'loader':
            out.write(on_disk_text(V))
    unused_keys = [k for k, v in keys if not any(re.search(fd.get('config', '^$'), k) for fd in FEATURES['features'])]
    if unused_keys:
        out.write('## Config keys not tied to a feature\n\n%s\n' % ', '.join('`%s`' % k for k in unused_keys))
    open(f'{OUT}/FEATURES.md', 'w', encoding='utf-8').write(out.getvalue())


def on_disk_text(V):
    s = io.StringIO()
    s.write('### On-disk changes of D2Win.dll and Storm.dll\n\n')
    for name, v in V.items():
        s.write('* **%s**: stored PE checksum 0x%x, shipped file computes to 0x%x; after undoing the changes listed in '
                'patches.csv it computes to 0x%x → %s. Reference consistency check (every reference function\'s call '
                'targets, branches and string operands vs. the shipped bytes): %d function(s) flagged%s.\n' % (
                    name, v['stored'], v['computed_shipped'], v['computed_restored'],
                    '**match: these are all the changes**' if v['match'] else
                    '**no match**: something else differs from the original file (outside code the reference covers), '
                    'or the original checksum was never valid; not decidable without a vanilla copy',
                    len(v['consistency']),
                    (' (' + '; '.join('%s: %s' % (c['func'], ', '.join(c['bad'] + c['strings'])) for c in v['consistency']) + ')')
                    if v['consistency'] else ''))
    s.write('\n')
    return s.getvalue()


# ======================================================================== C++ reconstruction
def cident(name, addr):
    """C identifier for a PD2 handler/data reference"""
    if not name:
        return 'PD2_%08x' % addr
    n = name.split(' ')[0]
    if '+' in n or not re.match(r'^[A-Za-z_][A-Za-z0-9_]*$', n):
        return 'PD2_%08x' % addr
    return n


def cpp_comment(r):
    s = '%s %s' % (r['game_function'] or '?', '(%s)' % r['game_file'] if r['game_file'] else '')
    k = r['kind']
    o = r['orig_bytes']
    return ('%s | %s | orig %s' % (s.strip(), k, o)).replace('*/', '* /')


def write_cpp(V):
    pdir = os.path.join(PD2SRC, 'patches')
    os.makedirs(pdir, exist_ok=True)
    enum = [D2T_ENUM.get(m, 'D2DLL_' + re.sub(r'\W', '', m.split('.')[0]).upper()) for m in MODULES]
    used_handlers = collections.OrderedDict()
    used_data = collections.OrderedDict()

    def ref(addr):
        if addr is None:
            return None
        n, f = pd2_name(addr)
        cid = cident(n, addr)
        if pd2.is_text(addr):
            used_handlers.setdefault(cid, (addr, n, f))
        else:
            used_data.setdefault(cid, (addr, n, f))
        return cid

    def entry(r, e):
        en = enum[e['dll']]
        if e['relative']:
            data = '(DWORD)%s' % ref(e['data'])
        elif e['size'] == 0 and PD2_BASE <= e['data'] < PD2_BASE + len(pd2.img):
            data = '(DWORD)%s' % ref(e['data']) if pd2.is_text(e['data']) else '(DWORD)&%s' % ref(e['data'])
        else:
            data = '0x%02X' % e['data'] if e['size'] else '0x%08X' % e['data']
            m = re.match(r'computed by helper (0x[0-9a-f]+)\(ecx=(0x[0-9a-f]+), edx=(0x[0-9a-f]+)\)', e.get('how', {}).get('data', ''))
            if m:
                helpers.add(int(m.group(1), 16))
                data = 'GetByteN(0x%X, %d)' % (int(m.group(2), 16), int(m.group(3), 16))
        return '    {%s, 0x%06X, %s, %s, %d},' % (en, e['offset'], data, 'TRUE' if e['relative'] else 'FALSE', e['size'])

    helpers = set()

    def table(src, name, extra_comment):
        lines = []
        last_group = None
        src = (src,) if isinstance(src, str) else src
        rs = [r for r in RECORDS if r['source'] in src]
        rs.sort(key=lambda r: int(r['table_addr'], 16))
        for r in rs:
            if r['group'] != last_group:
                gr = [x for x in rs if x['group'] == r['group']]
                lines.append('    // --- %s %s %s  [%s] %s' % (r['group'], r['module'], r['game_function'],
                                                              r['feature'], ('(' + r['game_file'] + ')') if r['game_file'] else ''))
                if r['orig_asm']:
                    lines.append('    //     was: %s' % short(r['orig_asm'], 150))
                    lines.append('    //     now: %s' % short(r['new_asm'], 150))
                last_group = r['group']
            if r['_e'].get('index') == lt_first and src[0] == 'PD2 table':
                lines.append('    // ---- from here on the entries are written at load time by the static initializer %s (see above)'
                             % h(LT[word_tables[0]].writers[0]['fn']))
            if r['_e']['rt']:
                lines.append('    // %s entry %d: run-time value(s): %s' % (r['id'], r['_e']['index'], r['notes']))
                continue
            lines.append(entry(r, r['_e']) + '  // %s %s' % (r['id'], r['kind']))
        return lines

    LTM = LT[word_tables[0]]
    lt_first = LTM.static_count if LTM.writers else -1
    main_lines = table(('PD2 table', 'PD2 table (load-time)'), 'gptTemplatePatches', '')
    cond_lines = table('PD2 cond table', 'gptPlugYConflictPatches', '')
    block_lines = []
    for r in sorted([r for r in RECORDS if r['source'] == 'PD2 block table'], key=lambda r: int(r['table_addr'], 16)):
        e = r['_e']
        bs = ', '.join('0x%02X' % b for b in e['bytes'])
        block_lines.append('    // %s %s %s [%s] %s | was: %s | now: %s' % (
            r['id'], r['module'], r['game_function'], r['feature'], r['kind'], short(r['orig_asm'] or r['orig_bytes'], 90),
            short(r['new_asm'] or r['new_bytes'], 90)))
        block_lines.append('    {%s, 0x%06X, {%s}, %d},' % (enum[e['dll']], e['offset'], bs, e['size']))

    # ---------------- Patches.h
    hh = io.StringIO()
    hh.write('// Patches.h - ProjectDiablo.dll patch tables (D2Template style), reconstructed.\n// %s\n' % GEN)
    hh.write('// Source of truth: 5_game_patches/patches.csv. Tables in the shipped DLL: main 0x%08x (%d entries, part filled at load time), '
             'conditional 0x%08x (%d), block 0x%08x (%d); module table 0x%08x.\n#pragma once\n#include <windows.h>\n\n'
             % (word_tables[0], len(T_MAIN), word_tables[1] if len(word_tables) > 1 else 0, len(T_COND), BLOCK_TABLE,
                len(T_BLOCK), MODTAB))
    hh.write('// Index into gptDllFiles (the {name, HMODULE} table D2Template loads with GetModuleHandleW/LoadLibraryW).\n')
    hh.write('enum D2TEMPLATE_DLL_FILES\n{\n')
    for i, (e, m) in enumerate(zip(enum, MODULES)):
        hh.write('    %-26s = %2d,  // %s\n' % (e, i, m))
    hh.write('    %-26s = %2d,  // end marker\n};\n\n' % ('D2DLL_INVALID', END_MARK))
    hh.write(textwrap.dedent('''\
        struct DLLBaseStrc
        {
            const wchar_t* szName;
            HMODULE hModule;
        };

        // One patch: write dwData at module base + dwAddress.
        //   bRelative == TRUE : dwData is a function; the rel32 (dwData - (address + 4)) is written (4 bytes).
        //                       The E8/E9 opcode byte before it is a separate {.., 0xE8, FALSE, 1} entry when PD2 adds it.
        //   nPatchSize == 0   : write the DWORD dwData (constant, pointer).
        //   nPatchSize  > 0   : fill nPatchSize bytes with (BYTE)dwData (0x90 = NOP, or one opcode/operand byte).
        struct DLLPatchStrc
        {
            int    nDLL;
            DWORD  dwAddress;
            DWORD  dwData;
            BOOL   bRelative;
            size_t nPatchSize;
        };

        // Block patch: copy nPatchSize bytes (stored one per DWORD) to module base + dwAddress.
        struct DLLBlockPatchStrc
        {
            int    nDLL;
            DWORD  dwAddress;
            DWORD  pData[256];
            size_t nPatchSize;
        };

        extern DLLBaseStrc       gptDllFiles[D2DLL_INVALID];
        extern DLLPatchStrc      gptTemplatePatches[];        // always applied
        extern DLLPatchStrc      gptPlugYConflictPatches[];   // applied only without -plugy
        extern DLLBlockPatchStrc gptBlockPatches[];

        // 0x%08x: (BYTE)(dwValue >> (nByte * 8)); used in gptTemplatePatches' initializer
        BYTE __fastcall GetByteN(DWORD dwValue, int nByte);

        BOOL __fastcall ApplyPatches(DLLPatchStrc* pPatch);   // 0x%08x
        BOOL ApplyBlockPatches();                              // 0x%08x
        BOOL InitGameFunctionTables();                         // init-time table writes, see InitTables.cpp

        ''' % (min(helpers) if helpers else 0, WORD_INSTALLER, BLOCK_INSTALLER)))
    hh_handlers_pos = hh.tell()

    # ---------------- Patches.cpp
    cc = io.StringIO()
    cc.write('// Patches.cpp - ProjectDiablo.dll patch tables, reconstructed from the shipped binary.\n// %s\n' % GEN)
    cc.write('// Each group comment: hook id (patches.csv `group`), game module, patched game function\n'
             '// (sigmaRE/5_game_source/<Module>/<file>), feature; was/now = disassembly before/after.\n')
    cc.write('#include "Patches.h"\n\nDLLBaseStrc gptDllFiles[D2DLL_INVALID] =\n{\n')
    for m in MODULES:
        cc.write('    {L"%s", NULL},\n' % m)
    cc.write('};\n\n')
    nslot = LTM.end[1] + 1
    if LTM.writers:
        w = LTM.writers[0]
        reg = w['registered']
        cc.write('// %d entries + the D2DLL_INVALID end marker (%d slots). Entries 0-%d are initialised data in the DLL;\n'
                 '// entry %d onwards (from its dwData field on) and the end marker are stored at load time by the dynamic\n'
                 '// initializer %s (%d instructions, %d store instructions, listed at %s in the CRT initializer array %s-%s,\n'
                 '// which runs before DllMain and therefore before ApplyPatches). Most likely the compiler switched to\n'
                 '// dynamic initialization at the first element that is not a constant expression: entry %d\n'
                 '// takes a byte of a constant through the helper GetByteN (0x%08x, not inlined).\n' % (
                     len(T_MAIN), nslot, LTM.static_count - 1, LTM.static_count, h(w['fn']), w['insns'], w['writes'],
                     h(reg[0]) if reg else '?', h(reg[1]) if reg else '?', h(reg[2]) if reg else '?', LTM.static_count,
                     min(helpers) if helpers else 0))
    cc.write('DLLPatchStrc gptTemplatePatches[] =\n{\n')
    cc.write('\n'.join(main_lines) + '\n    {D2DLL_INVALID},\n};\n\n')
    cc.write('// Skipped when the command line contains -plugy (PlugY replaces these save/stash routines itself).\n')
    cc.write('DLLPatchStrc gptPlugYConflictPatches[] =\n{\n' + '\n'.join(cond_lines) + '\n    {D2DLL_INVALID},\n};\n\n')
    cc.write('DLLBlockPatchStrc gptBlockPatches[] =\n{\n' + '\n'.join(block_lines) + '\n    {D2DLL_INVALID},\n};\n')


    # ---------------- InitTables.cpp
    it = io.StringIO()
    it.write('// InitTables.cpp - the init-time writes into game function/data tables (run by Init after the patch\n'
             '// tables). Reconstructed from the %d small init functions called by Init (0x%08x).\n// %s\n'
             % (len(set(r['table_addr'] for r in RECORDS if r['source'] == 'PD2 init writes')), INIT, GEN))
    it.write('#include "Patches.h"\n\n@@CELLS@@')
    cells = collections.OrderedDict()
    byfn = collections.OrderedDict()
    for r in RECORDS:
        if r['source'] == 'PD2 init writes':
            byfn.setdefault(r['table_addr'], []).append(r)
    for fn, rs in byfn.items():
        n, f = pd2_name(int(fn, 16))
        it.write('// %s  %s  (%s)\nstatic BOOL %s()\n{\n' % (fn, n, f, cident(n, int(fn, 16))))
        for r in rs:
            m = re.search(r'base pointer (DAT_\w+) = (\S+) (\S+) \(([^)]*)\)', r['notes'])
            if 'block copy' in r['notes']:
                row = gp_copy[int(m.group(1)[4:], 16)]
                cells.setdefault(row['cell_name'], row)
                it.write('    memcpy(%s, %s, %d);  // %s %s %s (%s)\n' % (
                    row['cell_name'], ref(int(r['handler_addr'], 16)), int(r['size']), r['module'], r['va_113c'],
                    r['kind'], r['game_file']))
                continue
            hv = r['handler_addr']
            nv = struct.unpack('<I', bytes.fromhex(r['new_bytes'].replace(' ', '')))[0]
            val = '(DWORD)%s' % ref(int(hv, 16)) if hv else '%d' % nv
            row = gp_copy[int(m.group(1)[4:], 16)]
            cells.setdefault(row['cell_name'], row)
            off = int(r['va_113c'], 16) - (gmod(r['module']).base + int(m.group(3)[1:], 16))
            it.write('    *(DWORD*)(%s + 0x%x) = %s;  // %s %s; was %s\n' % (
                row['cell_name'], off, val, r['module'], r['va_113c'], r['orig_asm'] or r['orig_bytes']))
        it.write('    return TRUE;\n}\n\n')
    it.write('BOOL InitGameFunctionTables()\n{\n')
    for fn, rs in byfn.items():
        n, f = pd2_name(int(fn, 16))
        it.write('    %s();\n' % cident(n, int(fn, 16)))
    it.write('    return TRUE;\n}\n')
    decl = '// game addresses, resolved at run time by D2Template (GetDllOffset; names as in include/globals.h)\n'
    for cn, row in cells.items():
        decl += 'extern uint8_t* %s;  // %s %s (1.13d %s), reference %s\n' % (cn, row['dll'], row['v113c'], row['v113d'], row['ref'])
    open(os.path.join(pdir, 'InitTables.cpp'), 'w', encoding='utf-8').write(it.getvalue().replace('@@CELLS@@', decl + '\n'))

    # handler declarations into the header
    hh.write('// ---- PD2 functions/data the tables point at (names from 4_pd2_source/ProjectDiablo/symbols.csv;\n'
             '// PD2_<addr> = a label inside a function or a naked hook stub).  Hook handlers are called from the\n'
             '// middle of game code, so most are naked / register-convention stubs: declared as void() here.\n')
    for cid, (a, n, f) in used_handlers.items():
        hh.write('void %s();  // 0x%08x %s%s\n' % (cid, a, f, ('  [' + n + ']') if n.split(' ')[0] != cid else ''))
    for cid, (a, n, f) in used_data.items():
        hh.write('extern BYTE %s[];  // 0x%08x data\n' % (cid, a))
    open(os.path.join(pdir, 'Patches.h'), 'w', encoding='utf-8').write(hh.getvalue())
    open(os.path.join(pdir, 'Patches.cpp'), 'w', encoding='utf-8').write(cc.getvalue())
    # ---------------- PatchInstaller.cpp
    pi = PATCH_INSTALLER_CPP % dict(gen=GEN, inst=WORD_INSTALLER, block=BLOCK_INSTALLER, init=INIT,
                                    flag=COND_FLAG or 0, modtab=MODTAB, main=word_tables[0],
                                    cond=word_tables[1] if len(word_tables) > 1 else 0, btab=BLOCK_TABLE,
                                    nmain=len(T_MAIN), ncond=len(T_COND), nblock=len(T_BLOCK))
    open(os.path.join(pdir, 'PatchInstaller.cpp'), 'w', encoding='utf-8').write(pi)
    return used_handlers


PATCH_INSTALLER_CPP = r'''// PatchInstaller.cpp - D2Template's patch installer as used by ProjectDiablo.dll, reconstructed as C++.
// %(gen)s
// Binary: ApplyPatches = 0x%(inst)08x, ApplyBlockPatches = 0x%(block)08x, Init = 0x%(init)08x,
// module table gptDllFiles = 0x%(modtab)08x, tables: main 0x%(main)08x (%(nmain)d entries),
// -plugy-conditional 0x%(cond)08x (%(ncond)d), block 0x%(btab)08x (%(nblock)d).
#include "Patches.h"
#include <string.h>
#include <shellapi.h>

static bool gbPlugY;            // DAT_%(flag)08x: set when the command line contains -plugy

// 0x102ad400: resolve every module of gptDllFiles (already loaded ones by handle, others are loaded).
static BOOL LoadModules()
{
    for (DLLBaseStrc& dll : gptDllFiles)
    {
        HMODULE h = GetModuleHandleW(dll.szName);
        if (!h)
            h = LoadLibraryW(dll.szName);
        dll.hModule = h;                  // NULL for optional modules (BH, glide3x, SGD2FreeRes ...): skipped below
    }
    return TRUE;
}

// 0x%(inst)08x  __fastcall ApplyPatches(DLLPatchStrc*)
// Writes every entry, then reads the bytes back and compares; returns FALSE on the first mismatch,
// on an invalid DLL index or on an entry with dwAddress == 0. Both tables end with a D2DLL_INVALID entry
// (the main table's, like its second half, is stored by a load-time initializer: see Patches.cpp).
BOOL __fastcall ApplyPatches(DLLPatchStrc* pPatch)
{
    for (; pPatch->nDLL != D2DLL_INVALID; ++pPatch)
    {
        if (pPatch->nDLL < 0 || pPatch->nDLL >= D2DLL_INVALID || pPatch->dwAddress == 0)
            return FALSE;

        HMODULE hModule = gptDllFiles[pPatch->nDLL].hModule;
        if (!hModule)
            continue;                                         // module not loaded: entry ignored

        BYTE* pAddress = (BYTE*)hModule + pPatch->dwAddress;
        DWORD dwData = pPatch->dwData;
        if (pPatch->bRelative)
            dwData = dwData - (DWORD)pAddress - 4;            // rel32 for the E8/E9 in front of pAddress

        DWORD dwOldProtect;
        BOOL bOk;
        if (pPatch->nPatchSize == 0)                           // a DWORD
        {
            VirtualProtect(pAddress, 4, PAGE_EXECUTE_READWRITE, &dwOldProtect);
            memcpy_s(pAddress, 4, &dwData, 4);
            bOk = *(DWORD*)pAddress == dwData;
            VirtualProtect(pAddress, 4, dwOldProtect, NULL);
        }
        else                                                   // nPatchSize copies of the low byte
        {
            BYTE buffer[1024];
            memset(buffer, (BYTE)dwData, pPatch->nPatchSize);
            VirtualProtect(pAddress, pPatch->nPatchSize, PAGE_EXECUTE_READWRITE, &dwOldProtect);
            memcpy_s(pAddress, pPatch->nPatchSize, buffer, pPatch->nPatchSize);
            bOk = memcmp(pAddress, buffer, pPatch->nPatchSize) == 0;
            VirtualProtect(pAddress, pPatch->nPatchSize, dwOldProtect, NULL);
        }
        if (!bOk)
            return FALSE;
    }
    return TRUE;
}

// 0x%(block)08x  ApplyBlockPatches()
// Same pattern for gptBlockPatches; the compiler inlined the table address and the first entry's DLL index.
// Note: an entry with nPatchSize == 0 would write 0x400 zero bytes (never used).
BOOL ApplyBlockPatches()
{
    for (DLLBlockPatchStrc* pPatch = gptBlockPatches; pPatch->nDLL != D2DLL_INVALID; ++pPatch)
    {
        if (pPatch->nDLL < 0 || pPatch->nDLL >= D2DLL_INVALID || pPatch->dwAddress == 0)
            return FALSE;
        HMODULE hModule = gptDllFiles[pPatch->nDLL].hModule;
        if (!hModule)
            continue;

        BYTE* pAddress = (BYTE*)hModule + pPatch->dwAddress;
        BYTE buffer[1024] = {};
        size_t nSize = pPatch->nPatchSize ? pPatch->nPatchSize : 0x400;
        for (size_t i = 0; i < pPatch->nPatchSize; ++i)
            buffer[i] = (BYTE)pPatch->pData[i];

        DWORD dwOldProtect;
        VirtualProtect(pAddress, nSize, PAGE_EXECUTE_READWRITE, &dwOldProtect);
        memcpy_s(pAddress, nSize, buffer, nSize);
        BOOL bOk = memcmp(pAddress, buffer, nSize) == 0;
        VirtualProtect(pAddress, nSize, dwOldProtect, NULL);
        if (!bOk)
            return FALSE;
    }
    return TRUE;
}

// The patch part of Init (0x%(init)08x), called from DllMain on DLL_PROCESS_ATTACH.
BOOL InstallGamePatches()
{
    if (!LoadModules())
        return FALSE;                                          // "Failed to load modules"

    // PD2's MPQs are opened before any patch (D2Win's archive loader, priority 6000).
    // OpenMpq(6000, "D2Win.DLL", "pd2data.mpq", "PD2DATA") ... pd2assets, pd2maps, pd2monchars

    ApplyPatches(gptTemplatePatches);                          // result ignored

    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);
    bool bCompile = false;
    for (int i = 1; i < argc; ++i)
    {
        if (!wcscmp(argv[i], L"-compile")) bCompile = true;    // compile .txt to .bin and exit (after init)
        if (!wcscmp(argv[i], L"-plugy"))   gbPlugY = true;
    }
    LocalFree(argv);

    if (!gbPlugY)
        ApplyPatches(gptPlugYConflictPatches);                 // save/stash hooks PlugY would also install

    ApplyBlockPatches();
    InitGameFunctionTables();                                  // InitTables.cpp
    // ... then (not patches): -compile handling, config load, VideoConfig "Render" registry value, srand(time)
    return TRUE;
}
'''


def write_ext_loader():
    pdir = os.path.join(EXTSRC, 'patches')
    os.makedirs(pdir, exist_ok=True)
    rs = [r for r in RECORDS if r['source'] == 'PD2_EXT']
    lines = []
    for r in rs:
        lines.append('//   %s %s %s %s: %s -> %s  (%s) %s' % (r['id'], r['module'], r['va_113c'] if r['module'] == 'Game.exe'
                                                            else '+' + r['rva_113c'], r['game_function'],
                                                            short(r['orig_asm'], 80), short(r['new_asm'], 80),
                                                            r['kind'], r['condition']))
    hn = {r['va_113c']: r['handler_addr'] for r in rs}
    src = EXT_LOADER_CPP % dict(gen=GEN, list='\n'.join(lines))
    open(os.path.join(pdir, 'Loader.cpp'), 'w', encoding='utf-8').write(src)


EXT_LOADER_CPP = r'''// Loader.cpp - PD2_EXT.dll's runtime patches (the only PD2 code in PD2_EXT, 0x10001000-0x10001241),
// reconstructed as C++. %(gen)s
// PD2_EXT is loaded by Storm.dll (its "VERSION.dll" import was renamed to "PD2_EXT.dll" on disk) and forwards the
// three version.dll functions Storm imports. Patches (see 5_game_patches/patches.csv):
%(list)s
#include <windows.h>
#include <string.h>

typedef int (__stdcall* GameFn)();
static GameFn gpfnOriginalStage2;     // DAT_100162d8: original target of the call at Game.exe 0x4082dd
static GameFn gpfnOriginalDataLoad;   // DAT_100162d4: original target of the call at Game.exe 0x40763f

// Write `E8 rel32` at pCall and return the old call target.
static void* RedirectCall(BYTE* pCall, void* pHandler)
{
    DWORD dwOld = PAGE_READWRITE;
    VirtualProtect(pCall, 5, PAGE_EXECUTE_READWRITE, &dwOld);
    pCall[0] = 0xE8;
    DWORD dwOldRel = *(DWORD*)(pCall + 1);
    *(DWORD*)(pCall + 1) = (DWORD)pHandler - (DWORD)(pCall + 5);
    VirtualProtect(pCall, 5, dwOld, &dwOld);
    return pCall + 5 + dwOldRel;
}

// 0x10001050: replaces Storm_572 (strrchr) inside Fog_10116 (InstallPath). Cuts one more directory, so the
// default install path is the parent of the folder that holds Game.exe (where the vanilla MPQs are).
static char* __stdcall StrRChrParent(char* szPath, int c)
{
    char* p = strrchr(szPath, c);
    if (p)
    {
        *p = '\0';
        p = strrchr(szPath, c);
    }
    return p;
}

// 0x10001000: replaces the data-load call at Game.exe 0x40763f; loads ProjectDiablo.dll after it.
static int __stdcall DataLoadThenLoadPD2()
{
    int r = gpfnOriginalDataLoad();
    if (!r)
    {
        MessageBoxA(NULL, /* 0x10012f00 */ "...", /* 0x10012ed4 */ "...", 0);
        return r;
    }
    if (!LoadLibraryA("ProjectDiablo.dll"))
        MessageBoxA(NULL, "Failed to load ProjectDiablo.dll. Please check your Anti-Virus logs...", "...", 0);
    return r;
}

// 0x10001080: stage 2, runs in place of the call at Game.exe 0x4082dd.
static int __stdcall Stage2()
{
    gpfnOriginalDataLoad = (GameFn)RedirectCall((BYTE*)0x0040763F, DataLoadThenLoadPD2);

    DWORD dwOld = PAGE_READWRITE;
    VirtualProtect((void*)0x004083EF, 0x21, PAGE_EXECUTE_READWRITE, &dwOld);
    memset((void*)0x004083EF, 0x90, 0x21);                  // 33 bytes of WinMain removed (see patches.csv)
    VirtualProtect((void*)0x004083EF, 0x21, dwOld, &dwOld);

    if (BYTE* pFog = (BYTE*)GetModuleHandleA("Fog.dll"))
    {
        // version guard: the 8 bytes at Fog+0xff5f must be 83 C4 0C 5E 83 C4 14 C3 (1.13c)
        if (*(DWORD*)(pFog + 0xFF5F) == 0x5E0CC483 && *(DWORD*)(pFog + 0xFF63) == 0xC314C483)
            RedirectCall(pFog + 0x17EA7, StrRChrParent);
    }
    return gpfnOriginalStage2();
}

// 0x100011c0
BOOL WINAPI DllMain(HINSTANCE, DWORD dwReason, LPVOID)
{
    if (dwReason == DLL_PROCESS_ATTACH)
        gpfnOriginalStage2 = (GameFn)RedirectCall((BYTE*)0x004082DD, Stage2);   // Game.exe 1.13c, fixed base
    return TRUE;
}
'''


def write_readme(V, fstats, unused_ov, bh_ok):
    gm = group_map()
    fc = collections.Counter(r['func_check'].split(' ')[0] for r in RECORDS)
    code_recs = [r for r in RECORDS if r['func_check'].split(' ')[0] in ('flow', 'unref', 'range')]
    out = io.StringIO()
    out.write('# 5_game_patches: what PD2 changes in the Diablo II 1.13c game code\n\n<!-- %s -->\n\n' % GEN)
    out.write(textwrap.dedent('''\
        | File | Content |
        |---|---|
        | `patches.csv` | one row per patch record (table entry, init-time write, PD2_EXT write, on-disk change, BH patch) |
        | `HOOKS.md` | the same grouped into hooks, by game module and feature, with original vs patched disassembly |
        | `FEATURES.md` | hooks grouped by PD2 feature, with handlers, data tables and config keys |
        | `../4_pd2_source/ProjectDiablo/patches/` | `Patches.h/.cpp` (D2Template patch tables), `PatchInstaller.cpp`, `InitTables.cpp` |
        | `../4_pd2_source/PD2_EXT/patches/Loader.cpp` | PD2_EXT's four runtime patches as C++ |

        Everything here, including the two `patches/` folders, is written by `tools/patches/build_patches.py`
        (not by the source-tree generator in `tools/src`). Manual decisions are in `tools/patches/`:
        `feature_rules.tsv` (feature rules with reasons), `overrides.tsv` (per-hook feature overrides with reasons),
        `features.json` (feature texts, data tables and config-key patterns).

        ```
        python3 tools/patches/build_patches.py [--repo /home/user/fd2] [--work /home/user/fd2_work]
        ```
        Inputs: `fd2_work/bin/ProjectDiablo.dll`, `fd2_work/bin/PD2_EXT.dll`, the shipped game DLLs in
        `fd2_work/inputs/ProjectD2/ProjectD2/` (read only), `sigmaRE/5_game_source` (reference names),
        `4_pd2_source/ProjectDiablo/{symbols.csv,game_pointers.tsv,*.cpp}`, `4_pd2_source/BH/patches.tsv`, `2_txt/`.
        Runs in about 15 s. Nothing is executed; all of it is static analysis of the files.

        ## Method

        1. **Tables.** The installer is found as the function that calls `VirtualProtect` and is called with
           `mov ecx, <table>`; its two call sites give the main and the conditional table, the other
           `VirtualProtect` user is the block installer (its table address is a constant in its code).
           Entry layout `{int nDLL, DWORD dwAddress, DWORD dwData, BOOL bRelative, size_t nPatchSize}` (main and
           conditional) and `{int nDLL, DWORD dwAddress, DWORD pData[256], size_t nPatchSize}` (block); `nDLL` indexes
           the 27-entry `{name, HMODULE}` module table.
           **Load-time part of the main table.** The tables are read as the installer sees them, not only from the
           file: every instruction in `.text` that stores into a table's address range is found (raw scan for the
           range's addresses, confirmed by a linear sweep of the containing function), each writer must be listed in
           the CRT's static-initializer array (run by `_initterm` before DllMain, so before the installer), and is
           then run symbolically (`tools/patches/loadtime.py`: registers and memory tracked per byte, immediates,
           register copies and calls to small pure helpers evaluated; a value read from a writable global, a
           game-pointer cell or a non-inlined call would be recorded as run-time only, an unmodelled instruction
           stops the script). The file's bytes overlaid with those stores are then read with the installer's own loop
           condition (stop at `nDLL == D2DLL_INVALID`; abort on a bad `nDLL` or `dwAddress == 0`). Records of
           entries the file alone does not hold have source `PD2 table (load-time)`; they come last in `patches.csv`
           so that the ids of all other records stayed the same when they were added.
        2. **Init-time writes.** After the tables, Init calls small functions that load a game pointer (a per-file
           copy of a D2Template accessor, resolved through `game_pointers.tsv`) and store handler addresses or
           constants through it: these patch game function-pointer tables (skill/stat/unit callbacks) at run time.
           They are decoded from the disassembly (`mov reg,[copy]` / `mov [reg+off], imm` / `rep movsd`).
        3. **Other write sites.** All `VirtualProtect` callers (only the two installers), `memcpy_s` callers into game
           memory (only the installers), `SetWindowLongW` (one window-procedure subclass), and every
           `*(code**)(game pointer + off) = handler` store in the decompile (only the init functions). ProjectDiablo
           imports no `WriteProcessMemory`, no hooking library, and writes no game IAT entry.
        4. **Game side.** Target = shipped 1.13c module image base + offset. The containing function is the nearest
           reference function start ≤ address, checked by recursive-descent disassembly of the shipped bytes from that
           start (jump tables followed); if the start does not reach the address, the entry point after the last
           padding/`ret` that does reach it is used and named `sub_<va>` (reference missed the split).
           Original bytes come from the shipped file; new bytes are computed (rel32 from the handler address at
           PD2's preferred base 0x10000000).
        5. **On-disk changes** (D2Win.dll, Storm.dll): non-zero bytes in section padding past `VirtualSize`, absolute
           operands pointing into that padding, branches into it, import names that are PD2 DLLs, plus a consistency
           check of every reference function (call targets, branch targets outside `.text`, string operands vs. the
           decompile's literals). Verified by undoing the changes and recomputing the PE checksum.
        6. **Features**: rules over the patch site (game file/function, the original call target) and the handler's
           evidence (its callees to depth 2 in the reconstructed tree: PD2 files, game functions, strings).
        '''))
    out.write('\n## Numbers\n\n')
    LTM = LT[word_tables[0]]
    w = LTM.writers[0] if LTM.writers else None
    nrt = sum(1 for r in RECORDS if r['kind'].startswith('run-time value'))
    out.write('* ProjectDiablo main table @ 0x%08x: **%d entries** + end marker (%d slots), read as the installer sees '
              'them. Only entries 0-%d are initialised data in the file; ' % (
                  word_tables[0], len(T_MAIN), LTM.end[1] + 1, LTM.static_count - 1))
    if w:
        reg = w['registered']
        out.write('the dynamic initializer %s (listed at %s in the CRT initializer array %s-%s) stores the rest at load '
                  'time: from entry %d\'s `dwData` on, %d store instructions writing %d dwords (%d instructions in all, %d helper calls), ending with the '
                  '`D2DLL_INVALID` marker of entry %d. **Correction:** the earlier statement "%d entries, the rest is zero '
                  'and the installer stops at the first zero entry" was wrong: the file\'s zeros are overwritten before '
                  'the installer runs, and the installer stops at the end marker (an entry with `dwAddress` 0 would make '
                  'it abort). This added %d records (entries %d-%d) and corrected entry %d (its `dwData`/`bRelative`/'
                  '`nPatchSize` are load-time values). Run-time-only values: **%d**. Other writers into the main table: '
                  '%s.\n' % (h(w['fn']), h(reg[0]), h(reg[1]), h(reg[2]), LTM.static_count, w['writes'], w['dwords'], w['insns'],
                              sum(1 for c in w['calls'] if c[2]), LTM.end[1], LTM.file_count,
                              sum(1 for r in RECORDS if r['source'] == 'PD2 table (load-time)'), LTM.file_count,
                              len(T_MAIN) - 1, LTM.static_count, nrt, len(LTM.writers) - 1 or 'none'))
    LTC = LT[word_tables[1]] if len(word_tables) > 1 else None
    out.write('* Conditional table @ 0x%08x: **%d** (skipped with `-plugy`; load-time writers: %s), block table @ 0x%08x: '
              '**%d** (writers other than its installer: %s), module table @ 0x%08x: no direct stores; its address is taken only '
              'by %s, which fills the HMODULEs at run time. Undecodable: **%d**.\n' % (
                  word_tables[1], len(T_COND), (', '.join(h(x['fn']) for x in LTC.writers) or 'none') if LTC else 'n/a',
                  BLOCK_TABLE, len(T_BLOCK),
                  ', '.join(h(x) for x in OTHER_WRITERS['block table'] if x != BLOCK_INSTALLER) or 'none', MODTAB,
                  ', '.join('%s %s' % (h(x), pd2_name(x)[0]) for x in OTHER_WRITERS['module table refs']
                            if x not in (WORD_INSTALLER, BLOCK_INSTALLER)) or 'none', nrt))
    out.write('* Init-time writes: **%d** stores in %d functions. Window subclass: %d. PD2_EXT: %d. On-disk: %d '
              '(D2Win %d, Storm %d). BH: %s.\n' % (
                  sum(1 for r in RECORDS if r['source'] == 'PD2 init writes'),
                  len(set(r['table_addr'] for r in RECORDS if r['source'] == 'PD2 init writes')),
                  sum(1 for r in RECORDS if r['source'] == 'PD2 API'),
                  sum(1 for r in RECORDS if r['source'] == 'PD2_EXT'),
                  sum(1 for r in RECORDS if r['source'] == 'on-disk'),
                  sum(1 for r in RECORDS if r['source'] == 'on-disk' and r['module'] == 'D2Win.dll'),
                  sum(1 for r in RECORDS if r['source'] == 'on-disk' and r['module'] == 'Storm.dll'),
                  ('%d (from `4_pd2_source/BH/patches.tsv`)' % sum(1 for r in RECORDS if r['source'] == 'BH'))
                  if bh_ok else 'patches.tsv absent'))
    out.write('* **%d records, %d hooks** in total.\n' % (len(RECORDS), len(gm)))
    out.write('* Function check of the %d records in game code: %d reached by recursive descent from the reference '
              'function start, %d inside an entry point the reference did not split off (named `sub_<va>`), %d only '
              'between two reference starts, %d outside any function. %d records target game data (.data %d, .rdata %d).\n'
              % (len(code_recs), fc['flow'], fc['unref'], fc['range'], fc['none'],
                 fc['data(.data)'] + fc['data(.rdata)'], fc['data(.data)'], fc['data(.rdata)']))
    out.write('* Feature assignment: %d hooks by rules, %d by override, %d unmatched (misc).%s\n\n' % (
        fstats['rules'], fstats['override'], fstats['none'],
        (' Unused overrides: ' + ', '.join(sorted(unused_ov))) if unused_ov else ''))
    out.write(counts_tables())
    out.write('\n## D2Win.dll / Storm.dll on-disk verdict\n\n')
    out.write(on_disk_text(V))
    st = V.get('Storm.dll', {})
    out.write('Without vanilla copies this is best-effort. For D2Win the checksum test is strong evidence (another change '
              'would have to compensate exactly to survive it). For Storm the only change found is the import rename; no '
              'code differs from the reference decompile, but the checksum %s after undoing the rename (original name '
              'variants tried: %s), so another byte change outside the code the reference covers (data, resources, '
              'headers) cannot be excluded, nor can a stock file whose stored checksum was never valid.\n\n' % (
                  'matches' if st.get('match') else 'still does not match', ', '.join('`%s`' % v for v in st.get('variants', []))))
    out.write(textwrap.dedent('''\
        ## Notes

        * `rva_113d` is empty for table entries: the tables hold one offset each (1.13c). Only the init-time writes
          (through `{1.13c, 1.13d}` game-pointer pairs; nearly all 1.13d halves are 0) and BH's patches carry 1.13d values.
        * `kind` per record: `call redirect (E8)` = the original instruction already was a `call`, only its target
          changes; `call insertion (E8)` = PD2 writes the `E8` itself (separate 1-byte entry, `opcode byte`);
          `jmp target redirect (E9)` = an existing `jmp` retargeted; `opcode/operand byte change` = a single byte at an
          instruction start / inside an instruction (often part of a multi-byte rewrite written byte by byte, see the
          hook's disassembly); `constant change` = imm32/disp32 operand; `function-pointer swap (table)` = a pointer in
          a game data table (callback/vtable-like tables) replaced by a PD2 function.
        * Integrity/anti-cheat hooks are described only at a high level.
        '''))
    stale = sorted(a for a, r in gp_wrapper.items() if r['kind'] == 'lazy-thunk')
    if stale:   # a table from before the generator fix: such rows still say lazy-thunk
        out.write('* `game_pointers.tsv` lists %d lazy-thunk rows whose address is not the thunk itself but a PD2 wrapper or a '
                  '`jmp` stub that ends in the thunk (%s). This script verifies every thunk by its bytes '
                  '(`cmp dword ptr [cell], 0`) and names those addresses as wrappers.\n' % (
                      len(stale), ', '.join('%s %s' % (h(a), gp_wrapper[a]['pd2_name']) for a in stale)))
    out.write('* %d functions Ghidra merged with the lazy thunk they end in are `wrapper`/`jmp-stub` rows of '
              '`game_pointers.tsv` (%s); the real thunk has its own lazy-thunk row, and this script still checks every '
              'thunk by its bytes (`cmp dword ptr [cell], 0`). E.g. the table hooks that call `0x102cbcd0` reach a PD2 '
              'NULL/range guard in front of D2Game `sub_6fd020a0`, not a plain thunk.\n' % (
                  len(gp_wrapper), ', '.join('%s %s' % (h(a), pd2sym.get(a, ('PD2_%08x' % a,))[0]) for a in sorted(gp_wrapper))))
    out.write('* %d records re-point a call or table entry to a PD2 lazy thunk of the very game function that was already '
              'there (no change on a stock 1.13c install; marked `no-op` in `notes`).\n' % sum(
                  1 for r in RECORDS if 'no-op:' in r['notes']))
    open(f'{OUT}/README.md', 'w', encoding='utf-8').write(out.getvalue())


def iter_zero_rows():
    a = T_MAIN_END
    while struct.unpack('<5I', pd2.read(a, 20)) == (0, 0, 0, 0, 0):
        yield a
        a += 20


def main():
    decode_word_tables()
    decode_block_table()
    decode_init_writes()
    decode_api_sites()
    decode_pd2_ext()
    V = decode_on_disk()
    bh_ok = decode_bh()
    classify()
    detect_noop_thunks()
    asm_context()
    fix_ext_names()
    tree = Pd2Tree(PD2SRC)
    fstats, unused = assign_features(tree)
    finalize_records()
    log('notes applied: %d' % apply_notes())
    write_csv()
    write_hooks(V)
    write_features(V, tree)
    write_cpp(V)
    write_ext_loader()
    write_readme(V, fstats, unused, bh_ok)
    log('records %d hooks %d -> %s' % (len(RECORDS), len(group_map()), OUT))


if __name__ == '__main__':
    main()
