// D2Sigma source-tree rebuilder (C# 5 for PowerShell 5.1 Add-Type)
// fd2 port: built with the .NET SDK (tools/Fd2Tools.csproj); ModuleConfig gained the options the PD2 modules need
// (Product, OwnFileRx, Alphabetical, LibraryHints, Decompiled/OutputSubdir) and ModuleConfigs holds the PD2 entries.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

public class Fn
{
    public string Name;
    public uint Addr;
    public List<string> Lines = new List<string>();
    public string File;          // logical source path, e.g. "D2SkillDo.cpp", "ui/StatScreen.cpp"
    public string Conf = "";     // anchor | range | linked | inferred | nearest | gap | lib
    public string Evidence = "";
    public string NewName;
    public string Hint;
    public HashSet<uint> Refs = new HashSet<uint>();
    public bool IsLib;
    public bool IsFunclet;
    public int Index;
    public int Unit = -1;        // fd2: link unit (object file) from the static-initializer table, -1 = unknown
    public bool UnitEvidence;    // fd2: placed by unit evidence (file-private global / initializer), not by __FILE__
}

public class ModuleConfig
{
    public bool Sigma = true;                 // D2Sigma-specific layout, hints and table renames
    public string Module = "D2Sigma";         // used in headers and as the export-name prefix
    public string BinaryName = "D2Sigma.dll";
    public uint LibStart = 0x1011db99;        // 0 = detect
    public Pe Bin;                            // optional: resolves DAT_ strings, exports, imports
    public Dictionary<string, string> OrdinalNames = new Dictionary<string, string>();  // "Ordinal_N" -> name
    public Dictionary<uint, string> ExportNames = new Dictionary<uint, string>();       // address -> name
    public Dictionary<string, string> OrdinalModule = new Dictionary<string, string>(); // "Ordinal_N" -> target module
    // per-function overrides for ordinals imported from several DLLs: function address -> ("Ordinal_N" -> {name, module})
    public Dictionary<uint, Dictionary<string, string[]>> FuncOrdinals = new Dictionary<uint, Dictionary<string, string[]>>();
    public Dictionary<string, string> CppNames = new Dictionary<string, string>();          // "Unicode::strcat" -> "Unicode_strcat"
    public int ChunkSize = 300;               // unattributed blocks larger than this are split
    // ---- fd2 additions (defaults reproduce the original D2Sigma behaviour) ----
    public string Product = "Median XL";      // file header: "Reconstructed from Ghidra output of <BinaryName> (<Product>)."
    // Non-Sigma modules: which __FILE__ strings count as this module's own file anchors. Matched against the path with
    // '/' separators; the named group "path" (if present) is the tree-relative file. null = every "..\Source\..." path
    // (1.13c game modules).
    public Regex OwnFileRx;
    // true: the linker emitted objects in name order, so unknown blocks are named between_<A>_and_<B> meaning the real
    // file name SORTS between A and B (D2Sigma). false: "located between" only (1.13c game modules).
    public bool Alphabetical = true;
    public bool LibraryHints;                 // non-Sigma: add _json_/_stl_/_regex_/_iostream_ hints (Sigma always does)
    public string Decompiled;                 // Ghidra export file name inside ghidra_export_dir (".extra.c" sibling is read too)
    public string OutputSubdir;               // tree location relative to repo_root
    // DAT_xxxxxxxx -> name, for globals that hold game function pointers resolved at run time (D2Template's
    // GetProcAddress(ordinal) / DLL base + offset tables): calls through them read like the reference, e.g. D2Common_10973.
    // Filled from <tree>/game_pointers.tsv by GameBuild.ConfigurePd2.
    public Dictionary<string, string> GlobalNames = new Dictionary<string, string>();
    public Dictionary<string, string> GlobalNotes = new Dictionary<string, string>();   // DAT_ -> comment for globals.h
    public Dictionary<string, string> GlobalTypes = new Dictionary<string, string>();   // DAT_ -> C type for globals.h (default code)
    public Dictionary<string, string> GameBindingFile = new Dictionary<string, string>();   // thunk/cell name -> defining file (comments)
    // fd2 phase 3: address of the run-time game-pointer resolver (D2Template GetDllOffset), 0 = none. When set, `pd2`
    // regenerates <tree>/game_pointers.tsv from the export (Pd2Pointers.cs) before loading it.
    public uint PointerResolver;
    // function address -> name for functions identified by a table rather than by their body (game-pointer thunks and
    // accessors). Applied to FUN_ names only, so names already set in Ghidra win.
    public Dictionary<uint, string> FunctionNames = new Dictionary<uint, string>();
    public Dictionary<string, string> GamePointerTargets = new Dictionary<string, string>();   // thunk/accessor name -> reference name
    // fd2 phase 3: C++ dynamic-initializer table (__xc_a) and the string that marks one object file's common-header
    // initializer in it (LinkUnits.cs). 0 = not used.
    public uint InitTableStart, InitTableEnd;
    public string TuMarker;
    public bool StringConstants;              // fd2: resolve integer constants that address .rdata strings (anchors + comments)
    // hand-verified placements: function address -> {file, reason} (all modules; D2Sigma keeps its own table below)
    public Dictionary<uint, string[]> FileOverrides = new Dictionary<uint, string[]>();
    // hand-named link units: an address of a function in the unit -> {file, reason}
    public Dictionary<uint, string[]> UnitFileOverrides = new Dictionary<uint, string[]>();
    // hand-verified names: function address -> {name, reason}
    public Dictionary<uint, string[]> ManualNames = new Dictionary<uint, string[]>();
    public Dictionary<uint, string> Hints = new Dictionary<uint, string>();           // address -> name hint (patch handlers ...)
    public List<uint> PatchTables = new List<uint>();                                 // D2Template patch tables (20-byte entries)
    public string[] PatchModules = new string[0];                                     // module-table order the entries index
    public string ConfigFile;                                                         // settings JSON (pd2_install_dir) for Config_ hints
    public Dictionary<string, string> ApiHints = new Dictionary<string, string>();    // regex of called names -> hint (body says what it does)
    public HashSet<string> ConfigKeys = new HashSet<string>();                         // keys of the module's settings file
    public Dictionary<string, string> ConfigKeyGlobals = new Dictionary<string, string>();   // DAT_ -> key (static std::string)
}

// Module entries for the fd2 targets, set up the way D2Sigma's defaults above are.
public static class ModuleConfigs
{
    // ProjectDiablo.dll: VS2022 MSVC build of C:\projects\Project-Diablo-2\D2TemplateSource\ProjectDiablo\...
    // Its asserts also pass the GAME's __FILE__ strings ("..\Source\D2Client\UI\inv.cpp", "..\D2Game/Quests/a3q5.cpp")
    // to game functions; those are not PD2 files, so only paths under D2TemplateSource\ProjectDiablo\ are anchors.
    public static ModuleConfig ProjectDiablo()
    {
        return new ModuleConfig
        {
            Sigma = false, Module = "ProjectDiablo", BinaryName = "ProjectDiablo.dll", Product = "Project Diablo 2",
            // phase 3: DetectLibStart finds nothing (FID named too little). The static CRT/msvcprt objects start at the first
            // unaligned function (0x103017bb, MSVCP140 import thunks, then _Facet_Register, __scrt_*, ...); the EH funclets
            // of .text$x follow at 0x10303xxx. Everything below is app code (.text$di initializers, then .text$mn).
            LibStart = 0x103017bb,
            OwnFileRx = new Regex(@"(?i)(?:^|/)D2TemplateSource/ProjectDiablo/(?<path>.+\.(?:cpp|c|cc))$"),
            // phase 3: link order is NOT alphabetical. The link units (LinkUnits.cs) put events/SkillEvents.cpp after
            // functions/D2ServerFunctions.cpp and functions/D2CommonFunctions.cpp before functions/CubeFunctions.cpp.
            Alphabetical = false,
            LibraryHints = true,    // nlohmann::json 3.11.2, std::regex, std::filesystem are linked in (RTTI)
            Decompiled = "ProjectDiablo_decompiled.c", OutputSubdir = "4_pd2_source/ProjectDiablo",
            PointerResolver = 0x102f10f0,   // FUN_102f10f0(__fastcall dll, value): D2Template GetDllOffset (phase 2 report)
            // C++ dynamic-initializer table __xc_a (phase 2: entries rise through .text$di in link order). Every object
            // file that includes PD2's common header runs one initializer that builds a static array of act/area
            // names starting with this string, so it marks one object per occurrence (66 in this build).
            InitTableStart = 0x1032356c, InitTableEnd = 0x10367298, TuMarker = "the Blood Moor and Den of Evil",
            StringConstants = true,
            PatchTables = { 0x103c7f50, 0x10367ee0 },   // 2,187 + 35 entries; 0x103681b0 (block patches) has another layout
            PatchModules = new[] { "D2Client", "D2CMP", "D2Common", "D2Game", "D2gfx", "D2Lang", "D2MCPClient", "D2Net", "D2sound",
                "D2Win", "Fog", "Ijl11", "Storm", "D2Gdi", "D2DDraw", "D2Direct3D", "D2Glide", "D2Multi", "D2Launch", "SmackW32",
                "Binkw32", "Bnclient", "BH", "ddraw", "glide3x", "SGD2FreeDisplayFix", "SGD2FreeRes" },   // module table 0x103c68a0 (FUN_102ad400)
            ConfigFile = "ProjectDiablo.json",
            // module enumeration is only used by the client integrity check (unit 45: base64 names of known
            // third-party/maphack DLLs); labelled, not analysed further
            ApiHints = { { "K32EnumProcessModules|EnumProcessModules|Module32FirstW?|Module32NextW?", "IntegrityCheck_ModuleScan" } },
            UnitFileOverrides = {
                { 0x1022f2d0, new[] { "functions/D2ClientFunctions.cpp",
                    "its code passes the hand-written file name \"D2ClientFunctions.cpp\" with line 0x562 to D2Common_10202 (0x1022f2d0), as functions/ItemFunctions.cpp passes \"ItemFunctions\" to Fog_10045; folder inferred from its siblings D2CommonFunctions/D2ServerFunctions/D2NewFunctions.cpp" } },
            },
            ManualNames = {
                { 0x102adad0, new[] { "DllMain", "called by dllmain_dispatch (0x103026c9) with the DLL_PROCESS_ATTACH reason" } },
            },
            Hints = {
                { 0x102ad560, "Init" },                // DllMain -> module table, MPQs, patch installer (phase 2 report)
                { 0x102ad400, "LoadModuleTable" },     // fills the 27 {name, HMODULE} entries at 0x103c68a0
                { 0x102ad020, "PatchInstaller" },      // VirtualProtect + copy + compare over the patch table 0x103c7f50
                { 0x102ad1f0, "BlockPatchInstaller" }, // applies the block patches of table 0x103681b0
                { 0x102f10f0, "GetDllOffset" },        // (dll, value): GetProcAddress(-value) or DLL base + value
                { 0x10253fc0, "GameVersionIndex" },    // 0 = 1.0.13.60 (1.13c), 1 = 1.0.13.64 (1.13d)
                { 0x10253f30, "DetectGameVersion" },   // reads Game.exe's file version, MessageBox + exit otherwise
                { 0x102eeba0, "OpenMpqs" },            // opens pd2data/pd2assets/pd2maps/pd2monchars.mpq through D2Win
                { 0x10231510, "LoadBH" },              // LoadLibrary BH.dll + its exported hooks
                { 0x102319a0, "LoadD2GL" },            // glide3x.dll/ddraw.dll d2gl* exports
            },
        };
    }

