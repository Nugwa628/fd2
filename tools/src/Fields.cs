// Extracts D2 txt field-descriptor lists that D2Sigma.dll builds in static initializers:
//   sub esp,N ; mov [esp+..],imm32 ... ; mov ecx,<vector global> ; call 10042bd0 (vector(begin,end))
// Each descriptor is { char* name; int type; int size; int offset; int link } (20 bytes).
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class FieldDef { public string Name; public uint NamePtr; public int Type, Size, Offset, Link; }
public class FieldList { public uint Func, Vector; public List<FieldDef> Fields = new List<FieldDef>(); public string Error; }

public static class FieldExtractor
{
    public static uint VectorCtor = 0x10042bd0;   // D2Sigma's std::vector<FieldDef>(begin,end); fd2: settable (fields --vector-ctor)

    public static List<FieldList> Extract(Pe pe, uint[] funcStarts)
    {
        var res = new List<FieldList>();
        var text = pe.Sections.First(s => s.Name == ".text");
        int start = (int)text.Raw, end = (int)(text.Raw + text.RawSize);
        var d = pe.Data;
        for (int i = start; i + 5 <= end; i++)
        {
            if (d[i] != 0xE8) continue;
            uint va = pe.Va(i);
            uint target = (uint)(va + 5 + BitConverter.ToInt32(d, i + 1));
            if (target != VectorCtor) continue;
            // walk back to function start: previous int3 padding / ret
            int idx = Array.BinarySearch(funcStarts, va);
            if (idx < 0) idx = ~idx - 1;
            if (idx < 0) continue;
            var fl = Emulate(pe, pe.Off(funcStarts[idx]), i);
            if (fl != null) res.Add(fl);
        }
        return res;
    }

