#!/usr/bin/env python3
"""Score which commits of a D2GL git repo a shipped glide3x.dll contains.

Usage: d2gl_commit_match.py <git repo> <glide3x.dll> <base rev> [<head rev>]

For every commit in base..head (first-parent order) the string literals that the
commit ADDS (and removes) in d2gl/src are extracted and looked up in the binary's
ASCII and UTF-16LE strings. A commit whose added literals are present (and whose
removed literals are absent) is most likely compiled into the binary.
"""
import re, subprocess, sys

def git(repo, *a):
    return subprocess.run(["git", "-C", repo, *a], capture_output=True, text=True, errors="replace", check=True).stdout

def bin_strings(path):
    data = open(path, "rb").read()
    out = set(m.group().decode() for m in re.finditer(rb"[\x20-\x7e]{4,}", data))
    out |= set(m.group().decode("utf-16le") for m in re.finditer(rb"(?:[\x20-\x7e]\x00){4,}", data))
    return "\n".join(out)

LIT = re.compile(r'(?<![A-Za-z0-9_])[uUL]?8?"((?:[^"\\]|\\.){4,})"')

def lits(lines):
    s = set()
    for l in lines:
        if l.lstrip().startswith(("//", "#include")): continue
        for m in LIT.finditer(l):
            v = m.group(1)
            if "\\" in v or "%" in v: v = re.split(r"\\.|%[-0-9.]*[a-z]", v)[0]  # keep a plain prefix
            if len(v) >= 5: s.add(v)
    return s

def main():
    repo, dll, base = sys.argv[1:4]
    head = sys.argv[4] if len(sys.argv) > 4 else "HEAD"
    hay = bin_strings(dll)
    commits = git(repo, "log", "--reverse", "--no-merges", "--format=%h %ad %s", "--date=short", f"{base}..{head}").splitlines()
    print(f"{'commit':8} {'date':10} {'+found/+lits':>12} {'-gone/-lits':>11}  subject")
    for c in commits:
        h = c.split()[0]
        diff = git(repo, "show", "--format=", "--unified=0", h, "--", "d2gl/src", ":(exclude)d2gl/src/shaders").splitlines()
        add = lits(l[1:] for l in diff if l.startswith("+") and not l.startswith("+++"))
        rem = lits(l[1:] for l in diff if l.startswith("-") and not l.startswith("---")) - add
        fa = [x for x in add if x in hay]
        gr = [x for x in rem if x not in hay]
        missing = sorted(set(add) - set(fa))[:3]
        h_, d_, subj = c.split(" ", 2)
        print(f"{h_:8} {d_:10} {len(fa):>5}/{len(add):<6} {len(gr):>5}/{len(rem):<5} {subj[:50]}" + (f"  MISSING: {missing}" if missing else ""))

if __name__ == "__main__":
    if len(sys.argv) < 4: sys.exit(__doc__)
    main()
