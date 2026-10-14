// Turns the extracted field lists into C structs, a layout report, and named .txt dumps of the .bin files.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public class TableInfo
{
    public string Name;          // as registered in D2TxtCompile ("armor2", "cubemainExt", ...)
    public bool Inferred;        // name guessed from columns, not from a registration
    public FieldList List;
}

public static class TableGen
{
    // width in the compiled record for each field type (bit flags handled separately)
    public static int Width(FieldDef f)
    {
        switch (f.Type)
        {
            case 1: return f.Size + 1;
            case 2: case 9: case 11: case 18: case 19: case 23: case 25: return 4;
            case 3: case 15: case 17: case 20: case 22: return 2;
            case 4: case 13: return 1;
            case 26: return 4;
            default: return 4;
        }
    }

    public static string TypeDesc(FieldDef f)
    {
        switch (f.Type)
        {
            case 1: return "string[" + (f.Size + 1) + "]";
            case 2: return "dword";
            case 3: return "word";
            case 4: return "byte";
            case 9: return "4-char code";
            case 11: return "dword (type 11, link " + Hex(f.Link) + ")";
            case 13: return "byte index";
            case 15: return "word index";
            case 17: return "row key";
            case 18: case 19: return "dword index";
            case 20: return "word index";
            case 22: return "tbl string index";
            case 23: return "dword, custom parser";
            case 25: return "dword, custom parser";
            case 26: return "bit " + f.Size;
            default: return "type " + f.Type;
        }
    }

    static string Hex(int v) { return "0x" + v.ToString("x"); }

    public static string Ident(string s)
    {
        s = Regex.Replace(s, @"[^A-Za-z0-9]+", "_").Trim('_');
        if (s.Length == 0 || char.IsDigit(s[0])) s = "_" + s;
        return s;
    }

    // vector global -> table name, from "<vector>... FUN_101361e0/1002af50(x,"name",len)" in the decompiled code
    public static Dictionary<uint, List<string>> PairNames(string decompiled, HashSet<uint> vectors)
    {
        var map = new Dictionary<uint, List<string>>();
        var datRx = new Regex(@"DAT_(101f3[0-9a-f]{3})");
        var nameRx = new Regex(@"FUN_(?:101361e0|1002af50)\((?:[^,""]+,)?""([A-Za-z0-9_]+)""");
        uint last = 0;
        foreach (var line in File.ReadLines(decompiled))
        {
            if (line.StartsWith("//==== ")) { last = 0; continue; }
            foreach (Match m in datRx.Matches(line))
            {
                uint v = Convert.ToUInt32(m.Groups[1].Value, 16);
                if (vectors.Contains(v)) last = v;
            }
            var nm = nameRx.Match(line);
            if (last != 0 && nm.Success)
            {
                List<string> l;
                if (!map.TryGetValue(last, out l)) { l = new List<string>(); map[last] = l; }
                if (!l.Contains(nm.Groups[1].Value)) l.Add(nm.Groups[1].Value);
                last = 0;
            }
        }
        return map;
    }

