// Finds identifiers that the reconstructed sources use without declaring them.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public static class Undeclared
{
    static Regex Ident = new Regex(@"(?<![\w.$>])(?<!->)[A-Za-z_][A-Za-z0-9_]*");
    static Regex StrOrChar = new Regex("\"(?:[^\"\\\\]|\\\\.)*\"|'(?:[^'\\\\]|\\\\.)*'");
    static Regex FuncHdr = new Regex(@"^// 0x[0-9a-f]{8}  ");
    static Regex DeclRx = new Regex(@"^\s+(?:const\s+|unsigned\s+|struct\s+)*[A-Za-z_][\w:<>,\s]*?[\s\*]+[A-Za-z_]\w*(?:\s*\[[^\]]*\])*\s*;\s*$");

    static readonly HashSet<string> Keywords = new HashSet<string>(
        ("auto break case char const continue default do double else enum extern float for goto if int long register return " +
         "short signed sizeof static struct switch typedef union unsigned void volatile while bool true false __cdecl __stdcall " +
         "__fastcall __thiscall __vectorcall _ReturnAddress NULL wchar_t uint8_t uint16_t uint32_t uint64_t int8_t int16_t int32_t int64_t " +
         "byte uchar ushort uint ulong longlong ulonglong uint3 wchar16 code float10 this operator new delete").Split(' '));

    // Names exported by the 32-bit system DLLs (what windows.h and the C runtime declare)
    static HashSet<string> SystemNames;
    // fd2: without Windows' SysWOW64 (Linux), the names the module itself imports from system DLLs stand in
    public static HashSet<string> ExtraSystemNames = new HashSet<string>();
    public static void AddImportedNames(Pe pe, Func<string, bool> isGameDll)
    {
        foreach (var im in pe.Imports()) if (im.Name != null && !isGameDll(im.Dll)) ExtraSystemNames.Add(im.Name);
        SystemNames = null;
    }
    static void LoadSystemNames()
    {
        if (SystemNames != null) return;
        SystemNames = new HashSet<string>(ExtraSystemNames);
        foreach (var sys in Paths.SystemDllDirs())
        foreach (var dll in new[] { "kernel32", "kernelbase", "user32", "gdi32", "advapi32", "ws2_32", "wsock32", "msvcrt", "ucrtbase", "ole32",
                                    "oleaut32", "shell32", "winmm", "version", "ddraw", "dsound", "imm32", "comctl32", "ntdll", "shlwapi", "wininet", "dbghelp" })
        {
            string f = Path.Combine(sys, dll + ".dll");
            if (!File.Exists(f)) continue;
            try { foreach (var e in new Pe(f).Exports().Values) if (e.Value != null) SystemNames.Add(e.Value); } catch { }
        }
        foreach (var n in "size_t FILE va_list ptrdiff_t time_t wchar_t L intptr_t uintptr_t errno_t".Split(' ')) SystemNames.Add(n);
    }

    // Categorise an undeclared identifier
    public static string Category(string id)
    {
        if (id.StartsWith("in_stack_")) return id.StartsWith("in_stack_ff") ? "in_stack (negative offset)" : "in_stack (missing parameter)";
        if (Regex.IsMatch(id, @"^in_(E?[A-D]X|E?[SD]I|E?BP|E?SP|[A-D][LH]|CF|ZF|SF|OF|PF|AF|DF|TF|IF|ST\d|XMM\d+|MM\d|FS_OFFSET|GS_OFFSET|FPU\w*|stack|CS|DS|ES|FS|GS|SS)\b")) return id == "in_FS_OFFSET" ? "in_FS_OFFSET" : "in_REG (missing register parameter)";
        if (id.StartsWith("in_")) return "in_REG (missing register parameter)";
        if (id.StartsWith("unaff_")) return "unaff_ (callee-saved register not traced)";
        if (id.StartsWith("extraout_")) return "extraout_ (return value of a void call)";
        if (Regex.IsMatch(id, @"^(CONCAT\d+|SUB\d+|ZEXT\d+|SEXT\d+|CARRY\d|SCARRY\d|SBORROW\d|POPCOUNT|LZCOUNT|ROUND|TRUNC|NAN|ABS|SQRT|FLOAT\w*)$")) return "Ghidra macro";
        if (Regex.IsMatch(id, @"^(LAB|UNK|switchD|caseD|joined_r0x)_")) return "label / code address";
        if (Regex.IsMatch(id, @"^(_*DAT|PTR|s|u|ADDR|FUN|thunk_FUN|Ordinal|rtti|vtable|BYTE|WORD|DWORD|QWORD|POINTER)_")) return "global / data symbol";
        if (id == "ExceptionList") return "ExceptionList (SEH chain)";
        LoadSystemNames();
        if (SystemNames.Contains(id) || SystemNames.Contains(id + "A") || SystemNames.Contains("_" + id)) return "system API (windows.h / C runtime)";
        if (Regex.IsMatch(id, @"^(LP|P|H)?[A-Z][A-Z0-9_]+$")) return "Windows type or constant (windows.h)";
        return "other";
    }

    public static string Scan(string root, string outCsv)
    {
        // declared at file scope: every prototype and global in include/
        var global = new HashSet<string>();
        foreach (var h in Directory.GetFiles(Path.Combine(root, "include"), "*.h"))
            foreach (var l in File.ReadLines(h))
            {
                var mm = Regex.Match(l, @"([A-Za-z_][\w:~<>,]*)\s*(\[|\(|;)");
                foreach (Match m in Regex.Matches(l, @"\b([A-Za-z_]\w*)\s*(?=\(|;|\[)")) global.Add(m.Groups[1].Value);
            }
        var counts = new Dictionary<string, Dictionary<string, int>>();   // category -> id -> count
        var funcsWith = new Dictionary<string, int>();
        int funcs = 0;
        foreach (var file in Directory.GetFiles(root, "*.cpp", SearchOption.AllDirectories))
        {
            var lines = File.ReadAllLines(file);
            int i = 0;
            while (i < lines.Length)
            {
                if (!FuncHdr.IsMatch(lines[i])) { i++; continue; }
                int s = i + 1, e = s;
                while (e < lines.Length && !FuncHdr.IsMatch(lines[e])) e++;
                funcs++;
                var body = new List<string>();
                for (int k = s; k < e; k++) body.Add(StrOrChar.Replace(Regex.Replace(lines[k], @"/\*.*?\*/|//.*$", ""), "\"\""));
                var declared = new HashSet<string>();
                // signature + locals: everything up to the first blank line after '{'
                int open = body.FindIndex(l => l.Trim() == "{");
                int declEnd = open;
                if (open >= 0) { declEnd = open + 1; while (declEnd < body.Count && body[declEnd].Trim().Length > 0 && DeclRx.IsMatch(body[declEnd]) && !body[declEnd].Contains("(") && !body[declEnd].Contains("=")) declEnd++; if (declEnd < body.Count && body[declEnd].Trim().Length > 0) declEnd = open + 1; }
                for (int k = 0; k < Math.Max(0, declEnd); k++)
                    foreach (Match m in Regex.Matches(body[k], @"([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*(?=[,;)=])")) declared.Add(m.Groups[1].Value);
                foreach (var l in body) { var lm = Regex.Match(l, @"^\s*([A-Za-z_]\w*)\s*:(?!:)"); if (lm.Success) declared.Add(lm.Groups[1].Value); }
                var seen = new HashSet<string>();
                for (int k = Math.Max(0, open + 1); k < body.Count; k++)
                {
                    string l = body[k];
                    foreach (Match m in Ident.Matches(l))
                    {
                        string id = m.Value;
                        if (Keywords.Contains(id) || declared.Contains(id) || global.Contains(id)) continue;
                        // type names in casts/declarations and std:: qualified names
                        int after = m.Index + id.Length;
                        if (after < l.Length && l[after] == ':' ) continue;
                        if (m.Index > 1 && l.Substring(0, m.Index).EndsWith("::")) continue;
                        if (Regex.IsMatch(l.Substring(after), @"^\s*\*?\s*\)") && Regex.IsMatch(l.Substring(0, m.Index), @"\(\s*$")) continue; // (Type)
                        if (Regex.IsMatch(l.Substring(after), @"^\s*\*+\s*\)")) continue;                                                  // (Type *)
                        if (Regex.IsMatch(id, @"^[A-Z][A-Z0-9_]*$") && !Regex.IsMatch(id, @"^(CONCAT|SUB|ZEXT|SEXT|CARRY|SCARRY|SBORROW)\d")) { if (char.IsUpper(id[0]) && Regex.IsMatch(l.Substring(after), @"^\s*\(")) continue; }
                        string cat = Category(id);
                        Dictionary<string, int> c;
                        if (!counts.TryGetValue(cat, out c)) { c = new Dictionary<string, int>(); counts[cat] = c; }
                        int v; c.TryGetValue(id, out v); c[id] = v + 1;
                        if (seen.Add(cat)) { int w; funcsWith.TryGetValue(cat, out w); funcsWith[cat] = w + 1; }
                    }
                }
                i = e;
            }
        }
        var sb = new StringBuilder();
        sb.AppendLine("functions scanned: " + funcs);
        foreach (var kv in counts.OrderByDescending(k => k.Value.Values.Sum()))
            sb.AppendLine(string.Format("  {0,-45} uses={1,7} distinct={2,6} functions={3,6}  e.g. {4}", kv.Key, kv.Value.Values.Sum(), kv.Value.Count,
                funcsWith[kv.Key], string.Join(", ", kv.Value.OrderByDescending(x => x.Value).Take(6).Select(x => x.Key))));
        if (!string.IsNullOrEmpty(outCsv))
        {
            var csv = new StringBuilder("category,identifier,uses\n");
            foreach (var kv in counts) foreach (var x in kv.Value.OrderByDescending(y => y.Value)) csv.AppendLine("\"" + kv.Key + "\"," + x.Key + "," + x.Value);
            File.WriteAllText(outCsv, csv.ToString());
        }
        return sb.ToString();
    }
}
