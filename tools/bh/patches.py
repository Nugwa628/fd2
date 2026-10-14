#!/usr/bin/env python3
"""Build BH's in-game patch table: shipped binary (Phase 2 BH_patches.tsv) joined with the
upstream source definitions (`new Patch(...)`) and the 1.13c game symbols.

usage: patches.py <BH_patches.tsv> <upstream repo> <commit> <sigmaRE 5_game_source dir> <BH.dll> <out.tsv>
"""
import csv, os, re, struct, subprocess, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from bhbin import PE  # noqa: E402

DLL_ENUM = ['D2CLIENT', 'D2COMMON', 'D2GFX', 'D2LANG', 'D2WIN', 'D2NET', 'D2GAME', 'D2LAUNCH', 'FOG',
            'BNCLIENT', 'STORM', 'D2CMP', 'D2MULTI', 'D2MCPCLIENT', 'D2SOUND']
MODDIR = {'D2CLIENT': 'D2Client', 'D2COMMON': 'D2Common', 'D2GFX': 'D2gfx', 'D2LANG': 'D2Lang', 'D2WIN': 'D2Win',
          'D2NET': 'D2Net', 'D2GAME': 'D2Game', 'D2LAUNCH': 'D2Launch', 'FOG': 'Fog', 'BNCLIENT': 'Bnclient',
          'STORM': 'Storm', 'D2CMP': 'D2CMP', 'D2MULTI': 'D2Multi', 'D2MCPCLIENT': 'D2MCPClient', 'D2SOUND': 'D2sound'}
KIND = {'0xe8': 'Call', '0xe9': 'Jump', '0x90': 'NOP', '0x6a': 'Push'}
PAT = re.compile(r'(?:(\w[\w:]*)\s*=\s*)?new\s+Patch\(\s*(\w+)\s*,\s*(\w+)\s*,\s*\{\s*(0x[0-9A-Fa-f]+)\s*(?:,\s*(0x[0-9A-Fa-f]+)\s*)?\}\s*,\s*(?:\(int\))?\s*([\w:]+)\s*,\s*([^;]+?)\)\s*[,;]')


def git(repo, *a):
    return subprocess.run(['git', '-C', repo] + list(a), check=True, capture_output=True).stdout.decode('utf-8', 'replace')


def source_patches(repo, commit):
    out = []
    for f in git(repo, 'ls-tree', '-r', '--name-only', commit).split('\n'):
        if not f.endswith(('.cpp', '.h')):
            continue
        for i, line in enumerate(git(repo, 'show', f'{commit}:{f}').split('\n'), 1):
            s = line.strip()
            m = PAT.search(s)
            if not m:
                continue
            out.append(dict(var=m.group(1) or '(BH::patches[])', kind=m.group(2), dll=m.group(3),
                            c=int(m.group(4), 16), d=int(m.group(5), 16) if m.group(5) else 0,
                            handler=m.group(6), length=eval(m.group(7).replace('(int)', '')),
                            src=f'{f}:{i}', commented=s.startswith('//')))
    return out


def load_symbols(root):
    syms = {}
    for d in os.listdir(root):
        p = os.path.join(root, d, 'symbols.csv')
        if os.path.exists(p):
            rows = sorted((int(r['address'], 16), r['new_name'], r['file']) for r in csv.DictReader(open(p)))
            syms[d] = rows
    return syms


def lookup(rows, va):
    i = bisect.bisect_right([r[0] for r in rows], va) - 1
    return rows[i] if i >= 0 else None


def main():
    tsv, repo, commit, symroot, dll, out = sys.argv[1:7]
    pe = PE(dll)
    bin_rows = list(csv.DictReader(open(tsv), delimiter='\t'))
    src = source_patches(repo, commit)
    syms = load_symbols(symroot)
    used = set()
    res = []
    for s in src:
        if s['commented']:
            continue
        match = None
        for i, b in enumerate(bin_rows):
            if DLL_ENUM[int(b['dll'], 16)] == s['dll'] and int(b['off_113c'], 16) == s['c']:
                match = (i, b); break
        if match:
            used.add(match[0]); b = match[1]
            same = (int(b['off_113d'], 16) == s['d'] and int(b['len']) == s['length']
                    and KIND[b['op']] == s['kind'])
            res.append((s, b, 'identical' if same else 'changed'))
        else:
            # Phase 2 only exported E8/E9 patches; look for the offset immediate in the binary
            hits = [pe.va(m.start()) for m in re.finditer(re.escape(struct.pack('<I', s['c'])), pe.d)]
            hits = [h for h in hits if h and 0x10001000 <= h < 0x100d0000]
            b = {'dll': hex(DLL_ENUM.index(s['dll'])), 'op': {'Call': '0xe8', 'Jump': '0xe9', 'NOP': '0x90', 'Push': '0x6a'}[s['kind']],
                 'off_113c': hex(s['c']), 'off_113d': hex(s['d']), 'len': str(s['length']), 'function': '0' if s['kind'] == 'NOP' else '?',
                 'defined_in': 'imm@' + ','.join(hex(h) for h in hits) if hits else 'NOT FOUND'}
            res.append((s, b, 'identical (offset immediate found)' if hits else 'removed?'))
    for i, b in enumerate(bin_rows):
        if i not in used:
            res.append((None, b, 'binary-only'))
    with open(out, 'w', newline='') as fo:
        w = csv.writer(fo, delimiter='\t', lineterminator='\n')
        w.writerow(['bh_var', 'kind', 'bh_dll_enum', 'module', 'rva_113c', 'va_113c', 'game_function_113c', 'game_file',
                    'rva_113d', 'length', 'bh_handler', 'bh_handler_va', 'bh_patch_initializer', 'upstream_def', 'status_vs_upstream'])
        for s, b, st in res:
            dname = DLL_ENUM[int(b['dll'], 16)]
            mod = MODDIR[dname]
            rows = syms.get(mod, [])
            base = (rows[0][0] & 0xffff0000) if rows else 0
            rva = int(b['off_113c'], 16)
            va = base + rva
            g = lookup(rows, va) if rows else None
            gname = f"{g[1]}+{va - g[0]:#x}" if g else ''
            hva = b['function'].replace('&LAB_', '0x').replace('FUN_', '0x')
            w.writerow([s['var'] if s else '', KIND.get(b['op'], b['op']), dname, mod + '.dll', f'{rva:#x}', f'{va:#x}', gname,
                        g[2] if g else '', b['off_113d'], b['len'], s['handler'] if s else '', hva,
                        b['defined_in'], s['src'] if s else '', st])
    print(len(res), 'patches ->', out)


if __name__ == '__main__':
    main()