    public static string Run(string dll, string symbolsCsv, string decompiled, string binDir, string outDir, string txtOutDir)
    {
        var log = new StringBuilder();
        TxtDir = Path.GetDirectoryName(txtOutDir.TrimEnd('\\', '/'));
        var pe = new Pe(dll);
        var starts = File.ReadAllLines(symbolsCsv).Skip(1)
            .Select(l => Convert.ToUInt32(l.Substring(2, 8), 16)).OrderBy(x => x).ToArray();
        var lists = FieldExtractor.Extract(pe, starts).Where(l => l.Vector != 0 && l.Fields.Count > 0).ToList();
        var names = PairNames(decompiled, new HashSet<uint>(lists.Select(l => l.Vector)));

        var tables = new List<TableInfo>();
        foreach (var fl in lists)
        {
            List<string> nl;
            if (names.TryGetValue(fl.Vector, out nl))
                foreach (var n in nl) tables.Add(new TableInfo { Name = n, List = fl });
            else if (fl.Fields.Count > 100 && fl.Fields[0].Name == "Id" && fl.Fields[1].Name == "Pal")
                tables.Add(new TableInfo { Name = "levels", Inferred = true, List = fl });
            else
                log.AppendLine("unnamed field list at vector 0x" + fl.Vector.ToString("x8"));
        }
        tables = tables.OrderBy(t => t.Name, StringComparer.OrdinalIgnoreCase).ToList();

        // linker id -> table, from row-key fields (type 17) and keyed strings
        var linkTable = new Dictionary<int, string>();
        foreach (var t in tables)
            foreach (var f in t.List.Fields)
                if ((f.Type == 17 || f.Type == 1) && f.Link != 0 && !linkTable.ContainsKey(f.Link)) linkTable[f.Link] = t.Name;

        // vanilla linker ids, inferred from the columns that use them (see LAYOUTS.md)
        var vanilla = new Dictionary<int, string> {
            {0x01,"playerclass"},{0x06,"monmode"},{0x0e,"items (weapons/armor/misc codes)"},{0x12,"states"},{0x13,"sounds"},
            {0x14,"colors"},{0x15,"treasureclassex"},{0x16,"monstats"},{0x1b,"missiles"},{0x20,"itemstatcost"},
            {0x21,"pettype"},{0x22,"itemtypes"} };
        var vanillaIds = new HashSet<int>();
        foreach (var kv in vanilla) if (!linkTable.ContainsKey(kv.Key)) { linkTable[kv.Key] = kv.Value; vanillaIds.Add(kv.Key); }

        Directory.CreateDirectory(outDir);
        Directory.CreateDirectory(txtOutDir);
        var hdr = new StringBuilder();
        var md = new StringBuilder();
        hdr.AppendLine("/* sigma_tables.h - record layouts of D2Sigma's compiled .bin tables.");
        hdr.AppendLine(" * Recovered from the txt field-descriptor lists D2Sigma.dll builds at startup");
        hdr.AppendLine(" * ({name,type,size,offset,link} records passed to the D2TxtCompile linkers).");
        hdr.AppendLine(" * Column names are the real .txt column headers. Generated by tools/Tables.cs. */");
        hdr.AppendLine("#pragma once");
        hdr.AppendLine("#include <stdint.h>");
        hdr.AppendLine("#pragma pack(push, 1)");
        hdr.AppendLine();
        hdr.AppendLine("/* One column descriptor, as built by the static initializers (see LAYOUTS.md for type codes). */");
        hdr.AppendLine("typedef struct D2TxtField {");
        hdr.AppendLine("    const char *szName;    /* .txt column header */");
        hdr.AppendLine("    int32_t     nType;     /* 1 string, 2 dword, 3 word, 4 byte, 9 code, 13/15/18/19/20 linked index, 17 key, 22 tbl string, 23/25 custom, 26 bit */");
        hdr.AppendLine("    int32_t     nSize;     /* string length, or bit number for type 26 */");
        hdr.AppendLine("    int32_t     nOffset;   /* byte offset in the compiled record */");
        hdr.AppendLine("    int32_t     nLink;     /* linker id, or parser function address for types 22/23/25 */");
        hdr.AppendLine("} D2TxtField;");
        hdr.AppendLine();
        hdr.AppendLine("/* MSVC std::vector<D2TxtField> */");
        hdr.AppendLine("typedef struct D2TxtFieldVector { D2TxtField *first, *last, *end; } D2TxtFieldVector;");
        hdr.AppendLine();

        md.AppendLine("# Sigma table layouts");
        md.AppendLine();
        md.AppendLine("Recovered from D2Sigma.dll's field descriptors. Named dumps: `2_txt/sigma_named/`. C structs: `sigma_tables.h`.");
        md.AppendLine();
        md.AppendLine("| Table | Fields | Layout size | .bin record size | Rows | Field list (DLL) |");
        md.AppendLine("|---|---:|---:|---:|---:|---|");

        var linkMd = new StringBuilder();
        foreach (var t in tables)
        {
            var fields = t.List.Fields;
            int layoutEnd = fields.Max(f => f.Offset + Width(f));
            string binPath = Path.Combine(binDir, t.Name.ToLowerInvariant() + ".bin");
            int recSize = -1, rows = -1; byte[] bin = null;
            if (File.Exists(binPath))
            {
                bin = File.ReadAllBytes(binPath);
                rows = BitConverter.ToInt32(bin, 0);
                if (rows > 0 && (bin.Length - 4) % rows == 0) recSize = (bin.Length - 4) / rows;
            }
            string sizeNote = recSize < 0 ? "no .bin" : (recSize == layoutEnd ? recSize.ToString() : recSize + (recSize > layoutEnd ? " (+" + (recSize - layoutEnd) + " unmapped)" : " (layout too big)"));
            md.AppendLine("| " + t.Name + (t.Inferred ? " *(name inferred)*" : "") + " | " + fields.Count + " | " + layoutEnd + " | " + sizeNote + " | " +
                (rows >= 0 ? rows.ToString() : "") + " | vector 0x" + t.List.Vector.ToString("x8") + ", init 0x" + t.List.Func.ToString("x8") + " |");

            EmitStruct(hdr, t, fields, recSize > 0 ? recSize : layoutEnd, linkTable);
            if (bin != null && recSize > 0) Dump(Path.Combine(txtOutDir, t.Name.ToLowerInvariant() + ".txt"), bin, rows, recSize, fields, pe, linkTable);
        }
        var renames = new List<string[]>();
        EmitSigmaTablesStruct(hdr, decompiled, tables, renames, log);
        hdr.AppendLine("#pragma pack(pop)");
        foreach (var t in tables)
        {
            string g = "g_" + Ident(t.Name) + "Fields";
            string old = "DAT_" + t.List.Vector.ToString("x8");
            if (!renames.Any(r => r[0] == old)) renames.Add(new[] { old, g, "D2TxtFieldVector", "txt field descriptors for " + string.Join("/", tables.Where(x => x.List == t.List).Select(x => x.Name)) });
        }
        var rm = new StringBuilder("old,new,type,comment\n");
        foreach (var r in renames) rm.AppendLine(string.Join(",", r.Select(x => "\"" + x.Replace("\"", "\"\"") + "\"")));
        File.WriteAllText(Path.Combine(outDir, "rename_map.csv"), rm.ToString(), new UTF8Encoding(false));
        File.WriteAllText(Path.Combine(outDir, "sigma_tables.h"), hdr.ToString(), new UTF8Encoding(false));

        md.AppendLine();
        md.AppendLine("## Field types");
        md.AppendLine();
        md.AppendLine("| Code | Meaning | Width |");
        md.AppendLine("|---:|---|---:|");
        md.AppendLine("| 1 | ASCII string, size+1 bytes | n |");
        md.AppendLine("| 2 / 3 / 4 | dword / word / byte | 4 / 2 / 1 |");
        md.AppendLine("| 9 | 4-character item/type code | 4 |");
        md.AppendLine("| 11 | dword looked up through linker `link` | 4 |");
        md.AppendLine("| 13 / 15 / 20 | name looked up in linker `link`, stored as byte / word / word index | 1 / 2 / 2 |");
        md.AppendLine("| 18 / 19 | same, stored as dword index | 4 |");
        md.AppendLine("| 17 | row key: registers this row's name in linker `link` (the name itself is not stored) | 2 |");
        md.AppendLine("| 22 | .tbl string key, stored as string index | 2 |");
        md.AppendLine("| 23 / 25 | parsed by a custom function (`link` is its address) | 4 |");
        md.AppendLine("| 26 | bit flag; `size` is the bit number in the dword at `offset` | - |");
        md.AppendLine();
        md.AppendLine("## Linker ids");
        md.AppendLine();
        md.AppendLine("Index columns point at the table that registered the same linker id with its row key.");
        md.AppendLine();
        md.AppendLine("| Link id | Table |");
        md.AppendLine("|---|---|");
        foreach (var kv in linkTable.OrderBy(k => k.Key))
            md.AppendLine("| " + Hex(kv.Key) + " | " + kv.Value + (vanillaIds.Contains(kv.Key) ? " *(vanilla; inferred from the columns that use it)*" : " *(registered by its row key)*") + " |");
        var unresolved = tables.SelectMany(t => t.List.Fields).Where(f => (f.Type == 13 || f.Type == 15 || f.Type == 18 || f.Type == 19 || f.Type == 20 || f.Type == 11) && !linkTable.ContainsKey(f.Link))
            .Select(f => f.Link).Distinct().OrderBy(x => x).Select(Hex);
        var unresolvedList = unresolved.ToList();
        if (unresolvedList.Count > 0) { md.AppendLine(); md.AppendLine("Unresolved linker ids: " + string.Join(", ", unresolvedList) + "."); }
        File.WriteAllText(Path.Combine(outDir, "LAYOUTS.md"), md.ToString(), new UTF8Encoding(false));

        log.AppendLine("tables: " + tables.Count + ", named dumps written to " + txtOutDir);
        return log.ToString();
    }

