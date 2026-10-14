#!/usr/bin/env python3
"""Map upstream BH source functions to shipped-binary functions by string-literal anchors.

* Source side: every function definition of <repo>@<commit> (light brace parser, comments
  stripped) with the string literals in its body. Literals outside functions (tables, static
  initialisers) go to "<file>::<static>".
* Binary side: function starts from the Ghidra exports (`//==== <name> @ <addr>` headers of
  BH_decompiled.c and .extra.c); each string literal is located in the DLL (UTF-8 narrow or
  UTF-16LE wide, exact NUL-terminated match), and its code xrefs (absolute 32-bit operands) are
  attributed to the containing binary function.
* A source function is "matched" to the binary function(s) that reference most of its literals.

usage: func_map.py <repo> <commit> <BH.dll> <ghidra .c> [<ghidra .extra.c> ...] --out <tsv> [--files-out <tsv>]
"""
import argparse, bisect, os, re, struct, subprocess, sys
from collections import Counter, defaultdict
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from bhbin import PE  # noqa: E402
from match_commits import strip_comments, unescape  # noqa: E402

LIT = re.compile(r'(L|u8|u|U)?(R)?"((?:[^"\\\n]|\\.)*)"')
RAW = re.compile(r'(L|u8)?R"([^(\s]*)\((.*?)\)\2"', re.S)
KEYWORDS = {'if', 'for', 'while', 'switch', 'catch', 'return', 'sizeof', 'else', 'do', 'try', '__asm', 'defined'}


def functions_of(text):
    """Yield (name, body_text) for function definitions; plus ('<static>', rest)."""
    t = strip_comments(text)
    t = '\n'.join('' if re.match(r'﻿?\s*#', l) else l for l in t.split('\n'))
    # blank out string contents so braces inside literals do not count
    mask = list(t)
    for m in RAW.finditer(t):
        for k in range(m.start(), m.end()):
            mask[k] = ' ' if t[k] not in '\n' else '\n'
    tm = ''.join(mask)
    for m in LIT.finditer(tm):
        for k in range(m.start(), m.end()):
            mask[k] = ' '
    for m in re.finditer(r"'(?:[^'\\\n]|\\.)'", tm):
        for k in range(m.start(), m.end()):
            mask[k] = ' '
    tm = ''.join(mask)
    funcs, stack, last_stmt = [], [], 0
    static_spans = []
    i, n = 0, len(tm)
    in_func_depth = None
    func_start = None
    func_name = None
    while i < n:
        c = tm[i]
        if c == '{':
            header = tm[last_stmt:i]
            kind = 'other'
            if in_func_depth is None:
                h = re.sub(r'\s+', ' ', re.sub(r'__declspec\s*\([^)]*\)', '', header)).strip()
                if re.search(r'\b(class|struct|union|namespace|enum)\b[^()]*$', h) or h.endswith('extern "C"') or h == '' or h.endswith('='):
                    kind = 'scope'
                else:
                    m = re.search(r'([~\w:<>]+(?:operator\s*\S+)?)\s*\([^{}]*\)\s*(?:const|override|noexcept|final|\s)*(?::[^{}]*)?$', h)
                    if m and m.group(1).split('::')[-1] not in KEYWORDS and not h.startswith(('=', ',')):
                        kind = 'func'
                        func_name = m.group(1)
                        in_func_depth = len(stack)
                        func_start = i
            stack.append(kind)
            last_stmt = i + 1
        elif c == '}':
            if stack:
                stack.pop()
            if in_func_depth is not None and len(stack) == in_func_depth:
                funcs.append((func_name, t[func_start:i + 1], func_start, i + 1))
                in_func_depth = None
            last_stmt = i + 1
        elif c == ';' and in_func_depth is None:
            last_stmt = i + 1
        i += 1
    # static: everything outside function bodies
    pos, rest = 0, []
    for _, _, s, e in funcs:
        rest.append(t[pos:s]); pos = e
    rest.append(t[pos:])
    return funcs, '\n'.join(rest)


