#!/usr/bin/env python3
"""Compare the D2 pointer table (D2Ptrs.h FUNCPTR/VARPTR/ASMPTR {1.13c, 1.13d} offset pairs)
of an upstream commit with the `Offsets` pairs stored in the shipped BH.dll's .data.

Each macro instance owns a `static Offsets {_113c, _113d}` (8 bytes). The pairs are searched in
.data; the contiguous run of found pairs gives the table range, and every 8-byte slot of that
range that is not an upstream pair is reported as binary-only.

usage: d2ptrs.py <repo> <commit> <BH.dll> <out.tsv>
"""
import os, re, struct, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from bhbin import PE  # noqa: E402

MAC = re.compile(r'^\s*(//)?\s*(FUNCPTR|VARPTR|ASMPTR)\(\s*(\w+)\s*,\s*(\w+)\s*,(.*)\)\s*;?\s*(//.*)?$')


def num(s):
    s = s.strip()
    return int(s, 0) if s.lstrip('-').startswith('0x') else int(s)


def main():
    repo, commit, dll, out = sys.argv[1:5]
    src = subprocess.run(['git', '-C', repo, 'show', f'{commit}:BH/D2Ptrs.h'], capture_output=True, check=True).stdout.decode('utf-8', 'replace')
    entries = []
    for i, line in enumerate(src.split('\n'), 1):
        m = MAC.match(line)
        if not m or line.lstrip().startswith('#define'):
            continue
        args = m.group(5).rsplit(',', 2)
        try:
            c, d = num(args[-2]), num(args[-1])
        except (ValueError, IndexError):
            try:
                c, d = num(args[-1]), 0
            except ValueError:
                continue
        entries.append(dict(line=i, commented=bool(m.group(1)), kind=m.group(2), dll=m.group(3), name=m.group(4), c=c, d=d))
    pe = PE(dll)
    data = [s for s in pe.secs if s[0] == '.data'][0]
    _, vs, va, rs, rp = data
    seg = pe.d[rp:rp + rs]
    hits = {}
    for e in entries:
        pat = struct.pack('<ii', e['c'], e['d'])
        locs = [pe.base + va + m.start() for m in re.finditer(re.escape(pat), seg) if m.start() % 4 == 0]
        e['va'] = locs
        for l in locs:
            hits[l] = e
    rows = []
    for e in entries:
        st = ('in binary' if e['va'] else ('commented (absent)' if e['commented'] else 'absent (unused -> /OPT:REF, or removed)'))
        if e['commented'] and e['va']:
            st = 'commented upstream but PRESENT in binary'
        rows.append((e['line'], e['kind'], e['dll'], e['name'], f"{e['c']:#x}" if e['c'] >= 0 else str(e['c']),
                     f"{e['d']:#x}" if e['d'] >= 0 else str(e['d']), ','.join(hex(x) for x in e['va']), st))
    # slots in the table range not explained by upstream
    extra = []
    if hits:
        lo, hi = min(hits), max(hits)
        a = lo
        while a <= hi:
            if a not in hits and (a - 4) not in hits:
                c, d = struct.unpack_from('<ii', pe.d, pe.off(a))
                # an Offsets pair looks like two module RVAs/ordinals (non-zero, < 0x200000 or ordinal -10xxx)
                ok = lambda x: (0 < x < 0x200000) or (-12000 < x < -9999)
                if ok(c) and (ok(d) or d == 0):
                    extra.append((a, c, d))
            a += 4
    with open(out, 'w') as fo:
        fo.write('src_line\tkind\tdll\tname\toff_113c\toff_113d\tbinary_va\tstatus\n')
        for r in rows:
            fo.write('\t'.join(map(str, r)) + '\n')
        for a, c, d in extra:
            fo.write(f"\t?\t?\t?\t{c:#x}\t{d:#x}\t{a:#x}\tbinary-only candidate (pair-shaped slot in the Offsets table range)\n")
    n_in = sum(1 for e in entries if e['va'])
    print(f"{len(entries)} macros, {n_in} pairs found, {sum(1 for e in entries if not e['va'] and not e['commented'])} active absent, "
          f"{len(extra)} pair-shaped unexplained slots; range {min(hits):#x}-{max(hits):#x}" if hits else 'no hits')


if __name__ == '__main__':
    main()
