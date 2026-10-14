// Builds source trees for the Diablo II 1.13c game modules and links them through their import/export tables.
// fd2 port: binaries are located case-insensitively (Linux), system DLL folders come from Paths, and LoadNameDb()
// rebuilds the same name tables from a finished 5_game_source (exports.tsv + symbols.csv) without the game binaries.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public class GameModule
{
    public string Name;        // canonical module name, e.g. "D2Common"
    public string Binary;      // installed file name, e.g. "D2Common.dll"
    public string Decompiled;  // Ghidra export, e.g. "D2Common.dll.c"
    public Pe Pe;
    public Dictionary<int, KeyValuePair<uint, string>> Exports;
    public Dictionary<int, string> ExportName = new Dictionary<int, string>();   // ordinal -> symbol name
    // fd2 (name database): reference address - installed binary address. Non-zero when the reference decompile used a
    // different image base (e.g. Storm). AddrName holds every reference function (symbols.csv) by reference address.
    public long RefDelta;
    public Dictionary<uint, string> AddrName = new Dictionary<uint, string>();
}

public static class GameBuild
{
    public static readonly string[][] Modules = {
        new[]{"Game","Game.exe","Game.exe.c"}, new[]{"DiabloII","Diablo II.exe","Diablo_II.exe.c"},
        new[]{"D2Client","D2Client.dll","D2Client.dll.c"}, new[]{"D2Common","D2Common.dll","D2Common.dll.c"},
        new[]{"D2Game","D2Game.dll","D2Game.dll.c"}, new[]{"D2Win","D2Win.dll","D2Win.dll.c"},
        new[]{"D2gfx","D2gfx.dll","D2gfx.dll.c"}, new[]{"D2CMP","D2CMP.dll","D2CMP.dll.c"},
        new[]{"D2Lang","D2Lang.dll","D2Lang.dll.c"}, new[]{"D2Net","D2Net.dll","D2Net.dll.c"},
        new[]{"D2sound","D2sound.dll","D2sound.dll.c"}, new[]{"D2Launch","D2Launch.dll","D2Launch.dll.c"},
        new[]{"D2Multi","D2Multi.dll","D2Multi.dll.c"}, new[]{"D2MCPClient","D2MCPClient.dll","D2MCPClient.dll.c"},
        new[]{"Bnclient","Bnclient.dll","Bnclient.dll.c"}, new[]{"Fog","Fog.dll","Fog.dll.c"},
        new[]{"Storm","Storm.dll","Storm.dll.c"}, new[]{"D2DDraw","D2DDraw.dll","D2DDraw.dll.c"},
        new[]{"D2Direct3D","D2Direct3D.dll","D2Direct3D.dll.c"}, new[]{"D2Glide","D2Glide.dll","D2Glide.dll.c"},
        new[]{"D2Gdi","D2Gdi.dll","D2Gdi.dll.c"},
    };

    static string Ident(string s)
    {
        s = Regex.Replace(s, @"[^A-Za-z0-9_]", "_");
        if (s.Length == 0 || char.IsDigit(s[0])) s = "_" + s;
        return s;
    }

    // Export names of non-game DLLs imported by ordinal (wsock32, dsound, ijl11): installed copy first, then 32-bit system DLLs.
    static string GameDir;
    static Dictionary<string, Dictionary<int, KeyValuePair<uint, string>>> ExtCache = new Dictionary<string, Dictionary<int, KeyValuePair<uint, string>>>(StringComparer.OrdinalIgnoreCase);
    static string ExternalName(string dll, int ordinal)
    {
        Dictionary<int, KeyValuePair<uint, string>> ex;
        if (!ExtCache.TryGetValue(dll, out ex))
        {
            ex = null;
            foreach (var dir in new[] { GameDir }.Concat(Paths.SystemDllDirs()))
            {
                string path = Paths.FindFile(dir, dll);
                if (path != null && File.Exists(path)) { try { ex = new Pe(path).Exports(); } catch { ex = null; } if (ex != null) break; }
            }
            ExtCache[dll] = ex;
        }
        KeyValuePair<uint, string> e;
        if (ex != null && ex.TryGetValue(ordinal, out e) && e.Value != null) return Ident(e.Value);
        return null;
    }
    // demangled "Class::member" (as Ghidra prints calls) -> C name of the export
    public static Dictionary<string, string> CppMap = new Dictionary<string, string>();
    public static HashSet<string> CppAmbiguous = new HashSet<string>();
    public static Dictionary<string, string> CppNamesUnique()
    {
        return CppMap.Where(kv => !CppAmbiguous.Contains(kv.Key)).ToDictionary(kv => kv.Key, kv => kv.Value);
    }

