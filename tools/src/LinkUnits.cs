// fd2 phase 3: translation units (object files) recovered from the C++ dynamic-initializer table (__xc_a).
//
// MSVC emits every dynamic initializer into .text$di, every ordinary function into .text$mn, and the linker lays both
// groups out object by object in the same link order. The __xc_a table lists the initializers in that order. So:
//   1. split the table into units: a unit starts where a header-wide initializer repeats (ModuleConfig.TuMarker: a
//      string that only the common header's initializer contains, one per object), moved back over the run of
//      initializers that precede the marker in the first unit as well (the same headers, in the same order);
//   2. globals that the initializers of exactly one unit touch are that unit's own (file statics, D2Template's
//      per-file copies of game pointers, static std::strings ...);
//   3. a .text$mn function that uses such globals belongs to that unit. The units' code is laid out in table order,
//      so a longest non-decreasing subsequence over (address, unit) drops the few that disagree (inline/COMDAT code
//      emitted into another object, globals shared between files);
//   4. .text$di itself (the initializers and the atexit destructor thunks between them) is split at the units'
//      first initializers.
// Without a configured table (ModuleConfig.InitTableStart == 0) nothing changes.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public class LinkUnit
{
    public int Index;
    public int FirstEntry, LastEntry;             // __xc_a entry indices
    public uint DiStart, DiEnd;                   // address range of its initializers / stubs in .text$di
    public List<uint> Initializers = new List<uint>();
    public HashSet<string> Globals = new HashSet<string>();
    public int Stubs;
    public string File;                           // tree path once known
    public List<uint> Code = new List<uint>();    // .text$mn functions with direct evidence
    public string Strings = "";                   // a few distinctive literals of its initializers (for FILES.md / README)
}

public static class LinkUnits
{
    public static List<LinkUnit> Units = new List<LinkUnit>();
    public static Dictionary<uint, int> InitUnit = new Dictionary<uint, int>();   // initializer function -> unit
    public static Dictionary<uint, int> CodeUnit = new Dictionary<uint, int>();   // .text$mn function -> unit (evidence)
    public static Dictionary<uint, string> CodeEvidence = new Dictionary<uint, string>();
    public static Dictionary<string, int> GlobalUnit = new Dictionary<string, int>();
    public static uint DiEnd;                                                      // first address after .text$di
    public static int Demoted;

    static Regex DatRx = new Regex(@"\b_?(DAT_[0-9a-f]{8})\b");
    static Regex NormRx = new Regex(@"\b(?:_?DAT|FUN|LAB|PTR|s|u)_\w*?[0-9a-f]{8}\b|\b0x[0-9a-f]+\b|\b(?:extraout|in|unaff)_\w+");

    static string Norm(Fn f) { return f == null ? "?" : NormRx.Replace(string.Join("\n", f.Lines), "X"); }

