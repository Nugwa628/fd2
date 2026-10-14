# 6_config: PD2 configuration files

Documented schemas for every configuration file shipped in the PD2 install
(`fd2_work/inputs/ProjectD2/ProjectD2/`), with each key tied to the code that reads it. PD2's own DLL is cited by
function name + address + file in `4_pd2_source/ProjectDiablo/`; third-party readers by upstream `file:line` at the
commit that matches the shipped binary. The raw config files are not copied here; user-specific values (paths,
window positions, cache tags) appear only as `<redacted: type>`.

## Overview

| File | Read by | Format | Keys (shipped / read by code / shipped but unread / code-only) | Schema |
|---|---|---|---|---|
| `ProjectDiablo.json` (+ `.bak`) | **ProjectDiablo.dll** (`sub_1023b060` / `sub_Settings_1023b445`) | JSON, 2-level sections | 75 / 75 / 0 / 0 | [ProjectDiablo.json.md](ProjectDiablo.json.md) |
| `ProjectDiablo.cfg` | **nothing** (legacy BH config, last read by BH `0070b07`, replaced by BH.json in `43ff557`, 2024-01) | BH line config `Key: value` | 30 / 0 / 30 / 0 | [ProjectDiablo.cfg.md](ProjectDiablo.cfg.md) |
| `BH.json` (+ `.bak`) | **BH.dll** (`Config::LoadConfig`, BH@4f7b4d7) | JSON | 55 / 58 / 0 / 3 | [BH.json.md](BH.json.md) |
| `d2gl.json` (+ `.bak`) | **glide3x.dll** (D2GL, PD2 fork @9443840) | JSON | 45 / 45 / 0 / 0 | [d2gl.json.md](d2gl.json.md) |
| `SGD2FreeResolution.json` | **SGD2FreeRes.dll** (SlashGaming Free Resolution 3.0.3.1) | JSON | 12 / 12 / 0 / 0 (+17 compiled-out asset-path keys) | [SGD2FreeResolution.json.md](SGD2FreeResolution.json.md) |
| `ddraw.ini` | **ddraw.dll** (cnc-ddraw 1.4.0.2 @7f9a6b5), written by the launcher | INI `[ddraw]` | 26 / 31 / 1 / 6 | [ddraw.ini.md](ddraw.ini.md) |
| `AppData/launcherSettings.json` (+ `.backup`) | **PD2Launcher.exe / SteamPD2.exe** (@300ed6f); **BH.dll** reads 2 fields | JSON (Newtonsoft) | 44 / 43 / 1 / 15 (section-level properties; 15 = nested fields of the null filter objects) | [launcherSettings.json.md](launcherSettings.json.md) |
| `local_metadata.json` | **PD2Launcher.exe** (`GameFileUpdateHelpers`) | JSON | 1 / 1 / 0 / 0 | [local_metadata.json.md](local_metadata.json.md) |
| `default.filter` (and `loot.filter`, `filters\online\*`, `filters\local\*`) | **BH.dll** (`BH::LoadLootFilter`, `ItemDisplay::InitializeItemRules`) | BH loot-filter language | shipped file: 1 comment line, 0 rules | [filter-format.md](filter-format.md) |

Key counting: a JSON leaf is one key; in BH.json a toggle object `{enabled, hotkey}` is one key; in
launcherSettings.json the properties of the 8 sections are counted (news items and `ResetData` fields are documented
but not counted); in ProjectDiablo.cfg an `Array[n]`/`Map[x]` family is one key. The `.bak`/`.backup` files are
byte-identical to their main files in the shipped install.

## Runtime picture

```
PD2Launcher.exe ── launcherSettings.json ──> Game.exe -3dfx|-ddraw [-skiptobnet] [-sndbkg]
   │  local_metadata.json (update manifest)        │
   │  writes ddraw.ini from DdrawOptions            ├─ ProjectDiablo.dll ── ProjectDiablo.json (+ emulated D2 registry)
   │  downloads filters\online\<name>               ├─ BH.dll ── BH.json, launcherSettings.json (2 fields), *.filter
   │                                                ├─ glide3x.dll (D2GL, -3dfx) ── d2gl.json ── loads SGD2FreeRes.dll ── SGD2FreeResolution.json
   │                                                └─ ddraw.dll (cnc-ddraw, -ddraw) ── ddraw.ini
   └─ ProjectDiablo.cfg: listed in the update manifest and the exclusion list, read by nobody
```

ProjectDiablo.json, BH.json and d2gl.json share one load scheme (create `{}` if missing, rewrite `.bak` from a good
file, restore from `.bak` on a parse error, reset both if the backup is bad too); it is the D2Template/PD2 house
style, visible in source for BH and D2GL and in the decompile for ProjectDiablo.dll.

## Notable findings

* ProjectDiablo.json `classic_game_settings` is an **emulated Windows registry**: 35 keys back Storm
  `SRegLoad/SaveString/Value` replacements (registry value names lower-cased, spaces/dots → `_`); the defaults,
  min and max of every setting are in static initializers, and ints are clamped on load. `skip_to_open` has
  max 0 and is therefore always 0.
* `ProjectDiablo.cfg` is dead (no reader since BH moved to BH.json); even its `Show iLvl` line never matched the
  old reader (`Show ILvl`).
* `ddraw.ini` `resizeable` is never read: cnc-ddraw 1.4.0.2 reads `resizable` but writes the misspelled key in its
  own template, and the PD2 launcher writes the same misspelling.
* The launcher's metadata updater compares SHA-1 against the manifest's 32-digit (MD5) hashes, so every file is
  re-downloaded whenever the manifest changes, and that path ignores the exclusion list (user `ddraw.ini`,
  `default.filter`, `ProjectDiablo.cfg` are overwritten).
* The shipped SGD2FreeRes.dll is a rebuild (linked 2023-05-02, resource says 2022-10-27) whose built-in defaults
  and Battle.net resolution table differ from the 3.0.3.1 tag (`"1068x600"` literal present, gateway table absent).
* BH.json: three legacy notification toggles and `bh_ui.size_x/size_y` are read and saved but have no live consumer;
  `class_skills_list`, `tab_skills_list`, `additional_stats` are read but absent from the shipped file.
* `launcherSettings.json` `FileUpdateModel.Other` is never read.

## Tools

* `tools/config/pd2_json_settings.py <4_pd2_source/ProjectDiablo> <ProjectDiablo.dll> [ProjectDiablo.json]` —
  extracts the ProjectDiablo.json key table (key, type, global, default, min, max, presence in the shipped file,
  reader functions) from the reconstructed source.
* `tools/config/key_refs.py <src dir> <key> ...` (or `--keys-file F`) — lists every string-literal reference to the
  given keys by enclosing function in a reconstructed source tree.

Upstream clones used (not part of the repo): `fd2_work/ext/BH-pd2`, `d2gl-pd2`, `d2gl-upstream`, `SGD2FreeRes`,
`cnc-ddraw`, `PD2Launcher`, `slashdiablo-maphack`.