    // MSVC names: ?member@Class@@...  ??0Class@@ (ctor)  ??1 (dtor)  ??4 (operator=)  ??B (cast)  ??_F (default ctor closure)
    static string Demangle(string raw, out string cls, out string cpp)
    {
        cls = null; cpp = null;
        var specials = new Dictionary<string, string[]> {
            {"??0", new[]{"ctor", "{C}"}}, {"??1", new[]{"dtor", "~{C}"}}, {"??4", new[]{"assign", "operator="}},
            {"??B", new[]{"cast", "operator_cast"}}, {"??_F", new[]{"default_ctor_closure", "_default_constructor_closure_"}} };
        foreach (var sp in specials)
            if (raw.StartsWith(sp.Key))
            {
                cls = raw.Substring(sp.Key.Length).Split('@')[0];
                cpp = cls + "::" + sp.Value[1].Replace("{C}", cls);
                return Ident(cls + "_" + sp.Value[0]);
            }
        var parts = raw.TrimStart('?').Split('@');
        string member = parts[0];
        cls = parts.Length > 1 && parts[1].Length > 0 ? parts[1] : null;
        if (cls != null) cpp = cls + "::" + member;
        return Ident(cls != null ? cls + "_" + member : member);
    }

    public static Dictionary<string, GameModule> Load(string gameDir, string ghidraDir)
    {
        var mods = new Dictionary<string, GameModule>(StringComparer.OrdinalIgnoreCase);
        CppMap.Clear(); CppAmbiguous.Clear();
        foreach (var m in Modules)
        {
            var gm = new GameModule { Name = m[0], Binary = m[1], Decompiled = Path.Combine(ghidraDir, m[2]) };
            string bin = Paths.FindFile(gameDir, m[1]);
            if (bin == null) throw new FileNotFoundException(m[1] + " not found in game_dir " + gameDir);
            gm.Pe = new Pe(bin);
            gm.Exports = gm.Pe.Exports();
            var used = new HashSet<string>();
            foreach (var kv in gm.Exports.OrderBy(k => k.Key))
            {
                string raw = kv.Value.Value, cls, cpp;
                string nm = raw == null ? gm.Name + "_" + kv.Key : raw.StartsWith("?") ? Demangle(raw, out cls, out cpp) : Ident(raw.TrimStart('_').Split('@')[0]);
                if (!used.Add(nm)) { nm = nm + "_" + kv.Key; used.Add(nm); }
                gm.ExportName[kv.Key] = nm;
                if (raw != null && raw.StartsWith("?"))
                {
                    Demangle(raw, out cls, out cpp);
                    if (cpp != null) { if (CppMap.ContainsKey(cpp)) CppAmbiguous.Add(cpp); else CppMap[cpp] = nm; }
                }
            }
            mods[m[1]] = gm;
        }
        return mods;
    }

    // "Ordinal_N" -> export name, for ordinals that only one imported DLL provides.
    public static void ResolveImports(Pe importer, Dictionary<string, GameModule> mods, ModuleConfig cfg, StringBuilder report)
    {
        var byOrd = importer.Imports().Where(i => i.Ordinal >= 0).GroupBy(i => i.Ordinal);
        int ok = 0, amb = 0, ext = 0;
        foreach (var g in byOrd)
        {
            var dlls = g.Select(i => i.Dll).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
            string key = "Ordinal_" + g.Key;
            if (dlls.Count != 1) { amb++; report.AppendLine(key + "\tambiguous\t" + string.Join(" / ", dlls)); continue; }
            GameModule target;
            if (!mods.TryGetValue(dlls[0], out target))
            {
                string xn = ExternalName(dlls[0], g.Key);
                if (xn != null) { cfg.OrdinalNames[key] = xn; cfg.OrdinalModule[key] = Path.GetFileNameWithoutExtension(dlls[0]).ToUpperInvariant(); report.AppendLine(key + "\t" + dlls[0] + "\t" + xn); ok++; continue; }
                ext++; report.AppendLine(key + "\tnot a game module\t" + dlls[0]); continue;
            }
            string name;
            if (!target.ExportName.TryGetValue(g.Key, out name)) name = target.Name + "_" + g.Key;
            cfg.OrdinalNames[key] = name;
            cfg.OrdinalModule[key] = target.Name;
            report.AppendLine(key + "\t" + target.Name + "\t" + name);
            ok++;
        }
        report.Insert(0, "# ordinal imports: " + ok + " resolved, " + amb + " ambiguous, " + ext + " from non-game DLLs\n");
    }

