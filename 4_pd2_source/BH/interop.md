# BH.dll ↔ ProjectDiablo.dll ↔ D2GL interfaces

All of this is in the public PD2 fork at `4f7b4d7` (`BH/BH.cpp`, `BH/BH.h`, `BH/Modules/Item/Item.cpp`,
`BH/Modules/MapNotify/MapNotify.cpp`). The shipped `BH.dll` matches that commit (see `DIFF.md`), so the code there
is the source. This page only maps it to the shipped addresses and to the partner DLLs.

```
             GetProcAddress x8 (FUN_10231510)              GetProcAddress x1 (BH::CheckForPD2)
ProjectDiablo.dll ───────────────────────────► BH.dll ─────────────────────────────► ProjectDiablo.dll
        │            BH exports (config, tooltips)   │      _D2Client_PlaySoundWithCustomVolumeOrPriority@20
        │                                            │
        │ GetProcAddress (FUN_102319a0)              │ GetProcAddress x2 (BH::CheckForD2GL)
        ▼                                            ▼
   glide3x.dll (D2GL)  ◄─────────────────────────────┘   d2glIsReady, _d2glConfigQueryImpl@4
```

BH has no static imports from either DLL. Both directions use `GetModuleHandleA` + `GetProcAddress`.

## 1. BH exports (called by ProjectDiablo.dll)

ProjectDiablo.dll resolves all eight in `FUN_10231510` (`GetModuleHandle("BH.dll")`). Its function-pointer globals are
`pfn_BH*` in `4_pd2_source/ProjectDiablo/include/globals.h` (`DAT_104e6d68`..`DAT_104e6d94`).
`Initialize` is also exported, but DllMain calls it internally.

| Export | Shipped VA | Upstream signature | Purpose |
|---|---|---|---|
| `BHIsReady` | 0x10047d60 | `extern "C" int __cdecl BHIsReady()` | returns `BH::initialized`; PD polls it before using the others |
| `_BHGetConfig@4` | 0x10047d70 | `int __stdcall BHGetConfig(BHConfigId)` | reads a BH setting for PD's own options menu |
| `_BHSetConfig@8` | 0x10047e80 | `int __stdcall BHSetConfig(BHConfigId, int value)` | writes a setting and saves `BH.json` (returns 1 if saved). `BH_CONFIG_USINGHDTEXT` only sets `App.d2gl.usingHDText` (`DAT_1014d39a`) and doesn't save; `BH_CONFIG_FILTERLEVEL` calls `Item::ChangeFilterLevels` |
| `_BHInteract@4` | 0x10047fc0 | `int __stdcall BHInteract(BHConfigId)` | hotkey actions: toggle the XP meter, open/close the advanced stats (`StatsDisplay`), reload the config, raise/lower/restore the filter level |
| `BHShowPlayersGear` | 0x10048130 | `extern "C" UnitAny* __cdecl BHShowPlayersGear()` | if the hovered unit is a living player or an Iron Golem/Valkyrie/Shadow (txt 291/357/417/418), sets `Item::viewingUnit` and opens the inventory (`D2CLIENT_SetUIVar(1,0,0)`) |
| `_BHOnProperties@4` | 0x100974a0 | `void __stdcall BHOnProperties(wchar_t* wTxt)` | PD's item-tooltip builder hands BH the property text of the hovered item (`D2CLIENT_SelectedInvItem`). BH appends Item Level / Affix Level and the loot filter's description (`%DESC%` rules, cached in `item_desc_cache`) |
| `_BHOnPropertyBuild@16` | 0x10099080 | `void __stdcall BHOnPropertyBuild(wchar_t* wOut, int nStat, UnitAny* pItem, int nStatParam)` | per stat line: appends `[min - max]` roll ranges when `alwaysShowStatRanges` is set or the configured key is held |
| `_BHOnDamagePropertyBuild@16` | 0x10098c80 | `BOOL __stdcall BHOnDamagePropertyBuild(UnitAny*, DamageStats*, int nStat, wchar_t* wOut)` | same for the combined damage lines |

`BHConfigId` (`BH/BH.h`): 0 EXPERIENCEMETER, 1 ADVANCEDSTATS, 2 RELOAD, 3 LOOTFILTER, 4 FILTERLEVEL,
5 NUMFILTERLEVELS, 6 LOOTNOTIFY, 7 SHOWITEMLEVEL, 8 ALWAYSSHOWSTATRANGE, 9 ALWAYSSHOWITEMS, 10 INCREASEFILTER,
11 DECREASEFILTER, 12 RESTOREFILTER, 13 SHOWSTATRANGEPRIMARY, 14 SHOWSTATRANGESECONDARY, 15 USINGHDTEXT,
16 DROPSOUNDS, 17 ADVANCEDSTATS_OPEN, 18 HIDE_GAME_PASSWORD.

`BHNotifyLevel%d` in ProjectDiablo.dll is a key name in PD's own config or hotkey file, not a BH export.

## 2. ProjectDiablo.dll → BH (one function)

