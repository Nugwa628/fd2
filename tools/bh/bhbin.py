#!/usr/bin/env python3
"""Small static helpers for a PE32 DLL (used for the BH.dll diff).

usage:
  bhbin.py <dll> va <file_off>            file offset -> VA
  bhbin.py <dll> off <va>                 VA -> file offset
  bhbin.py <dll> xref <va> [...]          code locations whose instruction bytes contain the 4-byte VA
  bhbin.py <dll> str <text> [--wide]      VAs of a NUL-terminated string (ASCII/UTF-8 or UTF-16LE)
  bhbin.py <dll> sxref <text> [--wide]    string -> VAs -> code xrefs (with containing function guess)
  bhbin.py <dll> dis <va_start> <va_end>  disassemble a range
"""
import struct, sys, re


class PE:
    def __init__(self, path):
        self.d = d = open(path, 'rb').read()
        pe = struct.unpack_from('<I', d, 0x3c)[0]
        ns = struct.unpack_from('<H', d, pe + 6)[0]
        opt = struct.unpack_from('<H', d, pe + 20)[0]
        self.base = struct.unpack_from('<I', d, pe + 24 + 28)[0]
        sec = pe + 24 + opt
        self.secs = []
        for i in range(ns):
            name, vs, va, rs, rp = struct.unpack_from('<8sIIII', d, sec + 40 * i)
            self.secs.append((name.rstrip(b'\0').decode(), vs, va, rs, rp))

    def va(self, off):
        for n, vs, va, rs, rp in self.secs:
            if rp <= off < rp + rs:
                return self.base + va + off - rp
        return None

    def off(self, v):
        for n, vs, va, rs, rp in self.secs:
            if self.base + va <= v < self.base + va + max(vs, rs):
                return rp + v - self.base - va
        return None

    def text(self):
        for n, vs, va, rs, rp in self.secs:
            if n == '.text':
                return rp, rs, self.base + va

    def find_string(self, s, wide=False):
        pat = (s.encode('utf-16le') + b'\0\0') if wide else (s.encode('utf-8') + b'\0')
        res, i = [], self.d.find(pat)
        while i >= 0:
            res.append(self.va(i)); i = self.d.find(pat, i + 1)
        return res

    def xrefs(self, v):
        rp, rs, tva = self.text()
        pat = struct.pack('<I', v)
        res, i = [], self.d.find(pat, rp, rp + rs)
        while i >= 0:
            res.append(tva + i - rp); i = self.d.find(pat, i + 1, rp + rs)
        return res

    def func_start(self, v, maxback=0x4000):
        """Heuristic: walk back to the previous int3/ret padding followed by an aligned start."""
        o = self.off(v)
        for k in range(o, max(o - maxback, 0), -1):
            if self.d[k - 1] in (0xcc, 0xc3) and self.d[k - 2] in (0xcc, 0xc3, 0x00, 0xc2) and k % 16 == 0:
                return self.va(k)
        return None

    def dis(self, a, b):
        import capstone
        md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        o = self.off(a)
        return [f"{i.address:08x}: {i.bytes.hex():<20} {i.mnemonic} {i.op_str}" for i in md.disasm(self.d[o:o + (b - a)], a)]


def main():
    p = PE(sys.argv[1]); cmd = sys.argv[2]; args = sys.argv[3:]
    wide = '--wide' in args; args = [a for a in args if a != '--wide']
    if cmd == 'va': print(hex(p.va(int(args[0], 16))))
    elif cmd == 'off': print(hex(p.off(int(args[0], 16))))
    elif cmd == 'xref':
        for a in args: print(a, [hex(x) for x in p.xrefs(int(a, 16))])
    elif cmd == 'str': print([hex(x) for x in p.find_string(args[0], wide)])
    elif cmd == 'sxref':
        for v in p.find_string(args[0], wide):
            for x in p.xrefs(v):
                fs = p.func_start(x)
                print(f"str {v:#x} <- {x:#x} (func ~{fs:#x})" if fs else f"str {v:#x} <- {x:#x}")
    elif cmd == 'dis': print('\n'.join(p.dis(int(args[0], 16), int(args[1], 16))))


if __name__ == '__main__':
    main()