    public static string Build(ModuleConfig cfg, List<Fn> funcs)
    {
        Units = new List<LinkUnit>(); InitUnit = new Dictionary<uint, int>(); CodeUnit = new Dictionary<uint, int>();
        CodeEvidence = new Dictionary<uint, string>(); GlobalUnit = new Dictionary<string, int>(); DiEnd = 0; Demoted = 0;
        if (cfg.InitTableStart == 0 || cfg.Bin == null) return "";
        var log = new StringBuilder();
        var pe = cfg.Bin;
        var byAddr = funcs.ToDictionary(f => f.Addr);
        var text = pe.Sections.First(s => s.Name == ".text");

        // table entries, ascending part only (entry 0 of PD2's table is out of order: a CRT pre-initializer)
        var ents = new List<uint>();
        for (uint a = cfg.InitTableStart; a + 4 <= cfg.InitTableEnd; a += 4)
        {
            int o = pe.Off(a); if (o < 0) break;
            uint t = BitConverter.ToUInt32(pe.Data, o);
            if (t == 0 || t < text.Va || t >= text.Va + text.VSize) continue;
            if (ents.Count > 0 && t <= ents[ents.Count - 1]) { if (ents.Count == 1) ents.Clear(); else continue; }
            ents.Add(t);
        }
        // stub = 16-byte "jmp rel32" that is not a function of its own (D2Template accessor initializers)
        var isStub = ents.Select(t => !byAddr.ContainsKey(t) && pe.Data[pe.Off(t)] == 0xE9).ToList();
        var norm = new Dictionary<int, string>();
        for (int i = 0; i < ents.Count; i++) if (!isStub[i]) { Fn f; byAddr.TryGetValue(ents[i], out f); norm[i] = Norm(f); }

        // unit starts
        var starts = new List<int>();
        if (cfg.TuMarker != null)
        {
            var markers = new List<int>();
            for (int i = 0; i < ents.Count; i++)
            {
                Fn f; if (isStub[i] || !byAddr.TryGetValue(ents[i], out f)) continue;
                if (f.Lines.Any(l => l.Contains(cfg.TuMarker))) markers.Add(i);
            }
            if (markers.Count > 0)
            {
                var prefix = Enumerable.Range(0, markers[0]).Select(i => norm.ContainsKey(i) ? norm[i] : "stub").ToList();
                foreach (var m in markers)
                {
                    int k = 0;
                    while (k < prefix.Count && m - 1 - k >= 0 && (norm.ContainsKey(m - 1 - k) ? norm[m - 1 - k] : "stub") == prefix[prefix.Count - 1 - k]) k++;
                    // the first entry of every unit's prefix may differ (decompiler artefacts); accept a match of all but one
                    if (k == prefix.Count - 1 && m - prefix.Count >= 0 && (starts.Count == 0 || m - prefix.Count > starts[starts.Count - 1])) k = prefix.Count;
                    starts.Add(m == markers[0] ? 0 : m - k);
                }
            }
            log.AppendLine("link units: __xc_a 0x" + cfg.InitTableStart.ToString("x8") + "-0x" + cfg.InitTableEnd.ToString("x8") + ", " + ents.Count +
                           " entries (" + isStub.Count(x => x) + " jmp stubs), " + markers.Count + " units by marker \"" + cfg.TuMarker + "\"");
        }
        if (starts.Count == 0) starts.Add(0);
        starts = starts.Distinct().OrderBy(x => x).ToList();
        for (int u = 0; u < starts.Count; u++)
        {
            var lu = new LinkUnit { Index = u, FirstEntry = starts[u], LastEntry = (u + 1 < starts.Count ? starts[u + 1] : ents.Count) - 1 };
            lu.DiStart = ents[lu.FirstEntry];
            lu.DiEnd = ents[lu.LastEntry];
            for (int i = lu.FirstEntry; i <= lu.LastEntry; i++)
            {
                if (isStub[i]) { lu.Stubs++; continue; }
                lu.Initializers.Add(ents[i]); InitUnit[ents[i]] = u;
            }
            Units.Add(lu);
        }
        // end of .text$di: the first function after the last entry that is not reached from the table's last unit region
        uint lastEnt = ents[ents.Count - 1];
        var after = funcs.Where(f => f.Addr > lastEnt).Select(f => f.Addr).DefaultIfEmpty(lastEnt + 16).Min();
        DiEnd = after;

        // unit-private globals: referenced by the initializers of exactly one unit
        var refUnits = new Dictionary<string, HashSet<int>>();
        foreach (var lu in Units)
            foreach (var a in lu.Initializers)
            {
                Fn f; if (!byAddr.TryGetValue(a, out f)) continue;
                foreach (var l in f.Lines)
                    foreach (Match m in DatRx.Matches(l))
                    {
                        HashSet<int> s; if (!refUnits.TryGetValue(m.Groups[1].Value, out s)) { s = new HashSet<int>(); refUnits[m.Groups[1].Value] = s; }
                        s.Add(lu.Index);
                    }
            }
        foreach (var kv in refUnits) if (kv.Value.Count == 1) { GlobalUnit[kv.Key] = kv.Value.First(); Units[kv.Value.First()].Globals.Add(kv.Key); }
        foreach (var lu in Units)
        {
            var lits = new List<string>();
            foreach (var a in lu.Initializers)
            {
                Fn f; if (!byAddr.TryGetValue(a, out f)) continue;
                foreach (var l in f.Lines) foreach (Match m in Regex.Matches(l, @"L?""((?:[^""\\]|\\.){3,40})""")) lits.Add(m.Groups[1].Value);
            }
            lu.Strings = string.Join("\u0001", lits.Distinct());
        }
        // literals every unit has (common headers) say nothing about the unit
        var lc = new Dictionary<string, int>();
        foreach (var lu in Units) foreach (var s in lu.Strings.Split(new[] { '\u0001' }, StringSplitOptions.RemoveEmptyEntries)) { int c; lc.TryGetValue(s, out c); lc[s] = c + 1; }
        foreach (var lu in Units)
            lu.Strings = string.Join(", ", lu.Strings.Split(new[] { '\u0001' }, StringSplitOptions.RemoveEmptyEntries).Where(s => lc[s] <= 2).Take(6).Select(s => "\"" + s + "\""));

        // code evidence
        var cand = new List<KeyValuePair<uint, int>>();
        foreach (var f in funcs)
        {
            if (f.Addr < DiEnd || f.IsLib || f.IsFunclet) continue;
            var votes = new Dictionary<int, int>(); var why = new Dictionary<int, string>();
            foreach (var l in f.Lines)
                foreach (Match m in DatRx.Matches(l))
                {
                    int u; if (!GlobalUnit.TryGetValue(m.Groups[1].Value, out u)) continue;
                    int c; votes.TryGetValue(u, out c); votes[u] = c + 1;
                    if (!why.ContainsKey(u)) why[u] = m.Groups[1].Value;
                }
            if (votes.Count == 0) continue;
            var best = votes.OrderByDescending(kv => kv.Value).First();
            if (votes.Count(kv => kv.Value == best.Value) > 1) continue;
            cand.Add(new KeyValuePair<uint, int>(f.Addr, best.Key));
            CodeEvidence[f.Addr] = why[best.Key];
        }
        // longest non-decreasing subsequence of unit indices in address order
        int n = cand.Count; var len = new int[n]; var prev = new int[n]; var tailIdx = new List<int>(); var tailVal = new List<int>();
        for (int i = 0; i < n; i++)
        {
            int v = cand[i].Value;
            int lo = 0, hi = tailVal.Count;
            while (lo < hi) { int mid = (lo + hi) / 2; if (tailVal[mid] <= v) lo = mid + 1; else hi = mid; }
            prev[i] = lo > 0 ? tailIdx[lo - 1] : -1;
            if (lo == tailVal.Count) { tailVal.Add(v); tailIdx.Add(i); } else { tailVal[lo] = v; tailIdx[lo] = i; }
        }
        var keep = new HashSet<int>();
        for (int i = tailIdx.Count > 0 ? tailIdx[tailIdx.Count - 1] : -1; i >= 0; i = prev[i]) keep.Add(i);
        for (int i = 0; i < n; i++)
        {
            if (!keep.Contains(i)) { Demoted++; CodeEvidence.Remove(cand[i].Key); continue; }
            CodeUnit[cand[i].Key] = cand[i].Value;
            Units[cand[i].Value].Code.Add(cand[i].Key);
        }
        log.AppendLine("link units: " + Units.Count + " units; .text$di 0x" + Units[0].DiStart.ToString("x8") + "-0x" + DiEnd.ToString("x8") + "; " +
                       GlobalUnit.Count + " unit-private globals; code functions with unit evidence " + CodeUnit.Count + " (" + Demoted + " out of order, dropped); units with code evidence " +
                       Units.Count(u => u.Code.Count > 0));
        return log.ToString();
    }

    // unit of a .text$di function: the unit whose first initializer is the last one at or before it
    public static int DiUnitOf(uint addr)
    {
        int r = -1;
        foreach (var u in Units) if (u.DiStart <= addr) r = u.Index; else break;
        return r < 0 ? 0 : r;
    }
}