    // Recovers the parts of the Sigma table block (*DAT_101f32ac) that can be proven:
    //  - count slots: the address a single-table registration function passes to the linker
    //  - record pointers: accessors of the form  "count <= i ... i * recsize + ptr"
    static void EmitSigmaTablesStruct(StringBuilder hdr, string decompiled, List<TableInfo> tables, List<string[]> renames, StringBuilder log)
    {
        var countSlot = new Dictionary<int, string>();      // offset -> table
        string cur = null; var slots = new List<int>(); var nm = new List<string>();
        var slotRx = new Regex(@"= DAT_101f32ac \+ (0x[0-9a-f]+);");
        var nameRx = new Regex(@"FUN_(?:101361e0|1002af50)\((?:[^,""]+,)?""([A-Za-z0-9_]+)""");
        Action flush = () =>
        {
            if (slots.Count == 1 && nm.Count == 1 && tables.Any(t => t.Name == nm[0])) countSlot[slots[0]] = nm[0];
            slots.Clear(); nm.Clear();
        };
        foreach (var line in File.ReadLines(decompiled))
        {
            if (line.StartsWith("//==== ")) { flush(); cur = line; continue; }
            var m = slotRx.Match(line); if (m.Success) { int o = Convert.ToInt32(m.Groups[1].Value.Substring(2), 16); if (!slots.Contains(o)) slots.Add(o); }
            var n = nameRx.Match(line); if (n.Success && !nm.Contains(n.Groups[1].Value)) nm.Add(n.Groups[1].Value);
        }
        flush();

        var text = File.ReadAllText(decompiled);
        var accRx = new Regex(@"\(DAT_101f32ac \+ (0x[0-9a-f]+)\) <= \w+\)\) \{(?s:.{0,400}?)\w+ \* (0x[0-9a-f]+|\d+) \+ \*\(int \*\)\(DAT_101f32ac \+ (0x[0-9a-f]+)\)");
        var ptrSlot = new Dictionary<int, string>();
        var notes = new Dictionary<int, string>();
        foreach (Match m in accRx.Matches(text))
        {
            int c = Convert.ToInt32(m.Groups[1].Value.Substring(2), 16);
            string ss = m.Groups[2].Value; int size = ss.StartsWith("0x") ? Convert.ToInt32(ss.Substring(2), 16) : int.Parse(ss);
            int p = Convert.ToInt32(m.Groups[3].Value.Substring(2), 16);
            string t;
            if (!countSlot.TryGetValue(c, out t))
            {
                var bySize = tables.Where(x => x.List.Fields.Max(f => f.Offset + Width(f)) == size).Select(x => x.Name).Distinct().ToList();
                if (bySize.Count == 1) { t = bySize[0]; countSlot[c] = t; }
                else { t = "items2"; notes[c] = notes[p] = size + "-byte rows: " + string.Join(" / ", bySize); countSlot[c] = t; }
            }
            ptrSlot[p] = t;
            string vn = "record size " + size + " (verified by accessor)"; if (!notes.ContainsKey(p)) notes[p] = vn; else if (!notes[p].Contains(vn)) notes[p] += "; " + vn;
        }

        // slot 0 is read as "*DAT_101f32ac + i * recsize"
        foreach (Match m in new Regex(@"\*DAT_101f32ac \+ \w+ \* (0x[0-9a-f]+|\d+)").Matches(text))
        {
            string ss = m.Groups[1].Value; int size = ss.StartsWith("0x") ? Convert.ToInt32(ss.Substring(2), 16) : int.Parse(ss);
            var bySize = tables.Where(x => x.List.Fields.Max(f => f.Offset + Width(f)) == size).Select(x => x.Name).Distinct().ToList();
            if (bySize.Count == 1 && !ptrSlot.ContainsKey(0)) { ptrSlot[0] = bySize[0]; notes[0] = "record size " + size + " (verified by accessor)"; }
        }

        var fields = new SortedDictionary<int, string[]>();  // offset -> {ctype, name, comment}
        foreach (var kv in countSlot)
            fields[kv.Key] = new[] { "int32_t ", "n" + Pascal(kv.Value), "row count of " + kv.Value + (notes.ContainsKey(kv.Key) ? " (" + notes[kv.Key] + ")" : "") };
        foreach (var kv in ptrSlot)
        {
            var ti = tables.FirstOrDefault(x => x.Name == kv.Value);
            string ct = ti != null ? "Sigma" + Pascal(ti.Name) + "Txt *" : "uint8_t *";
            fields[kv.Key] = new[] { ct, "p" + Pascal(kv.Value), "records of " + kv.Value + (notes.ContainsKey(kv.Key) ? ", " + notes[kv.Key] : "") };
        }

        hdr.AppendLine("/* Sigma table block, pointed to by DAT_101f32ac (renamed gpSigmaTables in the source).");
        hdr.AppendLine(" * Only slots proven by registration code or bounds-checked accessors are named; the rest is padding. */");
        hdr.AppendLine("typedef struct SigmaTables {");
        int pos = 0;
        foreach (var kv in fields)
        {
            if (kv.Key > pos) hdr.AppendLine("    uint8_t  _unk_0x" + pos.ToString("x3") + "[" + (kv.Key - pos) + "];");
            if (kv.Key < pos) continue;
            hdr.AppendLine("    " + kv.Value[0] + " " + kv.Value[1] + ";" + new string(' ', Math.Max(1, 26 - kv.Value[1].Length)) + "/* 0x" + kv.Key.ToString("x3") + " " + kv.Value[2] + " */");
            pos = kv.Key + 4;
            renames.Add(new[] { "*(int *)(DAT_101f32ac + 0x" + kv.Key.ToString("x") + ")", (kv.Value[1].StartsWith("p") ? "(int)" : "") + "gpSigmaTables->" + kv.Value[1], "field", kv.Value[2] });
        }
        hdr.AppendLine("} SigmaTables;");
        hdr.AppendLine();
        renames.Add(new[] { "DAT_101f32ac", "gpSigmaTables", "SigmaTables *", "Sigma table block (see sigma_tables.h)" });
        renames.Add(new[] { "DAT_101f1828", "gppD2DataTables", "uint8_t **", "points at D2Common sgptDataTables; inferred from registrations of properties (+0xac), overlay (+0xbc0), petType (+0xbf0)" });
        log.AppendLine("SigmaTables: " + countSlot.Count + " count slots, " + ptrSlot.Count + " record pointers");
    }