    // For ordinals imported from several DLLs, look at which import slot each function's machine code uses
    // (directly, e.g. call [IAT], or through a jmp [IAT] thunk).
    public static int ResolvePerFunction(GameModule gm, Dictionary<string, GameModule> mods, ModuleConfig cfg, bool validate = false)
    {
        var imps = gm.Pe.Imports().Where(i => i.Ordinal >= 0).ToList();
        var amb = new HashSet<int>(imps.GroupBy(i => i.Ordinal)
            .Where(g => g.Select(x => x.Dll.ToLowerInvariant()).Distinct().Count() > 1).Select(g => g.Key));
        if (amb.Count == 0) return 0;
        var bySlot = new Dictionary<uint, Pe.Import>();
        foreach (var i in imps) if (validate || amb.Contains(i.Ordinal)) bySlot[i.IatVa] = i;

        // function starts, and (for validation) the ordinals each function's decompiled text calls
        var hdr = new Regex(@"^//==== .* @ ([0-9a-f]{8})$");
        var ordRx = new Regex(@"\bOrdinal_(\d+)\b");
        var starts = new List<uint>();
        var textOrds = new Dictionary<uint, HashSet<int>>();
        uint curF = 0;
        foreach (var l in File.ReadLines(gm.Decompiled))
        {
            var hm = hdr.Match(l);
            if (hm.Success) { curF = Convert.ToUInt32(hm.Groups[1].Value, 16); starts.Add(curF); textOrds[curF] = new HashSet<int>(); continue; }
            if (validate && l.IndexOf("Ordinal_") >= 0 && textOrds.ContainsKey(curF))
                foreach (Match om in ordRx.Matches(l)) textOrds[curF].Add(int.Parse(om.Groups[1].Value));
        }
        starts = starts.Distinct().OrderBy(x => x).ToList();
        int rejected = 0;
        var d = gm.Pe.Data;

        // thunks: functions that start with jmp [IAT]
        var thunk = new Dictionary<uint, Pe.Import>();
        foreach (var s in starts)
        {
            int o = gm.Pe.Off(s);
            if (o >= 0 && o + 6 <= d.Length && d[o] == 0xFF && d[o + 1] == 0x25)
            {
                Pe.Import im; if (bySlot.TryGetValue(BitConverter.ToUInt32(d, o + 2), out im)) thunk[s] = im;
            }
        }

        int resolved = 0;
        for (int k = 0; k < starts.Count; k++)
        {
            uint s = starts[k];
            uint e = k + 1 < starts.Count ? starts[k + 1] : s + 0x1000;
            int o0 = gm.Pe.Off(s), o1 = gm.Pe.Off(e - 1);
            if (o0 < 0 || o1 < 0) continue;
            var found = new Dictionary<int, HashSet<string>>();
            for (int o = o0; o + 4 <= o1 + 1; o++)
            {
                Pe.Import im = null;
                uint v = BitConverter.ToUInt32(d, o);
                if (!bySlot.TryGetValue(v, out im) && d[o] == 0xE8 && o + 5 <= d.Length)
                {
                    uint tgt = (uint)(gm.Pe.Va(o) + 5 + BitConverter.ToInt32(d, o + 1));
                    thunk.TryGetValue(tgt, out im);
                }
                if (im == null) continue;
                HashSet<string> set;
                if (!found.TryGetValue(im.Ordinal, out set)) { set = new HashSet<string>(StringComparer.OrdinalIgnoreCase); found[im.Ordinal] = set; }
                set.Add(im.Dll);
            }
            if (validate)
            {
                // the binary may be a different build: only trust functions whose import use matches the text exactly
                var binOrds = new HashSet<int>(found.Keys);
                HashSet<int> txt;
                if (!textOrds.TryGetValue(s, out txt) || !binOrds.SetEquals(txt)) { if (txt != null && txt.Count > 0) rejected++; continue; }
            }
            foreach (var kv in found)
            {
                if (kv.Value.Count != 1 || !amb.Contains(kv.Key)) continue;
                GameModule target;
                if (!mods.TryGetValue(kv.Value.First(), out target)) continue;
                string name;
                if (!target.ExportName.TryGetValue(kv.Key, out name)) name = target.Name + "_" + kv.Key;
                Dictionary<string, string[]> map;
                if (!cfg.FuncOrdinals.TryGetValue(s, out map)) { map = new Dictionary<string, string[]>(); cfg.FuncOrdinals[s] = map; }
                map["Ordinal_" + kv.Key] = new[] { name, target.Name };
                resolved++;
            }
        }
        LastRejected = rejected;
        return resolved;
    }
    public static int LastRejected;

