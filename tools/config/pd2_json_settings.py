#!/usr/bin/env python3
"""Extract the ProjectDiablo.json schema from the reconstructed ProjectDiablo.dll source.

usage: pd2_json_settings.py <ProjectDiablo src dir> <ProjectDiablo.dll> [shipped ProjectDiablo.json]

Method (see 6_config/ProjectDiablo.json.md):
  * the loader body 0x1023b445 reads every key as  sub_1020f990(tmp,"<key>"); sub_10239630(tmp,"<json pointer>");
    then  DAT_x = sub_10239b20()  (int), CONCAT11(...sub_10239c10()) (bool) or sub_1023e1c0(&DAT_x, sub_10239ce0()) (string)
  * int settings are {value, default, min, max} (4 x int32), bools {value, default} (2 bytes), strings
    {std::string value, std::string default}; the defaults are written by the static initializer 0x102ac5e0
    and its helpers, which this script evaluates (dword stores and string constructors).
  * consumers: every function in the tree that names the global (DAT_/uRam/&DAT_) of a key.
Prints TSV: pointer, key, type, global, value, default, min, max, in_shipped, consumers
"""
import os, re, sys, json

def funcs_of(path):
    """yield (addr, name, start_line, lines) for each function in a generated .cpp"""
    hdr = re.compile(r'^// (0x[0-9a-f]{8})\s+(\(ghidra:|\[)')
    cur = None
    for i, line in enumerate(open(path, encoding='utf-8', errors='replace'), 1):
        m = hdr.match(line)
        if m:
            if cur: yield cur
            cur = [m.group(1), None, i, []]
            continue
        if cur is None: continue
        if cur[1] is None and line.strip() and not line.startswith(('/*', '//')):
            s = re.search(r'([A-Za-z_@][A-Za-z0-9_@]*)\s*\(', line)
            if s and s.group(1) not in ('if', 'while', 'for', 'switch', 'return'): cur[1] = s.group(1)
        cur[3].append(line)
    if cur: yield cur

def find_func(src, addr):
    for root, _, files in os.walk(src):
        for fn in files:
            if not fn.endswith('.cpp'): continue
            p = os.path.join(root, fn)
            with open(p, encoding='utf-8', errors='replace') as f:
                if f'// {addr}  ' not in f.read(): continue
            for a, name, ln, lines in funcs_of(p):
                if a == addr: return os.path.relpath(p, src), name, ln, lines
    raise SystemExit(f'function {addr} not found')

SYMS = {}

def load_symbols(src):
    import csv
    path = os.path.join(src, 'symbols.csv')
    if os.path.exists(path):
        for r in csv.reader(open(path, encoding='utf-8')):
            if r and r[0].startswith('0x'):
                SYMS[r[0]] = (r[2], r[3])