    // PD2_EXT.dll: VS2022 version.dll proxy that loads ProjectDiablo.dll. No __FILE__ strings, so the whole
    // module is address-ordered chunks under _unattributed/ unless phase 3 adds other evidence.
    public static ModuleConfig PD2_EXT()
    {
        return new ModuleConfig
        {
            Sigma = false, Module = "PD2_EXT", BinaryName = "PD2_EXT.dll", Product = "Project Diablo 2",
            LibStart = 0,
            OwnFileRx = new Regex(@"(?i)(?:^|/)Project-Diablo-2/(?:D2TemplateSource/)?PD2_EXT/(?<path>.+\.(?:cpp|c|cc))$"),   // TODO(phase 3): no such strings seen yet
            Alphabetical = false,
            LibraryHints = true,
            Decompiled = "PD2_EXT_decompiled.c", OutputSubdir = "4_pd2_source/PD2_EXT",
        };
    }

    public static readonly Func<ModuleConfig>[] Pd2 = { PD2_EXT, ProjectDiablo };
}

public static class Rebuilder
{
    public static ModuleConfig Cfg = new ModuleConfig();
    static uint LIB_START { get { return Cfg.LibStart; } }
    static Regex GenericFileRx = new Regex(@"""([^""\r\n]*?\\\\[^""\r\n]*?\.(?:cpp|c|cc))""");
    static Regex DataRefRx = new Regex(@"\b(?:DAT|PTR_\w*?|s_\w*?)_([0-9a-f]{8})\b");
    static Dictionary<uint, string> DataStrCache = new Dictionary<uint, string>();
    public static int OrdinalsResolved, OrdinalsLeft;
    public static Dictionary<string, int> CallsToModule = new Dictionary<string, int>();

    static void Reset()
    {
        ExactRenames = new List<KeyValuePair<string, string>>();
        IdentRenames = new Dictionary<string, string>();
        RenameInfo = new Dictionary<string, string[]>();
        SigmaFields = new Dictionary<int, string>();
        GlobalKind = new Dictionary<string, int>();
        UndefinedReplaced = 0; OrdinalsResolved = 0; OrdinalsLeft = 0; ForeignFileRefs = 0;
        CallsToModule = new Dictionary<string, int>();
        DataStrCache = new Dictionary<uint, string>();
        ConstStrCache = new Dictionary<uint, string>();
    }

