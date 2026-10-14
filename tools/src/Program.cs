// fd2 command-line driver. The sigmaRE tools were driven from PowerShell (rebuild.ps1 + Add-Type); this entry point
// does the same steps from `dotnet`, on Linux or Windows, with every location taken from tools/fd2.paths.json
// or --<key> options (see Paths.Keys). Run without arguments for usage.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public static class Program
{
    const string Usage = @"Fd2Tools <command> [options]

commands
  paths                         print the resolved locations (config + overrides)
  info <pe>                     PE header, sections, export/import counts of one binary
  namedb                        load sigmaRE/5_game_source as the read-only name database and print counts
  pd2-scan [--module M]         dry run, no Ghidra export needed: PE + import naming through the name database +
                                __FILE__ anchor classification for ProjectDiablo / PD2_EXT (M = one module)
  pd2 [--module M] [--no-declare]
                                rebuild 4_pd2_source/<M> from <ghidra_export_dir>/<M>_decompiled.c (+ .extra.c)
  sigma [--dll D2Sigma.dll] [--game] [--table-decompiled f]
                                rebuild.ps1's original job: D2Sigma (+ with --game all 1.13c modules) into
                                <reference_out>/4_sigma_source and <reference_out>/5_game_source
  fields <dll> <symbols.csv> [--vector-ctor 0xADDR]
                                field-descriptor scan (Fields.cs); default ctor is D2Sigma's 0x10042bd0
  undeclared <tree> [out.csv]   report identifiers a generated tree uses without declaring them

options
  --config <file>               default: $FD2_PATHS, else tools/fd2.paths.json next to the project
  --<key> <path>                override a config key, e.g. --reference-root, --ghidra-export-dir, --pd2-install-dir
";

    public static int Main(string[] argv)
    {
        var args = new List<string>(argv);
        try
        {
            string config = TakeOpt(args, "--config") ?? Environment.GetEnvironmentVariable("FD2_PATHS");
            foreach (var k in Paths.Keys)
            {
                string v = TakeOpt(args, "--" + k.Replace('_', '-'));
                if (v != null) Paths.Set(k, Path.GetFullPath(Paths.Native(v)));
            }
            Paths.Load(config ?? FindConfig());
            if (args.Count == 0 || args[0] == "-h" || args[0] == "--help") { Console.Write(Usage); return args.Count == 0 ? 1 : 0; }
            string cmd = args[0]; args.RemoveAt(0);
            switch (cmd)
            {
                case "paths": Console.WriteLine("config: " + (Paths.ConfigFile ?? "(none)")); Console.WriteLine(Paths.Describe()); return 0;
                case "info": return Info(Paths.Native(args[0]));
                case "namedb": return NameDb();
                case "pd2-scan": return Pd2(TakeOpt(args, "--module"), true, false);
                case "pd2": { bool nd = TakeFlag(args, "--no-declare"); return Pd2(TakeOpt(args, "--module"), false, nd); }
                case "sigma": return Sigma(TakeOpt(args, "--dll"), TakeOpt(args, "--table-decompiled"), TakeFlag(args, "--game"));
                case "fields": return FieldsCmd(args);
                case "undeclared": Console.Write(Undeclared.Scan(Paths.Native(args[0]), args.Count > 1 ? Paths.Native(args[1]) : null)); return 0;
                default: Console.Error.WriteLine("unknown command " + cmd); Console.Write(Usage); return 1;
            }
        }
        catch (Exception e) when (e is ArgumentException || e is FileNotFoundException || e is DirectoryNotFoundException || e is InvalidDataException)
        {
            Console.Error.WriteLine("error: " + e.Message);
            return 2;
        }
    }

    static string TakeOpt(List<string> a, string name)
    {
        int i = a.FindIndex(x => string.Equals(x, name, StringComparison.OrdinalIgnoreCase));
        if (i < 0 || i + 1 >= a.Count) return null;
        string v = a[i + 1]; a.RemoveRange(i, 2); return v;
    }
    static bool TakeFlag(List<string> a, string name)
    {
        int i = a.FindIndex(x => string.Equals(x, name, StringComparison.OrdinalIgnoreCase));
        if (i < 0) return false;
        a.RemoveAt(i); return true;
    }

    // tools/fd2.paths.json: look upwards from the build output and from the current directory
    static string FindConfig()
    {
        foreach (var start in new[] { AppContext.BaseDirectory, Directory.GetCurrentDirectory() })
            for (var d = new DirectoryInfo(start); d != null; d = d.Parent)
            {
                foreach (var c in new[] { Path.Combine(d.FullName, "fd2.paths.json"), Path.Combine(d.FullName, "tools", "fd2.paths.json") })
                    if (File.Exists(c)) return c;
            }
        return null;
    }

    static int Info(string path)
    {
        var pe = new Pe(path);
        Console.WriteLine(path);
        Console.WriteLine(string.Format("  machine 0x{0:x}  image base 0x{1:x8}  timestamp {2:yyyy-MM-dd HH:mm:ss} UTC", pe.Machine, pe.ImageBase,
            DateTimeOffset.FromUnixTimeSeconds(pe.TimeDateStamp).UtcDateTime));
        foreach (var s in pe.Sections)
            Console.WriteLine(string.Format("  {0,-8} va 0x{1:x8} vsize 0x{2:x6} raw 0x{3:x6}", s.Name, s.Va, s.VSize, s.RawSize));
        var ex = pe.Exports(); var im = pe.Imports();
        Console.WriteLine("  exports " + ex.Count + " (" + ex.Values.Count(v => v.Value != null) + " named); imports " + im.Count + " from " +
                          im.Select(i => i.Dll.ToLowerInvariant()).Distinct().Count() + " DLLs (" + im.Count(i => i.Ordinal >= 0) + " by ordinal)");
        return 0;
    }

    static Dictionary<string, GameModule> LoadDb(bool print)
    {
        string root = Paths.GameSourceRef;
        if (!Directory.Exists(root)) throw new DirectoryNotFoundException("name database " + root + " not found (set reference_root)");
        var mods = GameBuild.LoadNameDb(root, Paths.Get("game_dir"));
        if (print)
        {
            Console.WriteLine("name database: " + root);
            foreach (var m in mods.Values)
                Console.WriteLine(string.Format("  {0,-12} {1,-16} exports {2,5}{3}", m.Name, m.Binary, m.ExportName.Count, m.Pe != null ? "  (+ binary " + m.Binary + ")" : ""));
            Console.WriteLine("  modules " + mods.Count + "; exports " + mods.Values.Sum(m => m.ExportName.Count) +
                              "; functions with a file in symbols.csv " + GameBuild.DefinedIn.Count +
                              "; C++ export names " + GameBuild.CppMap.Count + " (" + GameBuild.CppAmbiguous.Count + " ambiguous)" +
                              (Paths.Get("game_dir") != null ? "; binary/exports.tsv address mismatches " + GameBuild.NameDbExportMismatches : ""));
            string w; GameBuild.DefinedIn.TryGetValue("D2Common_10973", out w);
            Console.WriteLine("  e.g. D2Common_10973 -> " + (w ?? "(not found)"));
        }
        return mods;
    }

    static int NameDb() { LoadDb(true); return 0; }

    static List<ModuleConfig> SelectPd2(string module)
    {
        var all = ModuleConfigs.Pd2.Select(f => f()).ToList();
        if (module == null) return all;
        var sel = all.Where(c => string.Equals(c.Module, module, StringComparison.OrdinalIgnoreCase)).ToList();
        if (sel.Count == 0) throw new ArgumentException("unknown module " + module + " (known: " + string.Join(", ", all.Select(c => c.Module)) + ")");
        return sel;
    }

    static int Pd2(string module, bool dryRun, bool noDeclare)
    {
        var mods = LoadDb(dryRun);
        string install = Paths.Require("pd2_install_dir");
        string ghidra = Paths.Get("ghidra_export_dir");
        var built = new List<string>();
        int rc = 0;
        foreach (var cfg in SelectPd2(module))
        {
            string bin = Paths.FindFile(install, cfg.BinaryName);
            if (bin == null) throw new FileNotFoundException(cfg.BinaryName + " not found in pd2_install_dir " + install);
            string dec = ghidra != null ? Path.Combine(ghidra, cfg.Decompiled) : null;
            var imp = new StringBuilder(); var exp = new StringBuilder();
            string outDir = Path.Combine(Paths.Require("repo_root"), Paths.Native(cfg.OutputSubdir));
            GameBuild.ConfigurePd2(cfg, bin, dec, mods, imp, exp, Path.Combine(outDir, "game_pointers.tsv"));
            Rebuilder.Cfg = cfg;
            Undeclared.AddImportedNames(cfg.Bin, dll => mods.ContainsKey(dll));
            Console.WriteLine("== " + cfg.Module + "  (" + bin + ")");
            if (dryRun) { Scan(cfg, mods, imp, exp, dec); continue; }

            if (dec == null || !File.Exists(dec))
            {
                Console.Error.WriteLine("error: Ghidra export " + (dec ?? "<ghidra_export_dir>/" + cfg.Decompiled) + " not found (run tools/ghidra/run_all.* first)");
                rc = 2; continue;
            }
            Directory.CreateDirectory(outDir);
            File.WriteAllText(Path.Combine(outDir, "imports.tsv"), imp.ToString(), new UTF8Encoding(false));
            File.WriteAllText(Path.Combine(outDir, "exports.tsv"), exp.ToString(), new UTF8Encoding(false));
            // the module tree is fully generated: drop source files from earlier runs so moved functions don't linger
            foreach (var old in Directory.GetFiles(outDir, "*.cpp", SearchOption.AllDirectories)) File.Delete(old);
            string r = Rebuilder.Run(dec, outDir);
            foreach (var line in r.Split('\n').Where(l => !l.StartsWith("  demoted") && l.Trim().Length > 0)) Console.WriteLine("   " + line.TrimEnd());
            built.Add(outDir);
        }
        if (!dryRun && built.Count > 0 && !noDeclare)
        {
            Console.WriteLine("== declarations (prototypes from " + Paths.GameSourceRef + ", read-only)");
            Console.Write(Declare.RunTrees(built, Declare.ModuleTrees(Paths.GameSourceRef), "", "sigmaRE"));
        }
        return rc;
    }

    // what pd2-scan prints: everything that can be known before the Ghidra export exists
    static void Scan(ModuleConfig cfg, Dictionary<string, GameModule> mods, StringBuilder imp, StringBuilder exp, string dec)
    {
        var pe = cfg.Bin;
        Console.WriteLine(string.Format("  image base 0x{0:x8} (from PE)  machine 0x{1:x}  timestamp {2:yyyy-MM-dd}  sections {3}", pe.ImageBase, pe.Machine,
            DateTimeOffset.FromUnixTimeSeconds(pe.TimeDateStamp).UtcDateTime, string.Join(" ", pe.Sections.Select(s => s.Name))));
        Console.WriteLine("  exports: " + cfg.ExportNames.Count + (cfg.ExportNames.Count > 0 ? " (" + string.Join(", ", cfg.ExportNames.Values.Take(6)) + (cfg.ExportNames.Count > 6 ? ", ..." : "") + ")" : ""));
        var ims = pe.Imports();
        Console.WriteLine("  imports: " + ims.Count + " from " + ims.Select(i => i.Dll.ToLowerInvariant()).Distinct().Count() + " DLLs");
        foreach (var g in ims.GroupBy(i => i.Dll, StringComparer.OrdinalIgnoreCase).OrderByDescending(g => g.Count()).Take(12))
            Console.WriteLine(string.Format("    {0,-34} {1,4} ({2} by ordinal){3}", g.Key, g.Count(), g.Count(i => i.Ordinal >= 0), mods.ContainsKey(g.Key) ? "  [game module]" : ""));
        var lines = imp.ToString().Split('\n');
        Console.WriteLine("  " + lines.First(l => l.StartsWith("# ordinal imports")).TrimStart('#', ' '));
        var named = lines.Where(l => l.StartsWith("Ordinal_") && l.Split('\t').Length == 3 && !l.Contains("ambiguous") && !l.Contains("not a game module")).ToList();
        foreach (var g in named.GroupBy(l => l.Split('\t')[1]).OrderByDescending(g => g.Count()))
            Console.WriteLine(string.Format("    -> {0,-12} {1,4}  e.g. {2}", g.Key, g.Count(), string.Join(", ", g.Take(3).Select(l => l.Split('\t')[0] + "=" + l.Split('\t')[2]))));
        int located = named.Count(l => GameBuild.DefinedIn.ContainsKey(l.Split('\t')[2].Trim()));
        Console.WriteLine("    import names with a defining file in the name database: " + located + " of " + named.Count);
        foreach (var l in named.Take(3)) { string n = l.Split('\t')[2].Trim(), w; if (GameBuild.DefinedIn.TryGetValue(n, out w)) Console.WriteLine("      " + n + " -> sigmaRE/5_game_source/" + w); }

        // __FILE__ strings in the binary: which would anchor a file of this module, which belong to the game
        var own = new SortedDictionary<string, int>(StringComparer.Ordinal); var foreign = new List<string>();
        var fileRx = new Regex(@"^[^\x00-\x1f""]*[\\/][^\x00-\x1f""]*\.(?:cpp|c|cc)$", RegexOptions.IgnoreCase);
        foreach (var s in pe.Sections.Where(x => x.Name == ".rdata" || x.Name == ".data"))
        {
            int o = (int)s.Raw, end = (int)Math.Min(s.Raw + s.RawSize, (uint)pe.Data.Length);
            while (o < end)
            {
                int e = o; while (e < end && pe.Data[e] != 0) e++;
                if (e - o >= 5)
                {
                    string str = Encoding.ASCII.GetString(pe.Data, o, e - o);
                    if (fileRx.IsMatch(str))
                    {
                        string ap = Rebuilder.AnchorPath(str);
                        if (ap != null) { int c; own.TryGetValue(ap, out c); own[ap] = c + 1; } else foreign.Add(str);
                    }
                }
                o = e + 1;
            }
        }
        Console.WriteLine("  __FILE__ strings: " + own.Count + " own-file anchors, " + foreign.Count + " ignored (other modules' paths, OwnFileRx " + (cfg.OwnFileRx != null ? cfg.OwnFileRx.ToString() : "-") + ")");
        foreach (var kv in own) Console.WriteLine("    own     " + kv.Key);
        foreach (var f in foreign.Take(4)) Console.WriteLine("    ignored " + f);
        if (foreign.Count > 4) Console.WriteLine("    ignored ... +" + (foreign.Count - 4) + " more");
        GameModule cm; string probe = "(D2Common.dll binary not in game_dir)";
        if (mods.TryGetValue("D2Common.dll", out cm) && cm.Pe != null)
        {
            uint va = cm.Pe.Exports()[10973].Key;
            probe = "D2Common.dll +0x" + (va - cm.Pe.ImageBase).ToString("x") + " -> " + GameBuild.NameAt(mods, "D2Common.dll", va);
        }
        Console.WriteLine("  game function pointers named (game_pointers.tsv): " + cfg.GlobalNames.Count + "; offset lookup check: " + probe);
        Console.WriteLine("  link order: " + (cfg.Alphabetical ? "alphabetical (between_ = sorts between)" : "not assumed alphabetical (between_ = located between)") + "; output " + cfg.OutputSubdir);
        Console.WriteLine("  Ghidra export: " + (dec ?? "(ghidra_export_dir unset)") + (dec != null && File.Exists(dec) ? " present" : " MISSING (needed for `pd2`)"));
    }

    // rebuild.ps1's default job (D2Sigma) and -Game. Outputs go to reference_out, never to the read-only reference.
    static int Sigma(string dll, string tableDec, bool game)
    {
        string ghidra = Paths.Require("ghidra_export_dir");
        string gameDir = Paths.Require("game_dir");
        string outRoot = Paths.Require("reference_out");
        string ws = Paths.Get("workspace_root") ?? outRoot;
        string outDir = Path.Combine(outRoot, "4_sigma_source");
        Console.WriteLine("Using decompiled sources from " + ghidra);
        dll = dll != null ? Paths.Native(dll) : Paths.FindFile(gameDir, "D2Sigma.dll") ?? Path.Combine(gameDir, "D2Sigma.dll");
        string dec = Path.Combine(ghidra, "D2Sigma_decompiled.c");
        if (!File.Exists(dec)) throw new FileNotFoundException("Ghidra export " + dec + " not found");
        // the table pass pairs names by text patterns that the original export keeps (same build, same addresses)
        if (tableDec == null) { tableDec = Path.Combine(ws, "3_ghidra", "D2Sigma_decompiled.c"); if (!File.Exists(tableDec)) tableDec = dec; }
        Directory.CreateDirectory(outDir);
        if (!File.Exists(Path.Combine(outDir, "symbols.csv"))) Rebuilder.Run(dec, outDir);
        if (File.Exists(dll))
        {
            Console.Write(TableGen.Run(dll, Path.Combine(outDir, "symbols.csv"), tableDec, Path.Combine(ws, "1_bin_from_mpq", "data", "global", "excel"),
                                       Path.Combine(outDir, "tables"), Path.Combine(outRoot, "2_txt", "sigma_named")));
            Console.WriteLine(GameBuild.ConfigureSigma(gameDir, ghidra, dll, dec));
        }
        else Console.Error.WriteLine("warning: D2Sigma.dll not found at " + dll + "; skipping table layouts and ordinal names");
        foreach (var sub in new[] { "engine", "lib" })
            if (Directory.Exists(Path.Combine(outDir, sub)))
                foreach (var f in Directory.GetFiles(Path.Combine(outDir, sub), "*.cpp", SearchOption.AllDirectories)) File.Delete(f);
        Console.Write(Rebuilder.Run(dec, outDir));
        string gameRoot = Path.Combine(outRoot, "5_game_source");
        if (game) Console.Write(GameBuild.Run(gameDir, ghidra, gameRoot));
        Console.WriteLine("== declarations");
        Console.Write(Declare.RunAll(outDir, Directory.Exists(gameRoot) ? gameRoot : null));
        return 0;
    }

    static int FieldsCmd(List<string> args)
    {
        string ctor = TakeOpt(args, "--vector-ctor");
        if (ctor != null) FieldExtractor.VectorCtor = Convert.ToUInt32(ctor.Replace("0x", ""), 16);
        if (args.Count < 2) throw new ArgumentException("usage: fields <dll> <symbols.csv> [--vector-ctor 0xADDR]");
        var pe = new Pe(Paths.Native(args[0]));
        var starts = File.ReadAllLines(Paths.Native(args[1])).Skip(1).Select(l => Convert.ToUInt32(l.Substring(2, 8), 16)).OrderBy(x => x).ToArray();
        var lists = FieldExtractor.Extract(pe, starts);
        Console.WriteLine("calls to 0x" + FieldExtractor.VectorCtor.ToString("x8") + ": " + lists.Count + " descriptor lists, " +
                          lists.Count(l => l.Vector != 0 && l.Fields.Count > 0) + " with a vector and fields");
        foreach (var l in lists.Where(l => l.Fields.Count > 0))
            Console.WriteLine(string.Format("  0x{0:x8} vector 0x{1:x8} fields {2,3}  {3}{4}", l.Func, l.Vector, l.Fields.Count,
                string.Join(",", l.Fields.Take(4).Select(f => f.Name)), l.Error != null ? "  (" + l.Error + ")" : ""));
        return 0;
    }
}
