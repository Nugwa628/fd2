#!/usr/bin/env python3
"""fd2 phase 3: stack purge of the game functions ProjectDiablo.dll's lazy thunks jump to.

Reads <tree>/game_pointers.tsv (Fd2Tools pd2-pointers), finds each target in the installed 1.13c DLL
(ordinal -> export address, '+0xOFF' -> image base + offset), disassembles linearly from there with capstone
until the first RET and records its immediate ("ret 8" -> 8 = two stack dwords popped by the callee).
Output TSV (address of the thunk, target VA, purge bytes or '' when no ret was found within the limit,
offset of that ret). Pd2Pointers.cs uses it (optional input) to cross-check reference prototypes and to give
thunks whose target has no reference prototype the right number of stack parameters.
Usage: thunk_purge.py <game_pointers.tsv> <game dir> <out.tsv>
Linear first-RET is a heuristic: it is right for the usual single-epilogue MSVC function; the output says
which instruction it used so doubtful cases can be checked.
"""
import os, sys, struct
import capstone, pefile

DLLS = {}
def load(game_dir, name):
    key = name.lower()
    if key not in DLLS:
        path = next((os.path.join(game_dir, f) for f in os.listdir(game_dir) if f.lower() == key), None)
        DLLS[key] = pefile.PE(path, fast_load=False) if path else None
    return DLLS[key]

def main(tsv, game_dir, out):
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    rows = [l.rstrip('\n').split('\t') for l in open(tsv, encoding='utf-8') if not l.startswith('#')]
    hdr, rows = rows[0], rows[1:]
    ix = {k: i for i, k in enumerate(hdr)}
    res = ['address\ttarget_va\tpurge\tret_offset\tinstruction']
    for r in rows:
        if r[ix['kind']] != 'lazy-thunk':
            continue
        pe = load(game_dir, r[ix['dll']])
        v = r[ix['1.13c']]
        if pe is None or not v:
            continue
        base = pe.OPTIONAL_HEADER.ImageBase
        if v.startswith('ordinal'):
            ordn = int(v.split()[1])
            exp = next((e for e in pe.DIRECTORY_ENTRY_EXPORT.symbols if e.ordinal == ordn), None)
            if exp is None:
                continue
            rva = exp.address
        else:
            rva = int(v[1:], 16)
        try:
            code = pe.get_data(rva, 0x3000)
        except Exception:
            continue
        purge, at, ins = '', '', ''
        for i in md.disasm(code, base + rva):
            if i.mnemonic == 'ret':
                purge = str(int(i.op_str, 16) if i.op_str else 0)
                at, ins = hex(i.address - base - rva), (i.mnemonic + ' ' + i.op_str).strip()
                break
            if i.mnemonic == 'jmp' and i.address == base + rva:
                ins = 'jmp ' + i.op_str     # import thunk / jump stub: no own epilogue
                break
        res.append('\t'.join([r[ix['address']], hex(base + rva), purge, at, ins]))
    with open(out, 'w', encoding='utf-8') as f:
        f.write('\n'.join(res) + '\n')
    print('thunk_purge: %d thunks, %d with a ret found' % (len(res) - 1, sum(1 for x in res[1:] if x.split('\t')[2] != '')))

if __name__ == '__main__':
    main(*sys.argv[1:4])
