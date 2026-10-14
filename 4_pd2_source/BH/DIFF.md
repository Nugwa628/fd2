# BH.dll: shipped binary vs. public PD2 fork, per file and class

Shipped `BH.dll` (VS2022, 2026-05-13 15:41 UTC) compared with
[`Project-Diablo-2/BH`](https://github.com/Project-Diablo-2/BH) at commit
**`4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a`** (2026-04-23, "Merge pull request #89 from exiledagain/addpercent").
See `README.md` for how that commit was picked. Paths in the tables are upstream paths at that commit.
Addresses are shipped-binary VAs (image base 0x10000000).

**Summary: nothing is changed, removed, or added relative to `4f7b4d7`.** Every upstream file is either
compiled into the DLL unchanged, as far as static evidence shows, or not linked because nothing calls it upstream
either. The second case is ordinary `/OPT:REF` dead-code removal, not a PD2 change.

| Category | Files | Classes (polymorphic) | Notes |
|---|---:|---:|---|
| identical-or-equivalent | 79 (53 with function bodies + 26 headers) | 100 BH vftables / 126 BH RTTI types, all mapped | |
| changed | 0 | 0 | |
| removed in the shipped build (relative to `4f7b4d7`) | 0 | 0 | Maphack, AutoTele and ItemMover aren't in the public PD2 fork (see below). |
| present upstream, not linked (dead code in upstream too) | 12 (+1 partly) | 13 | 8 `Drawing::*hook` classes, 5 Mustache template classes |
| binary-only additions | 0 | 0 | 0 uncovered BH strings, 0 extra D2 pointers, patches or exports |

## Lineage context (not binary diffs)

The PD2 fork starts at `c66f9e5` (2021-03-31, "Moved BH to its own repository"). That first commit has no
`Modules/Maphack` or `Modules/AutoTele`, so PD2 removed them before the public history begins. Compared with
slashdiablo-maphack (`planqi/slashdiablo-maphack` `6226ef3`, 2024-08-03; its `BH/Modules` has AutoTele, ItemMover and
Maphack), the public fork has **removed** Maphack, AutoTele and ItemMover (`a02a8a7` 2025-05-14 "Removed ItemMover").
It has **added** MapNotify and GameSettings (settings UI rework `5c06f5d` 2022-06-09), JSON config (`BH.json`
replaces `BH.cfg`), the ProjectDiablo/D2GL interop, and the PD2 loot-filter conditions. All of that is public source, so it isn't
reconstructed here.

## Per file (files with function bodies)

Column "Lit.-anchored / matched": number of upstream functions in the file that contain string literals, and
how many of those were located in the binary through the literals' code xrefs (`tools/bh/func_map.py`; full list
in `evidence/func_map.tsv`). Functions without literals are covered at file and class level by the RTTI/vtable,
patch, pointer-table and constant checks below, but are not individually address-mapped.

