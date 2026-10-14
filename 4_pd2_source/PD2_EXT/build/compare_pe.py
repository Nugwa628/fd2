#!/usr/bin/env python3
"""Compare the export table (names, ordinals, forwarders, DLL name) and imports of a built PD2_EXT.dll with the
shipped one.  Usage: compare_pe.py <shipped PD2_EXT.dll> <built.dll> [...]   (needs pefile)"""
import sys
import pefile


def info(path):
    pe = pefile.PE(path)
    ex = pe.DIRECTORY_ENTRY_EXPORT
    exports = sorted((s.ordinal, (s.name or b'').decode(), (s.forwarder or b'').decode()) for s in ex.symbols)
    imports = {e.dll.decode().lower(): sorted((i.name or b'').decode() for i in e.imports)
               for e in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', [])}
    return dict(machine=hex(pe.FILE_HEADER.Machine), dll_name=pe.get_string_at_rva(ex.struct.Name).decode(),
                base=ex.struct.Base, exports=exports, imports=imports, size=len(pe.__data__),
                dllchar=hex(pe.OPTIONAL_HEADER.DllCharacteristics), sections=[s.Name.rstrip(b'\0').decode() for s in pe.sections])


ref = info(sys.argv[1])
rc = 0
for p in sys.argv[2:]:
    b = info(p)
    same = b['exports'] == ref['exports']
    rc |= not same
    print(f'== {p}')
    print(f"  machine {b['machine']} (shipped {ref['machine']}), size {b['size']} (shipped {ref['size']}), "
          f"DllCharacteristics {b['dllchar']} (shipped {ref['dllchar']}), sections {b['sections']}")
    print(f"  export DLL name {b['dll_name']!r} (shipped {ref['dll_name']!r}), ordinal base {b['base']} (shipped {ref['base']})")
    print(f"  exports (ordinal, name, forwarder) identical: {same} ({len(b['exports'])} vs {len(ref['exports'])})")
    for x in sorted(set(b['exports']) ^ set(ref['exports'])):
        print('    differs:', x, 'built' if x in b['exports'] else 'shipped')
    print('  imports:', {k: len(v) for k, v in b['imports'].items()}, ' shipped:', {k: len(v) for k, v in ref['imports'].items()})
sys.exit(rc)
