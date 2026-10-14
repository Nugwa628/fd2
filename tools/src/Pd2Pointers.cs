// fd2 (phase 3): recovers D2Template's game-pointer table from the ProjectDiablo.dll Ghidra export and writes
//   <tree>/game_pointers.tsv          one row per resolver call: thunk/accessor, pointer global, DLL, {1.13c, 1.13d}
//                                     values, reference name, defining file in sigmaRE/5_game_source, call sites
//   <out prototypes .tsv> (optional)  ApplyPrototypes.java input: every lazy thunk gets the prototype and the name
//                                     of the game function it jumps to (Ghidra otherwise sees void(void) and drops
//                                     the stack arguments at every call site)
// How PD2 binds the game: FUN_102f10f0(__fastcall int dll, int value) returns GetProcAddress(dll, -value) for a
// negative value (ordinal) or dll base + value (1.13c offset). value comes from an int pair {1.13c, 1.13d} picked by
// the game version (index 0 = 1.0.13.60 = 1.13c). Two shapes call it:
//   lazy thunk : if (!p) p = resolve(dll, pair[ver]); jmp [p]            -> named after the target (D2Common_10973)
//   accessor   : if (!p) p = resolve(...); return &p;  (inline variable) -> "GetPtr_<target>"; each translation unit
//                copies *accessor() into its own global in a static initializer; calls go through those copies.
// Ghidra sometimes folds a lazy thunk into the function that jumps to it (a PD2 wrapper that tests its arguments and
// then jumps or tail-jumps into the thunk, or a bare 'jmp thunk' stub). Such a function also contains the resolver call,
// but it is not the thunk: the binary decides (a thunk starts with 'cmp dword ptr [cell], 0'). Those rows become
//   wrapper / jmp-stub : the PD2 function at `address`; cell/cell_name are the real thunk's pointer global, and the real
//                        thunk (found by its 'cmp [cell], 0' in .text) has its own lazy-thunk row, added when Ghidra did
//                        not split it off. The tree names the function like any PD2 function, hint Wrap_/JmpTo_<target>.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public class GamePtr
{
    public uint Func; public string FuncName; public string Kind;      // lazy-thunk | accessor | wrapper | jmp-stub
    public uint Thunk;               // wrapper / jmp-stub: address of the real lazy thunk it ends in
    public bool InExport = true;     // false: a real thunk Ghidra folded into its wrapper (no function of its own)
    public string Cell;                                                  // DAT_ that caches the resolved address
    public List<string> Copies = new List<string>();                    // per-TU copies of an accessor's cell
    public int DllIdx = -1; public string Dll; public uint Pair; public int V113c, V113d;
    public string Target = "";       // function | data | code (inside a function) | unknown
    public string RefName;           // name in the reference tree (D2Common_10973, sub_6fab1000, DAT_6fbcc1e0)
    public string Name;              // identifier used in the PD2 tree for the function / thunk
    public string CellName;          // identifier used for the cell and copies
    public string DefinedIn = "";    // sigmaRE/5_game_source/<Module>/<file> (functions) or the reference's globals.h
    public string Inside = "";       // for code targets: containing reference function + offset
    public int CallSites;
    public string RefProto;          // prototype line from <module>_decomp.h
    public string Cleanup = "";      // caller | callee | ? (from PD2's call sites: add esp,N after the call)
    public int CallerPop;            // most common N of "add esp,N" after PD2's calls (caller cleanup)
    public int Purge = -1;           // "ret N" of the target in the 1.13c DLL (tools/pd2/thunk_purge.py), -1 = unknown
    public string ProtoSource = "";  // reference | reference+purge | purge | caller-cleanup | none
    public string Proto;             // what was applied in Ghidra: "cc ret (params)"
}

public static class Pd2Pointers
{
    // ProjectDiablo.dll specifics (ModuleConfig.PointerResolver); the DLL order is the resolver's own wchar_t table
    public static readonly string[] ResolverDlls = { "D2Client.dll", "D2Common.dll", "D2gfx.dll", "D2Lang.dll", "D2Win.dll", "D2Net.dll",
        "D2Game.dll", "D2Launch.dll", "Fog.dll", "Bnclient.dll", "Storm.dll", "D2CMP.dll", "D2Multi.dll", "D2MCPClient.dll", "D2sound.dll" };

    static Regex HeaderRx = new Regex(@"^//==== (.+) @ ([0-9a-f]{8})$");

    public class Func { public string Name; public uint Addr; public string Body; }