    static Regex HeaderRx = new Regex(@"^//==== (.+) @ ([0-9a-f]{8})$");
    static Regex UnderDatRx = new Regex(@"(?<![\w])_(DAT_[0-9a-f]{8})\b");
    static Regex FileRx = new Regex(@"""(\.\.\\\\[^""]+?\.cpp|src\\\\[^""]+?\.cpp)""");
    static Regex LineNoRx = new Regex(@"""(?:\.\.\\\\|src\\\\)[^""]+?\.cpp""\s*,\s*(0x[0-9a-f]+|\d+)");
    static Regex WidgetRx = new Regex(@"""([A-Za-z]+):([A-Za-z][A-Za-z0-9]*)-?""");
    static Regex FunRefRx = new Regex(@"\bFUN_([0-9a-f]{8})\b");
    static Regex ExcelRx = new Regex(@"""data\\\\global\\\\excel\\\\([a-z0-9]+)\.txt""");
    static Regex StrLitRx = new Regex(@"""([A-Za-z0-9]+)""");
    static Regex DatRx = new Regex(@"\b(DAT_[0-9a-f]{8}|PTR_[A-Za-z0-9_]*?[0-9a-f]{8})\b");

    static Dictionary<string, string> WidgetToFile = new Dictionary<string, string> {
        {"AnvilPanel","ui/Anvil.cpp"},{"BottomPanel","ui/BottomPanel.cpp"},{"ChatLog","ui/ChatLog.cpp"},
        {"ChatPrompt","ui/ChatPrompt.cpp"},{"ConfigScreen","ui/ConfigScreen.cpp"},{"CraftingPanel","ui/Crafting.cpp"},
        {"Dialogue","ui/Dialogue.cpp"},{"DocumentationPanel","ui/Docs.cpp"},{"DungeonWidget","ui/Dungeon.cpp"},
        {"EscMenuPanel","ui/EscMenu.cpp"},{"GameInfoText","ui/GameInfoText.cpp"},{"HUD","ui/HUD.cpp"},
        {"InifussPanel","ui/Inifuss.cpp"},{"InventoryPanel","ui/Inventory.cpp"},{"MercenaryPanel","ui/Mercenary.cpp"},
        {"MerchantPanel","ui/Merchant.cpp"},{"NpcMenu","ui/NpcMenu.cpp"},{"PartyPanel","ui/Party.cpp"},
        {"QuestsPanel","ui/QuestScreen.cpp"},{"SkillSelect","ui/SkillSelect.cpp"},{"SkillTree","ui/SkillTree.cpp"},
        {"StashPanel","ui/Stash.cpp"},{"StatScreen","ui/StatScreen.cpp"},{"TradePanel","ui/Trade.cpp"},
        {"TradeRequestPanel","ui/TradeRequest.cpp"},{"TrainingHud","ui/Training.cpp"},{"WaypointPanel","ui/Waypoint.cpp"},
        {"WorldView","ui/WorldView.cpp"}
    };
    static HashSet<string> WidgetPrefixesAll = new HashSet<string> {
        "BossLifebar","ChatRecent","GroundLoot","PartyRoster"
    };

    static HashSet<string> TableNames = new HashSet<string> {
        "armor2","automap","cellFiles","charstatsExp","cubemainExt","difficultyLevelNames","hireClasses","hireClassNames",
        "hireDescExt","infographics","infographicsNames","itemClasses","itemTypesExt","lvlTypeNames","misc2","missiles2",
        "monstats3","monUModExp","mysticOrbs","npcActionNames","npcActions","npcActionTypes","npcExt","npcStores","objects2",
        "objPreset","overlay","petType","petTypeExt","properties","propertiesExt","qualities","requirementNames","requirements",
        "requirementTypes","runes","skills2","skillTree","stateIcons","statScreen","uniqueItems","uniqueItems2","weapons2"
    };

    // Hand-verified names for infrastructure functions (address -> name)
    static Dictionary<uint, string> Manual = new Dictionary<uint, string> {
        {0x10044000, "CreateLogAndScreenshotDirs"},
        {0x10044070, "ReportConfigurationException_RetInt"},
        {0x100440a0, "ReportConfigurationException_RetBool"},
        {0x100440d0, "ReportD2GSPacketFormatException"},
        {0x10044100, "ReportInvalidIdException_RetInt"},
        {0x10044130, "ReportInvalidIdException_RetInt2"},
        {0x10044160, "ReportInvalidIdException_RetBool"},
        {0x10044190, "ReportMemoryManagementException"},
        {0x100441c0, "ReportNotFoundException"},
        {0x10044220, "ReportNullPointerException_RetPtr"},
        {0x10044250, "ReportNullPointerException_RetInt"},
        {0x10044280, "ReportNullPointerException_RetBool"},
        {0x100442b0, "ReportOutOfBoundsException_RetBool"},
        {0x100442e0, "ReportReadException"},
        {0x10044420, "ReportConfigurationException"},
        {0x10044450, "ShouldReportException"},
        // D2Guard (anti-cheat): see engine/D2Guard.cpp
        {0x100664b0, "D2Guard_ClientFlaggedOrHasAccount"},
        {0x10066500, "D2Guard_ScanForCheatTools"},
        {0x10066810, "D2Guard_PlayerTask"},
        {0x10066850, "D2Guard_GameTask"},
        {0x10066870, "D2Guard_ReportHack"},
        {0x10066890, "D2Guard_SendCheatReport"},
    };

    // Placements the address/call-graph rules can't make, each verified by hand (D2Sigma only).
    static Dictionary<uint, string[]> FileOverrides = new Dictionary<uint, string[]> {
        {0x10066870, new[]{"engine/D2Guard.cpp", "D2Guard's hack-report hook (empty in the client build), between D2Guard functions"}},
        {0x10066880, new[]{"engine/D2Guard.cpp", "copy helper of the lambda used by D2Guard_ScanForCheatTools"}},
        {0x10066890, new[]{"engine/D2Guard.cpp", "call operator of the lambda used by D2Guard_ScanForCheatTools (sends packet 0x4E)"}},
        {0x100668f0, new[]{"engine/D2Guard.cpp", "RTTI accessor of the lambda used by D2Guard_ScanForCheatTools"}},
    };

    static Dictionary<string, int> Rank;
    static Dictionary<uint, List<uint>> Callers;

    public static string Run(string input, string outDir)
    {
        var log = new StringBuilder();
        Reset();
        var funcs = Parse(input);
        if (Cfg.LibStart == 0) DetectLibStart(funcs, log);
        foreach (var f in funcs) f.IsLib = f.Addr >= LIB_START;
        log.AppendLine("Parsed functions: " + funcs.Count);

        var byAddr = new Dictionary<uint, Fn>();
        foreach (var f in funcs) byAddr[f.Addr] = f;
        foreach (var f in funcs)
        {
            foreach (var l in f.Lines)
                foreach (Match m in FunRefRx.Matches(l))
                {
                    uint a = Convert.ToUInt32(m.Groups[1].Value, 16);
                    if (a != f.Addr && byAddr.ContainsKey(a)) f.Refs.Add(a);
                }
        }
        // undirected adjacency over app functions
        var adj = new Dictionary<uint, HashSet<uint>>();
        foreach (var f in funcs) adj[f.Addr] = new HashSet<uint>();
        foreach (var f in funcs)
            foreach (var r in f.Refs)
                if (!f.IsLib && !byAddr[r].IsLib) { adj[f.Addr].Add(r); adj[r].Add(f.Addr); }

        var app = funcs.Where(f => !f.IsLib).ToList();
        if (!Cfg.Sigma) NameProcAddressGlobals(funcs, log);
        var anchorFiles = CollectAnchors(app);
        // fd2: object files recovered from the static-initializer table place .text$di wholesale and give .text$mn
        // functions that use file-private globals the role of extra anchors
        if (Cfg.InitTableStart != 0)
        {
            log.Append(LinkUnits.Build(Cfg, funcs));
            if (LinkUnits.Units.Count > 0) app = PlaceByUnits(app, log);
        }

        // Determine file order by first anchor address and validate monotonic layout
        var fileOrder = app.Where(f => f.Conf == "anchor").GroupBy(f => f.File)
            .OrderBy(g => { var a = g.Select(f => f.Addr).OrderBy(x => x).ToList(); return a[a.Count / 2]; })
            .Select(g => g.Key).ToList();
        var rank = new Dictionary<string, int>();
        for (int i = 0; i < fileOrder.Count; i++) rank[fileOrder[i]] = i;

        // Demote anchors that violate monotone ordering (inlined header code etc.)
        // keep the longest non-decreasing (by file rank) subsequence of anchors; demote the rest
        var anc = app.Where(f => f.Conf == "anchor").ToList();
        int na = anc.Count; var len = new int[na]; var prev = new int[na];
        for (int i = 0; i < na; i++)
        {
            len[i] = 1; prev[i] = -1;
            for (int j = 0; j < i; j++)
                if (rank[anc[j].File] <= rank[anc[i].File] && len[j] + 1 > len[i]) { len[i] = len[j] + 1; prev[i] = j; }
        }
        int bi = 0; for (int i = 1; i < na; i++) if (len[i] >= len[bi]) bi = i;
        var keep = new HashSet<int>(); if (na > 0) for (int i = bi; i >= 0; i = prev[i]) keep.Add(i);
        int demoted = 0;
        for (int i = 0; i < na; i++)
        {
            if (keep.Contains(i)) continue;
            var f = anc[i];
            log.AppendLine("  demoted 0x" + f.Addr.ToString("x8") + " " + f.File + " <- " + f.Evidence);
            f.Conf = ""; f.File = null; demoted++;
        }
        log.AppendLine("Files with direct evidence: " + fileOrder.Count + ", out-of-order anchors demoted: " + demoted +
                       (Cfg.OwnFileRx != null ? ", other modules' __FILE__ references ignored: " + ForeignFileRefs : ""));

        Rank = rank;
        Callers = new Dictionary<uint, List<uint>>();
        foreach (var f in funcs) Callers[f.Addr] = new List<uint>();
        foreach (var f in funcs) foreach (var r in f.Refs) Callers[r].Add(f.Addr);
        ResolveGaps(app, adj, byAddr, log);
        if (LinkUnits.Units.Count > 0) FinishUnits(funcs, log);
        if (!Cfg.Sigma)
            foreach (var f in funcs)
            {
                string[] ov;
                if (Cfg.FileOverrides.TryGetValue(f.Addr, out ov)) { f.File = ov[0]; f.Conf = "manual"; f.Evidence = ov[1]; }
            }
        if (Cfg.Sigma)
            foreach (var f in app)
            {
                string[] ov;
                if (FileOverrides.TryGetValue(f.Addr, out ov)) { f.File = ov[0]; f.Conf = "manual"; f.Evidence = ov[1]; }
            }
        if (!Cfg.Sigma) ChunkUnattributed(funcs.Where(f => !f.IsLib).ToList());
        AssignLibFiles(funcs);
        Name(funcs);

        var rename = new Dictionary<string, string>();
        foreach (var f in funcs) if (f.NewName != f.Name) rename[f.Name] = f.NewName;
        // exported functions Ghidra named after their C++ member (e.g. "Nth"): calls by that short name follow the rename
        foreach (var f in funcs)
            if (f.Hint == "export" && !f.Name.StartsWith("FUN_") && !f.Name.StartsWith("Ordinal_") && Regex.IsMatch(f.Name, @"^[A-Z]\w*$") && f.Name != "QueryInterface")
                Cfg.CppNames[f.Name] = f.NewName;

        Emit(funcs, rename, outDir, input, log);
        return log.ToString();
    }

    static List<Fn> Parse(string path)
    {
        var list = new List<Fn>();
        Fn cur = null;
        // functions Ghidra's analysis missed are kept in "<export>.extra.c" (see tools/ghidra/AddFunctions.java)
        string extra = Path.Combine(Path.GetDirectoryName(path), Path.GetFileNameWithoutExtension(path) + ".extra.c");
        var lines = File.ReadLines(path);
        if (File.Exists(extra)) lines = lines.Concat(File.ReadLines(extra));
        var seen = new HashSet<uint>();
        foreach (var line in lines)
        {
            var m = HeaderRx.Match(line);
            if (m.Success)
            {
                cur = new Fn { Name = m.Groups[1].Value, Addr = Convert.ToUInt32(m.Groups[2].Value, 16) };
                if (seen.Add(cur.Addr)) list.Add(cur); else cur = new Fn();   // the main export wins on duplicates
                continue;
            }
            // fd2: Ghidra writes "_DAT_x" for a global accessed with another size than its symbol; it is the same variable
            if (cur != null) cur.Lines.Add(line.IndexOf("_DAT_", StringComparison.Ordinal) >= 0 ? UnderDatRx.Replace(line, "$1") : line);
        }
        list.Sort((a, b) => a.Addr.CompareTo(b.Addr));
        for (int i = 0; i < list.Count; i++)
        {
            var f = list[i];
            f.Index = i;
            while (f.Lines.Count > 0 && f.Lines[f.Lines.Count - 1].Trim().Length == 0) f.Lines.RemoveAt(f.Lines.Count - 1);
            while (f.Lines.Count > 0 && f.Lines[0].Trim().Length == 0) f.Lines.RemoveAt(0);
            f.IsLib = f.Addr >= LIB_START;
            f.IsFunclet = f.Name.StartsWith("Catch@") || f.Name.StartsWith("Catch_All@") || f.Name.StartsWith("Unwind@");
        }
        return list;
    }

    // vanilla: "..\\Source\\D2Common\\DRLG\\Drlg.cpp" -> "DRLG/Drlg.cpp" (the module's own folder is dropped)
    static string NormPathVanilla(string raw)
    {
        string p = raw.Replace("\\\\", "/").Replace("\\", "/");
        int i = p.IndexOf("Source/", StringComparison.OrdinalIgnoreCase);
        if (i >= 0) p = p.Substring(i + 7);
        while (p.StartsWith("../")) p = p.Substring(3);
        var parts = p.Split('/').ToList();
        string mod = Cfg.Module.ToLowerInvariant().Replace("d2", "");
        string first = parts[0].ToLowerInvariant().Replace("d2", "");
        if (parts.Count > 1 && first.Length > 0 && (first == mod || mod.Contains(first) || first.Contains(mod)))
            parts.RemoveAt(0);
        return string.Join("/", parts);
    }

    // fd2: the tree path for a __FILE__ string, or null when it is not this module's own file (OwnFileRx)
    public static int ForeignFileRefs;
    public static string AnchorPath(string raw)
    {
        if (Cfg.OwnFileRx == null) return NormPathVanilla(raw);
        string p = raw.Replace("\\\\", "/").Replace("\\", "/");
        var m = Cfg.OwnFileRx.Match(p);
        if (!m.Success) { ForeignFileRefs++; return null; }
        var g = m.Groups["path"];
        return g.Success ? g.Value : p;
    }

    static string DataString(uint va)
    {
        string s;
        if (DataStrCache.TryGetValue(va, out s)) return s;
        s = Cfg.Bin != null ? Cfg.Bin.CStr(va, 260) : null;
        DataStrCache[va] = s;
        return s;
    }

    // The statically linked CRT sits at the end of .text and is mostly named by Ghidra's function ID.
    static void DetectLibStart(List<Fn> funcs, StringBuilder log)
    {
        int lastAnchor = -1;
        for (int i = 0; i < funcs.Count; i++)
            if (funcs[i].Lines.Any(l => (Cfg.OwnFileRx != null ? GenericFileRx.Matches(l).Cast<Match>().Any(m => Cfg.OwnFileRx.IsMatch(m.Groups[1].Value.Replace("\\\\", "/"))) :
                                          (l.IndexOf("Source", StringComparison.OrdinalIgnoreCase) >= 0 && GenericFileRx.IsMatch(l))) ||
                                         (l.IndexOf("Ordinal_") >= 0 && OrdRx.Matches(l).Cast<Match>().Any(m => Cfg.OrdinalNames.ContainsKey(m.Value) || Cfg.FuncOrdinals.ContainsKey(funcs[i].Addr)))))
                lastAnchor = i;
        uint lastExport = Cfg.ExportNames.Keys.DefaultIfEmpty(0u).Max();
        System.Func<Fn, bool> libName = f => !f.Name.StartsWith("FUN_") && !f.Name.StartsWith("Catch") && !f.Name.StartsWith("Unwind") &&
            !f.Name.StartsWith("Ordinal_") && !f.Name.StartsWith("thunk_") && !f.Name.StartsWith("caseD_") && !f.Name.StartsWith("switchD_") &&
            !Cfg.ExportNames.ContainsKey(f.Addr) && f.Name.IndexOf("DllMain", StringComparison.OrdinalIgnoreCase) < 0 && !f.Name.Contains("DllModInit") &&
            f.Name != "entry";
        int n = funcs.Count;
        var suffixNamed = new int[n + 1];
        for (int i = n - 1; i >= 0; i--) suffixNamed[i] = suffixNamed[i + 1] + (libName(funcs[i]) ? 1 : 0);
        uint start = 0xffffffff;
        for (int i = lastAnchor + 1; i < n; i++)
        {
            if (!libName(funcs[i]) || funcs[i].Addr <= lastExport) continue;
            int rest = n - i;
            if (rest >= 10 && suffixNamed[i] * 100 / rest >= 25) { start = funcs[i].Addr; break; }
        }
        Cfg.LibStart = start;
        log.AppendLine("CRT/library starts at " + (start == 0xffffffff ? "(none detected)" : "0x" + start.ToString("x8")));
    }

    static string NormPath(string raw)
    {
        // "..\\ui\\Anvil.cpp" -> "ui/Anvil.cpp" ; "src\\config\\dirs.cpp" -> "src/config/dirs.cpp"
        string p = raw.Replace("\\\\", "/");
        if (p.StartsWith("../")) return "engine/" + p.Substring(3);
        if (p.StartsWith("src/")) return "engine/mxl_engine/" + p;
        return p;
    }

    static void AddFileVote(Dictionary<string, int> votes, List<string> lines, string p, string after)
    {
        int v; votes.TryGetValue(p, out v); votes[p] = v + 2;
        var ln = Regex.Match(after, @"^\s*,\s*(0x[0-9a-f]+|\d+)");
        if (ln.Success)
        {
            string s = ln.Groups[1].Value;
            lines.Add(s.StartsWith("0x") ? Convert.ToInt32(s.Substring(2), 16).ToString() : s);
        }
    }

    static HashSet<string> CollectAnchors(List<Fn> app)
    {
        var files = new HashSet<string>();
        foreach (var f in app)
        {
            var votes = new Dictionary<string, int>();
            var lines = new List<string>();
            foreach (var l in f.Lines)
            {
                if (!Cfg.Sigma)
                {
                    foreach (Match m in GenericFileRx.Matches(l))
                    {
                        string ap = AnchorPath(m.Groups[1].Value);
                        if (ap != null) AddFileVote(votes, lines, ap, l.Substring(m.Index + m.Length));
                    }
                    // fd2: a string passed through an integer-typed parameter prints as its address
                    if (Cfg.Bin != null && Cfg.StringConstants && l.IndexOf("0x", StringComparison.Ordinal) >= 0)
                        foreach (Match m in HexConstRx.Matches(l))
                        {
                            string sv = ConstString(m.Value);
                            if (sv == null || !Regex.IsMatch(sv, @"[\\/].*\.(cpp|c|cc)$", RegexOptions.IgnoreCase)) continue;
                            string ap = AnchorPath(sv);
                            if (ap != null) AddFileVote(votes, lines, ap, l.Substring(m.Index + m.Length));
                        }
                    if (Cfg.Bin != null && (l.IndexOf("DAT_") >= 0 || l.IndexOf("s_") >= 0 || l.IndexOf("PTR_") >= 0))
                        foreach (Match m in DataRefRx.Matches(l))
                        {
                            string s = DataString(Convert.ToUInt32(m.Groups[1].Value, 16));
                            if (s == null || !Regex.IsMatch(s, @"[\\/].*\.(cpp|c|cc)$", RegexOptions.IgnoreCase)) continue;
                            string ap = AnchorPath(s);
                            if (ap != null) AddFileVote(votes, lines, ap, l.Substring(m.Index + m.Length));
                        }
                    continue;
                }
                foreach (Match m in FileRx.Matches(l))
                {
                    string p = NormPath(m.Groups[1].Value);
                    int v; votes.TryGetValue(p, out v); votes[p] = v + 2;
                }
                foreach (Match m in LineNoRx.Matches(l))
                {
                    string s = m.Groups[1].Value;
                    int n = s.StartsWith("0x") ? Convert.ToInt32(s.Substring(2), 16) : int.Parse(s);
                    lines.Add(n.ToString());
                }
                foreach (Match m in WidgetRx.Matches(l))
                {
                    string wf;
                    if (WidgetToFile.TryGetValue(m.Groups[1].Value, out wf))
                    { wf = "engine/" + wf; int v; votes.TryGetValue(wf, out v); votes[wf] = v + 1; }
                }
            }
            if (votes.Count == 0) continue;
            var best = votes.OrderByDescending(kv => kv.Value).First();
            f.File = best.Key;
            f.Conf = "anchor";
            var ev = new List<string>();
            foreach (var kv in votes.OrderByDescending(kv => kv.Value)) ev.Add(kv.Key);
            f.Evidence = "refs " + string.Join(", ", ev) + (lines.Count > 0 ? " (assert lines " + string.Join(",", lines.Distinct().Take(8)) + ")" : "");
            files.Add(f.File);
        }
        return files;
    }

    static void ResolveGaps(List<Fn> app, Dictionary<uint, HashSet<uint>> adj, Dictionary<uint, Fn> byAddr, StringBuilder log)
    {
        var anchors = new List<int>();
        for (int i = 0; i < app.Count; i++) if (app[i].Conf == "anchor") anchors.Add(i);
        if (anchors.Count == 0)
        {
            foreach (var f in app) { f.File = "_unattributed/code.cpp"; f.Conf = "gap"; f.Evidence = "module has no source-path evidence"; }
            log.AppendLine("No source-path evidence: all code unattributed");
            return;
        }

        // Head region (before first anchor)
        int first = anchors[0];
        for (int i = 0; i < first; i++)
        {
            app[i].File = Cfg.Sigma ? "engine/mxl_engine/src/_unattributed/before_config_dirs.cpp" : "_unattributed/before_" + Stem(app[first].File) + ".cpp";
            app[i].Conf = "gap";
            app[i].Evidence = Cfg.Sigma ? "before first source-path evidence (src/a..src/config)" : "before the first function with source-path evidence";
        }
        // Tail region (after last anchor, before CRT)
        int lastA = anchors[anchors.Count - 1];
        bool tailGap = !Cfg.Sigma && app.Count - lastA - 1 >= 4;
        for (int i = lastA + 1; i < app.Count; i++)
        {
            if (tailGap)
            { app[i].File = "_unattributed/after_" + Stem(app[lastA].File) + ".cpp"; app[i].Conf = "gap"; app[i].Evidence = "after the last function with source-path evidence"; }
            else
            { app[i].File = app[lastA].File; app[i].Conf = "nearest"; app[i].Evidence = "after last evidence of " + app[lastA].File + ", before CRT"; }
        }

        int unknownCount = 0;
        for (int k = 0; k + 1 < anchors.Count; k++)
        {
            int lo = anchors[k], hi = anchors[k + 1];
            if (hi - lo <= 1) continue;
            string A = app[lo].File, B = app[hi].File;
            if (A == B)
            {
                for (int i = lo + 1; i < hi; i++)
                { app[i].File = A; app[i].Conf = "range"; app[i].Evidence = "between two functions of " + A; }
                continue;
            }
            // Label each gap function from its callers: COMDAT/shared code is emitted into the first
            // object that uses it, so the earliest caller file is the meaningful one. Functions with no
            // code callers (vtable slots, callbacks) fall back to their callees.
            int n = hi - lo - 1;
            var label = new string[n];
            var sa = new int[n]; var sb = new int[n];
            System.Func<Fn, string> cur = g =>
            {
                int gj = IndexInApp(app, g, lo);
                if (gj >= 0 && gj < n) return label[gj];
                return g.File;
            };
            for (int iter = 0; iter < 30; iter++)
            {
                bool changed = false;
                for (int j = 0; j < n; j++)
                {
                    var f = app[lo + 1 + j];
                    bool hasA = false, hasB = false, hasEarlier = false, hasLater = false;
                    foreach (var c in Callers[f.Addr])
                    {
                        var g = byAddr[c];
                        if (g.IsLib) continue;
                        string gl = cur(g);
                        if (gl == null) continue;
                        if (gl == A) hasA = true;
                        else if (gl == B) hasB = true;
                        else { int rr; if (Rank.TryGetValue(gl, out rr)) { if (rr < Rank[A]) hasEarlier = true; else if (rr > Rank[B]) hasLater = true; } else hasLater = true; }
                    }
                    string nl = null;
                    if (hasA) nl = A;
                    else if (hasB && !hasEarlier && !hasLater) nl = B;
                    if (nl != label[j]) { label[j] = nl; changed = true; }
                }
                if (!changed) break;
            }
            for (int j = 0; j < n; j++) { sa[j] = label[j] == A ? 1 : 0; sb[j] = label[j] == B ? 1 : 0; }
            // contiguous split minimising disagreement
            int bestK = 0; int bestCost = int.MaxValue; var ties = new List<int>();
            for (int s = 0; s <= n; s++)
            {
                int cost = 0;
                for (int j = 0; j < s; j++) cost += sb[j];
                for (int j = s; j < n; j++) cost += sa[j];
                if (cost < bestCost) { bestCost = cost; ties.Clear(); ties.Add(s); }
                else if (cost == bestCost) ties.Add(s);
            }
            bestK = ties[ties.Count / 2];
            // A extends to its last call-linked function before the split, B starts at its first linked one after it.
            int lastLinkedA = -1, firstLinkedB = n;
            for (int j = 0; j < bestK; j++) if (sa[j] > 0) lastLinkedA = j;
            for (int j = n - 1; j >= bestK; j--) if (sb[j] > 0) firstLinkedB = j;
            int midLen = firstLinkedB - lastLinkedA - 1;
            bool unknown = midLen >= 4;
            string U = UnknownName(A, B);
            if (unknown) unknownCount++;
            for (int j = 0; j < n; j++)
            {
                var f = app[lo + 1 + j];
                bool inMid = j > lastLinkedA && j < firstLinkedB;
                if (unknown && inMid)
                {
                    f.File = U; f.Conf = "gap";
                    f.Evidence = "no call links to " + A + " or " + B + "; real file name unknown" + (Cfg.Alphabetical ? " (sorts between them)" : " (located between them)");
                    continue;
                }
                f.File = j < bestK ? A : B;
                int mine = j < bestK ? sa[j] : sb[j];
                f.Conf = mine > 0 ? "linked" : (inMid ? "nearest" : "inferred");
                f.Evidence = "between " + A + " and " + B + (label[j] != null ? "; called from " + label[j] : "; no callers in either");
            }
        }
        log.AppendLine("Unattributed gap files created: " + unknownCount);
    }

    // fd2: "DAT_x = GetProcAddress(h, "Name")" -> DAT_x is pfn_Name (BH.dll / d2gl exports and other run-time imports)
    static Regex ProcAddrRx = new Regex(@"\b(DAT_[0-9a-f]{8}) = (?:\([\w ]+\*?\))?GetProcAddress\([^,]+,""([^""]+)""\)");
    static void NameProcAddressGlobals(List<Fn> funcs, StringBuilder log)
    {
        int n = 0; var taken = new HashSet<string>(Cfg.GlobalNames.Values);
        foreach (var f in funcs)
            foreach (var l in f.Lines)
            {
                if (l.IndexOf("GetProcAddress", StringComparison.Ordinal) < 0) continue;
                foreach (Match m in ProcAddrRx.Matches(l))
                {
                    if (Cfg.GlobalNames.ContainsKey(m.Groups[1].Value)) continue;
                    string nm = "pfn_" + Sanitize(Regex.Replace(m.Groups[2].Value.TrimStart('_'), @"@\d+$", ""));
                    if (!taken.Add(nm)) nm += "_" + m.Groups[1].Value.Substring(4);
                    Cfg.GlobalNames[m.Groups[1].Value] = nm;
                    Cfg.GlobalNotes[m.Groups[1].Value] = "GetProcAddress(\"" + m.Groups[2].Value + "\") in 0x" + f.Addr.ToString("x8");
                    n++;
                }
            }
        if (n > 0) log.AppendLine("run-time imports named from GetProcAddress strings: " + n);
    }

    // ---- fd2: placement by link units (LinkUnits.cs) ---------------------------------------------------------
    const string UnitTag = "_unattributed/@unit";
    static string[] UnitFile;
    static string[] UnitNote;

    static List<Fn> PlaceByUnits(List<Fn> app, StringBuilder log)
    {
        var units = LinkUnits.Units;
        UnitFile = new string[units.Count];
        var sorted = LinkUnits.CodeUnit.Keys.OrderBy(x => x).ToArray();
        // which unit each __FILE__-anchored file belongs to
        var votes = new Dictionary<string, Dictionary<int, int>>();
        var between = new Dictionary<string, int[]>();   // anchored file between the evidence of two units: {a, b}
        foreach (var f in app.Where(x => x.Conf == "anchor"))
        {
            int u;
            if (!LinkUnits.CodeUnit.TryGetValue(f.Addr, out u))
            {
                if (f.Addr < LinkUnits.DiEnd) u = LinkUnits.DiUnitOf(f.Addr);
                else
                {
                    int i = Array.BinarySearch(sorted, f.Addr); if (i < 0) i = ~i;
                    int a = i > 0 ? LinkUnits.CodeUnit[sorted[i - 1]] : -1, b = i < sorted.Length ? LinkUnits.CodeUnit[sorted[i]] : -1;
                    u = a == b ? a : -1;
                    if (u < 0 && a >= 0 && b >= 0) between[f.File] = new[] { a, b };
                }
            }
            if (u < 0) continue;
            Dictionary<int, int> d; if (!votes.TryGetValue(f.File, out d)) { d = new Dictionary<int, int>(); votes[f.File] = d; }
            int c; d.TryGetValue(u, out c); d[u] = c + 1;
        }
        foreach (var kv in votes.OrderByDescending(k => k.Value.Values.Max()))
        {
            int u = kv.Value.OrderByDescending(x => x.Value).First().Key;
            if (UnitFile[u] == null) { UnitFile[u] = kv.Key; units[u].File = kv.Key; }
            else log.AppendLine("  link unit " + u + " has two anchored files: " + UnitFile[u] + ", " + kv.Key);
        }
        // a file whose anchors sit between unit a's and unit b's code belongs to whichever of the two is still unnamed
        foreach (var kv in between.Where(k => !votes.ContainsKey(k.Key)))
        {
            var free = kv.Value.Where(u => UnitFile[u] == null).Distinct().ToList();
            if (free.Count == 1) { UnitFile[free[0]] = kv.Key; units[free[0]].File = kv.Key; log.AppendLine("  " + kv.Key + " -> unit " + free[0] + " (the unnamed neighbour of its anchors)"); }
            else log.AppendLine("  " + kv.Key + ": anchors between units " + kv.Value[0] + " and " + kv.Value[1] + ", not decidable");
        }
        // hand-named units (ModuleConfig.UnitFileOverrides): the unit that holds the given function
        UnitNote = new string[units.Count];
        foreach (var kv in Cfg.UnitFileOverrides)
        {
            int u;
            if (!LinkUnits.CodeUnit.TryGetValue(kv.Key, out u))
            {
                int i = Array.BinarySearch(sorted, kv.Key); if (i < 0) i = ~i;
                int a = i > 0 ? LinkUnits.CodeUnit[sorted[i - 1]] : -1, b = i < sorted.Length ? LinkUnits.CodeUnit[sorted[i]] : -1;
                u = a == b ? a : -1;
            }
            if (u < 0) { log.AppendLine("  unit override 0x" + kv.Key.ToString("x8") + ": function is not inside one unit, ignored"); continue; }
            if (UnitFile[u] != null) { log.AppendLine("  unit override 0x" + kv.Key.ToString("x8") + ": unit " + u + " is already " + UnitFile[u]); continue; }
            UnitFile[u] = kv.Value[0]; units[u].File = kv.Value[0]; UnitNote[u] = "unit named by hand: " + kv.Value[1];
        }
        for (int u = 0; u < units.Count; u++) if (UnitFile[u] == null) UnitFile[u] = UnitTag + u.ToString("00") + ".cpp";
        log.AppendLine("link units with an anchored file: " + units.Count(x => x.File != null) + " of " + units.Count);

        var rest = new List<Fn>();
        foreach (var f in app)
        {
            if (f.Addr < LinkUnits.DiEnd)
            {
                int u = LinkUnits.DiUnitOf(f.Addr);
                f.Unit = u; f.UnitEvidence = true; f.File = UnitFile[u];
                f.Conf = units[u].File != null ? "range" : "gap";
                f.Evidence = LinkUnits.InitUnit.ContainsKey(f.Addr)
                    ? "static initializer of link unit " + u + " (its run in the __xc_a table)"
                    : "in link unit " + u + "'s .text$di block (initializer helper or atexit destructor)";
                continue;
            }
            int cu;
            if (f.Conf != "anchor" && LinkUnits.CodeUnit.TryGetValue(f.Addr, out cu))
            {
                f.Unit = cu; f.UnitEvidence = true; f.File = UnitFile[cu]; f.Conf = "anchor";
                f.Evidence = "uses " + LinkUnits.CodeEvidence[f.Addr] + ", a file-private global set by link unit " + cu + "'s static initializers";
            }
            rest.Add(f);
        }
        return rest;
    }

    // relabels unit-evidence placements, gives unknown files their between_<A>_and_<B> names in link order
    static void FinishUnits(List<Fn> funcs, StringBuilder log)
    {
        var units = LinkUnits.Units;
        var unitOfFile = new Dictionary<string, int>();
        for (int u = 0; u < units.Count; u++) unitOfFile[UnitFile[u]] = u;
        foreach (var f in funcs.Where(x => !x.IsLib))
        {
            int u;
            if (f.File != null && unitOfFile.TryGetValue(f.File, out u)) f.Unit = u;
            bool unknown = f.File != null && f.File.Contains("_unattributed/");
            if (f.UnitEvidence && f.Addr >= LinkUnits.DiEnd && f.Conf == "anchor") f.Conf = unknown ? "gap" : "range";
            if (f.Unit >= 0 && UnitNote[f.Unit] != null && f.File == UnitFile[f.Unit] && f.Conf != "anchor") f.Evidence = "[" + UnitNote[f.Unit] + "] " + f.Evidence;
            else if (unknown && f.Conf != "gap") { f.Evidence = "file name unknown; " + f.Conf + ": " + f.Evidence; f.Conf = "gap"; }
        }
        // link position of every file: units by index; other blocks after the unit of the code just before them
        var pos = new Dictionary<string, double>();
        foreach (var kv in unitOfFile) pos[kv.Key] = kv.Value;
        int lastUnit = -1;
        foreach (var f in funcs.Where(x => !x.IsLib && x.Addr >= LinkUnits.DiEnd).OrderBy(x => x.Addr))
        {
            if (f.File == null) continue;
            int u;
            if (unitOfFile.TryGetValue(f.File, out u)) { lastUnit = u; continue; }
            if (!pos.ContainsKey(f.File)) pos[f.File] = lastUnit + 0.5;
        }
        var named = pos.Where(kv => !kv.Key.Contains("_unattributed/")).OrderBy(kv => kv.Value).ToList();
        var newName = new Dictionary<string, string>();
        var groups = new Dictionary<string, List<string>>();
        foreach (var kv in pos.Where(kv => kv.Key.Contains("_unattributed/")).OrderBy(kv => kv.Value))
        {
            var p = named.Where(x => x.Value < kv.Value).Select(x => x.Key).LastOrDefault();
            var n = named.Where(x => x.Value > kv.Value).Select(x => x.Key).FirstOrDefault();
            string b = p != null && n != null ? "between_" + Stem(p) + "_and_" + Stem(n) : p != null ? "after_" + Stem(p) : n != null ? "before_" + Stem(n) : "code";
            List<string> l; if (!groups.TryGetValue(b, out l)) { l = new List<string>(); groups[b] = l; }
            l.Add(kv.Key);
        }
        foreach (var g in groups)
            for (int i = 0; i < g.Value.Count; i++)
            {
                string old = g.Value[i];
                // a link unit keeps its number; a block without unit evidence is named after the unit whose code precedes it
                int u; double ps = pos[old];
                string tag = unitOfFile.TryGetValue(old, out u) ? "_unit" + u.ToString("00") : ps >= 0 ? "_after_unit" + ((int)Math.Floor(ps)).ToString("00") : "";
                if (!unitOfFile.ContainsKey(old) && g.Value.Count(x => !unitOfFile.ContainsKey(x) && Math.Floor(pos[x]) == Math.Floor(ps)) > 1)
                    tag += "_" + (g.Value.Where(x => !unitOfFile.ContainsKey(x) && Math.Floor(pos[x]) == Math.Floor(ps)).ToList().IndexOf(old) + 1);
                newName[old] = "_unattributed/" + g.Key + tag + ".cpp";
            }
        for (int u = 0; u < units.Count; u++) { string nn; if (newName.TryGetValue(UnitFile[u], out nn)) UnitFile[u] = nn; }
        foreach (var f in funcs)
        {
            string nn;
            if (f.File != null && newName.TryGetValue(f.File, out nn)) f.File = nn;
            if (f.Evidence != null) foreach (var kv in newName) if (f.Evidence.Contains(kv.Key)) f.Evidence = f.Evidence.Replace(kv.Key, kv.Value);
        }
        log.AppendLine("link units: " + units.Count(x => x.File != null) + " named, " + (units.Count - units.Count(x => x.File != null)) + " unnamed; unattributed files " + newName.Count);
    }

    static string UnknownName(string A, string B)
    {
        if (!Cfg.Sigma)
        {
            int da = A.LastIndexOf('/'), db = B.LastIndexOf('/');
            string dA = da >= 0 ? A.Substring(0, da + 1) : "", dB = db >= 0 ? B.Substring(0, db + 1) : "";
            return (dA == dB ? dA : "") + "_unattributed/between_" + Stem(A) + "_and_" + Stem(B) + ".cpp";
        }
        string dir = "engine/_unattributed/";
        if (A.StartsWith("engine/mxl_engine/src/") && B.StartsWith("engine/mxl_engine/src/")) dir = "engine/mxl_engine/src/_unattributed/";
        else if (A.StartsWith("engine/ui/") && B.StartsWith("engine/ui/")) dir = "engine/ui/_unattributed/";
        return dir + "between_" + Stem(A) + "_and_" + Stem(B) + ".cpp";
    }

    // Splits very large unattributed groups into address-ordered chunks so files stay readable.
    static void ChunkUnattributed(List<Fn> app)
    {
        foreach (var g in app.Where(f => f.File != null && f.File.Contains("_unattributed/")).GroupBy(f => f.File).ToList())
        {
            var list = g.OrderBy(f => f.Addr).ToList();
            if (list.Count <= Cfg.ChunkSize) continue;
            string bas = g.Key.Substring(0, g.Key.Length - 4);
            for (int i = 0; i < list.Count; i += Cfg.ChunkSize)
            {
                string name = bas + "_" + list[i].Addr.ToString("x8") + ".cpp";
                for (int k = i; k < Math.Min(list.Count, i + Cfg.ChunkSize); k++) list[k].File = name;
            }
        }
    }
    static int IndexInApp(List<Fn> app, Fn g, int lo) { return g.Index - app[lo].Index - 1; }

    static void AssignLibFiles(List<Fn> funcs)
    {
        var lib = funcs.Where(f => f.IsLib).ToList();
        int part = 1, cnt = 0;
        foreach (var f in lib)
        {
            f.Conf = "lib";
            if (f.Name.StartsWith("Unwind@")) { f.File = "lib/seh_unwind_funclets.cpp"; continue; }
            if (Cfg.Sigma && f.Addr >= 0x10166400) { f.File = "lib/atexit_destructor_thunks.cpp"; continue; }
            f.File = "lib/msvc_crt_stl_part" + part.ToString("00") + ".cpp";
            if (++cnt >= 450) { cnt = 0; part++; }
        }
    }

    public static string Stem(string file)
    {
        string s = file;
        if (s.EndsWith(".cpp")) s = s.Substring(0, s.Length - 4);
        else if (s.EndsWith(".c") || s.EndsWith(".cc")) s = s.Substring(0, s.LastIndexOf('.'));
        if (s.StartsWith("engine/mxl_engine/src/")) s = s.Substring(22);
        else if (s.StartsWith("engine/")) s = s.Substring(7);
        s = s.Replace("/", "_");
        return Regex.Replace(s, @"[^A-Za-z0-9_]", "_");
    }

    static string Sanitize(string s)
    {
        s = Regex.Replace(s, @"[^A-Za-z0-9_]", "_");
        s = Regex.Replace(s, "_+", "_").Trim('_');
        if (s.Length == 0 || char.IsDigit(s[0])) s = "_" + s;
        return s;
    }

    static void Name(List<Fn> funcs)
    {
        var used = new HashSet<string>();
        foreach (var f in funcs)
        {
            string addr = f.Addr.ToString("x8");
            string mname;
            if (Cfg.Sigma && Manual.TryGetValue(f.Addr, out mname)) { f.NewName = mname; f.Hint = "manual"; used.Add(mname); continue; }
            string[] mn;
            if (!Cfg.Sigma && Cfg.ManualNames.TryGetValue(f.Addr, out mn)) { f.NewName = mn[0]; f.Hint = "manual"; used.Add(mn[0]); continue; }
            string tn;
            if (!Cfg.Sigma && f.Name.StartsWith("FUN_") && Cfg.FunctionNames.TryGetValue(f.Addr, out tn)) { f.NewName = tn; f.Hint = "game pointer"; used.Add(tn); continue; }
            string exp;
            if (Cfg.ExportNames.TryGetValue(f.Addr, out exp) && (f.Name.StartsWith("FUN_") || f.Name.StartsWith("Ordinal_") || (!Cfg.Sigma && !f.IsLib && Regex.IsMatch(f.Name, @"^[A-Za-z_]\w*$"))))
            { f.NewName = exp; f.Hint = "export"; used.Add(exp); continue; }
            if (f.IsLib || !f.Name.StartsWith("FUN_")) { f.NewName = f.Name; continue; }
            if (!Cfg.Sigma)
            {
                string st = Stem(f.File ?? "unk");
                if (st.Contains("_unattributed")) st = "sub";
                string body = string.Join("\n", f.Lines);
                string lh = Pd2Hint(f, body) ?? (Cfg.LibraryHints ? LibHint(body) : null);
                if (lh != null) f.Hint = lh;
                f.NewName = Sanitize(st + (lh != null ? "_" + lh : "") + "_" + addr); used.Add(f.NewName);
                continue;
            }

            // hints
            string hint = null;
            var widgets = new HashSet<string>(); var tables = new HashSet<string>(); var excel = new HashSet<string>();
            foreach (var l in f.Lines)
            {
                foreach (Match m in WidgetRx.Matches(l))
                    if (WidgetToFile.ContainsKey(m.Groups[1].Value) || WidgetPrefixesAll.Contains(m.Groups[1].Value))
                        widgets.Add(m.Groups[1].Value + "_" + m.Groups[2].Value);
                foreach (Match m in ExcelRx.Matches(l)) excel.Add(m.Groups[1].Value);
                foreach (Match m in StrLitRx.Matches(l)) if (TableNames.Contains(m.Groups[1].Value)) tables.Add(m.Groups[1].Value);
            }
            if (tables.Count == 1) hint = "Table_" + tables.First();
            else if (excel.Count >= 1 && excel.Count <= 2) hint = "LoadTxt_" + string.Join("_", excel.OrderBy(x => x.Length));
            else if (widgets.Count == 1) hint = widgets.First();
            else if (widgets.Count > 1)
            {
                var prefixes = widgets.Select(w => w.Split('_')[0]).Distinct().ToList();
                if (prefixes.Count == 1) hint = prefixes[0] + "_Build" + widgets.Count;
            }
            if (hint == null) hint = LibHint(string.Join("\n", f.Lines));
            f.Hint = hint;
            string stem = Stem(f.File ?? "unk");
            if (stem.Contains("_unattributed_")) stem = "sub";
            string nm = Sanitize(stem + (hint != null ? "_" + hint : "") + "_" + addr);
            f.NewName = nm; used.Add(nm);
        }
    }

    // ---- fd2: hints for the PD2 modules -------------------------------------------------------------------------
    // From most to least specific: per-file copy of a game pointer (static initializer), other static initializer,
    // patch-table handler (Hook_<game function it is installed into>), single config key (Config_<key>), and a game
    // __FILE__ string the function passes on (Wraps_<Module>_<file>: it reimplements or wraps that game code).
    static Regex CopyInitRx = new Regex(@"\b_?(DAT_[0-9a-f]{8}) = \*\w+;");
    static Regex StrRx = new Regex(@"L?""((?:[^""\\]|\\.)*)""");
    static string Pd2Hint(Fn f, string body)
    {
        if (LinkUnits.InitUnit.ContainsKey(f.Addr))
        {
            foreach (Match m in CopyInitRx.Matches(body))
            { string g; if (Cfg.GlobalNames.TryGetValue(m.Groups[1].Value, out g)) return "InitPtr_" + (g.StartsWith("p_") ? g.Substring(2) : g); }
            return "init";
        }
        string h; if (Cfg.Hints.TryGetValue(f.Addr, out h)) return h;
        foreach (var kv in Cfg.ApiHints) if (Regex.IsMatch(body, @"\b(?:" + kv.Key + @")\s*\(")) return kv.Value;
        if (Cfg.ConfigKeys.Count > 0)
        {
            var keys = new HashSet<string>();
            foreach (Match m in StrRx.Matches(body)) if (Cfg.ConfigKeys.Contains(m.Groups[1].Value)) keys.Add(m.Groups[1].Value);
            foreach (Match m in DatIdRx.Matches(body)) { string k; if (Cfg.ConfigKeyGlobals.TryGetValue(m.Value, out k)) keys.Add(k); }
            if (keys.Count == 1) return "Config_" + keys.First();
            if (keys.Count > 1) return keys.Count >= 8 ? "Settings" : "Config" + keys.Count;
        }
        if (Cfg.OwnFileRx != null && body.IndexOf(".cpp", StringComparison.Ordinal) >= 0)
            foreach (Match m in GenericFileRx.Matches(body))
            {
                string raw = m.Groups[1].Value;
                if (Cfg.OwnFileRx.IsMatch(raw.Replace("\\\\", "/").Replace("\\", "/"))) continue;
                string p = raw.Replace("\\\\", "/").Replace("\\", "/");
                int i = p.IndexOf("Source/", StringComparison.OrdinalIgnoreCase); if (i >= 0) p = p.Substring(i + 7);
                while (p.StartsWith("../")) p = p.Substring(3);
                return "Wraps_" + Sanitize(Regex.Replace(p, @"\.(cpp|c|cc)$", ""));
            }
        return null;
    }

