#!/usr/bin/env python3
"""Counts Ghidra's untraced placeholders in an export (or a generated tree), the way the sigmaRE READMEs count them.

declarations = one per function per distinct name (in_*, unaff_*, extraout_*, in_stack_*); uses = all occurrences.
Also reports call sites of functions listed in an optional game_pointers.tsv that pass no arguments, which is the
"lost arguments" symptom of a void(void) thunk.
Usage: count_placeholders.py <file.c|tree dir> [...] [--pointers game_pointers.tsv]
"""
import os, re, sys
PH = re.compile(r'\b(in_stack_[0-9a-f]{8}|in_[A-Z][A-Za-z0-9_]*|unaff_\w+|extraout_\w+)\b')
HDR = re.compile(r'^(?://==== .* @ ([0-9a-f]{8})|// 0x([0-9a-f]{8})  .*)$')

def files(args):
    for a in args:
        if os.path.isdir(a):
            for d, _, fs in os.walk(a):
                for f in fs:
                    if f.endswith('.cpp'): yield os.path.join(d, f)
        else: yield a

def main(argv):
    ptr = None
    if '--pointers' in argv:
        i = argv.index('--pointers'); ptr = argv[i + 1]; argv = argv[:i] + argv[i + 2:]
    thunks = {}
    if ptr:
        rows = [l.rstrip('\n').split('\t') for l in open(ptr, encoding='utf-8') if not l.startswith('#')]
        ix = {k: i for i, k in enumerate(rows[0])}
        for r in rows[1:]:
            if r[ix['kind']] == 'lazy-thunk':
                a = r[ix['address']][2:]
                thunks['FUN_' + a] = a; thunks[r[ix['pd2_name']]] = a
    decl = uses = funcs = 0; noarg = calls = 0
    callrx = re.compile(r'\b(' + '|'.join(map(re.escape, sorted(thunks, key=len, reverse=True))) + r')\s*\((\s*)\)') if thunks else None
    anyrx = re.compile(r'\b(' + '|'.join(map(re.escape, sorted(thunks, key=len, reverse=True))) + r')\s*\(') if thunks else None
    for fn in files(argv):
        names, cur = set(), None
        def flush():
            nonlocal decl
            decl += len(names)
        for l in open(fn, encoding='utf-8', errors='replace'):
            if HDR.match(l.rstrip('\n')):
                flush(); names = set(); funcs += 1; cur = l; continue
            for m in PH.finditer(l):
                names.add(m.group(1)); uses += 1
            if callrx and not re.match(r'^\S', l):
                calls += len(anyrx.findall(l)); noarg += len(callrx.findall(l))
        flush()
    print('functions %d; placeholder declarations %d; uses %d' % (funcs, decl, uses) +
          ('; calls to lazy thunks %d, of which with no arguments %d' % (calls, noarg) if thunks else ''))

if __name__ == '__main__':
    main(sys.argv[1:])