    public static List<Func> ParseExport(string path)
    {
        var list = new List<Func>(); var seen = new HashSet<uint>();
        string extra = Path.Combine(Path.GetDirectoryName(path), Path.GetFileNameWithoutExtension(path) + ".extra.c");
        var files = new List<string> { path }; if (File.Exists(extra)) files.Add(extra);
        foreach (var file in files)
        {
            Func cur = null; var sb = new StringBuilder();
            foreach (var line in File.ReadLines(file))
            {
                var m = HeaderRx.Match(line);
                if (m.Success)
                {
                    if (cur != null) cur.Body = sb.ToString();
                    sb.Clear();
                    var f = new Func { Name = m.Groups[1].Value, Addr = Convert.ToUInt32(m.Groups[2].Value, 16) };
                    cur = seen.Add(f.Addr) ? f : new Func();
                    if (cur == f) list.Add(f);
                    continue;
                }
                if (cur != null) sb.AppendLine(line);
            }
            if (cur != null) cur.Body = sb.ToString();
        }
        list.Sort((a, b) => a.Addr.CompareTo(b.Addr));
        return list;
    }

    // reference function addresses per module, sorted (for "inside function" lookups)
    static Dictionary<string, uint[]> Sorted = new Dictionary<string, uint[]>(StringComparer.OrdinalIgnoreCase);

    public static List<GamePtr> Build(string decompiled, Pe pd2, uint resolver, Dictionary<string, GameModule> mods, Dictionary<string, string> refProtos, StringBuilder log, string purgeFile = null)
    {
        var funcs = ParseExport(decompiled);
        string rname = funcs.Where(f => f.Addr == resolver).Select(f => f.Name).FirstOrDefault() ?? ("FUN_" + resolver.ToString("x8"));
        var callRx = new Regex(@"(\w+) = " + Regex.Escape(rname) + @"\((0x[0-9a-f]+|\d+),\s*(.+?)\);");
        var pairRx = new Regex(@"\*\(int \*\)\(&_?DAT_([0-9a-f]{8}) \+ \w+ \* 4\)|\*\(int \*\)\(\w+ \* 4 \+ 0x([0-9a-f]+)\)");
        var valAssignRx = new Regex(@"\b(_?DAT_[0-9a-f]{8}) = (\*\(int \*\)\(&_?DAT_[0-9a-f]{8} \+ \w+ \* 4\)|\*\(int \*\)\(\w+ \* 4 \+ 0x[0-9a-f]+\));");
        // value globals assigned from a pair table anywhere (thread-safe statics in accessors)
        var valPair = new Dictionary<string, uint>();
        foreach (var f in funcs)
            if (f.Body.IndexOf("* 4", StringComparison.Ordinal) >= 0)
                foreach (Match m in valAssignRx.Matches(f.Body))
                {
                    var pm = pairRx.Match(m.Groups[2].Value);
                    if (pm.Success) valPair[m.Groups[1].Value.TrimStart('_')] = Convert.ToUInt32(pm.Groups[1].Success ? pm.Groups[1].Value : pm.Groups[2].Value, 16);
                }

        var res = new List<GamePtr>();
        foreach (var f in funcs)
        {
            if (f.Addr == resolver || f.Body.IndexOf(rname + "(", StringComparison.Ordinal) < 0) continue;
            foreach (Match m in callRx.Matches(f.Body))
            {
                var g = new GamePtr { Func = f.Addr, FuncName = f.Name };
                string lhs = m.Groups[1].Value;
                if (!lhs.Contains("DAT_"))
                {
                    var am = Regex.Match(f.Body, @"\b(_?DAT_[0-9a-f]{8}) = " + Regex.Escape(lhs) + ";");
                    if (am.Success) lhs = am.Groups[1].Value;
                }
                g.Cell = lhs.TrimStart('_');
                string d = m.Groups[2].Value;
                g.DllIdx = d.StartsWith("0x") ? Convert.ToInt32(d.Substring(2), 16) : int.Parse(d);
                g.Dll = g.DllIdx >= 0 && g.DllIdx < ResolverDlls.Length ? ResolverDlls[g.DllIdx] : "dll#" + g.DllIdx;
                string arg = m.Groups[3].Value.Trim();
                var pm = pairRx.Match(arg);
                uint pair = 0;
                if (pm.Success) pair = Convert.ToUInt32(pm.Groups[1].Success ? pm.Groups[1].Value : pm.Groups[2].Value, 16);
                else { uint p; if (valPair.TryGetValue(arg.TrimStart('_'), out p)) pair = p; }
                g.Pair = pair;
                if (pair != 0 && pd2.Off(pair) >= 0)
                {
                    g.V113c = BitConverter.ToInt32(pd2.Data, pd2.Off(pair));
                    g.V113d = BitConverter.ToInt32(pd2.Data, pd2.Off(pair) + 4);
                }
                if (f.Body.Contains("Treating indirect jump as call")) g.Kind = "lazy-thunk";
                else if (Regex.IsMatch(f.Body, @"return \(?[\w ]*\*?\)?&_?" + g.Cell + ";")) g.Kind = "accessor";
                else g.Kind = "inline";
                res.Add(g);
            }
        }

        // accessor copies: "p = accessor(); DAT_x = *p;" in a static initializer
        var byName = res.Where(g => g.Kind == "accessor").GroupBy(g => g.FuncName).ToDictionary(x => x.Key, x => x.First());
        var copyRx = new Regex(@"(\w+) = (\w+)\(\);\s*\n\s*(_?DAT_[0-9a-f]{8}) = \*\1;");
        var copyOwner = new Dictionary<string, GamePtr>();
        var initFuncs = new HashSet<uint>();
        foreach (var f in funcs)
            foreach (Match m in copyRx.Matches(f.Body))
            {
                GamePtr g; if (!byName.TryGetValue(m.Groups[2].Value, out g)) continue;
                string c = m.Groups[3].Value.TrimStart('_');
                if (!g.Copies.Contains(c)) g.Copies.Add(c);
                copyOwner[c] = g; initFuncs.Add(f.Addr);
            }

        // call sites: thunk calls by name; accessor = uses of its copies and calls outside the copy initializers
        var ident = new Regex(@"\b_?((?:DAT|FUN)_[0-9a-f]{8}|[A-Za-z_]\w*)(?=\s*\()");
        var thunkByName = res.Where(g => g.Kind == "lazy-thunk").GroupBy(g => g.FuncName).ToDictionary(x => x.Key, x => x.First());
        var datUse = new Regex(@"\b_?(DAT_[0-9a-f]{8})\b");
        foreach (var f in funcs)
        {
            foreach (Match m in ident.Matches(f.Body))
            {
                GamePtr g;
                if (thunkByName.TryGetValue(m.Groups[1].Value, out g) && g.Func != f.Addr) g.CallSites++;
            }
            if (!initFuncs.Contains(f.Addr))   // every use of a per-file copy (call through it, or read of a game variable)
                foreach (Match m in datUse.Matches(f.Body))
                {
                    GamePtr g; if (copyOwner.TryGetValue(m.Groups[1].Value, out g)) g.CallSites++;
                }
        }

        SplitWrappers(res, pd2, new HashSet<uint>(funcs.Select(f => f.Addr)), log);
        NameTargets(res, mods, refProtos);
        CallerCleanup(res, pd2);
        if (purgeFile != null && File.Exists(purgeFile))
        {
            var byAddr = res.GroupBy(g => g.Func).ToDictionary(x => x.Key, x => x.First());
            foreach (var line in File.ReadLines(purgeFile).Skip(1))
            {
                var c = line.Split('\t'); GamePtr g;
                if (c.Length >= 3 && c[2].Length > 0 && byAddr.TryGetValue(Convert.ToUInt32(c[0].Replace("0x", ""), 16), out g)) g.Purge = int.Parse(c[2]);
            }
            // a thunk Ghidra folded into its wrapper had no function to scan: same target, same 'ret N'
            foreach (var g in res.Where(x => x.Purge < 0 && x.Kind == "lazy-thunk"))
                g.Purge = res.Where(x => x.Thunk == g.Func && x.Purge >= 0).Select(x => x.Purge).DefaultIfEmpty(-1).First();
        }
        foreach (var g in res.Where(x => IsThunkLike(x.Kind))) MakePrototype(g);
        log.AppendLine("game pointers: " + res.Count + " rows (" + res.Count(g => g.Kind == "lazy-thunk") + " lazy thunks, " +
                       res.Count(g => g.Kind == "wrapper") + " wrappers and " + res.Count(g => g.Kind == "jmp-stub") + " jmp stubs that end in one, " +
                       res.Count(g => g.Kind == "accessor") + " accessors with " + res.Sum(g => g.Copies.Count) + " per-TU copies, " +
                       res.Count(g => g.Kind == "inline") + " inline); named " + res.Count(g => g.RefName != null) +
                       " (functions " + res.Count(g => g.Target == "function") + ", data " + res.Count(g => g.Target == "data") +
                       ", inside a function " + res.Count(g => g.Target == "code") + "), unnamed " + res.Count(g => g.RefName == null));
        return res;
    }

