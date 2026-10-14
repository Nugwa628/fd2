// fd2 phase 3: README.md of a PD2 tree with real counts. The prose is a hand-written template
// (tools/pd2/<Module>.README.md); every {{key}} in it is replaced by a number computed here from the generated tree,
// the Ghidra exports and the game-pointer table, so the README can't drift from what the generator produced.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public static class Pd2Readme
{
    static Regex Placeholder = new Regex(@"\b(in_stack_[0-9a-f]{8}|in_[A-Z][A-Za-z0-9_]*|unaff_\w+|extraout_\w+)\b");
    static Regex ExportHdr = new Regex(@"^//==== .* @ ([0-9a-f]{8})$");

    // declarations = one per function per distinct placeholder name (as the sigmaRE READMEs count), uses = occurrences
    public static int[] CountPlaceholders(IEnumerable<string> files)
    {
        int decl = 0, uses = 0, funcs = 0;
        foreach (var file in files.Where(File.Exists))
        {
            var names = new HashSet<string>();
            foreach (var l in File.ReadLines(file))
            {
                if (ExportHdr.IsMatch(l)) { decl += names.Count; names.Clear(); funcs++; continue; }
                foreach (Match m in Placeholder.Matches(l)) { names.Add(m.Value); uses++; }
            }
            decl += names.Count;
        }
        return new[] { decl, uses, funcs };
    }

    static List<string> SplitCsv(string l)
    {
        var r = new List<string>(); var cur = new StringBuilder(); bool q = false;
        for (int i = 0; i < l.Length; i++)
        {
            char c = l[i];
            if (q) { if (c == '"' && i + 1 < l.Length && l[i + 1] == '"') { cur.Append('"'); i++; } else if (c == '"') q = false; else cur.Append(c); }
            else if (c == '"') q = true;
            else if (c == ',') { r.Add(cur.ToString()); cur.Clear(); }
            else cur.Append(c);
        }
        r.Add(cur.ToString());
        return r;
    }

    static string N(int n) { return n.ToString("N0", System.Globalization.CultureInfo.InvariantCulture); }
    static string Pct(int a, int b) { return b == 0 ? "0%" : (100.0 * a / b).ToString("0.0", System.Globalization.CultureInfo.InvariantCulture) + "%"; }

    public static string Write(ModuleConfig cfg, string tree, string exportDir, string template)
    {
        var v = new Dictionary<string, string>();
        // symbols.csv
        var rows = File.ReadLines(Path.Combine(tree, "symbols.csv")).Skip(1).Select(l => SplitCsv(l).Skip(1).ToArray()).ToList();
        // columns: ghidra_name, new_name, file, confidence, evidence
        int total = rows.Count;
        v["functions"] = N(total);
        var confs = new[] { "anchor", "range", "linked", "inferred", "nearest", "gap", "manual", "lib" };
        int app = rows.Count(r => r.Length > 3 && r[3] != "lib");
        v["app_functions"] = N(app);
        foreach (var c in confs)
        {
            int k = rows.Count(r => r.Length > 3 && r[3] == c);
            v["n_" + c] = N(k); v["p_" + c] = Pct(k, total); v["pa_" + c] = Pct(k, app);
        }
        int named = rows.Count(r => r.Length > 3 && r[3] != "lib" && r[3] != "gap");
        v["n_named_file"] = N(named); v["p_named_file"] = Pct(named, app);
        var files = rows.Where(r => r.Length > 2).Select(r => r[2]).Distinct().ToList();
        v["files"] = N(files.Count);
        v["files_named"] = N(files.Count(f => !f.Contains("_unattributed/") && !f.StartsWith("lib/")));
        v["files_unattributed"] = N(files.Count(f => f.Contains("_unattributed/")));
        v["files_lib"] = N(files.Count(f => f.StartsWith("lib/")));
        v["named_file_list"] = string.Join(", ", files.Where(f => !f.Contains("_unattributed/") && !f.StartsWith("lib/")).OrderBy(f => f).Select(f => "`" + f + "`"));
        v["hint_functions"] = N(rows.Count(r => r.Length > 1 && Regex.IsMatch(r[1], @"_(InitPtr_|init_|Hook_|Ptr_|Config|Settings_|Wraps_|IntegrityCheck|json_|stl_|regex_|iostream_|Init_|PatchInstaller|BlockPatchInstaller|LoadModuleTable|GetDllOffset|GameVersionIndex|DetectGameVersion|OpenMpqs|LoadBH|LoadD2GL)")));
        foreach (var h in new[] { "InitPtr", "init", "Hook", "Ptr", "Config", "Settings", "Wraps", "IntegrityCheck", "json", "stl", "regex", "iostream" })
            v["hint_" + h] = N(rows.Count(r => r.Length > 1 && Regex.IsMatch(r[1], "_" + h + @"(_|\d)")));

        // link units
        string lu = Path.Combine(tree, "link_units.tsv");
        if (File.Exists(lu))
        {
            var us = File.ReadLines(lu).Where(l => !l.StartsWith("#") && !l.StartsWith("unit\t")).Select(l => l.Split('\t')).ToList();
            v["units"] = N(us.Count);
            v["units_named"] = N(us.Count(u => !u[1].Contains("_unattributed/")));
            v["units_code_evidence"] = N(us.Count(u => u[6] != "0"));
            v["unit_private_globals"] = N(us.Sum(u => int.Parse(u[5])));
            v["unit_code_evidence"] = N(us.Sum(u => int.Parse(u[6])));
            v["unit_initializers"] = N(us.Sum(u => int.Parse(u[3])));
            v["unit_stubs"] = N(us.Sum(u => int.Parse(u[4])));
        }
        if (File.Exists(lu))
        {
            // .text$di = everything before the first unit's code
            var starts = File.ReadLines(lu).Where(l => !l.StartsWith("#") && !l.StartsWith("unit\t")).Select(l => l.Split('\t')[7]).Where(c => c.Length > 0)
                .Select(c => Convert.ToUInt32(c.Substring(2, 8), 16)).ToList();
            uint diEnd = starts.Count > 0 ? starts.Min() : 0;
            var addrRows = File.ReadLines(Path.Combine(tree, "symbols.csv")).Skip(1).Select(l => SplitCsv(l)).ToList();
            int di = addrRows.Count(r => Convert.ToUInt32(r[0].Substring(2), 16) < diEnd);
            int gapDi = addrRows.Count(r => Convert.ToUInt32(r[0].Substring(2), 16) < diEnd && r[4] == "gap");
            v["di_functions"] = N(di); v["gap_di"] = N(gapDi); v["gap_code"] = N(addrRows.Count(r => r[4] == "gap") - gapDi);
            v["code_functions"] = N(addrRows.Count(r => r[4] != "lib") - di);
            v["named_code"] = N(addrRows.Count(r => Convert.ToUInt32(r[0].Substring(2), 16) >= diEnd && r[4] != "lib" && r[4] != "gap"));
            v["p_named_code"] = Pct(addrRows.Count(r => Convert.ToUInt32(r[0].Substring(2), 16) >= diEnd && r[4] != "lib" && r[4] != "gap"), addrRows.Count(r => r[4] != "lib") - di);
            var dm = Regex.Match(File.ReadAllText(lu), @"# dropped as out of order: (\d+)");
            v["link_units_dropped"] = dm.Success ? N(int.Parse(dm.Groups[1].Value)) : "0";
        }

        // placeholders: previous export (*.v1.c) vs current, and what the tree still declares as untraced
        string m = Path.Combine(exportDir, cfg.Decompiled), x = Path.Combine(exportDir, Path.GetFileNameWithoutExtension(cfg.Decompiled) + ".extra.c");
        var before = CountPlaceholders(new[] { m.Replace(".c", ".v1.c"), x.Replace(".extra.c", ".extra.v1.c") });
        var after = CountPlaceholders(new[] { m, x });
        v["ph_before_decl"] = N(before[0]); v["ph_before_uses"] = N(before[1]);
        v["ph_after_decl"] = N(after[0]); v["ph_after_uses"] = N(after[1]);
        v["ph_change"] = before[0] == 0 ? "n/a" : ((after[0] - before[0]) * 100.0 / before[0]).ToString("+0;-0", System.Globalization.CultureInfo.InvariantCulture) + "%";
        int treeUntraced = 0;
        foreach (var f in Directory.GetFiles(tree, "*.cpp", SearchOption.AllDirectories))
            foreach (var l in File.ReadLines(f)) if (l.Contains("/* not traced by Ghidra")) treeUntraced++;
        v["tree_untraced_locals"] = N(treeUntraced);

        // game pointers and calls
        string gp = Path.Combine(tree, "game_pointers.tsv");
        var gpr = File.ReadLines(gp).Where(l => !l.StartsWith("#")).Select(l => l.Split('\t')).ToList();
        var hdr = gpr[0]; gpr = gpr.Skip(1).ToList();
        Func<string[], string, string> col = (r, k) => { int i = Array.IndexOf(hdr, k); return i >= 0 && i < r.Length ? r[i] : ""; };
        v["gp_total"] = N(gpr.Count);
        v["gp_thunks"] = N(gpr.Count(r => col(r, "kind") == "lazy-thunk"));
        v["gp_accessors"] = N(gpr.Count(r => col(r, "kind") == "accessor"));
        v["gp_copies"] = N(gpr.Sum(r => col(r, "copies").Split(new[] { ',' }, StringSplitOptions.RemoveEmptyEntries).Length));
        v["gp_named"] = N(gpr.Count(r => col(r, "reference_name") != ""));
        v["gp_ordinal"] = N(gpr.Count(r => col(r, "1.13c").StartsWith("ordinal")));
        v["gp_offset"] = N(gpr.Count(r => col(r, "1.13c").StartsWith("+")));
        foreach (var t in new[] { "function", "data", "code", "unknown" }) v["gp_t_" + t] = N(gpr.Count(r => col(r, "target") == t));
        v["gp_defined"] = N(gpr.Count(r => col(r, "defined_in") != ""));
        foreach (var t in new[] { "reference", "reference+purge", "purge", "caller-cleanup", "manual", "none" })
            v["proto_" + t.Replace("+", "_").Replace("-", "_")] = N(gpr.Count(r => col(r, "kind") == "lazy-thunk" && Regex.Replace(col(r, "prototype_source"), @" \(.*", "") == t));
        v["proto_dropped_regs"] = N(gpr.Count(r => col(r, "prototype_source").Contains("dropped")));
        v["gp_113d_unset"] = N(gpr.Count(r => col(r, "1.13d").StartsWith("0 ")));

        // calls in the tree: by reference name (thunk call or call through a per-file copy) vs anything left unnamed
        var thunkNames = new HashSet<string>(gpr.Where(r => col(r, "kind") == "lazy-thunk").Select(r => col(r, "pd2_name")));
        var cellNames = new HashSet<string>(gpr.Where(r => col(r, "kind") == "accessor" && col(r, "target") == "function").Select(r => col(r, "cell_name")));
        var thunkAddrs = new HashSet<string>(gpr.Where(r => col(r, "kind") == "lazy-thunk").Select(r => "FUN_" + col(r, "address").Substring(2)));
        int callsThunk = 0, callsThunkNoArgs = 0, callsCell = 0, callsDat = 0, ordLeft = 0, refsData = 0;
        var callRx = new Regex(@"(\(\*)?\b([A-Za-z_]\w*)\)?\s*\((\s*\))?");
        var dataNames = new HashSet<string>(gpr.Where(r => col(r, "kind") == "accessor" && col(r, "target") != "function").Select(r => col(r, "cell_name")));
        foreach (var f in Directory.GetFiles(tree, "*.cpp", SearchOption.AllDirectories))
            foreach (var l in File.ReadLines(f))
            {
                if (l.Length == 0 || !char.IsWhiteSpace(l[0])) continue;   // bodies only (signatures start in column 0)
                foreach (Match mm in callRx.Matches(l))
                {
                    string id = mm.Groups[2].Value;
                    if (thunkNames.Contains(id) && !mm.Groups[1].Success) { callsThunk++; if (mm.Groups[3].Success) callsThunkNoArgs++; }
                    else if (mm.Groups[1].Success && cellNames.Contains(id)) callsCell++;
                    else if (mm.Groups[1].Success && Regex.IsMatch(id, @"^DAT_[0-9a-f]{8}$")) callsDat++;
                    else if (thunkAddrs.Contains(id)) callsThunk++;
                }
                foreach (Match mm in Regex.Matches(l, @"\bOrdinal_\d+\b")) ordLeft++;
                foreach (var d in dataNames) if (l.Contains(d)) refsData++;
            }
        v["calls_thunk"] = N(callsThunk); v["calls_thunk_noargs"] = N(callsThunkNoArgs); v["calls_cell"] = N(callsCell);
        v["calls_game_named"] = N(callsThunk + callsCell); v["calls_indirect_dat"] = N(callsDat); v["ordinal_left"] = N(ordLeft);
        v["refs_game_data"] = N(refsData);
        string imp = Path.Combine(tree, "imports.tsv");
        v["ordinal_imports"] = File.Exists(imp) ? N(File.ReadLines(imp).Count(l => l.StartsWith("Ordinal_"))) : "0";
        int bv = CountNoArgThunkCalls(new[] { m.Replace(".c", ".v1.c"), x.Replace(".extra.c", ".extra.v1.c") }, thunkAddrs, thunkNames, out int bt);
        v["lostargs_before"] = N(bv); v["thunkcalls_before"] = N(bt);

        // undeclared names
        string und = Undeclared.Scan(tree, Path.Combine(tree, "..", ".undeclared_" + cfg.Module + ".csv"));
        string csvPath = Path.Combine(tree, "..", ".undeclared_" + cfg.Module + ".csv");
        var und_rows = File.Exists(csvPath) ? File.ReadLines(csvPath).Skip(1).Select(l => l.Split(',')).ToList() : new List<string[]>();
        if (File.Exists(csvPath)) File.Delete(csvPath);
        Func<string, bool> declaredByHeaders = c => c.StartsWith("\"system API") || c.StartsWith("\"Windows type") || c.StartsWith("\"Ghidra macro") || c.StartsWith("\"ExceptionList") || c.StartsWith("\"in_FS_OFFSET");
        var left = und_rows.Where(r => !declaredByHeaders(r[0])).ToList();
        v["undeclared_names"] = N(left.Count);
        v["undeclared_uses"] = N(left.Sum(r => int.Parse(r[2])));
        v["undeclared_examples"] = string.Join(", ", left.OrderByDescending(r => int.Parse(r[2])).Take(8).Select(r => "`" + r[1] + "`"));
        var other = left.Where(r => r[0] == "\"other\"").ToList();
        v["undeclared_other"] = N(other.Count); v["undeclared_other_uses"] = N(other.Sum(r => int.Parse(r[2])));
        v["undeclared_categories"] = string.Join("; ", left.GroupBy(r => r[0].Trim('"')).OrderByDescending(g => g.Sum(r => int.Parse(r[2]))).Select(g => g.Key + " " + g.Count() + " names / " + g.Sum(r => int.Parse(r[2])) + " uses"));

        // structures
        string ds = Path.Combine(tree, "include", "d2structs.h");
        if (File.Exists(ds))
        {
            var fm = Regex.Match(File.ReadAllText(ds), @"Fields: (\d+) proven, (\d+) assumed, (\d+) unnamed");
            if (fm.Success) { v["st_proven"] = fm.Groups[1].Value; v["st_assumed"] = fm.Groups[2].Value; v["st_unk"] = fm.Groups[3].Value; }
            v["st_structs"] = N(Regex.Matches(File.ReadAllText(ds), @"(?m)^struct \w+ \{").Count);
        }
        var md = File.ReadAllText(template);
        var missing = new List<string>();
        md = Regex.Replace(md, @"\{\{(\w+)\}\}", mm => { string r; if (v.TryGetValue(mm.Groups[1].Value, out r)) return r; missing.Add(mm.Groups[1].Value); return mm.Value; });
        File.WriteAllText(Path.Combine(tree, "README.md"), md, new UTF8Encoding(false));
        return "README.md: " + v.Count + " values" + (missing.Count > 0 ? "; missing " + string.Join(", ", missing.Distinct()) : "") + "\n" +
               string.Join("\n", v.Where(kv => kv.Key != "named_file_list").Select(kv => "  " + kv.Key + " = " + kv.Value)) + "\n";
    }

    static int CountNoArgThunkCalls(IEnumerable<string> files, HashSet<string> addrs, HashSet<string> names, out int total)
    {
        int n = 0; total = 0;
        var rx = new Regex(@"\b([A-Za-z_]\w*)\s*\((\s*\))?");
        foreach (var f in files.Where(File.Exists))
            foreach (var l in File.ReadLines(f))
            {
                if (l.Length == 0 || !char.IsWhiteSpace(l[0])) continue;
                foreach (Match m in rx.Matches(l))
                    if (addrs.Contains(m.Groups[1].Value) || names.Contains(m.Groups[1].Value)) { total++; if (m.Groups[2].Success) n++; }
            }
        return n;
    }
}