    // template code from nlohmann::json or the MSVC STL, recognised by its error strings
    static string LibHint(string body)
    {
        if (body.Contains("[json.exception.") || body.Contains("type must be ") || body.Contains("cannot use operator[]") ||
            body.Contains("invalid string: ") || body.Contains("syntax error ") || body.Contains("cannot get value"))
            return "json";
        if (body.Contains("regex_error")) return "regex";
        if (body.Contains("ios_base::badbit set") || body.Contains("iostream stream error")) return "iostream";
        if (body.Contains("\"vector too long\"") || body.Contains("\"string too long\"") || body.Contains("\"list too long\"") ||
            body.Contains("\"map/set too long\"") || body.Contains("\"deque<T> too long\"") || body.Contains("\"invalid string position\"") ||
            body.Contains("\"unordered_map/set too long\""))
            return "stl";
        return null;
    }

    static string FileHeaderPath(string file) { return file; }

    // ---- type cleanup and global renames -------------------------------------------------
    static List<KeyValuePair<string, string>> ExactRenames = new List<KeyValuePair<string, string>>();
    static Dictionary<string, string> IdentRenames = new Dictionary<string, string>();
    static Dictionary<string, string[]> RenameInfo = new Dictionary<string, string[]>();   // new name -> {type, comment, old}
    static Regex UndefRx = new Regex(@"\bundefined([1-8]?)\b(\s*\*)?");
    static Regex DatIdRx = new Regex(@"\bDAT_[0-9a-f]{8}\b");
    static Regex OrdRx = new Regex(@"\bOrdinal_\d+\b");
    static Regex CppRx = new Regex(@"\b[A-Za-z_]\w*::(?:~?[A-Za-z_]\w*|operator=)");
    static Regex BareRx = new Regex(@"(?<![\w:.>])[A-Za-z_]\w*(?=\s*\()");
    static uint CurFunc;
    static Regex SigmaArithRx = new Regex(@"(?<!\(uint8_t \*\)|\*)\bgpSigmaTables(\s*(?:\+|-(?!>))\s*)");
    public static int UndefinedReplaced;