    static void NameTargets(List<GamePtr> res, Dictionary<string, GameModule> mods, Dictionary<string, string> refProtos)
    {
        foreach (var g in res)
        {
            GameModule gm;
            if (g.Pair == 0 || !mods.TryGetValue(g.Dll, out gm)) { g.Target = "unknown"; continue; }
            bool thunkLike = IsThunkLike(g.Kind);
            string mod = gm.Name;
            if (g.V113c < 0)
            {
                string n; int ord = -g.V113c;
                if (gm.ExportName.TryGetValue(ord, out n))
                {
                    g.RefName = n;
                    KeyValuePair<uint, string> e;
                    // exported data (e.g. D2Common's sgptDataTables) has no function in symbols.csv
                    g.Target = gm.Exports.TryGetValue(ord, out e) && gm.AddrName.ContainsKey(e.Key) || GameBuild.DefinedIn.ContainsKey(n) ? "function" : "data";
                }
                else { g.RefName = mod + "_" + ord; g.Target = "function"; }
            }
            else if (gm.Pe != null)
            {
                uint refVa = (uint)(gm.Pe.ImageBase + (uint)g.V113c + gm.RefDelta);
                string n;
                if (gm.AddrName.TryGetValue(refVa, out n)) { g.RefName = n; g.Target = "function"; }
                else
                {
                    uint[] starts;
                    if (!Sorted.TryGetValue(mod, out starts)) { starts = gm.AddrName.Keys.OrderBy(x => x).ToArray(); Sorted[mod] = starts; }
                    int i = Array.BinarySearch(starts, refVa); if (i < 0) i = ~i - 1;
                    var text = gm.Pe.Sections.FirstOrDefault(s => s.Name == ".text");
                    uint instVa = (uint)(refVa - gm.RefDelta);
                    bool inText = text != null && instVa >= text.Va && instVa < text.Va + text.VSize;
                    if (inText && i >= 0)
                    {
                        // a thunk is called, so its target is a function entry the reference decompile did not split off:
                        // named the way the reference names unattributed functions; accessors to code are hook addresses
                        g.Target = "code"; g.RefName = (thunkLike ? "sub_" : mod + "_loc_") + refVa.ToString("x8");
                        g.Inside = gm.AddrName[starts[i]] + "+0x" + (refVa - starts[i]).ToString("x");
                    }
                    else { g.Target = "data"; g.RefName = "DAT_" + refVa.ToString("x8"); }
                }
            }
            else g.Target = "unknown";
            string where;
            if (g.Target == "function" && GameBuild.DefinedIn.TryGetValue(g.RefName, out where)) g.DefinedIn = "sigmaRE/5_game_source/" + where;
            else if (g.Target == "code" && GameBuild.DefinedIn.TryGetValue(g.Inside.Split('+')[0], out where)) g.DefinedIn = "sigmaRE/5_game_source/" + where;
            else if (g.Target == "data") g.DefinedIn = "sigmaRE/5_game_source/" + mod + "/include/globals.h";
            string p; if (g.RefName != null && refProtos.TryGetValue(g.RefName, out p)) g.RefProto = p;
        }
        // identifiers: thunks carry the reference name; pointer cells carry it too unless a thunk already does
        // (then "p_<name>"); data cells hold the address of a game variable: "p_<Module>_<DAT_...>"
        var thunkNames = new HashSet<string>(res.Where(g => g.Kind == "lazy-thunk" && g.RefName != null).Select(g => g.RefName));
        var used = new Dictionary<string, int>();
        foreach (var g in res.OrderBy(g => g.Func))
        {
            if (g.RefName == null || g.Thunk != 0) continue;   // wrapper / jmp-stub: named in the tree, cell from its thunk
            string mod = g.Dll.Replace(".dll", "");
            GameModule gm; if (mods.TryGetValue(g.Dll, out gm)) mod = gm.Name;
            if (g.Kind == "lazy-thunk")
            {
                int n; used.TryGetValue(g.RefName, out n); used[g.RefName] = n + 1;
                g.Name = n == 0 ? g.RefName : g.RefName + "_" + g.Func.ToString("x8");   // a second thunk to the same target
                g.CellName = "p_" + g.Name;
            }
            else
            {
                string baseName = g.Target == "data" ? "p_" + mod + "_" + g.RefName : g.Target == "code" ? g.RefName : (thunkNames.Contains(g.RefName) ? "p_" + g.RefName : g.RefName);
                g.CellName = baseName;
                g.Name = "GetPtr_" + (g.Target == "data" ? mod + "_" + g.RefName : g.RefName);
            }
        }
        // two accessors for one target would give two cells the same name: keep the first, suffix the others
        foreach (var grp in res.Where(g => g.Kind == "accessor" && g.CellName != null).GroupBy(g => g.CellName).Where(x => x.Count() > 1))
            foreach (var g in grp.Skip(1)) { g.CellName += "_" + g.Func.ToString("x8"); g.Name += "_" + g.Func.ToString("x8"); }
        // wrapper / jmp-stub: the pointer global is the real thunk's
        var thunkAt = res.Where(g => g.Kind == "lazy-thunk").GroupBy(g => g.Func).ToDictionary(x => x.Key, x => x.First());
        foreach (var g in res.Where(g => g.Thunk != 0)) { GamePtr t; if (thunkAt.TryGetValue(g.Thunk, out t)) g.CellName = t.CellName; }
    }

