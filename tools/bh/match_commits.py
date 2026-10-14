#!/usr/bin/env python3
"""Score commits of an upstream BH git repo against a shipped BH.dll by string literals.

For every candidate commit, all C/C++ string literals (len >= MINLEN) in the source tree
are extracted and looked up in the binary's ASCII and UTF-16LE strings. Literals that are
*added* or *removed* between consecutive commits are the discriminating evidence: a commit
whose added literals are all present in the binary (and whose removed literals are absent)
is included in the build.

usage: match_commits.py <repo> <BH.dll> <out.tsv> [--since YYYY-MM-DD] [--until YYYY-MM-DD]
                        [--rev main] [--subdir BH] [--literals-out DIR]
"""
import argparse, os, re, subprocess, sys

MINLEN = 5
LIT_RE = re.compile(r'(L|u8|u|U)?"((?:[^"\\\n]|\\.)*)"')
ESC = {'n': '\n', 't': '\t', 'r': '\r', '0': '\0', '\\': '\\', '"': '"', "'": "'", 'a': '\a', 'b': '\b', 'f': '\f', 'v': '\v'}


def unescape(s):
    out, i = [], 0
    while i < len(s):
        c = s[i]
        if c == '\\' and i + 1 < len(s):
            n = s[i + 1]
            if n == 'x':
                m = re.match(r'[0-9a-fA-F]+', s[i + 2:])
                if m:
                    out.append(chr(int(m.group(0), 16) & 0xff)); i += 2 + len(m.group(0)); continue
            if n in ESC:
                out.append(ESC[n]); i += 2; continue
            out.append(n); i += 2; continue
        out.append(c); i += 1
    return ''.join(out)


def strip_comments(src):
    # remove // and /* */ comments but keep string literals
    res, i, n = [], 0, len(src)
    while i < n:
        if src.startswith('//', i):
            j = src.find('\n', i); i = n if j < 0 else j
        elif src.startswith('/*', i):
            j = src.find('*/', i + 2); i = n if j < 0 else j + 2
        elif src[i] == '"':
            j = i + 1
            while j < n and src[j] != '"' and src[j] != '\n':
                j += 2 if src[j] == '\\' else 1
            res.append(src[i:j + 1]); i = j + 1
        elif src[i] == "'":
            j = i + 1
            while j < n and src[j] != "'" and src[j] != '\n':
                j += 2 if src[j] == '\\' else 1
            res.append(src[i:j + 1]); i = j + 1
        else:
            res.append(src[i]); i += 1
    return ''.join(res)


def literals_of(text):
    lits = set()
    text = '\n'.join(l for l in strip_comments(text).split('\n')
                     if not re.match(r'\ufeff?\s*#\s*(include|pragma|error|warning)', l))
    for m in LIT_RE.finditer(text):
        s = unescape(m.group(2))
        # split on format specifiers / newlines: compilers keep the whole literal, but
        # adjacent-literal concatenation and %-formatting make fragments more robust
        if len(s) >= MINLEN:
            lits.add(((m.group(1) or '') == 'L', s))
    return lits


def binary_strings(path):
    """Exact NUL-terminated strings: ASCII/cp1252 (bytes 0x09-0x0d, 0x20-0xff) and UTF-16LE."""
    data = open(path, 'rb').read()
    asc = set(m.decode('latin1') for m in re.findall(rb'[\x09-\x0d\x20-\xff]{3,}(?=\x00)', data))
    wide = set()
    for m in re.finditer(rb'(?:[\x09-\x0d\x20-\xff]\x00){3,}(?=\x00\x00)', data):
        for off in (0,):
            wide.add(m.group(0).decode('utf-16le'))
    # also odd-aligned wide strings
    for m in re.finditer(rb'(?:[\x09-\x0d\x20-\xff]\x00){3,}\x00', data[1:]):
        wide.add(m.group(0)[:-1].decode('utf-16le', 'replace'))
    return asc, wide


def git(repo, *args):
    return subprocess.run(['git', '-C', repo] + list(args), check=True, capture_output=True).stdout


def tree_literals(repo, commit, subdir):
    files = git(repo, 'ls-tree', '-r', '--name-only', commit, '--', subdir).decode().split('\n')
    lits = {}
    for f in files:
        if not re.search(r'\.(c|cpp|h|hpp)$', f) or 'ThirdParty' in f or 'lrucache' in f:
            continue
        txt = git(repo, 'show', f'{commit}:{f}').decode('utf-8', 'replace')
        for l in literals_of(txt):
            lits.setdefault(l, f)
    return lits


def present(lit, asc, wide):
    """Exact match of the whole literal; a literal can also be the tail of a longer string
    (MSVC string pooling / suffix merging), which is accepted."""
    w, s = lit
    if not w:
        # MSVC without /utf-8 copies the UTF-8 source bytes of narrow literals verbatim
        s = s.encode('utf-8').decode('latin1')
    if any(ord(c) > 0xff for c in s):
        return None
    if w:
        return s in wide or any(x.endswith(s) for x in wide)
    return s in asc or any(x.endswith(s) for x in asc)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('repo'); ap.add_argument('dll'); ap.add_argument('out')
    ap.add_argument('--since', default='2025-12-01'); ap.add_argument('--until', default='2026-10-31')
    ap.add_argument('--rev', default='main'); ap.add_argument('--subdir', default='BH')
    ap.add_argument('--literals-out')
    a = ap.parse_args()
    asc, wide = binary_strings(a.dll)
    commits = git(a.repo, 'log', '--reverse', '--format=%H %cI %s', f'--since={a.since}', f'--until={a.until}', a.rev).decode().strip().split('\n')
    prev = None
    rows = []
    for line in commits:
        h, date, subj = line.split(' ', 2)
        lits = tree_literals(a.repo, h, a.subdir)
        res = {l: present(l, asc, wide) for l in lits}
        tested = [l for l in res if res[l] is not None]
        hit = sum(1 for l in tested if res[l])
        added = removed = add_hit = rem_hit = 0
        add_list, rem_list = [], []
        if prev is not None:
            for l in lits.keys() - prev.keys():
                if res[l] is None: continue
                added += 1; add_hit += bool(res[l]); add_list.append((res[l], l))
            for l in prev.keys() - lits.keys():
                r = present(l, asc, wide)
                if r is None: continue
                removed += 1; rem_hit += bool(r); rem_list.append((r, l))
        rows.append((h[:10], date, len(tested), hit, len(tested) - hit, added, add_hit, removed, rem_hit, subj))
        if a.literals_out:
            os.makedirs(a.literals_out, exist_ok=True)
            with open(os.path.join(a.literals_out, h[:10] + '.txt'), 'w') as fo:
                for r, l in sorted(add_list, key=lambda x: x[1]):
                    fo.write(f"ADD\t{'IN_BIN' if r else 'missing'}\t{l[1]!r}\n")
                for r, l in sorted(rem_list, key=lambda x: x[1]):
                    fo.write(f"DEL\t{'IN_BIN' if r else 'missing'}\t{l[1]!r}\n")
                for l in sorted(lits, key=lambda x: x[1]):
                    if res[l] is False:
                        fo.write(f"MISSING\t{lits[l]}\t{l[1]!r}\n")
        prev = lits
        print(*rows[-1], sep='\t', file=sys.stderr)
    with open(a.out, 'w') as fo:
        fo.write('commit\tdate\tliterals\tin_binary\tmissing\tadded\tadded_in_bin\tremoved\tremoved_in_bin\tsubject\n')
        for r in rows:
            fo.write('\t'.join(map(str, r)) + '\n')


if __name__ == '__main__':
    main()