    static void LoadRenames(string outDir)
    {
        string p = Path.Combine(outDir, "tables", "rename_map.csv");
        if (!File.Exists(p)) return;
        foreach (var line in File.ReadAllLines(p).Skip(1))
        {
            var c = Regex.Matches(line, "\"((?:[^\"]|\"\")*)\"").Cast<Match>().Select(m => m.Groups[1].Value.Replace("\"\"", "\"")).ToArray();
            if (c.Length < 4) continue;
            if (Regex.IsMatch(c[0], @"^DAT_[0-9a-f]{8}$")) { IdentRenames[c[0]] = c[1]; RenameInfo[c[1]] = new[] { c[2], c[3], c[0] }; }
            else ExactRenames.Add(new KeyValuePair<string, string>(c[0], c[1]));
        }
        ExactRenames = ExactRenames.OrderByDescending(k => k.Key.Length).ToList();
        foreach (var kv in ExactRenames)
        {
            var m = Regex.Match(kv.Key, @"DAT_101f32ac \+ 0x([0-9a-f]+)\)$");
            if (m.Success) SigmaFields[Convert.ToInt32(m.Groups[1].Value, 16)] = kv.Value.Replace("(int)", "");
        }
    }

    static Dictionary<int, string> SigmaFields = new Dictionary<int, string>();
    static Regex SigmaSlotRx = new Regex(@"\*\(([A-Za-z_][\w ]*?) \*\)\(DAT_101f32ac \+ 0x([0-9a-f]+)\)");
    static Regex SigmaSlot0Rx = new Regex(@"(?<![\w)\]])\*DAT_101f32ac\b");