    static string Pascal(string s) { s = Ident(s); return char.ToUpperInvariant(s[0]) + s.Substring(1); }

    static string LinkNote(FieldDef f, Dictionary<int, string> linkTable)
    {
        switch (f.Type)
        {
            case 13: case 15: case 18: case 19: case 20: case 11:
                { string t; return linkTable.TryGetValue(f.Link, out t) ? "-> " + t : "-> linker " + Hex(f.Link); }
            case 17: return "key, linker " + Hex(f.Link);
            case 1: return f.Link != 0 ? "key, linker " + Hex(f.Link) : "";
            case 22: return "tbl string";
            case 23: case 25: return "parser 0x" + ((uint)f.Link).ToString("x8");
            default: return "";
        }
    }

    static void EmitStruct(StringBuilder sb, TableInfo t, List<FieldDef> fields, int size, Dictionary<int, string> linkTable)
    {
        string sname = "Sigma" + char.ToUpperInvariant(t.Name[0]) + Ident(t.Name.Substring(1)) + "Txt";
        sb.AppendLine("/* " + t.Name + ".bin" + (t.Inferred ? " (name inferred from columns)" : "") + " - " + size + " bytes per row */");
        sb.AppendLine("typedef struct " + sname + " {");
        int pos = 0;
        var used = new HashSet<string>();
        foreach (var grp in fields.GroupBy(f => f.Offset).OrderBy(g => g.Key))
        {
            int off = grp.Key;
            if (off > pos) { sb.AppendLine("    uint8_t  _pad_0x" + pos.ToString("x2") + "[" + (off - pos) + "];"); pos = off; }
            if (off < pos) { foreach (var f in grp) sb.AppendLine("    /* overlaps previous field: " + f.Name + " @0x" + off.ToString("x2") + " */"); continue; }
            var bits = grp.Where(f => f.Type == 26).ToList();
            var first = grp.First();
            if (bits.Count > 0)
            {
                // container width: up to the next field, max 4
                int next = fields.Where(f => f.Offset > off).Select(f => f.Offset).DefaultIfEmpty(off + 4).Min();
                int w = Math.Min(4, next - off);
                string ctype = w >= 4 ? "uint32_t" : (w == 2 || w == 3 ? "uint16_t" : "uint8_t ");
                if (w == 3) w = 2;
                sb.AppendLine("    " + ctype + " flags_0x" + off.ToString("x2") + ";   /* bits: " +
                    string.Join(", ", bits.OrderBy(b => b.Size).Select(b => b.Size + "=" + b.Name)) + " */");
                pos = off + w;
                continue;
            }
            string id = Ident(first.Name);
            while (used.Contains(id)) id += "_";
            used.Add(id);
            string ct;
            switch (first.Type)
            {
                case 1: ct = "char    "; id += "[" + (first.Size + 1) + "]"; break;
                case 2: ct = "int32_t "; break;
                case 9: ct = "char    "; id += "[4]"; break;
                case 3: case 15: case 17: case 20: case 22: ct = "uint16_t"; break;
                case 4: case 13: ct = "uint8_t "; break;
                default: ct = "uint32_t"; break;
            }
            int width = Width(first);
            if (first.Type == 23)
            {
                int next = fields.Where(f => f.Offset > off).Select(f => f.Offset).DefaultIfEmpty(off + 4).Min();
                if (next - off > 4 && (next - off) % 4 == 0) { id += "[" + ((next - off) / 4) + "]"; width = next - off; }
            }
            string note = LinkNote(first, linkTable);
            sb.AppendLine("    " + ct + " " + id + ";" + new string(' ', Math.Max(1, 28 - id.Length)) + "/* 0x" + off.ToString("x2") + " \"" + first.Name + "\" " + TypeDesc(first) + (note.Length > 0 ? ", " + note : "") + " */");
            foreach (var extra in grp.Skip(1)) sb.AppendLine("    /* also at 0x" + off.ToString("x2") + ": \"" + extra.Name + "\" " + TypeDesc(extra) + " */");
            pos = off + width;
        }
        if (size > pos) sb.AppendLine("    uint8_t  _pad_0x" + pos.ToString("x2") + "[" + (size - pos) + "];");
        sb.AppendLine("} " + sname + ";");
        sb.AppendLine();
    }