    static FieldList Emulate(Pe pe, int p, int callAt)
    {
        var d = pe.Data;
        var fl = new FieldList { Func = pe.Va(p) };
        var mem = new Dictionary<int, uint>();      // original-esp offset -> value
        var reg = new uint?[8];
        int delta = 0;                              // bytes pushed since frame setup
        while (p < callAt)
        {
            byte b = d[p];
            if (b == 0xE8 || b == 0xC3 || (b == 0x83 && d[p + 1] == 0xC4) || (b == 0x81 && d[p + 1] == 0xC4) || b == 0xCC)
            {   // another initializer ended here: start over
                p += b == 0xE8 ? 5 : (b == 0x83 ? 3 : (b == 0x81 ? 6 : 1));
                mem.Clear(); delta = 0; reg = new uint?[8]; fl.Vector = 0; fl.Func = pe.Va(p);
                continue;
            }
            if (b == 0x83 && d[p + 1] == 0xEC) { p += 3; continue; }                     // sub esp,ib
            if (b == 0x81 && d[p + 1] == 0xEC) { p += 6; continue; }                     // sub esp,id
            if (b >= 0x50 && b <= 0x57) { delta += 4; p += 1; continue; }                // push reg
            if (b == 0x6A) { delta += 4; p += 2; continue; }                             // push ib
            if (b == 0x68) { delta += 4; p += 5; continue; }                             // push id
            if (b >= 0xB8 && b <= 0xBF)                                                  // mov reg,imm32
            {
                uint v = BitConverter.ToUInt32(d, p + 1);
                if (b == 0xB9) fl.Vector = v;
                reg[b - 0xB8] = v; p += 5; continue;
            }
            if ((b == 0x33 || b == 0x31) && (d[p + 1] >> 6) == 3 && ((d[p + 1] >> 3) & 7) == (d[p + 1] & 7))
            { reg[d[p + 1] & 7] = 0; p += 2; continue; }                                 // xor r,r
            if (b == 0xC7 && d[p + 1] == 0x44 && d[p + 2] == 0x24)                       // mov [esp+ib],imm32
            { mem[d[p + 3] - delta] = BitConverter.ToUInt32(d, p + 4); p += 8; continue; }
            if (b == 0xC7 && d[p + 1] == 0x84 && d[p + 2] == 0x24)                       // mov [esp+id],imm32
            { mem[BitConverter.ToInt32(d, p + 3) - delta] = BitConverter.ToUInt32(d, p + 7); p += 11; continue; }
            if (b == 0xC7 && d[p + 1] == 0x04 && d[p + 2] == 0x24)                       // mov [esp],imm32
            { mem[-delta] = BitConverter.ToUInt32(d, p + 3); p += 7; continue; }
            if (b == 0x89 && d[p + 2] == 0x24 && (d[p + 1] & 0xC7) == 0x44)              // mov [esp+ib],reg
            { int r = (d[p + 1] >> 3) & 7; if (reg[r].HasValue) mem[d[p + 3] - delta] = reg[r].Value; p += 4; continue; }
            if (b == 0x89 && d[p + 2] == 0x24 && (d[p + 1] & 0xC7) == 0x84)              // mov [esp+id],reg
            { int r = (d[p + 1] >> 3) & 7; if (reg[r].HasValue) mem[BitConverter.ToInt32(d, p + 3) - delta] = reg[r].Value; p += 7; continue; }
            if (b == 0x89 && d[p + 2] == 0x24 && (d[p + 1] & 0xC7) == 0x04)              // mov [esp],reg
            { int r = (d[p + 1] >> 3) & 7; if (reg[r].HasValue) mem[-delta] = reg[r].Value; p += 3; continue; }
            if (b == 0x8D && d[p + 2] == 0x24 && (d[p + 1] & 0xC7) == 0x44) { reg[(d[p + 1] >> 3) & 7] = null; p += 4; continue; } // lea r,[esp+ib]
            if (b == 0x8D && d[p + 2] == 0x24 && (d[p + 1] & 0xC7) == 0x84) { reg[(d[p + 1] >> 3) & 7] = null; p += 7; continue; } // lea r,[esp+id]
            if (b == 0xA1) { reg[0] = null; p += 5; continue; }                                         // mov eax,[m32]
            if (b == 0x8B && (d[p + 1] & 0xC7) == 0x05) { reg[(d[p + 1] >> 3) & 7] = null; p += 6; continue; } // mov r,[m32]
            if (b == 0x8B && (d[p + 1] >> 6) == 3) { reg[(d[p + 1] >> 3) & 7] = reg[d[p + 1] & 7]; p += 2; continue; } // mov r,r
            fl.Error = string.Format("unhandled opcode {0:x2} {1:x2} at {2:x8}", b, d[p + 1], pe.Va(p));
            break;
        }
        if (fl.Vector == 0 && fl.Error == null) fl.Error = "no mov ecx,vector";
        if (mem.Count == 0) return fl;
        // descriptors: find the lowest offset that holds a name pointer, then read 20-byte records
        int baseOff = mem.Keys.Where(k => pe.CStr(mem[k]) != null).DefaultIfEmpty(int.MaxValue).Min();
        if (baseOff == int.MaxValue) { fl.Error = (fl.Error ?? "") + " no name pointers"; return fl; }
        for (int o = baseOff; ; o += 20)
        {
            uint np; if (!mem.TryGetValue(o, out np)) break;
            var fd = new FieldDef { NamePtr = np, Name = pe.CStr(np) };
            uint v;
            fd.Type = mem.TryGetValue(o + 4, out v) ? (int)v : 0;
            fd.Size = mem.TryGetValue(o + 8, out v) ? (int)v : 0;
            fd.Offset = mem.TryGetValue(o + 12, out v) ? (int)v : 0;
            fd.Link = mem.TryGetValue(o + 16, out v) ? (int)v : 0;
            if (fd.Name == null) break;
            if (fd.Type == 0 && fd.Offset == 0 && fd.Size == 0 && fd.Name == "end") break;
            fl.Fields.Add(fd);
        }
        return fl;
    }
}