def main():
    src, dll = sys.argv[1], sys.argv[2]
    load_symbols(src)
    shipped = json.load(open(sys.argv[3])) if len(sys.argv) > 3 else None
    # 1) loader
    _, _, _, lines = find_func(src, '0x1023b445')
    entries = []; key = ptr = None
    for l in lines:
        m = re.search(r'sub_1020f990\(\w+,"([^"]+)"\)', l)
        if m: key = m.group(1); continue
        m = re.search(r'sub_10239630\(\w+,"([^"]+)"', l)
        if m: ptr = m.group(1); continue
        if key is None: continue
        m = re.search(r'(DAT_[0-9a-f]{8}) = sub_10239b20\(\)', l)
        if m: entries.append((ptr, key, 'int', int(m.group(1)[4:], 16))); key = None; continue
        m = re.search(r'(DAT_[0-9a-f]{8}) = CONCAT11', l)
        if m: entries.append((ptr, key, 'bool', int(m.group(1)[4:], 16))); key = None; continue
        m = re.search(r'sub_1023e1c0\(&(DAT_[0-9a-f]{8})', l)
        if m: entries.append((ptr, key, 'string', int(m.group(1)[4:], 16))); key = None; continue
    # 2) defaults: evaluate the static initializer and helpers into a byte map
    mem = {}; strs = {}
    def st32(a, v):
        for i in range(4): mem[a + i] = (v >> (8 * i)) & 0xff
    _, _, _, init = find_func(src, '0x102ac5e0')
    helpers = {}
    for l in init:
        m = re.search(r'(?:DAT|uRam)_?([0-9a-f]{8}) = (0x[0-9a-f]+|\d+);', l)
        if m: st32(int(m.group(1), 16), int(m.group(2), 0)); continue
        m = re.search(r'sub_1020f990\(&DAT_([0-9a-f]{8}),"([^"]*)"\)', l)
        if m: strs[int(m.group(1), 16)] = m.group(2); continue
        m = re.search(r'(sub_[0-9a-f]{8})\(\([^)]*\)&DAT_([0-9a-f]{8})\)|(sub_[0-9a-f]{8})\(&DAT_([0-9a-f]{8})\)', l)
        if m:
            fn = m.group(1) or m.group(3); base = int(m.group(2) or m.group(4), 16)
            helpers[fn] = base
    for fn, base in helpers.items():
        _, _, _, hl = find_func(src, '0x' + fn[4:])
        for l in hl:
            m = re.search(r'\*param_1 = (0x[0-9a-f]+|\d+);', l)
            if m: st32(base, int(m.group(1), 0)); continue
            m = re.search(r'param_1\[(0x[0-9a-f]+|\d+)\] = (0x[0-9a-f]+|\d+);', l)
            if m: st32(base + 4 * int(m.group(1), 0), int(m.group(2), 0)); continue
            m = re.search(r'sub_1020f990\(param_1 \+ (0x[0-9a-f]+|\d+),"([^"]*)"\)', l)
            if m: strs[base + 4 * int(m.group(1), 0)] = m.group(2)
    def rd32(a):
        if a not in mem: return None
        v = sum(mem.get(a + i, 0) << (8 * i) for i in range(4))
        return v - (1 << 32) if v & 0x80000000 else v
    # 3) consumers
    names = {e[3]: e for e in entries}
    pat = re.compile(r'(?:DAT|uRam)_?(104e2[0-9a-f]{3})')
    cons = {a: set() for a in names}
    skip = {'0x1023b445', '0x10239e00', '0x102ac5e0'}
    for root, _, files in os.walk(src):
        for fn in files:
            if not fn.endswith('.cpp'): continue
            p = os.path.join(root, fn)
            txt = open(p, encoding='utf-8', errors='replace').read()
            if '104e2' not in txt: continue
            for a, name, ln, lines in funcs_of(p):
                if a in skip: continue
                hits = set(int(h, 16) for h in pat.findall(''.join(lines)))
                nm = SYMS.get(a, (name or '?', ''))[0]
                for h in hits & set(cons):
                    cons[h].add(f'{nm}@{a}')
    def shipped_has(ptr, key):
        if shipped is None: return ''
        o = shipped
        for part in ptr.strip('/').split('/'):
            o = o.get(part, {}) if isinstance(o, dict) else {}
        return 'yes' if key in o else 'no'
    print('pointer\tkey\ttype\tglobal\tinit_value\tdefault\tmin\tmax\tin_shipped\tconsumers')
    for ptr, key, typ, a in entries:
        if typ == 'int':
            v = [rd32(a + 4 * i) for i in range(4)]
        elif typ == 'bool':
            v = [mem.get(a), mem.get(a + 1), 0, 1]
        else:
            v = [strs.get(a), strs.get(a + 0x18), '', '']
        allc = sorted(cons[a]); c = [x for x in allc if not x.startswith('sub_Settings_')]
        cs = ', '.join(c[:8]) + (f' (+{len(c)-8} more)' if len(c) > 8 else '')
        cs += f' [+{len(allc)-len(c)} sub_Settings_* save copies]'
        print(f'{ptr}\t{key}\t{typ}\t0x{a:08x}\t' + '\t'.join('' if x is None else str(x) for x in v) + f'\t{shipped_has(ptr,key)}\t{cs}')

if __name__ == '__main__':
    main()