| Upstream file | Class(es) | Verdict | Src funcs | Lit.-anchored / matched | Binary anchors (source fn → shipped VA) | Evidence |
|---|---|---|---:|---:|---|---|
| `BH/AsyncDrawBuffer.cpp` | AsyncDrawBuffer | identical-or-equivalent | 19 | 0 / 0 |  | RTTI `_Func_impl_no_alloc<lambda,void,AsyncDrawBuffer&>` (MapNotify draw lambda); no literals |
| `BH/BH.cpp` | BH (namespace), exports | identical-or-equivalent | 12 | 5 / 5 | BH::Initialize→0x100462e0; BH::ReloadConfig→0x10046c80; BH::LoadLootFilter→0x10047060; BH::CheckForD2GL→0x100462e0 (+1) | `Initialize` 0x100462e0 (CheckForD2GL/CheckForPD2 inlined), LoadLootFilter 0x10047060, exports 0x10047d60-0x10048130 (5/5 names), 12 BH::patches + oogDraw identical (patches.tsv) |
| `BH/Common.cpp` | - | identical-or-equivalent | 34 | 2 / 2 | IsTrue→0x1005a960; BHGetTickCount→0x100462e0; static init→0x10002e90 (156 lit.) | key-name table 0x10002e90 (154 lit.; short names built as SSO immediates, e.g. "VK_CLEAR" at 0x1000300e) |
| `BH/Common.h` |  | identical-or-equivalent | 2 | 0 / 0 |  | all literals/constants present |
| `BH/Config.cpp` | Config | identical-or-equivalent | 14 | 3 / 3 | Config::GetToggle→0x10062b80; Config::SaveConfig→0x100636b0; Config::LoadConfig→0x10065e83 | LoadConfig 0x10065e83 (67/67 JSON keys), SaveConfig 0x100636b0 (69/69); all 75 keys of the shipped BH.json present |
| `BH/Config.h` |  | identical-or-equivalent | 2 | 0 / 0 |  | all literals/constants present |
| `BH/D2Handlers.cpp` | - | identical-or-equivalent | 12 | 0 / 0 |  | hook handlers behind the asm stubs 0x10079a40-0x10079c80 (patches.tsv) |
| `BH/D2Helpers.cpp` | - | identical-or-equivalent | 28 | 1 / 0 |  | IsValidMonster (literals "Maggot"/"an evil force"/"dummy") has no caller upstream -> not linked; 0xEEEEEEEE only in unused code |
| `BH/D2Intercepts.cpp` | - | identical-or-equivalent | 12 | 0 / 0 |  | naked stubs 0x10079a40-0x10079c80 = Patch handlers (patches.tsv) |
| `BH/D2Stubs.cpp` | - | identical-or-equivalent | 25 | 0 / 0 |  | stubs referenced by the Item packet patches (0x10079c40/60/80); D2CLIENT_InitAutomapLayer_I stub unused -> not linked |
| `BH/D2Version.cpp` | D2Version | identical-or-equivalent | 4 | 3 / 2 | D2Version::Init→0x10079d10; D2Version::GetGameVersionString→0x10079e10 | Init 0x10079d10, GetGameVersionString 0x10079e10 ("1.0.13.60"/"1.0.13.64"); GetHumanReadableVersion unused (only caller commented) -> "1.13c"/"1.13d"/"unknown" not linked |
| `BH/DllMain.cpp` | - | identical-or-equivalent | 1 | 0 / 0 |  | DllMain 0x1007a0a0 returns FALSE (`xor eax,eax`) for thread attach/detach = pre-72b26e9 (2026-09-30) behaviour |
| `BH/Drawing/Advanced/Checkhook/Checkhook.cpp` | Drawing::Checkhook | identical-or-equivalent | 15 | 0 / 0 |  | vftable 0x10125ee4 (6 slots) |
| `BH/Drawing/Advanced/Colorhook/Colorhook.cpp` | Drawing::Colorhook | present upstream, not linked | 9 | 1 / 0 |  | no RTTI/vftable, literals "Choose Color"... absent; no live `new Colorhook` upstream (dead code, /OPT:REF) |
| `BH/Drawing/Advanced/Colorhook/Colorhook.h` | Drawing::Colorhook | present upstream, not linked | 2 | 0 / 0 |  | as Colorhook.cpp |
| `BH/Drawing/Advanced/Combohook/Combohook.cpp` | Drawing::Combohook | present upstream, not linked | 4 | 0 / 0 |  | no RTTI; only constructors are in commented-out UI code (Item/StashExport OnLoad) |
| `BH/Drawing/Advanced/Combohook/Combohook.h` | Drawing::Combohook | present upstream, not linked | 11 | 0 / 0 |  | as Combohook.cpp |
| `BH/Drawing/Advanced/Inputhook/Inputhook.cpp` | Drawing::Inputhook | present upstream, not linked | 20 | 1 / 1 | Inputhook::OnDraw→0x1007e310 | no RTTI; its 1 "matched" literal is a shared format string owned by StatsDisplay 0x1007e310 |
| `BH/Drawing/Advanced/Inputhook/Inputhook.h` | Drawing::Inputhook | present upstream, not linked | 17 | 0 / 0 |  | as Inputhook.cpp |
| `BH/Drawing/Advanced/Keyhook/Keyhook.cpp` | Drawing::Keyhook | present upstream, not linked | 7 | 2 / 0 |  | no RTTI; " secs", ":ÿc4 " absent; all `new Keyhook` are inside /* */ in GameSettings/Item/StashExport |
| `BH/Drawing/Advanced/Keyhook/Keyhook.h` | Drawing::Keyhook | present upstream, not linked | 4 | 0 / 0 |  | as Keyhook.cpp |
| `BH/Drawing/Basic/Boxhook/Boxhook.cpp` | Drawing::Boxhook | present upstream, not linked | 14 | 0 / 0 |  | no RTTI/vftable; no live constructor upstream |
| `BH/Drawing/Basic/Crosshook/Crosshook.cpp` | Drawing::Crosshook | present upstream, not linked | 8 | 0 / 0 |  | no RTTI/vftable; no live constructor upstream |
| `BH/Drawing/Basic/Framehook/Framehook.cpp` | Drawing::Framehook | present upstream, not linked | 15 | 0 / 0 |  | no RTTI/vftable; no live constructor upstream |
| `BH/Drawing/Basic/Linehook/Linehook.cpp` | Drawing::Linehook | present upstream, not linked | 12 | 0 / 0 |  | no RTTI/vftable; no live constructor upstream |
| `BH/Drawing/Basic/Texthook/Texthook.cpp` | Drawing::Texthook | identical-or-equivalent | 19 | 0 / 0 |  | vftable 0x10125f24 (6 slots) |
| `BH/Drawing/Hook.cpp` | Drawing::Hook, HookGroup | identical-or-equivalent | 36 | 0 / 0 |  | vftables 0x10125f50 (6), 0x10126a30 (5) |
| `BH/Drawing/Hook.h` |  | identical-or-equivalent | 3 | 0 / 0 |  | all literals/constants present |
| `BH/Drawing/Stats/StatsDisplay.cpp` | Drawing::StatsDisplay | identical-or-equivalent | 19 | 3 / 3 | StatsDisplay::OnDraw→0x1007c040; StatsDisplay::GetBreakpointString→0x1007e000; StatsDisplay::GetIASBreakpointString→0x1007e310; static init→0x10014cb0 (5 lit.) | vftable 0x10126a10; OnDraw 0x1007c040 (44/44 lit.), mastery strings of e9806c3 present, Open-Wounds `+0x19` (25) at 0x1007d3ae = pre-0095e67 |
| `BH/Drawing/Stats/StatsDisplay.h` |  | identical-or-equivalent | 12 | 0 / 0 |  | all literals/constants present |
| `BH/Drawing/UI/UI.cpp` | Drawing::UI | identical-or-equivalent | 20 | 1 / 1 | UI::OnLeftClick→0x10082bb0 | vftable 0x10126a94 |
| `BH/Drawing/UI/UI.h` |  | identical-or-equivalent | 21 | 0 / 0 |  | all literals/constants present |
| `BH/Drawing/UI/UITab.cpp` | Drawing::UITab | identical-or-equivalent | 3 | 0 / 0 |  | vftable 0x10126aac |
| `BH/Drawing/UI/UITab.h` |  | identical-or-equivalent | 10 | 0 / 0 |  | all literals/constants present |
| `BH/Formula.h` |  | identical-or-equivalent | 21 | 1 / 1 | tokenize→0x1009d270; static init→0x1001d110 (16 lit.) | all literals/constants present |
| `BH/JSONObject.cpp` | JSONElement/Object/Array/String/Number/Bool/Null, JSONWriter | identical-or-equivalent | 73 | 10 / 9 | JSONWriter::writeIndented→0x10084350; JSONWriter::writeNewlyIndented→0x10084590; serialize→0x1004d940; JSONElement::find→0x10084950 (+5) | 7 vftables 0x10126c14-0x10126d0c (9 slots = 9 virtuals upstream); __FILE__ `...\BH\BH\JSONObject.cpp` |
| `BH/JSONObject.h` |  | identical-or-equivalent | 33 | 1 / 1 | toString→0x10061a10 | all literals/constants present |
| `BH/Modules/Bnet/Bnet.cpp` | Bnet | identical-or-equivalent | 13 | 1 / 1 | Bnet::OnGameExit→0x10087d40; static init→0x100180d0 (1 lit.) | vftable 0x10123d80; 7 D2Multi/D2Client patches identical |
| `BH/Modules/Bnet/Bnet.h` |  | identical-or-equivalent | 1 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/ChatColor/ChatColor.cpp` | ChatColor | identical-or-equivalent | 7 | 1 / 1 | ChatColor::OnChatPacketRecv→0x1008df30 | vftable 0x10123c24 (LoadConfig empty -> ICF-folded into Module no-op) |
| `BH/Modules/ChatColor/ChatColor.h` |  | identical-or-equivalent | 1 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/GameSettings/GameSettings.cpp` | GameSettings | identical-or-equivalent | 6 | 0 / 0 |  | vftable 0x10123df8; settings-UI body commented upstream, empty LoadConfig folded |
| `BH/Modules/GameSettings/GameSettings.h` |  | identical-or-equivalent | 2 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/Gamefilter/Gamefilter.cpp` | Gamefilter | identical-or-equivalent | 17 | 4 / 4 | Gamefilter::OnRealmPacketRecv→0x1008e440; Gamefilter::CreateGamelist→0x1008f330; Gamefilter::OnOOGDraw→0x1008f5f0; Gamefilter::BuildGameList→0x1008e440 | vftable 0x10123ba8; 3 D2Multi patches identical |
| `BH/Modules/Gamefilter/Gamefilter.h` |  | identical-or-equivalent | 1 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/Gamefilter/ParsedFilterString.cpp` | ParsedFilterString | identical-or-equivalent | 9 | 1 / 1 | ParsedFilterString::ParseGameServerParams→0x10093110 | ParseGameServerParams 0x10093110 |
| `BH/Modules/Item/Item.cpp` | Item | identical-or-equivalent | 57 | 9 / 7 | Item::ReplaceItemFilters→0x100a6380; Item::ChangeFilterLevels→0x10095640; Item::ItemNamePatch→0x10095ad0; Item::OrigGetItemName→0x10095fe0 (+3) | vftable 0x10123d28; exports _BHOnProperties@4 0x100974a0, _BHOnDamagePropertyBuild@16 0x10098c80, _BHOnPropertyBuild@16 0x10099080; 13 patches identical; "PERCENT" keyword (0e17161) present |
| `BH/Modules/Item/Item.h` |  | identical-or-equivalent | 2 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/Item/ItemDisplay.cpp` | Condition + 52 conditions, operators, lookup caches, ReplaceContext | identical-or-equivalent | 203 | 13 / 13 | function<wstring→0x100bc850; ItemDescLookupCache::to_str→0x100a4ed0; ItemNameLookupCache::to_str→0x100a4ed0; NameVarGemLevel→0x1009fb40 (+10) | 56 Condition-family vftables 0x1012967c-0x10129a24 (base + 50 conditions + 5 operators) = 56 classes upstream (incl. MapTier/CraftLevel/RerollLevel/Automod/Shop/Fools/FilterLevel/MapId); keyword tables 0x1001ffa0/0x10023260/0x1002b1a0 (702/702 lit.) |
| `BH/Modules/Item/ItemDisplay.h` | RuleLookupCache instantiations | identical-or-equivalent | 63 | 0 / 0 |  | 3 RuleLookupCache<...> + Item{Name,Desc}LookupCache + MapActionLookupCache vftables |
| `BH/Modules/MapNotify/MapNotify.cpp` | MapNotify | identical-or-equivalent | 12 | 2 / 2 | MapNotify::OnDraw→0x100c2860; MapNotify::OnAutomapDraw→0x100c2ee0; static init→0x100c2730 (1 lit.) | vftable 0x10129ab4; OnDraw 0x100c2860 (uses pd2PlaySoundImpl) |
| `BH/Modules/Module.cpp` | Module | identical-or-equivalent | 4 | 0 / 0 |  | vftable 0x10129b6c (18 slots = 18 virtuals in Module.h) |
| `BH/Modules/Module.h` |  | identical-or-equivalent | 19 | 0 / 0 |  | all literals/constants present |
| `BH/Modules/ModuleManager.cpp` | ModuleManager + 14 __InvokeHandlers_* helpers | identical-or-equivalent | 10 | 1 / 1 | ModuleManager::UserInput→0x100c6ad0 | 14 handler vftables 0x10129b1c-0x10129c38; UserInput 0x100c6ad0 |
| `BH/Modules/Party/Party.cpp` | Party | identical-or-equivalent | 7 | 1 / 1 | Party::OnLoad→0x100c6ec0 | vftable 0x10123cdc |
| `BH/Modules/Party/Party.h` |  | identical-or-equivalent | 1 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/ScreenInfo/ScreenInfo.cpp` | ScreenInfo | identical-or-equivalent | 13 | 3 / 3 | ScreenInfo::OnLoad→0x100c7920; ScreenInfo::drawExperienceInfo→0x100c7d30; ScreenInfo::OnAutomapDraw→0x100c8030; static init→0x10035e90 (157 lit.) | vftable 0x10123e44; OnAutomapDraw 0x100c8030 (18/18); state table 0x10035e90 (SSO immediates for short names) |
| `BH/Modules/ScreenInfo/ScreenInfo.h` |  | identical-or-equivalent | 2 | 0 / 0 | static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Modules/StashExport/StashExport.cpp` | StashExport | identical-or-equivalent | 14 | 5 / 5 | StashExport::getStatEntry→0x100cb890; StashExport::GetItemInfo→0x100ccba0; StashExport::WriteStash→0x100ce910; StashExport::CopyItemJSONToClipboard→0x100cfc60 (+2) | vftable 0x10123ea4; GetItemInfo 0x100ccba0, WriteStash 0x100ce910; Mustache templates never parsed (OnLoad body commented) |
| `BH/Modules/StashExport/StashExport.h` |  | identical-or-equivalent | 1 | 1 / 1 | StashExport→0x100462e0; static init→0x100462e0 (1 lit.) | all literals/constants present |
| `BH/Mustache.cpp` | Mustache::AMustacheTemplate + 5 template classes | present upstream, partly linked | 26 | 1 / 0 |  | only renderTemplate/Context (RTTI `_Func_base<AMustacheTemplate*,string>`) linked; Root/Section/Variable/Literal/CallTemplate have no vftable because Mustache::parse is never called |
| `BH/Mustache.h` |  | identical-or-equivalent | 3 | 0 / 0 |  | all literals/constants present |
| `BH/Patch.cpp` | Patch | identical-or-equivalent | 5 | 1 / 1 | Patch::GetDllOffset→0x100cb3e0 | GetDllOffset 0x100cb3e0 (15 DLL names); 36/36 patch definitions identical |
| `BH/Patch.h` |  | identical-or-equivalent | 1 | 0 / 0 |  | all literals/constants present |
| `BH/RuleLookupCache.h` | RuleLookupCache<T> | identical-or-equivalent | 5 | 1 / 1 | to_str→0x100b1ae0 | 3 instantiation vftables 0x10129820/0x101298e0/0x10129914 |
| `BH/Task.cpp` | Task, TaskHolder | identical-or-equivalent | 6 | 0 / 0 |  | concurrent_queue<TaskHolder*> RTTI; thread pool 0x100d0640/0x100d06f0 |

## Headers without function bodies

| Upstream file | Verdict | Evidence |
|---|---|---|
| `BH/D2Ptrs.h` | identical-or-equivalent | 323 macro lines (9 commented). **245 `Offsets{1.13c,1.13d}` pairs found in `.data` 0x10145b40-0x10146340, all with identical values**. 69 active entries are absent, and each one is unused upstream (only callers are commented-out or uncalled code, e.g. automap/maphack leftovers `InitAutomapLayer_I`, `RevealAutomapRoom`). The table holds 0 pairs that are not upstream (the 19 pair-shaped leftover slots are the `ShopNPCs` NPC-id array {148,147,154,199,...,512} and neighbouring data). `evidence/d2ptrs.tsv` |
| `BH/Patch.h` | identical-or-equivalent | `Dll` enum order (D2CLIENT=0 ... D2MULTI=0xC, D2MCPCLIENT=0xD) matches the Patch objects' dll field; `Patch` layout {dll, type, offsets, length, function, oldCode, injected} matches the initializers |
| `BH/BH.h` | identical-or-equivalent | `BHConfigId` (19 values) / `D2GLConfigId` (HD_TEXT = 3, `push 3` at 0x10046449); module `Initialize` registers 9 modules in the upstream order |
| `BH/Constants.h`, `BH/D2Strings.h`, `BH/D2Structs.h`, `BH/CommonStructs.h`, `BH/D2DataTables.h` | identical-or-equivalent | Every hex constant ≥0x1000 and every decimal constant ≥300 in all non-ThirdParty sources is present in the binary as an immediate, except `0xEABE` (only used in the length expression `0xEABE-0xEAB6` = 8, which is present), `0xEEEEEEEE` (unused helper), and unused `D2Strings.h` enum values. `BH_VERSION "PD2 0.1"` is only used in commented code. |
| `BH/AsyncDrawBuffer.h`, `BH/D2Handlers.h`, `BH/D2Helpers.h`, `BH/D2Intercepts.h`, `BH/D2Stubs.h`, `BH/D2Version.h`, `BH/Drawing.h`, `BH/Modules.h`, `BH/Modules/ModuleManager.h`, `BH/Modules/MapNotify/MapNotify.h`, `BH/Modules/Gamefilter/ParsedFilterString.h`, `BH/Task.h`, `BH/Drawing/Advanced/Checkhook/Checkhook.h`, `BH/Drawing/Basic/Texthook/Texthook.h` | identical-or-equivalent | declarations only; their classes are covered above |
| `BH/Drawing/Basic/{Boxhook,Crosshook,Framehook,Linehook}/*.h` | present upstream, not linked | see the `.cpp` rows |
| `BH/lrucache.hpp`, `ThirdParty/nlohmann/json.hpp` (3.11.2), `ThirdParty/cpp-lru-cache` | identical-or-equivalent | nlohmann version string `3.11.2` and assert texts in the binary; assert path `C:\projects\Project-Diablo-2\BH\ThirdParty\nlohmann\json.hpp` |

## Cross-checks behind the verdicts

| Check | Result | Evidence file |
|---|---|---|
| Strings: binary → source. All NUL-terminated ASCII/UTF-8 and UTF-16 strings in `.rdata`/`.data`, compared with every literal of `4f7b4d7` | 2,840 not covered. 332 of them have direct code xrefs, and **all 332 are CRT/STL/regex/nlohmann asserts or binary noise**. 0 are BH-specific. The rest are import/RTTI names and data bytes. | `evidence/uncovered_binary_strings_with_xrefs.tsv` |
| Strings: source → binary. Literals ≥5 chars in `BH/` | 873 tested, 844 present. The 29 missing are explained: `#include`-free dead code (Colorhook, Keyhook, `IsValidMonster`, `GetHumanReadableVersion`), unused `BH_VERSION`, `HandleUnknownItemCode`'s unused `tag` argument ("from packet") after inlining, and short names stored as SSO immediates in code (`VK_*`, `HOLYFIRE`, `DEFIANCE` ... found in `.text`) | `evidence/literals_missing_4f7b4d7.txt` |
| RTTI classes | 126 BH types / 100 BH vftables, all in upstream. Upstream polymorphic classes without RTTI in the binary: Boxhook, Colorhook, Combohook, Crosshook, Framehook, Inputhook, Keyhook, Linehook, RootTemplate, SectionTemplate, VariableTemplate, LiteralTemplate, CallTemplate. All of them are only constructed in commented-out or uncalled code upstream. | Phase 2 `BH_report_rtti.txt` |
| Module vtables. 9 modules × 18 slots against the base `Module` vftable 0x10129b6c | 152/162 slots agree with the handlers declared in the upstream headers. The other 10 are upstream overrides with an empty body (`{ }`), folded into the base no-op by `/OPT:ICF` | `evidence/module_vtables.tsv` |
| Condition classes | 56 vftables (`Condition` base, 50 conditions incl. MapId/MapTier/CraftLevel/RerollLevel/Automod/Shop/Fools/FilterLevel/Formula/Add, 5 operators/parens) = the upstream set | Phase 2 report |
| Exports | 9/9 names and calling conventions as in upstream (`BHIsReady` cdecl, `BHShowPlayersGear` cdecl, `_BHGetConfig@4`, `_BHSetConfig@8`, `_BHInteract@4`, `_BHOnProperties@4`, `_BHOnPropertyBuild@16`, `_BHOnDamagePropertyBuild@16` stdcall, `Initialize` extern "C") | — |
| Imports | USER32/SHLWAPI/VERSION imports each have an upstream caller (clipboard paste `a9c5216`/`f49237a`, `GetWindowLongA`/`SetWindowLongA` in `BH::Initialize`, `PathRemoveFileSpecA` in `BH::Startup`, `GetFileVersionInfoA` in `D2Version::Init`) | — |
| Game patches | 36/36 identical (dll, type, 1.13c and 1.13d offsets, length, handler) | `patches.tsv` |
| Config | all 75 keys of the shipped `BH.json` are read by `Config::LoadConfig` 0x10065e83 | — |
