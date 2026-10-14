// Minimal PE32 reader for D2Sigma.dll: VA <-> file offset, strings, pointer scans.
// fd2 port: unchanged apart from the header fields below (used by `Fd2Tools info`); the path is always a parameter.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

public class PeSection { public string Name; public uint Va, VSize, Raw, RawSize; }

public class Pe
{
    public byte[] Data;
    public uint ImageBase;
    public ushort Machine;          // 0x14c = i386
    public uint TimeDateStamp;
    public List<PeSection> Sections = new List<PeSection>();

    public Pe(string path)
    {
        Data = File.ReadAllBytes(path);
        int pe = BitConverter.ToInt32(Data, 0x3c);
        int nsec = BitConverter.ToUInt16(Data, pe + 6);
        int optSize = BitConverter.ToUInt16(Data, pe + 20);
        if (Data.Length < 0x40 || Data[0] != 'M' || Data[1] != 'Z' || BitConverter.ToUInt32(Data, pe) != 0x4550) throw new InvalidDataException(path + " is not a PE file");
        Machine = BitConverter.ToUInt16(Data, pe + 4);
        TimeDateStamp = BitConverter.ToUInt32(Data, pe + 8);
        int opt = pe + 24;
        ImageBase = BitConverter.ToUInt32(Data, opt + 28);
        int sec = opt + optSize;
        for (int i = 0; i < nsec; i++, sec += 40)
        {
            var s = new PeSection();
            s.Name = Encoding.ASCII.GetString(Data, sec, 8).TrimEnd('\0');
            s.VSize = BitConverter.ToUInt32(Data, sec + 8);
            s.Va = BitConverter.ToUInt32(Data, sec + 12) + ImageBase;
            s.RawSize = BitConverter.ToUInt32(Data, sec + 16);
            s.Raw = BitConverter.ToUInt32(Data, sec + 20);
            Sections.Add(s);
        }
    }

    public int Off(uint va)
    {
        foreach (var s in Sections)
            if (va >= s.Va && va < s.Va + Math.Max(s.VSize, s.RawSize))
            {
                uint d = va - s.Va;
                if (d >= s.RawSize) return -1; // in .bss
                return (int)(s.Raw + d);
            }
        return -1;
    }

    public uint Va(int off)
    {
        foreach (var s in Sections)
            if (off >= s.Raw && off < s.Raw + s.RawSize) return s.Va + (uint)(off - s.Raw);
        return 0;
    }

    int DirRva(int idx)
    {
        int pe = BitConverter.ToInt32(Data, 0x3c);
        return BitConverter.ToInt32(Data, pe + 24 + 96 + idx * 8);
    }

    // ordinal -> {va, name or null}
    public Dictionary<int, KeyValuePair<uint, string>> Exports()
    {
        var res = new Dictionary<int, KeyValuePair<uint, string>>();
        int rva = DirRva(0); if (rva == 0) return res;
        uint dir = ImageBase + (uint)rva;
        int baseOrd = (int)U32(dir + 16);
        int nFuncs = (int)U32(dir + 20), nNames = (int)U32(dir + 24);
        uint funcs = ImageBase + U32(dir + 28), names = ImageBase + U32(dir + 32), ords = ImageBase + U32(dir + 36);
        var nameOf = new Dictionary<int, string>();
        for (int i = 0; i < nNames; i++)
        {
            int o = Off(ords + (uint)(i * 2)); if (o < 0) continue;
            int idx = BitConverter.ToUInt16(Data, o);
            nameOf[idx] = CStr(ImageBase + U32(names + (uint)(i * 4)), 256);
        }
        for (int i = 0; i < nFuncs; i++)
        {
            uint f = U32(funcs + (uint)(i * 4)); if (f == 0) continue;
            string n; nameOf.TryGetValue(i, out n);
            res[baseOrd + i] = new KeyValuePair<uint, string>(ImageBase + f, n);
        }
        return res;
    }

    // fd2: ordinal -> "dll.Name" for exports that are PE forwarders (their RVA points into the export directory)
    public Dictionary<int, string> Forwarders()
    {
        var res = new Dictionary<int, string>();
        int rva = DirRva(0); if (rva == 0) return res;
        int pe = BitConverter.ToInt32(Data, 0x3c);
        uint size = BitConverter.ToUInt32(Data, pe + 24 + 96 + 4);
        uint lo = ImageBase + (uint)rva, hi = lo + size;
        foreach (var kv in Exports())
            if (kv.Value.Key >= lo && kv.Value.Key < hi) res[kv.Key] = CStr(kv.Value.Key, 256);
        return res;
    }

    // fd2: true when the address lies inside one of the image's sections
    public bool InImage(uint va) { return Sections.Any(s => va >= s.Va && va < s.Va + Math.Max(s.VSize, s.RawSize)); }

    public class Import { public string Dll; public int Ordinal = -1; public string Name; public uint IatVa; }

    public List<Import> Imports()
    {
        var res = new List<Import>();
        int rva = DirRva(1); if (rva == 0) return res;
        for (uint d = ImageBase + (uint)rva; ; d += 20)
        {
            uint ilt = U32(d), nameRva = U32(d + 12), iat = U32(d + 16);
            if (nameRva == 0) break;
            string dll = CStr(ImageBase + nameRva, 256);
            uint thunk = ImageBase + (ilt != 0 ? ilt : iat);
            for (uint k = 0; ; k++)
            {
                uint v = U32(thunk + k * 4);
                if (v == 0) break;
                var im = new Import { Dll = dll, IatVa = ImageBase + iat + k * 4 };
                if ((v & 0x80000000) != 0) im.Ordinal = (int)(v & 0xffff);
                else im.Name = CStr(ImageBase + v + 2, 256);
                res.Add(im);
            }
        }
        return res;
    }

    public bool IsMapped(uint va) { return Off(va) >= 0; }
    public uint U32(uint va) { int o = Off(va); return o < 0 ? 0 : BitConverter.ToUInt32(Data, o); }

    public string CStr(uint va, int max = 128)
    {
        int o = Off(va); if (o < 0) return null;
        var sb = new StringBuilder();
        for (int i = 0; i < max && o + i < Data.Length; i++)
        {
            byte b = Data[o + i];
            if (b == 0) return sb.ToString();
            if (b < 0x20 || b > 0x7e) return null;
            sb.Append((char)b);
        }
        return null;
    }

    public List<uint> FindAscii(string s)
    {
        var res = new List<uint>();
        var pat = Encoding.ASCII.GetBytes(s + "\0");
        for (int i = 1; i + pat.Length <= Data.Length; i++)
        {
            if (Data[i] != pat[0] || Data[i - 1] != 0) continue;
            bool ok = true;
            for (int k = 1; k < pat.Length; k++) if (Data[i + k] != pat[k]) { ok = false; break; }
            if (ok) res.Add(Va(i));
        }
        return res;
    }

    public List<uint> FindPtr(uint target)
    {
        var res = new List<uint>();
        for (int i = 0; i + 4 <= Data.Length; i += 1)
            if (BitConverter.ToUInt32(Data, i) == target) { uint v = Va(i); if (v != 0) res.Add(v); }
        return res;
    }
}