    static string MapUndefined(Match m)
    {
        UndefinedReplaced++;
        string n = m.Groups[1].Value; bool ptr = m.Groups[2].Success;
        string t;
        switch (n)
        {
            case "1": case "": t = "uint8_t"; break;
            case "2": t = "uint16_t"; break;
            case "3": case "4": t = "uint32_t"; break;
            default: t = "uint64_t"; break;
        }
        return t + (ptr ? m.Groups[2].Value : "");
    }

    // Applies renames and type cleanup outside string literals.
    // fd2: integer constants that are the address of a C string in the module's read-only data, e.g. a string passed
    // through a parameter that Ghidra types as an integer: shown as 0x10378370 /* "text" */ (ModuleConfig.StringConstants)
    static Regex HexConstRx = new Regex(@"(?<![\w.])0x[0-9a-f]{8}\b");
    static Dictionary<uint, string> ConstStrCache = new Dictionary<uint, string>();
    static string ConstString(string hex)
    {
        uint va = Convert.ToUInt32(hex.Substring(2), 16); string r;
        if (ConstStrCache.TryGetValue(va, out r)) return r;
        r = null;
        var sec = Cfg.Bin.Sections.FirstOrDefault(x => x.Name == ".rdata" && va >= x.Va && va < x.Va + x.VSize);
        if (sec != null)
        {
            string t = Cfg.Bin.CStr(va, 200);
            if (t != null && t.Length >= 3 && t.All(c => c >= 0x20 && c < 0x7f) && t.Count(char.IsLetter) * 2 >= t.Length) r = t;
        }
        ConstStrCache[va] = r;
        return r;
    }
    static string AnnotateConstStrings(string s)
    {
        if (Cfg.Bin == null || !Cfg.StringConstants || s.IndexOf("0x", StringComparison.Ordinal) < 0) return s;
        return HexConstRx.Replace(s, m => { string t = ConstString(m.Value); return t == null ? m.Value : m.Value + " /* \"" + t.Replace("*/", "* /").Replace("\\", "\\\\").Replace("\"", "\\\"") + "\" */"; });
    }