    public static bool IsThunkLike(string kind) { return kind == "lazy-thunk" || kind == "wrapper" || kind == "jmp-stub"; }

    // Rows Ghidra took for lazy thunks are checked against the binary: a D2Template thunk starts with
    // 'cmp dword ptr [cell], 0' (83 3D <cell> 00). Otherwise the function is a PD2 wrapper or a 'jmp thunk' stub whose
    // body Ghidra merged with the thunk it ends in; the real thunk is the one place in .text that tests the cell.
    static void SplitWrappers(List<GamePtr> res, Pe pd2, HashSet<uint> inExport, StringBuilder log)
    {
        var text = pd2.Sections.First(s => s.Name == ".text");
        int t0 = pd2.Off(text.Va), t1 = t0 + (int)Math.Min(text.RawSize, text.VSize) - 7;
        System.Func<uint, uint, bool> isThunk = (va, cell) =>
        {
            int o = pd2.Off(va);
            return o >= 0 && o + 7 <= pd2.Data.Length && pd2.Data[o] == 0x83 && pd2.Data[o + 1] == 0x3D && BitConverter.ToUInt32(pd2.Data, o + 2) == cell && pd2.Data[o + 6] == 0;
        };
        var added = new List<GamePtr>();
        foreach (var g in res.Where(x => x.Kind == "lazy-thunk").ToList())
        {
            uint cell; if (!g.Cell.StartsWith("DAT_") || !uint.TryParse(g.Cell.Substring(4), System.Globalization.NumberStyles.HexNumber, null, out cell)) continue;
            if (isThunk(g.Func, cell)) continue;
            var hits = new List<uint>();
            for (int o = t0; o < t1; o++)
                if (pd2.Data[o] == 0x83 && pd2.Data[o + 1] == 0x3D && BitConverter.ToUInt32(pd2.Data, o + 2) == cell && pd2.Data[o + 6] == 0) hits.Add((uint)(text.Va + (o - t0)));
            if (hits.Count != 1) { log.AppendLine("  warning: 0x" + g.Func.ToString("x8") + " is not a lazy thunk of " + g.Cell + " and " + hits.Count + " candidates test the cell; kept as lazy-thunk"); continue; }
            g.Thunk = hits[0];
            int fo = pd2.Off(g.Func);
            g.Kind = pd2.Data[fo] == 0xE9 && (uint)(g.Func + 5 + BitConverter.ToInt32(pd2.Data, fo + 1)) == g.Thunk ? "jmp-stub" : "wrapper";
            if (res.Any(x => x.Func == g.Thunk && x.Cell == g.Cell) || added.Any(x => x.Func == g.Thunk)) continue;
            added.Add(new GamePtr { Func = g.Thunk, Kind = "lazy-thunk", Cell = g.Cell, DllIdx = g.DllIdx, Dll = g.Dll, Pair = g.Pair,
                                    V113c = g.V113c, V113d = g.V113d, InExport = inExport.Contains(g.Thunk) });
        }
        res.AddRange(added);
        var sorted = res.OrderBy(x => x.Func).ToList(); res.Clear(); res.AddRange(sorted);
    }

