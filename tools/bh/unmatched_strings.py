#!/usr/bin/env python3
"""List strings of a BH.dll that do not come from any string literal of an upstream source tree.

Every NUL-terminated ASCII/UTF-8 and UTF-16LE string (len >= 4) in .rdata/.data is compared with
the literals of <repo>@<commit> (all files, including ThirdParty). A binary string is "covered"
if it equals a literal, is a suffix of one (MSVC tail merging), or a literal is a substring of it
(adjacent literal concatenation / macros). Uncovered strings are printed with VA and code xrefs;
these are the candidates for binary-only (private PD2) additions.

usage: unmatched_strings.py <repo> <commit> <BH.dll> <out.tsv> [--min 4]
"""
import argparse, os, re, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from bhbin import PE  # noqa: E402
from match_commits import literals_of, unescape  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('repo'); ap.add_argument('commit'); ap.add_argument('dll'); ap.add_argument('out')
    ap.add_argument('--min', type=int, default=4)
    a = ap.parse_args()
    files = subprocess.run(['git', '-C', a.repo, 'ls-tree', '-r', '--name-only', a.commit], check=True,
                           capture_output=True, text=True).stdout.split('\n')
    lits = set()
    for f in files:
        if not re.search(r'\.(c|cpp|h|hpp|inl)$', f):
            continue
        t = subprocess.run(['git', '-C', a.repo, 'show', f'{a.commit}:{f}'], capture_output=True).stdout.decode('utf-8', 'replace')
        for w, s in literals_of(t):
            lits.add(s)
        # short literals too (>=4)
        for m in re.finditer(r'"((?:[^"\\\n]|\\.)*)"', t):
            if len(m.group(1)) >= 4:
                lits.add(unescape(m.group(1)))
    litlist = list(lits)
    pe = PE(a.dll)
    rows = []
    for name, vs, va, rs, rp in pe.secs:
        if name not in ('.rdata', '.data'):
            continue
        seg = pe.d[rp:rp + rs]
        found = []
        for m in re.finditer(rb'[\x09-\x0d\x20-\xff]{%d,}\x00' % a.min, seg):
            try:
                found.append((rp + m.start(), m.group(0)[:-1].decode('utf-8'), 'a'))
            except UnicodeDecodeError:
                found.append((rp + m.start(), m.group(0)[:-1].decode('latin1'), 'a'))
        for m in re.finditer(rb'(?:[\x09-\x0d\x20-\x7e\xff]\x00){%d,}\x00\x00' % a.min, seg):
            if (m.start()) % 2 == 0:
                found.append((rp + m.start(), m.group(0)[:-2].decode('utf-16le'), 'w'))
        for off, s, kind in found:
            if s in lits or any(l.endswith(s) or (len(l) >= 6 and l in s) for l in litlist):
                continue
            v = pe.va(off)
            xr = pe.xrefs(v)
            rows.append((v, kind, s, xr))
    with open(a.out, 'w') as fo:
        fo.write('va\tkind\txrefs\tstring\n')
        for v, k, s, xr in sorted(rows):
            fo.write(f"{v:#x}\t{k}\t{','.join(hex(x) for x in xr[:4])}\t{s!r}\n")
    print(len(rows), 'uncovered strings ->', a.out)


if __name__ == '__main__':
    main()