    // Configures the D2Sigma rebuild so its Ordinal_N calls get the same names as the game-module trees.
    public static string ConfigureSigma(string gameDir, string ghidraDir, string sigmaDll, string sigmaDecompiled)
    {
        GameDir = gameDir;
        var mods = Load(gameDir, ghidraDir);
        var cfg = new ModuleConfig();                       // D2Sigma defaults
        cfg.CppNames = CppNamesUnique();
        var sigma = new GameModule { Name = "D2Sigma", Binary = Path.GetFileName(sigmaDll), Decompiled = sigmaDecompiled, Pe = new Pe(sigmaDll) };
        var rep = new StringBuilder();
        ResolveImports(sigma.Pe, mods, cfg, rep);
        int per = ResolvePerFunction(sigma, mods, cfg, true);
        Rebuilder.Cfg = cfg;
        return "D2Sigma imports: " + rep.ToString().Split('\n')[0].TrimStart('#', ' ') + "; per-function: " + per + " resolved, " + LastRejected + " functions skipped (build mismatch)";
    }

    // ---- fd2: the finished reference trees as a read-only name database ----------------------------------------
    // name -> "<Module>/<file in that module's tree>" for every function in 5_game_source/*/symbols.csv
    public static Dictionary<string, string> DefinedIn = new Dictionary<string, string>();
    public static int NameDbExportMismatches;

    // Same result as Load() for the purpose of naming (ExportName per ordinal), read from 5_game_source/<Module>/exports.tsv.
    // When gameDir holds the 1.13c binaries, their raw export names are read too, so C++ exports (D2Lang's Unicode::*,
    // Bnclient, Fog) get CppMap entries exactly as in the reference run; otherwise CppMap stays empty.
    public static Dictionary<string, GameModule> LoadNameDb(string gameSourceRoot, string gameDir)
    {
        var mods = new Dictionary<string, GameModule>(StringComparer.OrdinalIgnoreCase);
        CppMap.Clear(); CppAmbiguous.Clear(); DefinedIn.Clear(); NameDbExportMismatches = 0;
        GameDir = gameDir;
        foreach (var m in Modules)
        {
            string dir = Path.Combine(gameSourceRoot, m[0]);
            string tsv = Path.Combine(dir, "exports.tsv");
            if (!File.Exists(tsv)) continue;
            var gm = new GameModule { Name = m[0], Binary = m[1], Exports = new Dictionary<int, KeyValuePair<uint, string>>() };
            foreach (var line in File.ReadLines(tsv).Skip(1))
            {
                var c = line.Split('\t');
                if (c.Length < 3) continue;
                int ord = int.Parse(c[0]);
                gm.Exports[ord] = new KeyValuePair<uint, string>(Convert.ToUInt32(c[1].Replace("0x", ""), 16), null);
                gm.ExportName[ord] = c[2].Trim();
            }
            string bin = gameDir != null ? Paths.FindFile(gameDir, m[1]) : null;
            if (bin != null)
            {
                try
                {
                    gm.Pe = new Pe(bin);
                    var pex = gm.Pe.Exports();
                    // a rebased reference (same RVAs, other image base) shows as one constant delta on every export
                    var deltas = pex.Where(kv => gm.Exports.ContainsKey(kv.Key)).Select(kv => (long)gm.Exports[kv.Key].Key - kv.Value.Key).Distinct().ToList();
                    if (deltas.Count == 1) gm.RefDelta = deltas[0];
                    foreach (var kv in pex)
                    {
                        KeyValuePair<uint, string> e;
                        if (!gm.Exports.TryGetValue(kv.Key, out e) || e.Key - gm.RefDelta != kv.Value.Key) { NameDbExportMismatches++; continue; }
                        gm.Exports[kv.Key] = new KeyValuePair<uint, string>(e.Key, kv.Value.Value);
                        string raw = kv.Value.Value, cls, cpp;
                        if (raw != null && raw.StartsWith("?"))
                        {
                            Demangle(raw, out cls, out cpp);
                            if (cpp != null) { if (CppMap.ContainsKey(cpp)) CppAmbiguous.Add(cpp); else CppMap[cpp] = gm.ExportName[kv.Key]; }
                        }
                    }
                }
                catch (Exception) { gm.Pe = null; }
            }
            string sym = Path.Combine(dir, "symbols.csv");
            if (File.Exists(sym))
                foreach (var line in File.ReadLines(sym).Skip(1))
                {
                    var c = Regex.Matches(line, "\"((?:[^\"]|\"\")*)\"").Cast<Match>().Select(x => x.Groups[1].Value).ToArray();
                    if (c.Length >= 3 && c[2].Length > 0 && !DefinedIn.ContainsKey(c[1])) DefinedIn[c[1]] = m[0] + "/" + c[2];
                    if (c.Length >= 2) gm.AddrName[Convert.ToUInt32(line.Substring(2, 8), 16)] = c[1];
                }
            mods[m[1]] = gm;
        }
        return mods;
    }