    // stack cleanup at PD2's call sites: "call thunk; add esp,N" means the caller cleans up (cdecl)
    static void CallerCleanup(List<GamePtr> res, Pe pd2)
    {
        var text = pd2.Sections.First(s => s.Name == ".text");
        var thunks = res.Where(g => IsThunkLike(g.Kind)).GroupBy(g => g.Func).ToDictionary(x => x.Key, x => x.First());
        var caller = new Dictionary<uint, int>(); var callee = new Dictionary<uint, int>();
        var pops = new Dictionary<uint, Dictionary<int, int>>();
        int o0 = (int)text.Raw, o1 = (int)(text.Raw + Math.Min(text.RawSize, text.VSize)) - 8;
        for (int o = o0; o < o1; o++)
        {
            if (pd2.Data[o] != 0xE8) continue;
            uint va = text.Va + (uint)(o - o0);
            uint tgt = (uint)(va + 5 + BitConverter.ToInt32(pd2.Data, o + 1));
            if (!thunks.ContainsKey(tgt)) continue;
            bool clean = pd2.Data[o + 5] == 0x83 && pd2.Data[o + 6] == 0xC4;
            var d = clean ? caller : callee; int c; d.TryGetValue(tgt, out c); d[tgt] = c + 1;
            if (clean)
            {
                Dictionary<int, int> pm; if (!pops.TryGetValue(tgt, out pm)) { pm = new Dictionary<int, int>(); pops[tgt] = pm; }
                int n = pd2.Data[o + 7], k; pm.TryGetValue(n, out k); pm[n] = k + 1;
            }
        }
        foreach (var kv in thunks)
        {
            int a, b; caller.TryGetValue(kv.Key, out a); callee.TryGetValue(kv.Key, out b);
            kv.Value.Cleanup = a == 0 && b == 0 ? "?" : a > b ? "caller" : "callee";
            Dictionary<int, int> pm; if (pops.TryGetValue(kv.Key, out pm)) kv.Value.CallerPop = pm.OrderByDescending(x => x.Value).ThenBy(x => x.Key).First().Key;
        }
    }

    static string Hex(int v) { return v < 0 ? "ordinal " + (-v) : v == 0 ? "0 (unset)" : "+0x" + v.ToString("x"); }

