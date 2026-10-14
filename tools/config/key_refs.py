#!/usr/bin/env python3
"""Index string-literal references in a reconstructed source tree by enclosing function.

usage: key_refs.py <src_dir> <key> [<key> ...]      (or --keys-file FILE, one key per line)
Prints TSV: key, file:line, function address, function name.
Functions are recognised by the generator's header comment `// 0x<addr>  (ghidra: ...)`
followed by the signature line containing the function name.
"""
import os, re, sys

def main():
    args = sys.argv[1:]
    if len(args) < 2:
        print(__doc__); sys.exit(1)
    src = args[0]; keys = args[1:]
    if keys[0] == '--keys-file':
        keys = [l.strip() for l in open(keys[1], encoding='utf-8') if l.strip()]
    pats = {k: re.compile(r'"' + re.escape(k) + r'"') for k in keys}
    hdr = re.compile(r'^// (0x[0-9a-f]{8})\s+\(ghidra:')
    sig = re.compile(r'([A-Za-z_][A-Za-z0-9_]*)\s*\(')
    for root, _, files in os.walk(src):
        for fn in sorted(files):
            if not fn.endswith(('.cpp', '.c', '.h')): continue
            path = os.path.join(root, fn)
            addr = name = '?'; want_sig = False
            with open(path, encoding='utf-8', errors='replace') as f:
                for ln, line in enumerate(f, 1):
                    m = hdr.match(line)
                    if m:
                        addr, name, want_sig = m.group(1), '?', True; continue
                    if want_sig and line.strip() and not line.startswith(('/*', '//')):
                        s = sig.search(line)
                        if s: name = s.group(1); want_sig = False
                    if '"' not in line: continue
                    for k, p in pats.items():
                        if p.search(line):
                            print(f"{k}\t{os.path.relpath(path, src)}:{ln}\t{addr}\t{name}")

if __name__ == '__main__':
    main()