    // target table -> (txt file in 2_txt, key column) used to show names next to index values
    static Dictionary<string, string[]> NameSources = new Dictionary<string, string[]> {
        {"monstats", new[]{"monstats.txt","Id"}}, {"itemstatcost", new[]{"itemstatcost.txt","Stat"}},
        {"itemtypes", new[]{"itemtypes.txt","Code"}}, {"states", new[]{"states.txt","state"}},
        {"sounds", new[]{"sounds.txt","Sound"}}, {"treasureclassex", new[]{"treasureclassex.txt","Treasure Class"}},
        {"missiles", new[]{"missiles.txt","Missile"}}, {"playerclass", new[]{"playerclass.txt","Player Class"}},
        {"properties", new[]{"properties.txt","code"}}, {"pettype", new[]{"pettype.txt","pet type"}},
        {"monmode", new[]{"monmode.txt","name"}}, {"colors", new[]{"colors.txt","Transform Color"}},
        {"runes", new[]{"runes.txt","Name"}}, {"overlay", new[]{"overlay.txt","overlay"}}, {"levels", new[]{"levels.txt","Name"}},
    };
    static Dictionary<string, string[]> NameCache = new Dictionary<string, string[]>();
    public static string TxtDir;

    static string[] Names(string table)
    {
        string[] r;
        if (NameCache.TryGetValue(table, out r)) return r;
        string[] src;
        if (TxtDir != null && NameSources.TryGetValue(table, out src) && File.Exists(Path.Combine(TxtDir, src[0])))
        {
            var lines = File.ReadAllLines(Path.Combine(TxtDir, src[0]));
            int col = Array.IndexOf(lines[0].Split('\t'), src[1]);
            if (col >= 0) r = lines.Skip(1).Select(l => { var c = l.Split('\t'); return col < c.Length ? c[col].Trim() : ""; }).ToArray();
        }
        NameCache[table] = r;
        return r;
    }

