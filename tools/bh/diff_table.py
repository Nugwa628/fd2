#!/usr/bin/env python3
"""Render the per-file DIFF.md table from func_map.py outputs.

usage: diff_table.py <files.tsv> <func_map.tsv> <verdicts.tsv> > table.md
verdicts.tsv: file<TAB>class<TAB>verdict<TAB>evidence   (hand-written classification; files not
listed get "identical-or-equivalent" with the anchor evidence only)
"""
import csv, sys
from collections import defaultdict

files = list(csv.DictReader(open(sys.argv[1]), delimiter='\t'))
fmap = list(csv.DictReader(open(sys.argv[2]), delimiter='\t'))
verd = {}
for r in csv.reader(open(sys.argv[3]), delimiter='\t'):
    if r and not r[0].startswith('#'):
        verd[r[0]] = r[1:]
anchors = defaultdict(list)
for r in fmap:
    if r['status'] == 'matched' and r['function'] != '<static>':
        top = r['binary_functions(top3 name@va:literal_hits)'].split(',')[0]
        name, _, rest = top.rpartition('@')
        va = rest.split(':')[0]
        anchors[r['file']].append(f"{r['function']}→{va}")
    elif r['status'] == 'matched':
        top = r['binary_functions(top3 name@va:literal_hits)'].split(',')[0]
        anchors[r['file']].append(f"static init→{top.rpartition('@')[2].split(':')[0]} ({r['in_binary']} lit.)")
print('| Upstream file | Class(es) | Verdict | Src funcs | Lit.-anchored / matched | Binary anchors (source fn → shipped VA) | Evidence |')
print('|---|---|---|---:|---:|---|---|')
for r in files:
    f = r['file']
    v = verd.get(f, ['', 'identical-or-equivalent', 'all literals/constants present'])
    a = anchors.get(f, [])
    at = '; '.join(a[:4]) + (f' (+{len(a) - 4})' if len(a) > 4 else '')
    print(f"| `{f}` | {v[0]} | {v[1]} | {r['functions']} | {r['with_literals']} / {r['matched']} | {at} | {v[2] if len(v) > 2 else ''} |")
