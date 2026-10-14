#!/usr/bin/env python3
"""Extract files from a .NET single-file (apphost) bundle.

Usage: extract_bundle.py <bundle.exe> <out_dir>
Writes every bundled file under out_dir and prints a manifest (offset/size/type/path).
Static parsing only; the executable is never run.
"""
import struct, sys, os, zlib

SIG = bytes([0x8b, 0x12, 0x02, 0xb9, 0x6a, 0x61, 0x20, 0x38,
             0x72, 0x7b, 0x93, 0x02, 0x14, 0xd7, 0xa0, 0x32])
TYPES = {0: "Unknown", 1: "Assembly", 2: "NativeBinary", 3: "DepsJson",
         4: "RuntimeConfigJson", 5: "Symbols"}

def rstr(b, p):
    n = 0; shift = 0
    while True:
        c = b[p]; p += 1
        n |= (c & 0x7f) << shift; shift += 7
        if not c & 0x80: break
    return b[p:p+n].decode("utf-8"), p + n

def main(path, out):
    b = open(path, "rb").read()
    i = b.find(SIG)
    if i < 8: sys.exit("bundle signature not found")
    hdr = struct.unpack_from("<q", b, i - 8)[0]
    if hdr == 0: sys.exit("not a bundle (header offset 0)")
    major, minor, count = struct.unpack_from("<IIi", b, hdr); p = hdr + 12
    bid, p = rstr(b, p)
    flags = 0
    if major >= 2:
        _, _, _, _, flags = struct.unpack_from("<qqqqQ", b, p); p += 40
    print(f"# bundle v{major}.{minor} id={bid} files={count} flags=0x{flags:x}")
    for _ in range(count):
        off, size = struct.unpack_from("<qq", b, p); p += 16
        csize = 0
        if major >= 6:
            csize = struct.unpack_from("<q", b, p)[0]; p += 8
        typ = b[p]; p += 1
        name, p = rstr(b, p)
        if csize:
            data = zlib.decompress(b[off:off+csize], -15)
        else:
            data = b[off:off+size]
        assert len(data) == size, name
        dst = os.path.join(out, name.replace("\\", "/"))
        os.makedirs(os.path.dirname(dst) or out, exist_ok=True)
        open(dst, "wb").write(data)
        print(f"{off:10d} {size:10d} {csize:10d} {TYPES.get(typ, typ):18s} {name}")

if __name__ == "__main__":
    if len(sys.argv) != 3: sys.exit(__doc__)
    main(sys.argv[1], sys.argv[2])