    static string WithName(long v, FieldDef f, Dictionary<int, string> linkTable)
    {
        string t;
        if (!linkTable.TryGetValue(f.Link, out t)) return v.ToString();
        var n = Names(t);
        if (n == null || v < 0 || v >= n.Length || n[v].Length == 0) return v.ToString();
        if (Regex.IsMatch(n[v], @"^[a-z]{1,3}\d+$")) return v.ToString();   // placeholder written by d2bin2txt
        return v + " (" + n[v] + ")";
    }

    static Dictionary<int, string> Strings;
    static string StringName(int idx)
    {
        if (Strings == null)
        {
            Strings = new Dictionary<int, string>();
            var files = new[] { new { F = "string.txt", B = 0 }, new { F = "patchstring.txt", B = 10000 }, new { F = "expansionstring.txt", B = 20000 } };
            foreach (var f in files)
            {
                string p = Path.Combine(TxtDir, "strings", f.F);
                if (!File.Exists(p)) continue;
                int i = f.B;
                foreach (var line in File.ReadLines(p))
                {
                    int tab = line.IndexOf('\t');
                    string key = tab >= 0 ? line.Substring(0, tab) : line;
                    string text = tab >= 0 ? line.Substring(tab + 1) : "";
                    if (key.Length == 0 || key == "x" || Regex.IsMatch(key, @"^\d+$"))
                    {
                        text = Regex.Replace(Regex.Replace(text.Replace("\\n", " "), @"ÿc.", ""), @"\s+", " ").Trim();
                        key = text.Length > 40 ? text.Substring(0, 40) + "..." : text;
                    }
                    Strings[i++] = key;
                }
            }
        }
        string s;
        if (idx == 0) return "0";
        return Strings.TryGetValue(idx, out s) && s.Length > 0 ? idx + " (" + s + ")" : idx.ToString();
    }