    public static string Clean(string line)
    {
        line = AnnotateConstStrings(line);
        if (line.IndexOf("undefined") < 0 && line.IndexOf("DAT_") < 0 && line.IndexOf("Ordinal_") < 0 && line.IndexOf("::") < 0 && Cfg.CppNames.Count == 0) return line;
        var parts = Regex.Split(line, "(\"(?:[^\"\\\\]|\\\\.)*\")");
        for (int i = 0; i < parts.Length; i += 2)
        {
            string s = parts[i];
            if (s.IndexOf("DAT_") >= 0)
            {
                if (s.IndexOf("DAT_101f32ac") >= 0)
                {
                    s = SigmaSlotRx.Replace(s, m => { string f; return SigmaFields.TryGetValue(Convert.ToInt32(m.Groups[2].Value, 16), out f) ? "(" + m.Groups[1].Value + ")" + f : m.Value; });
                    string f0; if (SigmaFields.TryGetValue(0, out f0)) s = SigmaSlot0Rx.Replace(s, "(int)" + f0);
                }
                s = DatIdRx.Replace(s, m => { string r; return IdentRenames.TryGetValue(m.Value, out r) ? r : m.Value; });
                if (s.IndexOf("gpSigmaTables") >= 0) s = SigmaArithRx.Replace(s, "(uint8_t *)gpSigmaTables$1");
            }
            if (Cfg.CppNames.Count > 0)
                s = BareRx.Replace(s, m => { string r; return m.Value.IndexOf("::") < 0 && Cfg.CppNames.TryGetValue(m.Value, out r) ? r : m.Value; });
            if (s.IndexOf("::") >= 0 && Cfg.CppNames.Count > 0)
                s = CppRx.Replace(s, m => { string r; return Cfg.CppNames.TryGetValue(m.Value, out r) ? r : m.Value; });
            if (s.IndexOf("undefined") >= 0) s = UndefRx.Replace(s, MapUndefined);
            if (s.IndexOf("Ordinal_") >= 0)
                s = OrdRx.Replace(s, m =>
                {
                    string r;
                    Dictionary<string, string[]> fo; string[] hit;
                    if (Cfg.FuncOrdinals.TryGetValue(CurFunc, out fo) && fo.TryGetValue(m.Value, out hit))
                    {
                        OrdinalsResolved++;
                        int c0; CallsToModule.TryGetValue(hit[1], out c0); CallsToModule[hit[1]] = c0 + 1;
                        return hit[0];
                    }
                    if (Cfg.OrdinalNames.TryGetValue(m.Value, out r))
                    {
                        OrdinalsResolved++;
                        string mod; if (Cfg.OrdinalModule.TryGetValue(m.Value, out mod)) { int c; CallsToModule.TryGetValue(mod, out c); CallsToModule[mod] = c + 1; }
                        return r;
                    }
                    OrdinalsLeft++; return m.Value;
                });
            parts[i] = s;
        }
        return string.Concat(parts);
    }

    // usage kinds per global: 3 = called, 2 = dereferenced / pointer arithmetic, 1 = address taken, 0 = value
    static Dictionary<string, int> GlobalKind = new Dictionary<string, int>();
    static void NoteUsage(string line)
    {
        foreach (Match m in DatIdRx.Matches(line))
        {
            string g = m.Value; int i = m.Index, e = i + g.Length;
            int k = 0;
            string before = line.Substring(Math.Max(0, i - 2), Math.Min(2, i));
            string after = line.Substring(e, Math.Min(4, line.Length - e));
            if (before.EndsWith("(*") && after.StartsWith(")(")) k = 3;
            else if (before.EndsWith("*") && !before.EndsWith(" *") || after.StartsWith("[") || Regex.IsMatch(after, @"^ [+-] ")) k = 2;
            else if (before.EndsWith("&")) k = 1;
            int cur; if (!GlobalKind.TryGetValue(g, out cur) || k > cur) GlobalKind[g] = k;
        }
    }

    static void Emit(List<Fn> funcs, Dictionary<string, string> rename, string outDir, string input, StringBuilder log)
    {
        if (Cfg.Sigma) LoadRenames(outDir);
        foreach (var kv in Cfg.GlobalNames)
        {
            IdentRenames[kv.Key] = kv.Value;
            string note; Cfg.GlobalNotes.TryGetValue(kv.Key, out note);
            string ty; if (!Cfg.GlobalTypes.TryGetValue(kv.Key, out ty)) ty = "code";
            RenameInfo[kv.Value] = new[] { ty, note ?? "game function pointer", kv.Key };
        }
        var funRx = new Regex(@"\bFUN_[0-9a-f]{8}\b");
        MatchEvaluator ev = m => { string r; return rename.TryGetValue(m.Value, out r) ? r : m.Value; };

        var groups = funcs.GroupBy(f => f.File).ToList();
        string srcRoot = outDir;
        Directory.CreateDirectory(srcRoot);
        Directory.CreateDirectory(Path.Combine(outDir, "include"));

        // globals usage
        var globals = new Dictionary<string, SortedSet<string>>();
        var globalCount = new Dictionary<string, int>();

        foreach (var g in groups)
        {
            string rel = g.Key;
            string path = Path.Combine(srcRoot, rel.Replace('/', Path.DirectorySeparatorChar));
            Directory.CreateDirectory(Path.GetDirectoryName(path));
            var list = g.OrderBy(f => f.Addr).ToList();
            var sb = new StringBuilder();
            sb.AppendLine("/*");
            sb.AppendLine(" * " + rel);
            sb.AppendLine(" * Reconstructed from Ghidra output of " + Cfg.BinaryName + " (" + Cfg.Product + ").");
            sb.AppendLine(" * Address range : 0x" + list[0].Addr.ToString("x8") + " - 0x" + list[list.Count - 1].Addr.ToString("x8"));
            sb.AppendLine(" * Functions     : " + list.Count);
            var confs = list.GroupBy(f => f.Conf).Select(c => c.Key + "=" + c.Count());
            sb.AppendLine(" * Attribution   : " + string.Join(", ", confs));
            sb.AppendLine(" *   anchor     = function references this file's __FILE__ string" + (Cfg.Sigma ? " or a UI widget id of this panel" : ""));
            sb.AppendLine(" *   range      = lies between two anchored functions of this file (objects are linked contiguously)");
            sb.AppendLine(" *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file");
            sb.AppendLine(" *   inferred   = no call links, but sits between functions already placed in this file");
            sb.AppendLine(" *   nearest    = no call links; short run placed with the nearest file (low confidence)");
            sb.AppendLine(" *   gap        = file name not recoverable; grouped by position" + (Cfg.Alphabetical ? " (sorts between its neighbours)" : ""));
            if (list.Any(x => x.Conf == "manual")) sb.AppendLine(" *   manual     = placed by hand; the reason is given on the function");
            sb.AppendLine(" * Decompiler output, not original source: types, names and control flow are Ghidra's.");
            sb.AppendLine(" */");
            sb.AppendLine();
            sb.AppendLine("#include \"" + HeaderName + "\"");
            sb.AppendLine();
            foreach (var f in list)
            {
                sb.AppendLine();
                sb.Append("// 0x" + f.Addr.ToString("x8"));
                if (f.NewName != f.Name) sb.Append("  (ghidra: " + f.Name + ")");
                sb.AppendLine("  [" + f.Conf + "]" + (f.Conf == "anchor" || f.Conf == "manual" ? " " + f.Evidence : ""));
                CurFunc = f.Addr;
                foreach (var l in f.Lines)
                {
                    string ol = l.IndexOf("FUN_") >= 0 ? funRx.Replace(l, ev) : l;
                    if (l.IndexOf("DAT_") >= 0) NoteUsage(l);
                    sb.AppendLine(Clean(ol));
                    foreach (Match m in DatRx.Matches(l))
                    {
                        SortedSet<string> s;
                        if (!globals.TryGetValue(m.Value, out s)) { s = new SortedSet<string>(); globals[m.Value] = s; }
                        s.Add(rel);
                        int c; globalCount.TryGetValue(m.Value, out c); globalCount[m.Value] = c + 1;
                    }
                }
                sb.AppendLine();
            }
            File.WriteAllText(path, sb.ToString(), new UTF8Encoding(false));
        }

        EmitHeader(funcs, rename, outDir, funRx, ev);
        EmitGlobals(globals, globalCount, outDir);
        EmitSymbols(funcs, outDir);
        EmitIndex(funcs, outDir, log);
        if (LinkUnits.Units.Count > 0) EmitUnits(funcs, outDir);
        log.AppendLine("undefined types replaced: " + UndefinedReplaced + "; " + GlobalKindsSummary + "; ordinal calls resolved: " + OrdinalsResolved + ", unresolved: " + OrdinalsLeft);
    }