    public static void WriteTable(List<GamePtr> res, string path)
    {
        var sb = new StringBuilder();
        sb.AppendLine("# game_pointers.tsv: every game address ProjectDiablo.dll resolves at run time through FUN_102f10f0(dll, value) (D2Template GetDllOffset).");
        sb.AppendLine("# Generated by tools (Fd2Tools pd2-pointers) from the Ghidra export + the binary; reference names from sigmaRE/5_game_source (read-only).");
        sb.AppendLine("# value: 'ordinal N' = GetProcAddress by ordinal, '+0xOFF' = DLL base + offset; 1.13c/1.13d = the {1.0.13.60, 1.0.13.64} pair at pair_table.");
        sb.AppendLine("# kind: lazy-thunk (resolve once, jmp [cell]; named after the target) | accessor (inline variable, returns &cell; each TU copies *cell");
        sb.AppendLine("#       into its own global = copies). target: function | data (address of a game variable) | code (inside a reference function:");
        sb.AppendLine("#       for a thunk an entry point the reference decompile missed, named sub_<va>; for an accessor a code address such as a hook return).");
        sb.AppendLine("# target_ret: 'ret N' of the target in the 1.13c DLL (tools/pd2/thunk_purge.py). prototype_source/applied_prototype: what");
        sb.AppendLine("#       tools/ghidra/ApplyPrototypes.java set on the thunk (reference = <module>_decomp.h of 5_game_source).");
        sb.AppendLine("#       wrapper / jmp-stub: a PD2 function (guard + jump, or a bare 'jmp') that Ghidra merged with the lazy thunk it ends in;");
        sb.AppendLine("#       not the game function: no pd2_name here (the tree names it <file>_Wrap_/JmpTo_<target>_<addr>), cell/cell_name are");
        sb.AppendLine("#       the real thunk's, which has its own lazy-thunk row (call_sites 0 and no prototype when Ghidra made no function of it).");
        sb.AppendLine("# cleanup: who pops the stack arguments at PD2's call sites (caller = __cdecl). call_sites: thunk calls / calls through the copies.");
        sb.AppendLine("address\tkind\tpd2_name\tcell\tcell_name\tcopies\tdll\tpair_table\t1.13c\t1.13d\ttarget\treference_name\tinside\tdefined_in\tcall_sites\tcleanup\ttarget_ret\tprototype_source\tapplied_prototype\treference_prototype");
        foreach (var g in res.OrderBy(g => g.Func))
            sb.AppendLine(string.Join("\t", "0x" + g.Func.ToString("x8"), g.Kind, g.Name ?? "", g.Cell ?? "", g.CellName ?? "", string.Join(",", g.Copies),
                g.Dll, g.Pair != 0 ? "0x" + g.Pair.ToString("x8") : "", g.Pair != 0 ? Hex(g.V113c) : "", g.Pair != 0 ? Hex(g.V113d) : "",
                g.Target, g.RefName ?? "", g.Inside, g.DefinedIn, g.CallSites, g.Cleanup, g.Purge >= 0 ? "ret " + g.Purge : "", g.ProtoSource, g.Proto != null ? g.Proto.Replace("\t", " | ") : "", g.RefProto ?? ""));
        Directory.CreateDirectory(Path.GetDirectoryName(path));
        File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
    }

    // ---- ApplyPrototypes.java input -----------------------------------------------------------------------
    static Regex ProtoPartsRx = new Regex(@"^(?<ret>.*?)\s*(?<cc>__cdecl|__stdcall|__fastcall|__thiscall)?\s*\b(?<name>[A-Za-z_]\w*)\s*\((?<params>.*)\)\s*;?\s*$");

    // The prototype a lazy thunk gets in Ghidra. The thunk is called from compiled C++, so only standard conventions
    // are possible: register parameters other than ECX/EDX (reg_EBX/ESI/EDI/EAX in the reference, from LTCG-internal
    // calls or decompiler artefacts) are dropped. The stack part is checked against the target's "ret N" in the 1.13c DLL.
    // Hand-checked prototypes that replace the reference one (whose parameters are plain integers, so PD2's string
    // arguments would print as numbers). Each with its evidence.
    public static readonly Dictionary<string, string[]> PrototypeOverrides = new Dictionary<string, string[]> {
        { "Fog_10024", new[] { "__cdecl\tvoid\tchar * szMsg, char * szFile, int nLine",
            "assert/fatal error: PD2 pushes a message, its own __FILE__ and a line number and pops 0xc after the call (phase 2, 63 callers)" } },
        { "Fog_10045", new[] { "__fastcall\tvoid *\tvoid * pMemPool, int nSize, char * szFile, int nLine, int n0",
            "pool allocator: ECX/EDX + 3 stack dwords (target ends in ret 0xc); PD2 passes its own __FILE__ and line" } },
        { "Fog_10046", new[] { "__fastcall\tvoid\tvoid * pMemPool, void * pMemory, char * szFile, int nLine, int n0",
            "pool free: ECX/EDX + 3 stack dwords (target ends in ret 0xc); PD2 passes its own __FILE__ and line" } },
    };