    // Name of the game function at an installed-binary address (D2Template-style "DLL base + offset" pointers),
    // exactly as the reference tree names it; null when no reference function starts there.
    public static string NameAt(Dictionary<string, GameModule> mods, string binary, uint installedVa)
    {
        GameModule gm; string n;
        if (!mods.TryGetValue(binary, out gm)) return null;
        return gm.AddrName.TryGetValue((uint)(installedVa + gm.RefDelta), out n) ? n : null;
    }

    // Configures one PD2 module (ModuleConfigs.ProjectDiablo / PD2_EXT): exports, Ordinal_N imports named from the
    // name database, and (when the decompile exists) per-function resolution of ordinals imported from several DLLs.
    public static ModuleConfig ConfigurePd2(ModuleConfig cfg, string binary, string decompiled, Dictionary<string, GameModule> mods, StringBuilder imports, StringBuilder exports, string pointerTable = null)
    {
        var gm = new GameModule { Name = cfg.Module, Binary = cfg.BinaryName, Decompiled = decompiled, Pe = new Pe(binary) };
        cfg.Bin = gm.Pe;
        cfg.CppNames = CppNamesUnique();
        gm.Exports = gm.Pe.Exports();
        var used = new HashSet<string>();
        exports.Append("ordinal\taddress\tname\n");
        foreach (var kv in gm.Exports.OrderBy(k => k.Key))
        {
            string raw = kv.Value.Value, cls, cpp;
            string nm = raw == null ? gm.Name + "_" + kv.Key : raw.StartsWith("?") ? Demangle(raw, out cls, out cpp) : Ident(raw.TrimStart('_').Split('@')[0]);
            if (!used.Add(nm)) { nm = nm + "_" + kv.Key; used.Add(nm); }
            cfg.ExportNames[kv.Value.Key] = nm;
            exports.AppendLine(kv.Key + "\t0x" + kv.Value.Key.ToString("x8") + "\t" + nm);
        }
        ResolveImports(gm.Pe, mods, cfg, imports);
        if (pointerTable != null && File.Exists(pointerTable)) LoadGamePointers(pointerTable, mods, cfg, imports);
        if (decompiled != null && File.Exists(decompiled))
        {
            int perFunc = ResolvePerFunction(gm, mods, cfg);
            imports.Insert(0, "# ambiguous ordinals resolved per function from machine code: " + perFunc + " (function, ordinal) pairs\n");
        }
        return cfg;
    }

    // game_pointers.tsv: "<global>\t<dll>\t<ordinal | +0xOFFSET | 0xVA>" per line ('#' comments). PD2 (D2Template) calls the
    // game through pointers it fills at run time, so its decompile has no Ordinal_N imports to name.
    // TODO(phase 3): generate this file from ProjectDiablo's D2Template pointer tables in the Ghidra export.
    public static int LoadGamePointers(string path, Dictionary<string, GameModule> mods, ModuleConfig cfg, StringBuilder report)
    {
        int ok = 0, bad = 0;
        foreach (var raw in File.ReadLines(path))
        {
            string line = raw.Trim();
            if (line.Length == 0 || line.StartsWith("#")) continue;
            var c = line.Split('\t');
            string name = null; GameModule gm;
            if (c.Length >= 3 && mods.TryGetValue(c[1].Trim(), out gm))
            {
                string v = c[2].Trim();
                if (Regex.IsMatch(v, @"^\d+$")) gm.ExportName.TryGetValue(int.Parse(v), out name);
                else if (v.StartsWith("+") && gm.Pe != null) name = NameAt(mods, gm.Binary, gm.Pe.ImageBase + Convert.ToUInt32(v.Substring(1).Replace("0x", ""), 16));
                else if (v.StartsWith("0x")) name = NameAt(mods, gm.Binary, Convert.ToUInt32(v.Substring(2), 16));
            }
            if (name == null) { bad++; report.AppendLine(c[0] + "\tunresolved pointer\t" + line); continue; }
            cfg.GlobalNames[c[0].Trim()] = name;
            string where; DefinedIn.TryGetValue(name, out where);
            cfg.GlobalNotes[c[0].Trim()] = "pointer to " + c[1].Trim() + " " + c[2].Trim() + ", filled at run time" +
                                            (where != null ? "; defined in sigmaRE/5_game_source/" + where : "");
            report.AppendLine(c[0].Trim() + "\tpointer\t" + name);
            ok++;
        }
        report.Insert(0, "# game function pointers (game_pointers.tsv): " + ok + " named, " + bad + " unresolved\n");
        return ok;
    }