    static bool IsIndex(FieldDef f) { return f.Type == 13 || f.Type == 15 || f.Type == 18 || f.Type == 19 || f.Type == 20; }

    static void Dump(string path, byte[] bin, int rows, int rec, List<FieldDef> fields, Pe pe, Dictionary<int, string> linkTable)
    {
        var cols = fields.Where(f => f.Offset + (f.Type == 26 ? 1 : Width(f)) <= rec).OrderBy(f => f.Offset).ThenBy(f => f.Size).ToList();
        var sb = new StringBuilder();
        sb.Append("row");
        foreach (var f in cols)
        {
            string n = f.Name;
            string note = LinkNote(f, linkTable);
            if (note.StartsWith("-> ")) n += " (" + note + ")";
            sb.Append('\t').Append(n);
        }
        sb.AppendLine();
        for (int r = 0; r < rows; r++)
        {
            int b = 4 + r * rec;
            sb.Append(r);
            foreach (var f in cols)
            {
                sb.Append('\t');
                int o = b + f.Offset;
                switch (f.Type)
                {
                    case 1:
                        {
                            int n = 0; while (n < f.Size + 1 && bin[o + n] != 0) n++;
                            sb.Append(Encoding.ASCII.GetString(bin, o, n)); break;
                        }
                    case 9:
                        {
                            int n = 0; while (n < 4 && bin[o + n] != 0) n++;
                            sb.Append(Encoding.ASCII.GetString(bin, o, n).TrimEnd(' ')); break;
                        }
                    case 4: sb.Append(bin[o]); break;
                    case 13: sb.Append(WithName(bin[o], f, linkTable)); break;
                    case 3: case 15: case 17: case 20: case 22:
                        {
                            ushort v = BitConverter.ToUInt16(bin, o);
                            if ((f.Type == 15 || f.Type == 20) && v == 0xFFFF) sb.Append("");
                            else if (IsIndex(f)) sb.Append(WithName(v, f, linkTable));
                            else if (f.Type == 22) sb.Append(StringName(v));
                            else sb.Append(v);
                            break;
                        }
                    case 26:
                        {
                            int next = fields.Where(x => x.Offset > f.Offset).Select(x => x.Offset).DefaultIfEmpty(f.Offset + 4).Min();
                            int w = Math.Min(4, next - f.Offset);
                            uint c = w >= 4 ? BitConverter.ToUInt32(bin, o) : (w >= 2 ? BitConverter.ToUInt16(bin, o) : bin[o]);
                            sb.Append((c >> f.Size) & 1); break;
                        }
                    case 2: sb.Append(BitConverter.ToInt32(bin, o)); break;
                    default:
                        {
                            int v = BitConverter.ToInt32(bin, o);
                            if ((f.Type == 18 || f.Type == 19 || f.Type == 11) && v == -1) sb.Append("");
                            else if (IsIndex(f)) sb.Append(WithName(v, f, linkTable));
                            else sb.Append(v);
                            break;
                        }
                }
            }
            sb.AppendLine();
        }
        File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
    }
}
