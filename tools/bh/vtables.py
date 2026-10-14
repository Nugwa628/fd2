#!/usr/bin/env python3
"""Compare Module-subclass vtables of the shipped BH.dll with the upstream headers.

For every Module subclass vftable (addresses from the Phase-2 RTTI report), each of the 18 slots
is compared with the base `Module` vftable: a different target means the class overrides that
handler. The upstream header of the class (BH/Modules/<Name>/<Name>.h at <commit>) is parsed for the
handlers it declares. Mismatches are reported (an override that is an empty function may be
folded into the base no-op by /OPT:ICF, so "declared, not overridden in binary" needs a look).

usage: vtables.py <rtti report> <BH.dll> <repo> <commit> <out.tsv>
"""
import re, struct, subprocess, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from bhbin import PE  # noqa: E402

SLOTS = ['~Module', 'OnLoad', 'OnUnload', 'LoadConfig', 'OnLoop', 'OnGameJoin', 'OnGameExit', 'OnDraw', 'OnAutomapDraw',
         'OnOOGDraw', 'OnLeftClick', 'OnRightClick', 'OnKey', 'OnChatPacketRecv', 'OnRealmPacketRecv', 'OnGamePacketRecv',
         'OnUserInput', 'OnChatMsg']
HDR = {'ScreenInfo': 'BH/Modules/ScreenInfo/ScreenInfo.h'}


def main():
    rep, dll, repo, commit, out = sys.argv[1:6]
    pe = PE(dll)
    vt = {}
    for line in open(rep):
        m = re.match(r'VFTABLE (\w+) (\S+) slots=18', line)
        if m:
            vt[m.group(2)] = int(m.group(1), 16)
    base = struct.unpack_from('<18I', pe.d, pe.off(vt['Module']))
    with open(out, 'w') as fo:
        fo.write('class\tvftable\tslot\thandler\tbinary_target\toverridden_in_binary\tdeclared_upstream\tagree\n')
        for cls, va in sorted(vt.items()):
            if cls == 'Module':
                continue
            slots = struct.unpack_from('<18I', pe.d, pe.off(va))
            h = HDR.get(cls, f'BH/Modules/{cls}/{cls}.h')
            try:
                src = subprocess.run(['git', '-C', repo, 'show', f'{commit}:{h}'], capture_output=True, check=True).stdout.decode('utf-8', 'replace')
            except subprocess.CalledProcessError:
                src = ''
            src = re.sub(r'//.*', '', src)
            for i, name in enumerate(SLOTS):
                ov = slots[i] != base[i]
                if i == 0:
                    decl = True; ov = True
                else:
                    decl = re.search(r'\b%s\s*\(' % name, src) is not None
                fo.write(f"{cls}\t{va:#x}\t{i}\t{name}\t{slots[i]:#x}\t{int(ov)}\t{int(decl)}\t{'yes' if ov == decl else 'NO'}\n")


if __name__ == '__main__':
    main()