def literals(body):
    out = set()
    for m in RAW.finditer(body):
        out.add((m.group(1) == 'L', m.group(3)))
    body2 = RAW.sub('', body)
    # adjacent literal concatenation: "a" "b" / L"\xFF" L"c1"
    for m in re.finditer(r'((?:(?:L|u8)?"(?:[^"\\\n]|\\.)*"\s*)+)', body2):
        parts = re.findall(r'(L|u8)?"((?:[^"\\\n]|\\.)*)"', m.group(1))
        wide = any(p[0] == 'L' for p in parts)
        s = ''.join(unescape(p[1]) for p in parts)
        if len(s) >= 3:
            out.add((wide, s))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('repo'); ap.add_argument('commit'); ap.add_argument('dll'); ap.add_argument('ghidra', nargs='+')
    ap.add_argument('--out', required=True); ap.add_argument('--files-out')
    ap.add_argument('--subdir', default='BH')
    a = ap.parse_args()
    pe = PE(a.dll)
    starts, names = [], {}
    for g in a.ghidra:
        for m in re.finditer(r'^//==== (\S+) @ ([0-9a-fA-F]+)', open(g, errors='replace').read(), re.M):
            v = int(m.group(2), 16); names[v] = m.group(1)
    starts = sorted(names)

    def func_of(x):
        i = bisect.bisect_right(starts, x) - 1
        return starts[i] if i >= 0 else None

    rp, rs, tva = pe.text()
    text = pe.d[rp:rp + rs]
    xref_cache = {}

    def lit_funcs(wide, s):
        key = (wide, s)
        if key in xref_cache:
            return xref_cache[key]
        if wide:
            if any(ord(ch) > 0xffff for ch in s):
                xref_cache[key] = None; return None
            pat = s.encode('utf-16le') + b'\0\0'
        else:
            pat = s.encode('utf-8') + b'\0'
        vas = []
        k = pe.d.find(pat)
        while k >= 0:
            if (not wide or k % 2 == 0):
                prev = pe.d[k - 2:k] if wide else pe.d[k - 1:k]
                if prev in (b'\0\0', b'\0') or True:
                    vas.append(pe.va(k))
            k = pe.d.find(pat, k + 1)
        if not vas:
            xref_cache[key] = None; return None
        fs = Counter()
        for v in vas:
            if v is None:
                continue
            p4 = struct.pack('<I', v)
            j = text.find(p4)
            while j >= 0:
                f = func_of(tva + j)
                if f:
                    fs[f] += 1
                j = text.find(p4, j + 1)
        xref_cache[key] = fs
        return fs

    files = subprocess.run(['git', '-C', a.repo, 'ls-tree', '-r', '--name-only', a.commit, '--', a.subdir],
                           capture_output=True, text=True, check=True).stdout.split()
    rows, per_file = [], defaultdict(Counter)
    for f in files:
        if not f.endswith(('.cpp', '.h')) or 'ThirdParty' in f:
            continue
        src = subprocess.run(['git', '-C', a.repo, 'show', f'{a.commit}:{f}'], capture_output=True).stdout.decode('utf-8', 'replace')
        funcs, static = functions_of(src)
        items = [(n, b) for n, b, _, _ in funcs] + [('<static>', static)]
        for name, body in items:
            lits = {l for l in literals(body) if len(l[1]) >= 3}
            if name == '<static>' and not lits:
                continue
            found, absent, inl = Counter(), [], 0
            n_in = 0
            for w, s in lits:
                r = lit_funcs(w, s)
                if r is None:
                    absent.append(s)
                elif not r:
                    inl += 1  # string present, but no direct code xref (table / pooled / data pointer)
                    n_in += 1
                else:
                    n_in += 1
                    for fn in r:
                        found[fn] += 1
            if name != '<static>':
                per_file[f]['functions'] += 1
                per_file[f]['with_literals'] += bool(lits)
            if not lits:
                st = 'no-literal-anchor'
            elif found:
                st = 'matched'
            elif n_in:
                st = 'literals-present-no-direct-xref'
            else:
                st = 'literals-absent'
            if name != '<static>':
                per_file[f][st] += 1
            best = ','.join(f'{names[x]}@{x:#x}:{c}' for x, c in found.most_common(3))
            rows.append((f, name, len(lits), n_in, len(absent), best, st, '|'.join(sorted(absent))[:300]))
    with open(a.out, 'w') as fo:
        fo.write('file\tfunction\tliterals\tin_binary\tabsent\tbinary_functions(top3 name@va:literal_hits)\tstatus\tabsent_literals\n')
        for r in rows:
            fo.write('\t'.join(map(str, r)) + '\n')
    if a.files_out:
        with open(a.files_out, 'w') as fo:
            keys = ['functions', 'with_literals', 'matched', 'literals-present-no-direct-xref', 'literals-absent', 'no-literal-anchor']
            fo.write('file\t' + '\t'.join(keys) + '\n')
            for f in sorted(per_file):
                fo.write(f + '\t' + '\t'.join(str(per_file[f][k]) for k in keys) + '\n')
    tot = Counter()
    for f in per_file:
        tot.update(per_file[f])
    print(dict(tot))


if __name__ == '__main__':
    main()