| Item | Detail |
|---|---|
| Lookup | `BH::CheckForPD2()` (inlined into `Initialize` 0x100462e0): `GetModuleHandleA("ProjectDiablo.dll")`, then `GetProcAddress("_D2Client_PlaySoundWithCustomVolumeOrPriority@20")` → `App.pd2.pd2PlaySoundImpl` (`DAT_1014d39c`) |
| Type | `BOOL (__stdcall*)(UnitAny* pUnit, int nSoundId, int nVolume, int nPriority, BOOL bFlag)`. It is ProjectDiablo.dll's only export |
| Use | `MapNotify::OnDraw` 0x100c2860: when the loot filter sets `%SOUNDID%` for a newly dropped item and `lootfilter.drop_sounds` is on, it calls `pd2PlaySoundImpl(NULL, soundID, SoundsTxt.volume, 255, TRUE)` |
| Without PD | the pointer stays NULL and no drop sounds play |

## 3. D2GL (glide3x.dll) → BH

| Item | Detail |
|---|---|
| Lookup | `BH::CheckForD2GL()` (inlined into `Initialize`): `GetModuleHandleA("glide3x.dll")`, else `GetModuleHandleA("ddraw.dll")`. Then `GetProcAddress("d2glIsReady")` (`DAT_1014df0c`, `int __cdecl()`) and `GetProcAddress("_d2glConfigQueryImpl@4")` (`DAT_1014dfb4`, `BOOL __stdcall(D2GLConfigId)`) |
| Call | if both exist: `usingD2GL = d2glConfigQueryImpl(D2GL_CONFIG_HD_TEXT)`, with `D2GL_CONFIG_HD_TEXT = 3` (`push 3` at 0x10046449) → `App.d2gl.usingD2GL` (`DAT_1014d398`). `d2glIsReady` is only tested for presence, never called |
| Shipped install | `glide3x.dll` exports `d2glIsReady`, `_d2glConfigQueryImpl@4`, `_d2glConfigSetImpl@8`, `d2glToggleInterface`, `d2glCopyTooltipScreenShot`, `d2glGetGlobalX/YOffset` (the last five are used by ProjectDiablo.dll, not BH). The shipped `ddraw.dll` exports none of them, so the ddraw fallback finds nothing there |
| Effect | `usingD2GL \|\| usingHDText` (the second is set by PD through `BHSetConfig(15, …)`) changes text output only. It does not turn off any drawing. In `Item::ItemNamePatch` 0x10095ad0, an allocated item gets `ÿc\x42` half-transparent colouring instead of the `\nÿc1(Allocated)` suffix. In the filter's `ReplaceHDTextDependentColor` lambda 0x100bc680, the primary colour is used instead of the secondary one. (This corrects the Phase 2 note, which said the flag makes BH skip overlay drawing.) |

## 4. Loader / DllMain convention

`DllMain` 0x1007a0a0 → `BH::Startup`. If `lpReserved != NULL`, it is taken as a `cGuardModule*` (the old BH injector
or cGuard block) and the BH folder is `pModule->szPath` (`lpReserved + 8`). Otherwise the folder comes from
`GetModuleFileNameA` + `PathRemoveFileSpecA`. It then calls `Initialize`. For `DLL_THREAD_ATTACH`/`DETACH` the
shipped build returns FALSE (`xor eax,eax`). Upstream added the explicit `return TRUE` later, in `72b26e9` (2026-09-30).
PD2 loads BH.dll from ProjectDiablo.dll / the launcher setup. The calling side is in the ProjectDiablo phase.

## 5. How the loot filter file is selected

`BH::LoadLootFilter()` = `FUN_10047060`, called from `Initialize` and from `BH::ReloadConfig` (0x10046c80):

1. Open `./AppData/launcherSettings.json`, relative to the **process working directory**, which is the game folder.
   This file is written by `PD2Launcher.exe`.
2. Parse it with nlohmann::json. If `SelectedAuthorAndFilter.selectedAuthor.author` and
   `SelectedAuthorAndFilter.selectedFilter.name` both exist:
   * `author == "Local Filter"` → filter = `filters\local\<name>`
   * otherwise → filter = `filters\online\<name>`. **The author is not part of the path.** The launcher keeps one
     file per online filter name. (This corrects the Phase 2 note `filters\online\<author>\<name>`. The shipped binary
     concatenates only `"filters\\online\\"` + name, see the decompile at `FUN_10047060`.)
   * A JSON parse error is caught and ignored.
3. `Config::Parse()` opens `BH::path + <name>`, with `BH::path` = the BH.dll folder. If that fails it tries `loot.filter`,
   then `default.filter`. If all three fail: `MessageBoxA("Could not find default loot filter.…",
   "Failed to load ProjectDiablo lootFilter")`, and built-in defaults are used.

In the reference install (`inputs/ProjectD2/ProjectD2/AppData/launcherSettings.json`), `selectedAuthor` and
`selectedFilter` are `null`. `contains("author")` is then false, so BH falls through to `loot.filter`. That file is
absent, so the shipped `default.filter` is loaded.

`BH.json` (settings, opened as `App.jsonFile = "BH.json"` relative to the working directory, with `BH.json.bak` as
the backup) is separate from the filter. The filter's `filter_level` etc. are stored in `BH.json` under `/lootfilter`.
