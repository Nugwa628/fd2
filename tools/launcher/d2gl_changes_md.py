#!/usr/bin/env python3
"""Generate the tables of 4_pd2_source/D2GL/CHANGES.md from a clone of Project-Diablo-2/d2gl
(with upstream tags fetched).  Usage: d2gl_changes_md.py <repo> <base> <build-commit> [<head>]"""
import subprocess, sys
URL = "https://github.com/Project-Diablo-2/d2gl"
def git(r, *a): return subprocess.run(["git", "-C", r, *a], capture_output=True, text=True, check=True).stdout
def main():
    repo, base, build = sys.argv[1:4]; head = sys.argv[4] if len(sys.argv) > 4 else "HEAD"
    full = git(repo, "rev-parse", build).strip()
    print(f"## Net diff per file: `{base}..{build[:7]}`\n")
    print("| File | + | − | Link (fork@build) |\n|---|---:|---:|---|")
    for l in git(repo, "diff", "--numstat", base, build).splitlines():
        a, d, p = l.split("\t")
        print(f"| `{p}` | {a} | {d} | [{p.split('/')[-1]}]({URL}/blob/{full}/{p}) |")
    print(f"\n## Commits `{base}..{head}` (non-merge, oldest first)\n")
    print("| Commit | Date | Author | Subject | Files (vendor excluded) | In shipped DLL |\n|---|---|---|---|---|---|")
    inbuild = set(git(repo, "rev-list", build).split())
    log = git(repo, "log", "--reverse", "--no-merges", "--format=%x00%H|%ad|%an|%s", "--date=short",
              "--name-only", f"{base}..{head}", "--", ".", ":(exclude)d2gl/vendor")
    for rec in log.split("\x00")[1:]:
        lines = [x for x in rec.splitlines() if x.strip()]
        h, date, an, subj = lines[0].split("|", 3)
        files = ", ".join(f.replace("d2gl/src/", "") for f in lines[1:]) or "(vendor only)"
        subj = subj.replace("|", "\\|")
        print(f"| [{h[:7]}]({URL}/commit/{h}) | {date} | {an} | {subj} | {files} | {'yes' if h in inbuild else 'no'} |")
if __name__ == "__main__":
    if len(sys.argv) < 4: sys.exit(__doc__)
    main()