    static void MakePrototype(GamePtr g)
    {
        string[] ov;
        if (g.RefName != null && PrototypeOverrides.TryGetValue(g.RefName, out ov)) { g.Proto = ov[0]; g.ProtoSource = "manual (" + ov[1] + ")"; return; }
        var m = g.RefProto != null ? ProtoPartsRx.Match(g.RefProto) : Match.Empty;
        bool callerCleans = g.Cleanup == "caller";
        string cc, ret; var stack = new List<string>(); string ecx = null, edx = null; int dropped = 0;
        if (m.Success)
        {
            ret = m.Groups["ret"].Value.Trim(); if (ret.Length == 0) ret = "undefined4";
            cc = m.Groups["cc"].Success && m.Groups["cc"].Value.Length > 0 ? m.Groups["cc"].Value : null;
            var plist = SplitParams(m.Groups["params"].Value).Select(x => x.Trim()).Where(x => x.Length > 0 && x != "void").ToList();
            int idx = 0;
            foreach (var t in plist)
            {
                var pm = Regex.Match(t, @"^(.*?)\s*\b([A-Za-z_]\w*)$");
                string ty = pm.Success ? pm.Groups[1].Value.Trim() : "undefined4", nm = pm.Success ? pm.Groups[2].Value : "param_" + (idx + 1);
                if (ty.Length == 0) ty = "undefined4";
                var rm = Regex.Match(nm, @"^reg_(\w+)$");
                if (rm.Success)
                {
                    string r = rm.Groups[1].Value;
                    if (r == "ECX" && ecx == null) ecx = ty + " " + nm; else if (r == "EDX" && edx == null) edx = ty + " " + nm; else dropped++;
                }
                else if (nm == "this" || (cc == "__thiscall" && idx == 0)) ecx = ty + " " + nm;
                else if (cc == "__fastcall" && ecx == null && idx == 0) ecx = ty + " " + nm;
                else if (cc == "__fastcall" && edx == null && idx == 1) edx = ty + " " + nm;
                else stack.Add(ty + " " + nm);
                idx++;
            }
            g.ProtoSource = "reference";
        }
        else if (g.Purge >= 0 || callerCleans)
        {
            ret = "undefined4"; cc = null;
            int n = callerCleans ? g.CallerPop / 4 : g.Purge / 4;
            for (int i = 0; i < n; i++) stack.Add("undefined4 param_" + (i + 1));
            g.ProtoSource = callerCleans ? "caller-cleanup" : "purge";
        }
        else { g.ProtoSource = "none"; return; }
        // stack size against the target's own "ret N"
        System.Func<string, int> size = t => Regex.IsMatch(t, @"^(longlong|ulonglong|undefined8|double|int64_t|uint64_t|float8)\s") ? 8 : 4;
        int bytes = stack.Sum(size);
        if (g.ProtoSource == "reference" && g.Purge > 0 && !callerCleans && bytes != g.Purge)
        {
            while (bytes > g.Purge && stack.Count > 0) { bytes -= size(stack[stack.Count - 1]); stack.RemoveAt(stack.Count - 1); }
            while (bytes < g.Purge) { stack.Add("undefined4 param_s" + (bytes / 4 + 1)); bytes += 4; }
            g.ProtoSource = "reference+purge";
        }
        // calling convention: register arguments -> fastcall/thiscall; otherwise who cleans up decides
        if (ecx != null || edx != null)
        {
            if (cc != "__thiscall" || edx != null) cc = "__fastcall";
            if (cc == "__fastcall" && ecx == null) ecx = "uint32_t unused_ECX";
        }
        else   // the target's own "ret N" decides; without it, PD2's call sites ("add esp,N" after the call = caller cleans)
            // (PD2's own call sites win: "ret N" comes from a linear scan, which overshoots on functions that never return)
            cc = callerCleans || (g.Purge == 0 && bytes > 0) ? "__cdecl" : "__stdcall";
        // PD2 reads the whole of EAX after these calls (its own declarations return DWORD/BOOL), so a 1- or 2-byte
        // reference return type would only produce CONCAT31(extraout_var, ...) at the call sites: widen it
        if (Regex.IsMatch(ret, @"^(byte|uchar|uint8_t|bool|ushort|uint16_t|undefined1|undefined2|wchar16|wchar_t)$")) { ret = "uint32_t"; g.ProtoSource += " (return widened)"; }
        else if (Regex.IsMatch(ret, @"^(char|short|int8_t|int16_t)$")) { ret = "int"; g.ProtoSource += " (return widened)"; }
        var all = new List<string>();
        if (ecx != null) all.Add(ecx);
        if (edx != null) all.Add(edx);
        all.AddRange(stack);
        if (dropped > 0 && g.ProtoSource.StartsWith("reference")) g.ProtoSource += " (" + dropped + " non-C register param" + (dropped > 1 ? "s" : "") + " dropped)";
        g.Proto = cc + "\t" + ret + "\t" + string.Join(", ", all);
    }

