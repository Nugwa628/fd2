// Post-pass over a generated tree: declares every identifier the code uses without a declaration.
//   - calls into other modules      -> include/imports.h (prototype copied from the target module's header)
//   - data symbols / imported data  -> include/missing_globals.h (type inferred from use)
//   - Ghidra helpers and pseudo-registers (CONCAT44, SUB41, ExceptionList, MXCSR, swi ...) -> include/ghidra_compat.h
//   - unknown type names            -> opaque typedefs in ghidra_compat.h
//   - untraced per-function values (stack0x..., stray param_N / _local_x) -> declared in the function, marked
//   - unaff_retaddr -> _ReturnAddress(), in_FS_OFFSET -> the TEB (exact translations)
// C++ library names (templates, std:: internals) are reported but not declared.
// fd2 port: RunTrees() separates the trees that are rewritten from read-only reference trees (sigmaRE/5_game_source)
// that only supply prototypes, and imports.h names the file that defines each import.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public static class Declare
{
    static Regex IdentRx = new Regex(@"[A-Za-z_][A-Za-z0-9_]*");
    static Regex StrOrChar = new Regex("L?\"(?:[^\"\\\\]|\\\\.)*\"|L?'(?:[^'\\\\]|\\\\.)*'");
    static Regex FuncHdr = new Regex(@"^// 0x[0-9a-f]{8}  ");
    static Regex ProtoRx = new Regex(@"^(?!\s*(?:/\*|//|#|extern|typedef))\s*[\w\s\*]*?\b([A-Za-z_]\w*)\s*\(.*\)\s*;\s*$");

    static readonly HashSet<string> Keywords = new HashSet<string>((
        "auto break case char const continue default do double else enum extern float for goto if int long register return " +
        "short signed sizeof static struct switch typedef union unsigned void volatile while bool true false __cdecl __stdcall " +
        "__fastcall __thiscall __vectorcall NULL wchar_t uint8_t uint16_t uint32_t uint64_t int8_t int16_t int32_t int64_t " +
        "byte uchar ushort uint ulong longlong ulonglong uint3 wchar16 code float10 this operator new delete " +
        "ExceptionList in_FS_OFFSET unaff_retaddr _ReturnAddress MXCSR swi").Split(' '));

    // known C / C runtime type names provided by the standard headers
    static readonly HashSet<string> StdTypes = new HashSet<string>(
        "size_t FILE va_list wchar_t ptrdiff_t intptr_t uintptr_t time_t clock_t fpos_t jmp_buf errno_t fsin fcos fptan fsqrt f2xm1 fyl2x fpatan rdtsc cpuid unsigned_int unsigned_short unsigned_char builtin_strncpy builtin_memcpy builtin_memset fscale cpuid_basic_info cpuid_Version_info cpuid_cache_tlb_info".Split(' '));

    // Runs over 4_source and every module in 5_game_source, with prototypes from all of them.
    public static string RunAll(string sigmaRoot, string gameRoot)
    {
        var trees = new List<string>();
        if (sigmaRoot != null && Directory.Exists(sigmaRoot)) trees.Add(sigmaRoot);
        trees.AddRange(ModuleTrees(gameRoot));
        return RunTrees(trees, new string[0], "", null);
    }

    // module folders (those with include/) under a root such as 5_game_source or 4_pd2_source
    public static List<string> ModuleTrees(string root)
    {
        if (root == null || !Directory.Exists(root)) return new List<string>();
        return Directory.GetDirectories(root).Where(d => Directory.Exists(Path.Combine(d, "include"))).OrderBy(d => d).ToList();
    }

    // name -> where it is defined, written as a comment next to each import (e.g. "sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp":
    // <label>/<tree's parent folder>/<module folder>/<file>)
    public static Dictionary<string, string> DefinedIn = new Dictionary<string, string>();

    // trees: rewritten. refTrees: read-only, prototypes and definition sites only. *Label: prefix for imports.h comments (null = none).
    public static string RunTrees(IEnumerable<string> trees, IEnumerable<string> refTrees, string treeLabel, string refLabel)
    {
        trees = trees.ToList(); refTrees = refTrees.ToList();
        DefinedIn = new Dictionary<string, string>();
        foreach (var t in trees) AddDefinitions(t, treeLabel);
        foreach (var t in refTrees) AddDefinitions(t, refLabel);
        var headers = trees.Concat(refTrees).Where(t => Directory.Exists(Path.Combine(t, "include")))
                           .SelectMany(t => Directory.GetFiles(Path.Combine(t, "include"), "*_decomp.h")).ToList();
        var protos = LoadPrototypes(headers);
        var sb = new StringBuilder();
        foreach (var t in trees)
        {
            var hdr = Directory.GetFiles(Path.Combine(t, "include"), "*_decomp.h").FirstOrDefault();
            if (hdr == null) continue;
            sb.AppendLine(Path.GetFileName(t) + ": " + Run(t, Path.GetFileName(hdr), protos));
        }
        return sb.ToString();
    }

    static void AddDefinitions(string tree, string label)
    {
        string sym = Path.Combine(tree, "symbols.csv");
        if (label == null || !File.Exists(sym)) return;
        string full = Path.GetFullPath(tree).TrimEnd('/', '\\');
        string mod = Path.GetFileName(Path.GetDirectoryName(full)) + "/" + Path.GetFileName(full);   // e.g. "5_game_source/D2Common"
        foreach (var line in File.ReadLines(sym).Skip(1))
        {
            var c = Regex.Matches(line, "\"((?:[^\"]|\"\")*)\"").Cast<Match>().Select(m => m.Groups[1].Value).ToArray();
            if (c.Length < 3 || c[2].Length == 0 || c[2].StartsWith("lib/")) continue;
            if (!DefinedIn.ContainsKey(c[1])) DefinedIn[c[1]] = (label.Length > 0 ? label + "/" : "") + mod + "/" + c[2];
        }
    }

    public static Dictionary<string, string> LoadPrototypes(IEnumerable<string> headers)
    {
        // A name like "Fog_10045" can also appear as an import thunk in other modules' headers;
        // the header of the module that defines it ("fog_decomp.h") wins.
        var map = new Dictionary<string, string>();
        var owner = new Dictionary<string, bool>();
        foreach (var h in headers)
        {
            string mod = Path.GetFileName(h).Replace("_decomp.h", "").ToLowerInvariant();
            foreach (var l in File.ReadLines(h))
            {
                var m = ProtoRx.Match(l);
                if (!m.Success) continue;
                string name = m.Groups[1].Value;
                bool isOwner = name.ToLowerInvariant().StartsWith(mod + "_");
                bool had; owner.TryGetValue(name, out had);
                if (!map.ContainsKey(name) || (isOwner && !had)) { map[name] = l.Trim(); owner[name] = isOwner; }
            }
        }
        return map;
    }

    class Use { public int Count; public int Kind; }
    public static Dictionary<string, int> LastCpp = new Dictionary<string, int>();

    public static string Run(string treeDir, string headerName, Dictionary<string, string> allProtos)
    {
        string inc = Path.Combine(treeDir, "include");
        string mainHdr = Path.Combine(inc, headerName);
        var own = new HashSet<string>();
        foreach (var h in Directory.GetFiles(inc, "*.h"))
        {
            string n = Path.GetFileName(h);
            if (n == "imports.h" || n == "missing_globals.h" || n == "ghidra_compat.h") continue;
            foreach (var l in File.ReadLines(h))
                foreach (Match m in Regex.Matches(l, @"\b([A-Za-z_]\w*)\s*(?=\(|;|\[)")) own.Add(m.Groups[1].Value);
        }
        // sigma_tables.h and other included type headers
        string tables = Path.Combine(treeDir, "tables", "sigma_tables.h");
        if (File.Exists(tables)) foreach (Match m in Regex.Matches(File.ReadAllText(tables), @"\b([A-Za-z_]\w*)\b")) own.Add(m.Groups[1].Value);

        var imports = new SortedDictionary<string, string>(StringComparer.Ordinal);
        var data = new Dictionary<string, Use>();
        var types = new SortedSet<string>(StringComparer.Ordinal);
        var macros = new SortedSet<string>(StringComparer.Ordinal);
        var cpp = new Dictionary<string, int>();
        var assumedApi = new SortedSet<string>(StringComparer.Ordinal);
        int localsAdded = 0, retaddr = 0, funcsTouched = 0;

        foreach (var file in Directory.GetFiles(treeDir, "*.cpp", SearchOption.AllDirectories))
        {
            var lines = File.ReadAllLines(file).ToList();
            var outLines = new List<string>(lines.Count + 64);
            int i = 0;
            bool fileChanged = false;
            while (i < lines.Count)
            {
                if (!FuncHdr.IsMatch(lines[i])) { outLines.Add(lines[i]); i++; continue; }
                int s = i, e = i + 1;
                while (e < lines.Count && !FuncHdr.IsMatch(lines[e])) e++;
                var fn = lines.GetRange(s, e - s);
                bool ch;
                fn = FixFunction(fn, own, allProtos, imports, data, types, macros, cpp, assumedApi, ref localsAdded, ref retaddr, out ch);
                if (ch) { funcsTouched++; fileChanged = true; }
                outLines.AddRange(fn);
                i = e;
            }
            if (fileChanged) File.WriteAllLines(file, outLines, new UTF8Encoding(false));
        }

        WriteCompat(Path.Combine(inc, "ghidra_compat.h"), macros, types);
        WriteImports(Path.Combine(inc, "imports.h"), imports);
        WriteGlobals(Path.Combine(inc, "missing_globals.h"), data);
        HookHeader(mainHdr);

        LastCpp = cpp;
        return "prototypes available " + allProtos.Count + "; " + string.Format("functions changed {0}; locals declared {1}; _ReturnAddress {2}; imports {3}; data symbols {4}; opaque types {5}; Ghidra macros {6}; assumed Windows/CRT API {7}; C++ library names left {8} ({9} uses)",
            funcsTouched, localsAdded, retaddr, imports.Count, data.Count, types.Count, macros.Count, assumedApi.Count, cpp.Count, cpp.Values.Sum());
    }

    static bool IsUntraced(string id)
    {
        return Regex.IsMatch(id, @"^(stack0x[0-9a-f]+|_?param_\d+|_local_\w+|_[a-z]*Stack_?\w*|in_stack_\w+|in_[A-Z]\w*|unaff_\w+|extraout_\w+|_extraout_\w+|unkbyte\d+|unkuint\d+|unkint\d+)$");
    }
    static bool IsDataSymbol(string id)
    {
        return Regex.IsMatch(id, @"^(_*DAT|PTR|s|u|LAB|UNK|BYTE|WORD|DWORD|QWORD|ADDR|POINTER|FLOAT|DOUBLE|TERM|switchdataD)_\w+$");
    }

    static List<string> FixFunction(List<string> fn, HashSet<string> own, Dictionary<string, string> allProtos,
        SortedDictionary<string, string> imports, Dictionary<string, Use> data, SortedSet<string> types, SortedSet<string> macros,
        Dictionary<string, int> cpp, SortedSet<string> assumedApi, ref int localsAdded, ref int retaddr, out bool changed)
    {
        changed = false;
        int open = fn.FindIndex(l => l.Trim() == "{");
        if (open < 0) return fn;
        // Ghidra's local declarations: "  type name;" lines right after '{', ended by a blank line.
        // A function without locals starts directly with code, which must not be read as declarations.
        int declEnd = open + 1;
        while (declEnd < fn.Count && fn[declEnd].Trim().Length > 0 && IsDeclLine(fn[declEnd])) declEnd++;
        if (declEnd < fn.Count && fn[declEnd].Trim().Length > 0) declEnd = open + 1 + (declEnd > open + 1 ? 0 : 0);

        // exact translations: unaff_retaddr, in_FS_OFFSET (declarations dropped; uses mapped in ghidra_compat.h)
        for (int k = open + 1; k < declEnd; k++)
            if (Regex.IsMatch(fn[k], @"^\s+[\w ]+\**\s*\**(unaff_retaddr|in_FS_OFFSET);\s*$"))
            { fn.RemoveAt(k); k--; declEnd--; changed = true; }
        for (int k = declEnd; k < fn.Count; k++)
            if (fn[k].Contains("unaff_retaddr")) { fn[k] = Regex.Replace(fn[k], @"\bunaff_retaddr\b", "(uint32_t)_ReturnAddress()"); retaddr++; changed = true; }

        var declared = new HashSet<string>();
        for (int k = 0; k < declEnd; k++)
        {
            string l = Strip(fn[k]);
            foreach (Match m in Regex.Matches(l, @"([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*(?=[,;)=])")) declared.Add(m.Groups[1].Value);
        }
        foreach (var l in fn) { var lm = Regex.Match(l, @"^\s*([A-Za-z_]\w*)\s*:(?!:)"); if (lm.Success) declared.Add(lm.Groups[1].Value); }

        var needLocal = new SortedSet<string>(StringComparer.Ordinal);
        for (int k = open + 1; k < fn.Count; k++)
        {
            string l = Strip(fn[k]);
            if (l.Trim().Length == 0) continue;
            foreach (Match m in IdentRx.Matches(l))
            {
                string id = m.Value;
                int a = m.Index, b = a + id.Length;
                if (a > 0 && (char.IsLetterOrDigit(l[a - 1]) || l[a - 1] == '_' || l[a - 1] == '.' )) continue;
                if (a > 1 && l[a - 1] == '>' && l[a - 2] == '-') continue;          // field access
                if (Keywords.Contains(id) || declared.Contains(id) || own.Contains(id) || StdTypes.Contains(id)) continue;
                if (Regex.IsMatch(id, @"^_\d+_\d+_$")) continue;                     // piece access ._0_2_
                string before = l.Substring(0, a), after = l.Substring(b);
                if (before.EndsWith("::") || after.StartsWith("::") || after.StartsWith("<") && Regex.IsMatch(id, @"^[A-Za-z_]") && !after.StartsWith("<<") && !after.StartsWith("<=") && !after.StartsWith("< "))
                { int c; cpp.TryGetValue(id, out c); cpp[id] = c + 1; continue; }
                if (Regex.IsMatch(before, @"[<,]\s*$") && Regex.IsMatch(after, @"^\s*[>,*]") && l.Contains("::")) { int c; cpp.TryGetValue(id, out c); cpp[id] = c + 1; continue; }

                if (Regex.IsMatch(id, @"^(CONCAT|SUB|ZEXT|SEXT)\d+$|^(CARRY|SCARRY|SBORROW)\d$|^(POPCOUNT|LZCOUNT|ROUND|TRUNC|NAN|ABS|SQRT)$")) { macros.Add(id); continue; }
                if (Regex.IsMatch(id, @"^cpuid_\w+_info$")) { macros.Add(id); continue; }
                bool isCall = Regex.IsMatch(after, @"^\s*\(");
                bool typePos = Regex.IsMatch(after, @"^\s*\*+\s*\)") || (Regex.IsMatch(before, @"\(\s*$") && Regex.IsMatch(after, @"^\s*\)\s*[\w(&*-]"))
                               || (k < declEnd);
                if (IsUntraced(id)) { needLocal.Add(id); continue; }
                string proto;
                if (id.StartsWith("Ordinal_")) { imports[id] = "uint32_t " + id + "();   /* import whose DLL could not be determined */"; continue; }
                if (isCall && Regex.IsMatch(id, @"^_[A-Za-z]\w*_\d+$")) { imports[id] = "uint32_t __stdcall " + id + "();   /* stdcall import by decorated name (" + Regex.Replace(id, @"_(\d+)$", "@$1") + ") */"; continue; }
                if (allProtos.TryGetValue(id, out proto)) { imports[id] = proto; continue; }
                if (IsDataSymbol(id) && !isCall) { NoteData(data, id, before, after); continue; }
                if (typePos)
                {
                    if (Regex.IsMatch(id, @"^[A-Z][A-Z0-9_]*$")) { assumedApi.Add(id); continue; }   // Windows typedefs (DWORD, HANDLE ...)
                    types.Add(id); continue;
                }
                if (isCall)
                {
                    if (Undeclared.Category(id).StartsWith("system API")) { assumedApi.Add(id); continue; }   // verified against system DLL exports
                    imports[id] = "uint32_t " + id + "();   /* called but not found in any module header or system DLL */";
                    continue;
                }
                if (Regex.IsMatch(id, @"^[A-Z][A-Z0-9_]*$") && id.Length > 2) { assumedApi.Add(id); continue; } // Windows constants
                NoteData(data, id, before, after);                                                // other globals, e.g. imported data
            }
        }
        if (needLocal.Count > 0)
        {
            var decls = needLocal.Select(id => "  " + (id.StartsWith("stack0x") ? "uint8_t  " : "uint32_t ") + id + ";   /* not traced by Ghidra: " +
                (id.StartsWith("stack0x") ? "address of a stack slot" : "value with no visible source") + " */").ToList();
            int at = declEnd;
            if (declEnd == open + 1) { decls.Add(""); }            // function had no locals: keep the blank separator
            fn.InsertRange(at, decls);
            localsAdded += needLocal.Count;
            changed = true;
        }
        return fn;
    }

    static Regex DeclRx = new Regex(@"^\s+(?:const\s+|unsigned\s+|struct\s+)*[A-Za-z_][\w:<>,\s]*?[\s\*]+[A-Za-z_]\w*(?:\s*\[[^\]]*\])*\s*;\s*(?://.*|/\*.*\*/)?$");
    static bool IsDeclLine(string l) { return DeclRx.IsMatch(l) && !l.Contains("(") && !l.Contains("="); }

    static string Strip(string l) { return StrOrChar.Replace(Regex.Replace(l, @"/\*.*?\*/|//.*$", ""), "0"); }

    static void NoteData(Dictionary<string, Use> data, string id, string before, string after)
    {
        Use u; if (!data.TryGetValue(id, out u)) { u = new Use(); data[id] = u; }
        u.Count++;
        int k = 0;
        if (before.EndsWith("(*") && after.StartsWith(")(")) k = 3;
        else if ((before.EndsWith("*") && !before.EndsWith(" *")) || after.StartsWith("[") || Regex.IsMatch(after, @"^ [+-] ")) k = 2;
        else if (before.EndsWith("&")) k = 1;
        if (k > u.Kind) u.Kind = k;
    }

    static void WriteGlobals(string path, Dictionary<string, Use> data)
    {
        var sb = new StringBuilder();
        sb.AppendLine("/* missing_globals.h - data the code references that globals.h did not declare: Ghidra data labels");
        sb.AppendLine(" * (s_ strings, u_ wide strings, LAB_/UNK_ code addresses, _DAT_ ...) and data imported from other DLLs.");
        sb.AppendLine(" * Types are inferred from use. */");
        sb.AppendLine("#pragma once");
        sb.AppendLine();
        foreach (var kv in data.OrderBy(k => k.Key, StringComparer.Ordinal))
        {
            string id = kv.Key; string decl;
            if (id.StartsWith("s_")) decl = "char " + id + "[]";
            else if (id.StartsWith("u_")) decl = "wchar16 " + id + "[]";
            else if (id.StartsWith("LAB_") || id.StartsWith("UNK_") || id.StartsWith("switchdataD_")) decl = "uint8_t " + id + "[]";
            else decl = kv.Value.Kind == 3 ? "code " + id : kv.Value.Kind == 2 ? "uint8_t *" + id : kv.Value.Kind == 1 ? "uint8_t " + id + "[]" : "uint32_t " + id;
            sb.AppendLine("extern " + decl + ";  /* x" + kv.Value.Count + " */");
        }
        File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
    }

    static void WriteImports(string path, SortedDictionary<string, string> imports)
    {
        var sb = new StringBuilder();
        sb.AppendLine("/* imports.h - functions this module calls in other game modules, with the prototype");
        sb.AppendLine(" * from the module that defines them (see 5_game_source/<Module>/include); the comment names the defining file. */");
        sb.AppendLine("#pragma once");
        sb.AppendLine();
        foreach (var kv in imports)
        {
            string l = kv.Value.EndsWith(";") || kv.Value.Contains("/*") ? kv.Value : kv.Value + ";";
            string where;
            if (!l.Contains("/*") && DefinedIn.TryGetValue(kv.Key, out where)) l += "   /* " + where + " */";
            sb.AppendLine(l);
        }
        File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
    }

    static void WriteCompat(string path, SortedSet<string> macros, SortedSet<string> types)
    {
        var sb = new StringBuilder();
        sb.AppendLine("/* ghidra_compat.h - definitions for the helper operations and pseudo-registers Ghidra's C output uses. */");
        sb.AppendLine("#pragma once");
        sb.AppendLine("#include <windows.h>");
        sb.AppendLine("#include <intrin.h>");
        sb.AppendLine("#include <stdio.h>");
        sb.AppendLine("#include <stdlib.h>");
        sb.AppendLine("#include <math.h>");
        sb.AppendLine();
        sb.AppendLine("typedef long double float10;                      /* x87 80-bit value */");
        sb.AppendLine("#define ExceptionList   (*(void **)NtCurrentTeb())  /* fs:[0], head of the SEH chain */");
        sb.AppendLine("#define in_FS_OFFSET    ((uint8_t *)NtCurrentTeb())  /* fs: segment base = TEB */");
        sb.AppendLine("extern uint32_t MXCSR;                             /* SSE control/status register (use _mm_getcsr/_mm_setcsr) */");
        sb.AppendLine("static code *swi(int n) { (void)n; __debugbreak(); return 0; }   /* software interrupt, e.g. int3 */");
        sb.AppendLine("typedef unsigned int   unsigned_int;    /* Ghidra spellings of C++ type names */");
        sb.AppendLine("typedef unsigned short unsigned_short;");
        sb.AppendLine("typedef unsigned char  unsigned_char;");
        sb.AppendLine("#define builtin_strncpy(d,s,n) strncpy((char *)(d),(const char *)(s),(n))   /* inlined copy loops */");
        sb.AppendLine("#define builtin_memcpy(d,s,n)  memcpy((d),(s),(n))");
        sb.AppendLine("#define builtin_memset(d,c,n)  memset((d),(c),(n))");
        sb.AppendLine("#define fscale(x,e)            ldexpl((x),(int)(e))                          /* x87 FSCALE */");
        sb.AppendLine("#define fsin(x)   sinl(x)                 /* x87 instructions Ghidra writes as functions */");
        sb.AppendLine("#define fcos(x)   cosl(x)");
        sb.AppendLine("#define fptan(x)  tanl(x)");
        sb.AppendLine("#define fsqrt(x)  sqrtl(x)");
        sb.AppendLine("#define f2xm1(x)  (exp2l(x) - 1.0L)");
        sb.AppendLine("#define fyl2x(x,y) ((y) * log2l(x))");
        sb.AppendLine("#define fpatan(y,x) atan2l((y),(x))");
        sb.AppendLine("#define rdtsc()   __rdtsc()");
        sb.AppendLine("uint32_t *cpuid(uint32_t leaf);                /* CPUID: returns {eax,ebx,ecx,edx} */");        sb.AppendLine("uint32_t *cpuid_basic_info(uint32_t leaf);     /* CPUID, leaf 0: returns {eax,ebx,ecx,edx} */");
        sb.AppendLine("uint32_t *cpuid_Version_info(uint32_t leaf);   /* CPUID, leaf 1 */");
        sb.AppendLine("uint32_t *cpuid_cache_tlb_info(uint32_t leaf); /* CPUID, leaf 2 */");
        sb.AppendLine();
        foreach (var m in macros) sb.AppendLine(MacroDef(m));
        if (types.Count > 0)
        {
            sb.AppendLine();
            sb.AppendLine("/* type names Ghidra used without a definition (layout unknown) */");
            foreach (var t in types) sb.AppendLine("typedef struct " + t + " " + t + ";");
        }
        File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
    }

    static string UT(int bytes) { return bytes <= 1 ? "uint8_t" : bytes <= 2 ? "uint16_t" : bytes <= 4 ? "uint32_t" : "uint64_t"; }
    static string ST(int bytes) { return bytes <= 1 ? "int8_t" : bytes <= 2 ? "int16_t" : bytes <= 4 ? "int32_t" : "int64_t"; }
    static string Mask(int bytes) { return bytes >= 8 ? "0xffffffffffffffffULL" : "0x" + new string('f', bytes * 2) + "ULL"; }

    static string MacroDef(string m)
    {
        var d = Regex.Match(m, @"^([A-Z]+)(\d+)$");
        if (!d.Success)
        {
            switch (m)
            {
                case "POPCOUNT": return "#define POPCOUNT(x)  __popcnt((unsigned)(x))";
                case "LZCOUNT": return "#define LZCOUNT(x)   __lzcnt((unsigned)(x))";
                case "ROUND": return "#define ROUND(x)     round(x)";
                case "TRUNC": return "#define TRUNC(x)     ((int64_t)(x))";
                case "NAN": return "#define NAN(x)       isnan(x)";
                case "ABS": return "#define ABS(x)       fabs(x)";
                case "SQRT": return "#define SQRT(x)      sqrt(x)";
            }
            if (m.StartsWith("cpuid_")) return "uint32_t *" + m + "(uint32_t leaf);   /* CPUID leaf query: returns {eax,ebx,ecx,edx} */";
            return "/* " + m + ": no definition */";
        }
        string op = d.Groups[1].Value, digits = d.Groups[2].Value;
        if (op == "CARRY" || op == "SCARRY" || op == "SBORROW")
        {
            int n = int.Parse(digits);
            string u = UT(n), s = ST(n);
            if (op == "CARRY") return "#define " + m + "(a,b) ((" + u + ")((" + u + ")(a) + (" + u + ")(b)) < (" + u + ")(a))";
            if (op == "SCARRY") return "#define " + m + "(a,b) (((((" + s + ")(a)) ^ (" + s + ")((" + u + ")(a) + (" + u + ")(b))) & (((" + s + ")(b)) ^ (" + s + ")((" + u + ")(a) + (" + u + ")(b)))) < 0)";
            return "#define " + m + "(a,b) (((((" + s + ")(a)) ^ ((" + s + ")(b))) & (((" + s + ")(a)) ^ (" + s + ")((" + u + ")(a) - (" + u + ")(b)))) < 0)";
        }
        // sizes: CONCATxy, SUBxy, ZEXTxy, SEXTxy where x,y are byte counts written as digits (e.g. 44, 31, 161, 321)
        int x, y; SplitSizes(digits, out x, out y);
        if (x > 8 || y > 8 || x + (op == "CONCAT" ? y : 0) > 8)
            return "/* " + m + ": operates on " + Math.Max(x, y) + "+ byte values (SSE/x87); no portable C definition */\nuint64_t " + m + "();";
        switch (op)
        {
            case "CONCAT": return "#define " + m + "(hi,lo) ((" + UT(x + y) + ")(((uint64_t)(" + UT(x) + ")(hi) << " + (8 * y) + ") | ((uint64_t)(lo) & " + Mask(y) + ")))";
            case "SUB": return "#define " + m + "(v,off) ((" + UT(y) + ")((uint64_t)(v) >> (8 * (off))))";
            case "ZEXT": return "#define " + m + "(v) ((" + UT(y) + ")(" + UT(x) + ")(v))";
            case "SEXT": return "#define " + m + "(v) ((" + ST(y) + ")(" + ST(x) + ")(v))";
        }
        return "/* " + m + " */";
    }

    // "44" -> 4,4  "31" -> 3,1  "161" -> 16,1  "321" -> 32,1  "104" -> 10,4  "1016" -> 10,16
    static void SplitSizes(string d, out int x, out int y)
    {
        if (d.Length == 2) { x = d[0] - '0'; y = d[1] - '0'; return; }
        var valid = new[] { 1, 2, 3, 4, 5, 6, 7, 8, 10, 16, 32, 64 };
        for (int i = 1; i < d.Length; i++)
        {
            int a = int.Parse(d.Substring(0, i)), b = int.Parse(d.Substring(i));
            if (valid.Contains(a) && valid.Contains(b) && !d.Substring(i).StartsWith("0")) { x = a; y = b; return; }
        }
        x = 16; y = 16;
    }

    static void HookHeader(string mainHdr)
    {
        string t = File.ReadAllText(mainHdr);
        if (t.Contains("ghidra_compat.h")) return;
        // after the base typedefs (code, wchar16, ...) which the compat header uses
        t = t.Replace("#include \"globals.h\"", "#include \"ghidra_compat.h\"\n#include \"globals.h\"\n#include \"missing_globals.h\"\n#include \"imports.h\"");
        File.WriteAllText(mainHdr, t, new UTF8Encoding(false));
    }
}