    static void EmitHeader(List<Fn> funcs, Dictionary<string, string> rename, string outDir, Regex funRx, MatchEvaluator ev)
    {
        var sb = new StringBuilder();
        sb.AppendLine("/* " + HeaderName + " - base types and prototypes for every function, grouped by source file. */");
        sb.AppendLine("#pragma once");
        sb.AppendLine();
        sb.AppendLine("#include <stdint.h>");
        sb.AppendLine("/* Ghidra's undefinedN types have been replaced by uint8_t/uint16_t/uint32_t/uint64_t. */");
        sb.AppendLine("typedef unsigned char      byte;");
        sb.AppendLine("typedef unsigned char      uchar;");
        sb.AppendLine("typedef unsigned short     ushort;");
        sb.AppendLine("typedef unsigned int       uint;");
        sb.AppendLine("typedef unsigned int       uint3;");
        sb.AppendLine("typedef unsigned long      ulong;");
        sb.AppendLine("typedef long long          longlong;");
        sb.AppendLine("typedef unsigned long long ulonglong;");
        sb.AppendLine("typedef unsigned short     wchar16;");
        sb.AppendLine("typedef void (*code)(void);");
        if (Cfg.Sigma) sb.AppendLine("#include \"../tables/sigma_tables.h\"");
        sb.AppendLine("#include \"globals.h\"");
        sb.AppendLine();
        foreach (var g in funcs.Where(f => !f.IsFunclet).GroupBy(f => f.File).OrderBy(g => g.Min(f => f.Addr)))
        {
            sb.AppendLine("/* ---- " + g.Key + " ---- */");
            foreach (var f in g.OrderBy(f => f.Addr))
            {
                string proto = Prototype(f);
                if (proto == null) continue;
                proto = Clean(funRx.Replace(proto, ev));
                string where;
                if (Cfg.GameBindingFile.TryGetValue(f.NewName ?? f.Name, out where)) sb.AppendLine(proto + ";   /* game binding -> " + where + " */");
                else
                sb.AppendLine(proto + ";");
            }
            sb.AppendLine();
        }
        File.WriteAllText(Path.Combine(outDir, "include", HeaderName), sb.ToString(), new UTF8Encoding(false));
    }

    static string Prototype(Fn f)
    {
        var parts = new List<string>();
        foreach (var l in f.Lines)
        {
            string t = l.Trim();
            if (t == "{") break;
            parts.Add(t);
        }
        // drop comment blocks (Ghidra puts multi-line "/* Library Function ... */" notes above some signatures)
        string p = string.Join("\n", parts);
        p = Regex.Replace(p, @"/\*.*?\*/", " ", RegexOptions.Singleline);
        p = Regex.Replace(p, @"//[^\n]*", " ");
        p = Regex.Replace(p, @"\s+", " ").Trim();
        if (p.Length == 0) return null;
        if (p.IndexOf('(') < 0) return null;
        return p;
    }

    public static string GlobalKindsSummary = "";
    static string HeaderName { get { return Cfg.Sigma ? "d2sigma_decomp.h" : Cfg.Module.ToLowerInvariant() + "_decomp.h"; } }
    static void EmitGlobals(Dictionary<string, SortedSet<string>> globals, Dictionary<string, int> counts, string outDir)
    {
        var sb = new StringBuilder();
        sb.AppendLine("/* globals.h - every DAT_/PTR_ global referenced by the decompiled code.");
        sb.AppendLine(" * Table globals carry recovered names and types (tables/sigma_tables.h). For the rest the type");
        sb.AppendLine(" * is inferred from use: called -> code (function pointer), dereferenced or offset -> uint8_t *,");
        sb.AppendLine(" * only address-taken -> opaque uint8_t[] object, otherwise uint32_t.");
        sb.AppendLine(" * Comment lists reference count and the source files that use it. */");
        sb.AppendLine("#pragma once");
        sb.AppendLine();
        sb.AppendLine("/* ---- recovered ---- */");
        // fd2: several globals can carry one name (D2Template's per-file copies of a game pointer): one declaration each
        foreach (var grp in globals.Where(k => IdentRenames.ContainsKey(k.Key)).GroupBy(k => IdentRenames[k.Key]).OrderBy(g => g.Key, StringComparer.Ordinal))
        {
            string nn = grp.Key; var info = RenameInfo[nn];
            string ty = info[0];
            string decl = ty.EndsWith("*") ? ty + nn : ty + " " + nn;
            var olds = grp.Select(k => k.Key).OrderBy(x => x).ToList();
            string note = info[1];
            if (olds.Count > 1) note = Regex.Replace(note, @"^per-file copy of \S+ \(static initializer\): ", "") + "; " + olds.Count + " globals (the cell and per-file copies)";
            sb.AppendLine("extern " + decl + ";  /* was " + string.Join(", ", olds) + ": " + note + "; x" + olds.Sum(o => counts[o]) + " */");
        }
        sb.AppendLine();
        sb.AppendLine("/* ---- inferred from usage ---- */");
        var kinds = new int[4];
        foreach (var kv in globals.Where(k => !IdentRenames.ContainsKey(k.Key)).OrderBy(k => k.Key))
        {
            string files = string.Join(", ", kv.Value.Take(6)) + (kv.Value.Count > 6 ? ", +" + (kv.Value.Count - 6) + " more" : "");
            int k; GlobalKind.TryGetValue(kv.Key, out k);
            if (!kv.Key.StartsWith("DAT_")) k = 1;
            kinds[k]++;
            string decl = k == 3 ? "code " + kv.Key : k == 2 ? "uint8_t *" + kv.Key : k == 1 ? "uint8_t " + kv.Key + "[]" : "uint32_t " + kv.Key;
            sb.AppendLine("extern " + decl + ";  /* x" + counts[kv.Key] + "  " + files + " */");
        }
        GlobalKindsSummary = "globals: " + kinds[3] + " function pointers, " + kinds[2] + " pointers, " + kinds[1] + " objects, " + kinds[0] + " scalars";
        File.WriteAllText(Path.Combine(outDir, "include", "globals.h"), sb.ToString(), new UTF8Encoding(false));
    }

    static string Csv(string s) { return "\"" + (s ?? "").Replace("\"", "\"\"") + "\""; }

    static void EmitSymbols(List<Fn> funcs, string outDir)
    {
        var sb = new StringBuilder();
        sb.AppendLine("address,ghidra_name,new_name,file,confidence,evidence");
        foreach (var f in funcs)
            sb.AppendLine("0x" + f.Addr.ToString("x8") + "," + Csv(f.Name) + "," + Csv(f.NewName) + "," + Csv(f.File) + "," + f.Conf + "," + Csv(f.Evidence));
        File.WriteAllText(Path.Combine(outDir, "symbols.csv"), sb.ToString(), new UTF8Encoding(false));
    }

    // link_units.tsv: one row per object file recovered from the static-initializer table
    static void EmitUnits(List<Fn> funcs, string outDir)
    {
        var sb = new StringBuilder();
        sb.AppendLine("# Object files (link units) of " + Cfg.BinaryName + ", in link order, from the __xc_a dynamic-initializer table (tools/src/LinkUnits.cs).");
        sb.AppendLine("# di_range: its initializers in .text$di; code_evidence: .text$mn functions that use its file-private globals; functions: all placed in it.");
        sb.AppendLine("# dropped as out of order: " + LinkUnits.Demoted + " (functions whose globals point at a unit that contradicts the link order)");
        sb.AppendLine("unit\tfile\tdi_range\tinitializers\tpointer_stubs\tprivate_globals\tcode_evidence\tcode_range\tfunctions\tdistinctive_strings\tcode_strings");
        // string literals of each unit's code that at most one other unit also uses, most frequent first (a lead for the file name)
        var unitLits = new Dictionary<int, Dictionary<string, int>>();
        var litUnits = new Dictionary<string, HashSet<int>>();
        foreach (var u in LinkUnits.Units)
        {
            string file = UnitFile[u.Index];
            var d = new Dictionary<string, int>();
            foreach (var f in funcs.Where(f => f.Addr >= LinkUnits.DiEnd && f.File != null && (f.File == file || f.File.StartsWith(file.Substring(0, file.Length - 4) + "_"))))
                foreach (var l in f.Lines)
                    foreach (Match m in Regex.Matches(l, @"(?<![\w\\])""((?:[^""\\]|\\.){4,48})"""))
                    {
                        string t = m.Groups[1].Value;
                        if (t.Contains("\\Source\\") || t.StartsWith("C:\\") || !Regex.IsMatch(t, "[A-Za-z]{3}")) continue;
                        int c; d.TryGetValue(t, out c); d[t] = c + 1;
                        HashSet<int> hs; if (!litUnits.TryGetValue(t, out hs)) { hs = new HashSet<int>(); litUnits[t] = hs; }
                        hs.Add(u.Index);
                    }
            unitLits[u.Index] = d;
        }
        foreach (var u in LinkUnits.Units)
        {
            string file = UnitFile[u.Index];
            string codeLits = string.Join(", ", unitLits[u.Index].Where(kv => litUnits[kv.Key].Count <= 2).OrderByDescending(kv => kv.Value).ThenBy(kv => kv.Key, StringComparer.Ordinal)
                .Take(6).Select(kv => "\"" + kv.Key + "\""));
            var mine = funcs.Where(f => f.File != null && (f.File == file || f.File.StartsWith(file.Substring(0, file.Length - 4) + "_"))).ToList();
            var code = mine.Where(f => f.Addr >= LinkUnits.DiEnd).Select(f => f.Addr).ToList();
            sb.AppendLine(string.Join("\t", u.Index, file, "0x" + u.DiStart.ToString("x8") + "-0x" + u.DiEnd.ToString("x8"), u.Initializers.Count, u.Stubs,
                u.Globals.Count, u.Code.Count, code.Count > 0 ? "0x" + code.Min().ToString("x8") + "-0x" + code.Max().ToString("x8") : "", mine.Count, u.Strings, codeLits));
        }
        File.WriteAllText(Path.Combine(outDir, "link_units.tsv"), sb.ToString(), new UTF8Encoding(false));
    }

    static void EmitIndex(List<Fn> funcs, string outDir, StringBuilder log)
    {
        var sb = new StringBuilder();
        sb.AppendLine("| File | Address range | Functions | anchor | range | linked | inferred | nearest | gap |");
        sb.AppendLine("|---|---|---:|---:|---:|---:|---:|---:|---:|");
        foreach (var g in funcs.GroupBy(f => f.File).OrderBy(g => g.Min(f => f.Addr)))
        {
            var l = g.ToList();
            System.Func<string, int> c = k => l.Count(f => f.Conf == k);
            sb.AppendLine("| `" + g.Key + "` | 0x" + l.Min(f => f.Addr).ToString("x8") + "-0x" + l.Max(f => f.Addr).ToString("x8") +
                " | " + l.Count + " | " + c("anchor") + " | " + c("range") + " | " + c("linked") + " | " + c("inferred") + " | " + c("nearest") + " | " + c("gap") + " |");
        }
        File.WriteAllText(Path.Combine(outDir, "FILES.md"), sb.ToString(), new UTF8Encoding(false));
        foreach (var k in new[] { "anchor", "range", "linked", "inferred", "nearest", "gap", "lib" })
            log.AppendLine(k + ": " + funcs.Count(f => f.Conf == k));
        log.AppendLine("files: " + funcs.Select(f => f.File).Distinct().Count());
    }
}