    public static void WritePrototypes(List<GamePtr> res, string path, StringBuilder log)
    {
        var sb = new StringBuilder();
        sb.AppendLine("# fd2 phase 3: lazy game-function thunks get the prototype of the game function they jump to (Pd2Pointers.cs).");
        sb.AppendLine("# address<TAB>calling convention<TAB>return type<TAB>params (type name, ...)<TAB>new name");
        // wrappers / jmp stubs forward their arguments unchanged: same prototype, but their default name (they are not the
        // game function); a thunk Ghidra folded into its wrapper has no function to apply it to
        foreach (var g in res.Where(g => (g.Kind == "lazy-thunk" && g.Name != null && g.InExport || g.Thunk != 0) && g.Proto != null).OrderBy(g => g.Func))
            sb.AppendLine("0x" + g.Func.ToString("x8") + "\t" + g.Proto + "\t" + (g.Thunk != 0 ? "FUN_" + g.Func.ToString("x8") : g.Name));
        File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
        foreach (var grp in res.Where(g => g.Kind == "lazy-thunk").GroupBy(g => Regex.Replace(g.ProtoSource, @" \(.*", "")))
            log.AppendLine("  thunk prototypes from " + grp.Key + ": " + grp.Count());
        log.AppendLine("  of which reference prototypes with non-C register params dropped: " + res.Count(g => g.ProtoSource.Contains("dropped")));
    }

    static List<string> SplitParams(string s)
    {
        var r = new List<string>(); int depth = 0; var cur = new StringBuilder();
        foreach (char c in s)
        {
            if (c == '(') depth++; else if (c == ')') depth--;
            if (c == ',' && depth == 0) { r.Add(cur.ToString()); cur.Clear(); } else cur.Append(c);
        }
        if (cur.Length > 0) r.Add(cur.ToString());
        return r;
    }

    // ---- patch tables (D2Template): {int module, DWORD offset, DWORD data, BOOL relative, DWORD size} ---------------
    // A handler is a 'data' value that points at a function of this module; its hint names the game function the
    // patch is written into ("Hook_<reference name>"), so handlers of one feature read alike. Phase 4 decodes the tables.
    public static int PatchHints(ModuleConfig cfg, Dictionary<string, GameModule> mods, IEnumerable<uint> functionStarts, StringBuilder log)
    {
        if (cfg.PatchTables.Count == 0 || cfg.Bin == null) return 0;
        var pe = cfg.Bin; var starts = new HashSet<uint>(functionStarts);
        int handlers = 0, entries = 0;
        foreach (var table in cfg.PatchTables)
        {
            for (uint a = table; ; a += 20)
            {
                int o = pe.Off(a); if (o < 0) break;
                int dll = BitConverter.ToInt32(pe.Data, o);
                if (dll < 0 || dll >= cfg.PatchModules.Length) break;
                uint off = BitConverter.ToUInt32(pe.Data, o + 4), data = BitConverter.ToUInt32(pe.Data, o + 8);
                entries++;
                if (!starts.Contains(data) || cfg.Hints.ContainsKey(data)) continue;
                string target = GameAddressName(mods, cfg.PatchModules[dll] + ".dll", off);
                // inside game code: Hook_<function>; elsewhere (a pointer stored into a game data table): Ptr_<Module>_<va>
                cfg.Hints[data] = target != null ? "Hook_" + target : "Ptr_" + cfg.PatchModules[dll] + "_" + GameVa(mods, cfg.PatchModules[dll] + ".dll", off);
                handlers++;
            }
        }
        log.AppendLine("patch tables: " + entries + " entries, " + handlers + " handler functions named Hook_<game function>");
        return handlers;
    }

    static string GameVa(Dictionary<string, GameModule> mods, string dll, uint offset)
    {
        GameModule gm; if (!mods.TryGetValue(dll, out gm) || gm.Pe == null) return "+" + offset.ToString("x");
        return ((uint)(gm.Pe.ImageBase + offset + gm.RefDelta)).ToString("x8");
    }

    // reference function containing DLL base + offset (installed 1.13c binary), or null when the address is not in the
    // DLL's .text or only an exception funclet/runtime function precedes it
    public static string GameAddressName(Dictionary<string, GameModule> mods, string dll, uint offset)
    {
        GameModule gm; if (!mods.TryGetValue(dll, out gm) || gm.Pe == null) return null;
        uint refVa = (uint)(gm.Pe.ImageBase + offset + gm.RefDelta);
        var text = gm.Pe.Sections.FirstOrDefault(x => x.Name == ".text");
        uint inst = gm.Pe.ImageBase + offset;
        if (text == null || inst < text.Va || inst >= text.Va + text.VSize) return null;
        string n; if (gm.AddrName.TryGetValue(refVa, out n)) return n;
        uint[] st;
        if (!Sorted.TryGetValue(gm.Name, out st)) { st = gm.AddrName.Keys.OrderBy(x => x).ToArray(); Sorted[gm.Name] = st; }
        int i = Array.BinarySearch(st, refVa); if (i < 0) i = ~i - 1;
        if (i < 0) return null;
        string c = gm.AddrName[st[i]];
        return c.StartsWith("Unwind") || c.StartsWith("Catch") ? null : c;
    }
}
