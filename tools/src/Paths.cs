// fd2 port: every location the sigmaRE tools used to hard-code (C:\Games\median-xl, 4_source\...,
// 3_ghidra_fixed\..., C:\Windows\SysWOW64) comes from here: tools/fd2.paths.json, overridable on the command line.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Text.RegularExpressions;

public static class Paths
{
    // keys of tools/fd2.paths.json (all optional; relative values resolve against the config file's folder)
    public static readonly string[] Keys = {
        "reference_root",     // sigmaRE checkout: contains 4_sigma_source/ and 5_game_source/ (read-only name database)
        "workspace_root",     // scratch area outside git (Ghidra exports, logs, regenerated reference trees)
        "repo_root",          // this repository (4_pd2_source/ is written here)
        "ghidra_export_dir",  // <Module>_decompiled.c (+ .extra.c) from tools/ghidra/FixAndExport.java
        "pd2_install_dir",    // ProjectDiablo.dll, PD2_EXT.dll
        "game_dir",           // Diablo II 1.13c binaries (Game.exe, D2Common.dll, ...); optional for --pd2
        "ghidra_headless",    // analyzeHeadless(.bat) for tools/ghidra/run_all.*
        "reference_out",      // where --sigma / --game regenerate the reference trees (never the read-only reference)
        "system_dll_dirs",    // ';'-separated folders with 32-bit system DLLs (Windows: %WINDIR%\SysWOW64 is added automatically)
    };

    static readonly Dictionary<string, string> Values = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
    public static string ConfigFile;

    public static string Get(string key)
    {
        string v; return Values.TryGetValue(key, out v) && !string.IsNullOrEmpty(v) ? v : null;
    }
    public static string Require(string key)
    {
        string v = Get(key);
        if (v == null) throw new ArgumentException("path '" + key + "' is not set: add it to " + (ConfigFile ?? "tools/fd2.paths.json") + " or pass --" + key.Replace('_', '-'));
        return v;
    }
    public static void Set(string key, string value) { Values[key] = value; }

    // derived locations
    public static string GameSourceRef { get { return Path.Combine(Require("reference_root"), "5_game_source"); } }
    public static string SigmaSourceRef { get { return Path.Combine(Require("reference_root"), "4_sigma_source"); } }
    public static string Pd2SourceOut { get { return Path.Combine(Require("repo_root"), "4_pd2_source"); } }

    // Loads the JSON config. Values may use ${other_key}; relative paths resolve against the config's folder.
    public static void Load(string file)
    {
        if (file == null || !File.Exists(file)) return;
        ConfigFile = Path.GetFullPath(file);
        string dir = Path.GetDirectoryName(ConfigFile);
        using (var doc = JsonDocument.Parse(File.ReadAllText(file), new JsonDocumentOptions { CommentHandling = JsonCommentHandling.Skip, AllowTrailingCommas = true }))
        {
            var raw = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
            foreach (var p in doc.RootElement.EnumerateObject())
            {
                if (p.Name.StartsWith("_")) continue;   // "_comment" etc.
                if (p.Value.ValueKind == JsonValueKind.String) raw[p.Name] = p.Value.GetString();
                else if (p.Value.ValueKind == JsonValueKind.Array) raw[p.Name] = string.Join(";", p.Value.EnumerateArray().Select(e => e.GetString()));
            }
            foreach (var kv in raw)
            {
                if (Values.ContainsKey(kv.Key)) continue;   // command line wins
                string v = Expand(kv.Value, raw, 0);
                if (v.Length == 0) continue;
                Values[kv.Key] = kv.Key == "system_dll_dirs" ? string.Join(";", v.Split(';').Where(s => s.Length > 0).Select(s => Resolve(s, dir))) : Resolve(v, dir);
            }
        }
    }

    static string Expand(string v, Dictionary<string, string> raw, int depth)
    {
        if (depth > 8) return v;
        return Regex.Replace(v, @"\$\{(\w+)\}", m =>
        {
            string r;
            if (Values.TryGetValue(m.Groups[1].Value, out r)) return r;
            if (raw.TryGetValue(m.Groups[1].Value, out r)) return Expand(r, raw, depth + 1);
            r = Environment.GetEnvironmentVariable(m.Groups[1].Value);
            return r ?? m.Value;
        });
    }

    static string Resolve(string p, string baseDir)
    {
        p = Native(p);
        return Path.IsPathRooted(p) ? Path.GetFullPath(p) : Path.GetFullPath(Path.Combine(baseDir, p));
    }

    // '\' and '/' both work as separators in configs and on the command line
    public static string Native(string p)
    {
        if (p == null) return null;
        char o = Path.DirectorySeparatorChar == '/' ? '\\' : '/';
        return p.Replace(o, Path.DirectorySeparatorChar);
    }

    // Linux file systems are case-sensitive; game import tables are not ("D2COMMON.dll" vs "D2Common.dll").
    public static string FindFile(string dir, string name)
    {
        if (dir == null || name == null || !Directory.Exists(dir)) return null;
        string p = Path.Combine(dir, name);
        if (File.Exists(p)) return p;
        return Directory.EnumerateFiles(dir).FirstOrDefault(f => string.Equals(Path.GetFileName(f), name, StringComparison.OrdinalIgnoreCase));
    }

    // folders searched for 32-bit system DLLs (export names of wsock32/dsound/kernel32...)
    public static List<string> SystemDllDirs()
    {
        var res = new List<string>();
        string cfg = Get("system_dll_dirs");
        if (cfg != null) res.AddRange(cfg.Split(';').Where(s => s.Length > 0));
        string win = Environment.GetEnvironmentVariable("WINDIR");
        if (win != null) res.Add(Path.Combine(win, "SysWOW64"));
        return res.Where(Directory.Exists).Distinct().ToList();
    }

    public static string Describe()
    {
        return string.Join(Environment.NewLine, Keys.Select(k => string.Format("  {0,-18} {1}", k, Get(k) ?? "(unset)")));
    }
}
