#!/usr/bin/env python3
r"""Decode a Diablo II string table (.tbl) to text.

usage: python3 -I tbl2txt.py <in.tbl> <out.txt> [--encoding latin-1]

Output: one line per entry in the table's index order, 'key<TAB>value', UTF-8, CRLF
(same style as sigmaRE 2_txt/strings). Inside key and value, backslash, tab, CR and LF are
written as \\, \t, \r, \n. Bytes are decoded with --encoding (default latin-1: lossless for
the 1-byte Western tables; use cp1250 for pol, cp949 for kor, big5 for chi, shift_jis for jpn).

Format (D2 1.0x-1.14): header u16 crc, u16 nElements, u32 hashSize, u8 version, u32 dataStart,
u32 maxTries, u32 fileSize; u16 index[nElements]; hashSize nodes of 17 bytes
(u8 used, u16 index, u32 hash, u32 keyOffset, u32 strOffset, u16 strLen); then the string data.
"""
import struct
import sys

HDR = struct.Struct("<HHIBIII")
NODE = struct.Struct("<BHIIIH")


def esc(s):
    return s.replace("\\", "\\\\").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n")


def cstr(data, off):
    end = data.index(b"\0", off)
    return data[off:end]


def decode(data, enc):
    crc, n, hsize, ver, start, tries, fsize = HDR.unpack_from(data, 0)
    idx = struct.unpack_from("<%dH" % n, data, HDR.size)
    base = HDR.size + 2 * n
    rows = []
    for i in idx:
        used, eidx, h, koff, soff, slen = NODE.unpack_from(data, base + NODE.size * i)
        key = cstr(data, koff).decode(enc, "replace")
        val = cstr(data, soff).decode(enc, "replace")
        rows.append((key, val))
    return {"crc": crc, "count": n, "hashsize": hsize, "version": ver, "filesize": fsize}, rows


def main(argv):
    if len(argv) < 2:
        sys.exit(__doc__)
    enc = "latin-1"
    if "--encoding" in argv:
        enc = argv[argv.index("--encoding") + 1]
    data = open(argv[0], "rb").read()
    hdr, rows = decode(data, enc)
    with open(argv[1], "w", encoding="utf-8", newline="\r\n") as fh:
        for k, v in rows:
            fh.write("%s\t%s\n" % (esc(k), esc(v)))
    print("%s: %d strings (hash %d, version %d, crc %04x)" % (argv[0], len(rows), hdr["hashsize"], hdr["version"], hdr["crc"]))


if __name__ == "__main__":
    main(sys.argv[1:])