    public static string Run(string gameDir, string ghidraDir, string outRoot)
    {
        var log = new StringBuilder();
        GameDir = gameDir;
        var mods = Load(gameDir, ghidraDir);
        Directory.CreateDirectory(outRoot);
        var calls = new Dictionary<string, Dictionary<string, int>>();
        var summary = new List<string[]>();
        foreach (var gm in mods.Values)
        {
            var cfg = new ModuleConfig { Sigma = false, Module = gm.Name, BinaryName = gm.Binary, LibStart = 0, Bin = gm.Pe, Product = "Diablo II 1.13c", Alphabetical = false };
            cfg.CppNames = CppNamesUnique();
            foreach (var kv in gm.Exports) cfg.ExportNames[kv.Value.Key] = gm.ExportName[kv.Key];
            string outDir = Path.Combine(outRoot, gm.Name);
            Directory.CreateDirectory(outDir);
            var imp = new StringBuilder();
            ResolveImports(gm.Pe, mods, cfg, imp);
            int perFunc = ResolvePerFunction(gm, mods, cfg);
            imp.Insert(0, "# ambiguous ordinals resolved per function from machine code: " + perFunc + " (function, ordinal) pairs\n");
            File.WriteAllText(Path.Combine(outDir, "imports.tsv"), imp.ToString(), new UTF8Encoding(false));
            var ex = new StringBuilder("ordinal\taddress\tname\n");
            foreach (var kv in gm.Exports.OrderBy(k => k.Key)) ex.AppendLine(kv.Key + "\t0x" + kv.Value.Key.ToString("x8") + "\t" + gm.ExportName[kv.Key]);
            File.WriteAllText(Path.Combine(outDir, "exports.tsv"), ex.ToString(), new UTF8Encoding(false));

            // the module tree is fully generated: drop source files from earlier runs so moved functions don't linger
            foreach (var old in Directory.GetFiles(outDir, "*.cpp", SearchOption.AllDirectories)) File.Delete(old);
            Rebuilder.Cfg = cfg;
            string r = Rebuilder.Run(gm.Decompiled, outDir);
            calls[gm.Name] = new Dictionary<string, int>(Rebuilder.CallsToModule);
            log.AppendLine("== " + gm.Name);
            foreach (var line in r.Split('\n').Where(l => !l.StartsWith("  demoted") && l.Trim().Length > 0)) log.AppendLine("   " + line.TrimEnd());
            summary.Add(new[] { gm.Name, r });
        }
        Rebuilder.Cfg = new ModuleConfig();   // back to D2Sigma defaults

        // cross-module call table
        var names = mods.Values.Select(m => m.Name).ToList();
        var sb = new StringBuilder();
        sb.AppendLine("# Calls between modules");
        sb.AppendLine();
        sb.AppendLine("Resolved `Ordinal_N` call sites, by calling module (rows) and target module (columns).");
        sb.AppendLine();
        var targets = names.Where(t => calls.Values.Any(c => c.ContainsKey(t))).ToList();
        sb.AppendLine("| caller \\ target | " + string.Join(" | ", targets) + " |");
        sb.AppendLine("|---|" + string.Join("|", targets.Select(t => "---:")) + "|");
        foreach (var n in names)
        {
            Dictionary<string, int> c; calls.TryGetValue(n, out c);
            sb.AppendLine("| " + n + " | " + string.Join(" | ", targets.Select(t => { int v; return c != null && c.TryGetValue(t, out v) ? v.ToString() : ""; })) + " |");
        }
        File.WriteAllText(Path.Combine(outRoot, "CALLS.md"), sb.ToString(), new UTF8Encoding(false));
        return log.ToString();
    }
}
