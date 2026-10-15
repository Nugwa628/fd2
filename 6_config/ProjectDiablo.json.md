# ProjectDiablo.json

PD2's own settings file, read and written by **ProjectDiablo.dll** (nlohmann::json 3.11.2). It holds two kinds of
settings: the classic Diablo II options that the game normally keeps in the Windows registry
(`classic_game_settings`), and PD2's own options (`pd2_game_settings`). There is no other reader: PD2_EXT.dll, BH.dll
and D2GL never open it, and the launcher does not touch it.

| | |
|---|---|
| Path | `<game dir>\ProjectDiablo.json`, backup `ProjectDiablo.json.bak` (names set by the static initializer `sub_102ac5e0`, 0x102ac5e0, `_unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit30.cpp`) |
| Format | JSON object, two levels of sections; written back with `std::setw(4)` (4-space indent) |
| Keys | **75 leaf keys** in 9 sections. Shipped file: 75. Read by code: 75. Shipped but unread: **0**. Read by code but absent from the shipped file: **0** |
| Source | `4_pd2_source/ProjectDiablo/_unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp` (link unit 19, see `link_units.tsv`) |
| Extractor | `tools/config/pd2_json_settings.py <4_pd2_source/ProjectDiablo> <ProjectDiablo.dll> [ProjectDiablo.json]` regenerates the key/type/default/range/consumer table below |

## How the file is read

All functions are in link unit 19 (`..._unit19_1009a5f0.cpp`) unless a file is given.

| Address | Name in tree | Role |
|---|---|---|
| 0x1023b060 | `sub_1023b060` | **LoadSettings.** Same pattern as BH's and D2GL's `Config::LoadConfig` (the D2Template house style): if `ProjectDiablo.json` is missing, write `{}` and set the dirty flag `DAT_103e2d3f`; if the `.bak` is missing, write `{}` there. Parse the main file into the global `json` at `DAT_104e2068`. On success and not dirty, rewrite the `.bak` from it. Parse error: catch funclet `Catch_1023b287` parses the `.bak` and rewrites the main file from it; if that fails too, `Catch_1023b357` resets both files to `{}` and sets the dirty flag. Then falls through to the key reader. |
| 0x1023b445 | `sub_Settings_1023b445` | **Key reader** (continuation of LoadSettings, split by Ghidra). For every key: `json_pointer(section)` + key name, then `sub_10239b20` (int), `sub_10239c10` (bool) or `sub_10239ce0` (string) with the setting's current value as the default. If the dirty flag is set, calls SaveSettings at the end. This is the "read by" function of every key below. |
| 0x10239b20 | `sub_10239b20` | int getter: if the key exists and is a number, take it, else the default; then **clamp to [min, max]** of the setting (INT_MIN / INT_MAX mean "no bound"; disassembly at 0x10239bc4: `cmp eax,0x80000000` / `cmovl`, `cmp eax,0x7fffffff` / `cmovg`). Unlike BH's `Config::GetInt`, a bound of 0 is a real bound. |
| 0x10239c10 | `sub_10239c10` | bool getter (key present and boolean, else the default). |
| 0x10239ce0 | `sub_10239ce0` | string getter. |
| 0x10239e00 | `sub_Settings_10239e00` | **SaveSettings**: writes all 75 keys back (`setw(4)`). 29 inlined copies of it exist in the option-menu callbacks (`sub_Settings_1022abb0` ... in `_unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit07.cpp` and `_unattributed/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp`): each toggles one setting, then saves. |
| 0x102ac5e0 | `sub_102ac5e0` (unit 30 file) | Static initializer of the settings object: file names, then the defaults via `sub_102ac7f0` (audio), `sub_102aca40` (video), `sub_102acad0` (map), `sub_102acb80` (ui), `sub_102acd20` (bnet + strings), inline stores (pd2 bools/ints), `sub_102acc30` (auras). |

### Setting layout (where the defaults come from)

* **int**: `struct { int value; int default; int min; int max; }` (16 bytes). The table's Default/Range columns are
  these words as set by the initializer.
* **bool**: `struct { bool value; bool default; }` (2 bytes).
* **string**: `struct { std::string value; std::string default; }` (2 × 0x18 bytes).

A missing key keeps the default; a present key of the wrong JSON type also keeps the default (the getter checks the
type before converting). Out-of-range ints are clamped silently.

### Classic settings = emulated registry

The 35 keys marked "registry emulation" replace Diablo II's registry values (`HKCU\Software\Blizzard
Entertainment\Diablo II`). PD2 builds two `std::map<std::string, Setting*>` from them in static initializers:
`sub_init_100a25f0` (0x100a25f0: 27 int settings, map at 0x104e0ab8) and `sub_init_100a29c0` (0x100a29c0: 8 string
settings, map at 0x104e0a70). The game's Storm registry calls are redirected to four replacements:

| Address | Replaces | Behaviour |
|---|---|---|
| 0x10239850 `sub_10239850` | `SRegLoadString` | normalize the value name, look it up in the string map, copy the value out |
| 0x10239910 `sub_10239910` | `SRegLoadValue` | same for the int map (writes the DWORD) |
| 0x102399c0 `sub_102399c0` | `SRegSaveString` | store into the setting, then SaveSettings |
| 0x10239a70 `sub_10239a70` | `SRegSaveValue` | store into the setting, then SaveSettings |

The name normalizer `sub_10239740` (0x10239740) lowercases the registry value name and turns spaces and dots into
underscores, so "Master Volume" becomes `master_volume` and "Aux Battle.net" becomes `aux_battle_net`. The registry
names in the Meaning column are reconstructed by reversing that rule (and from the 1.13c game's registry names);
treat them as inferred. The replacements have no direct callers: their addresses are stored into
13 / 32 / 18 / 40 game call sites by the patch-table initializer `sub_init_100f3330`
(`_unattributed/between_functions_D2ServerFunctions_and_events_SkillEvents_unit30.cpp`, entries 0x100f7163..0x100f8413;
the patch tables themselves are Phase 4). Unknown names are passed through (the replacement returns 1 without
writing), so values PD2 does not map simply read as empty.

The other classic keys (`options_music_volume`, the eleven `*_volume` channels, `selected_game_server`,
`loot_alloc`) are not registry values; PD2 code reads their globals directly.

PD2-only settings (`pd2_game_settings`) are read through their globals by the functions listed in the last column;
`sub_10230xxx` / `sub_10231xxx` in unit 11 are the option-menu getters/setters (the menu strings next to them are
`QuickCast`, `WASDMovement`, `BuffTimers`, `DevAura` ...).

## Keys

"Shipped" is the value in the shipped `ProjectDiablo.json` (identical to `ProjectDiablo.json.bak`). Every key's
reader is `sub_Settings_1023b445` (0x1023b445) in the unit-19 file above; the last column lists the other functions
that read the setting's global (the 29 `sub_Settings_*` save copies are left out). File paths: `_u/` =
`4_pd2_source/ProjectDiablo/_unattributed/`.

### `/classic_game_settings/audio`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `sound_mixer` | int | 0 | 0..2 | `0` | 0x104e20d8 | D2 registry "Sound Mixer": sound mixer selection (0..2) | registry emulation (`SReg*` replacements, see above) |
| `master_volume` | int | 20 | 0..100 | `20` | 0x104e20b8 | D2 registry "Master Volume": sound effects master volume (Sound slider) | registry emulation (`SReg*` replacements, see above) |
| `music_volume` | int | 50 | 0..100 | `50` | 0x104e20c8 | D2 registry "Music Volume": music volume (Music slider) | registry emulation (`SReg*` replacements, see above) |
| `positional_bias` | int | 0 | 0..100 | `0` | 0x104e20e8 | D2 registry "Positional Bias": 3D sound bias (menu "3DBias") | registry emulation (`SReg*` replacements, see above) |
| `npc_speech` | int | 2 | 0..2 | `2` | 0x104e20f8 | D2 registry "NPC Speech": 0 audio only, 1 text only, 2 audio+text (menu AudioOnly/TextOnly/AudioText) | registry emulation (`SReg*` replacements, see above) |
| `options_music` | int | 1 | 0..1 | `1` | 0x104e2108 | D2 registry "Options Music": play music in the options menu (menu "MenuMusic") | registry emulation (`SReg*` replacements, see above) |
| `options_music_volume` | int | 28 | 0..255 | `28` | 0x104e2118 | PD2: volume of the options-menu music (not a D2 registry value) | `sub_10230620` (0x10230620, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `ui_volume` | int | 100 | 0..100 | `100` | 0x104e2128 | PD2 sound channel volume: UI sounds (menu "UiVolume") | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_10230670` (0x10230670, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `items_volume` | int | 100 | 0..100 | `100` | 0x104e2138 | PD2 sound channel volume: item sounds | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_102306c0` (0x102306c0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `monsters_volume` | int | 100 | 0..100 | `100` | 0x104e2148 | PD2 sound channel volume: monster sounds | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_10230710` (0x10230710, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `skills_volume` | int | 100 | 0..100 | `100` | 0x104e2158 | PD2 sound channel volume: skill sounds | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_10230760` (0x10230760, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `combat_volume` | int | 100 | 0..100 | `100` | 0x104e2168 | PD2 sound channel volume: combat sounds | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_102307b0` (0x102307b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `ambient_volume` | int | 100 | 0..100 | `100` | 0x104e2178 | PD2 sound channel volume: ambient sounds | `client_Sound_SoundInstance_10234810` (0x10234810, client/Sound/SoundInstance.cpp); `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_10230800` (0x10230800, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `voice_volume` | int | 100 | 0..100 | `100` | 0x104e2188 | PD2 sound channel volume: voices | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_10230850` (0x10230850, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `quest_volume` | int | 100 | 0..100 | `100` | 0x104e2198 | PD2 sound channel volume: quest sounds (menu "QuestsVolume") | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_102308a0` (0x102308a0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `objects_volume` | int | 100 | 0..100 | `100` | 0x104e21a8 | PD2 sound channel volume: object sounds | `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `client_Sound_Sound_10233980` (0x10233980, client/Sound/Sound.cpp); `sub_102308f0` (0x102308f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `item_drop_volume` | int | 60 | 0..100 | `60` | 0x104e21b8 | PD2 sound channel volume: loot-filter drop sounds (used by `_D2Client_PlaySoundWithCustomVolumeOrPriority@20`) | `_D2Client_PlaySoundWithCustomVolumeOrPriority@20` (0x10233b50, client/Sound/Sound.cpp); `client_Sound_Sound_10232420` (0x10232420, client/Sound/Sound.cpp); `sub_10230940` (0x10230940, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |

### `/classic_game_settings/video`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `contrast` | int | 75 | 0..100 | `75` | 0x104e21c8 | D2 registry "Contrast" | registry emulation (`SReg*` replacements, see above) |
| `gamma` | int | 105 | 55..255 | `105` | 0x104e21d8 | D2 registry "Gamma" | registry emulation (`SReg*` replacements, see above) |
| `perspective` | int | 0 | 0..1 | `0` | 0x104e21e8 | D2 registry "Perspective" (0 off, 1 on) | registry emulation (`SReg*` replacements, see above) |
| `light_quality` | int | 2 | 0..2 | `2` | 0x104e21f8 | D2 registry "Light Quality": 0 low, 1 medium, 2 high | registry emulation (`SReg*` replacements, see above); `sub_10230a70` (0x10230a70, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230ae0` (0x10230ae0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `blended_shadows` | int | 1 | 0..1 | `1` | 0x104e2208 | D2 registry "Blended Shadows" | registry emulation (`SReg*` replacements, see above) |

### `/classic_game_settings/map`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `automapfade` | int | 3 | 0..3 | `3` | 0x104e2218 | D2 registry "AutomapFade": automap fade level (menu AutoMapFade: No/Center/Everything/Auto) | registry emulation (`SReg*` replacements, see above) |
| `automap_centers` | int | 1 | 0..1 | `1` | 0x104e2228 | D2 registry "Automap Centers": centre automap on player | registry emulation (`SReg*` replacements, see above) |
| `automap_party` | int | 1 | 0..1 | `1` | 0x104e2238 | D2 registry "Automap Party": show party on automap | registry emulation (`SReg*` replacements, see above) |
| `automap_party_names` | int | 1 | 0..1 | `1` | 0x104e2248 | D2 registry "Automap Party Names": show party names on automap | registry emulation (`SReg*` replacements, see above) |
| `automap_left` | int | 1 | 0..1 | `1` | 0x104e2258 | D2 registry "Automap Left" | registry emulation (`SReg*` replacements, see above) |
| `automapmode` | int | 0 | 0..1 | `0` | 0x104e2268 | D2 registry "AutomapMode": 0 full, 1 mini (menu AutoMapMode Full/Mini) | registry emulation (`SReg*` replacements, see above); `sub_10230c20` (0x10230c20, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230c70` (0x10230c70, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |

### `/classic_game_settings/ui`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `show_hp_text` | int | 1 | 0..1 | `1` | 0x104e2278 | D2 registry "Show HP Text": numeric life over the orb (PD2 menu HealthManaVals) | registry emulation (`SReg*` replacements, see above); `sub_10231130` (0x10231130, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102311c0` (0x102311c0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10256420` (0x10256420, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `show_mp_text` | int | 1 | 0..1 | `1` | 0x104e2288 | D2 registry "Show MP Text": numeric mana over the orb | registry emulation (`SReg*` replacements, see above); `sub_10231130` (0x10231130, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102311c0` (0x102311c0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10256420` (0x10256420, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `help_menu` | int | 0 | 0..1 | `0` | 0x104e2298 | D2 registry "Help Menu" | registry emulation (`SReg*` replacements, see above) |
| `popuphireling` | int | 1 | 0..1 | `1` | 0x104e22a8 | D2 registry "PopupHireling" | registry emulation (`SReg*` replacements, see above) |
| `always_run` | int | 1 | 0..1 | `1` | 0x104e22b8 | D2 registry "Always Run" | registry emulation (`SReg*` replacements, see above) |
| `mini_panel` | int | 1 | 0..1 | `1` | 0x104e22c8 | D2 registry "Mini Panel" | registry emulation (`SReg*` replacements, see above) |

### `/classic_game_settings/bnet`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `skip_to_open` | int | 0 | 0..0 | `0` | 0x104e22d8 | D2 registry "Skip To Open" (skip to Open Battle.net). **max = 0, so the loader always clamps it to 0** (PD2 uses the launcher's `-skiptobnet` instead) | registry emulation (`SReg*` replacements, see above) |
| `aux_battle_net` | string | `<redacted: IPv4 string>` | string | `<redacted: IPv4 string; equals the code default>` | 0x104e22e8 | D2 registry "Aux Battle.net": realm gateway IP list (BnClient) | registry emulation (`SReg*` replacements, see above) |
| `lasttcpip` | string | `""` | string | `""` | 0x104e2318 | D2 registry "LastTCPIP": last TCP/IP join address | registry emulation (`SReg*` replacements, see above) |
| `preferred_realm` | string | `"ProjectD2"` | string | `"ProjectD2"` | 0x104e2348 | D2 registry "Preferred Realm" | registry emulation (`SReg*` replacements, see above) |
| `default_channel` | string | `""` | string | `""` | 0x104e2378 | D2 registry "Default Channel" (also read by PD2 0x102e5480) | registry emulation (`SReg*` replacements, see above); `sub_102e5480` (0x102e5480, _u/between_functions_ItemFunctions_and_functions_SaveFunctions_unit44.cpp) |
| `last_bnet` | string | `""` | string | `""` | 0x104e23a8 | D2 registry "Last BNet" | registry emulation (`SReg*` replacements, see above) |
| `max_player` | int | 8 | 1..8 | `8` | 0x104e23d8 | D2 registry "Max Player": last game-create max players | registry emulation (`SReg*` replacements, see above) |
| `diff_level` | int | 2 | 0..2 | `2` | 0x104e23e8 | D2 registry "Diff Level": last game-create difficulty | registry emulation (`SReg*` replacements, see above) |
| `lvl_rest` | int | 666 | 0..666 | `666` | 0x104e23f8 | D2 registry "Lvl Rest": last game-create level restriction (666 = none) | registry emulation (`SReg*` replacements, see above) |
| `selected_game_server` | int | 10 | 1..10 | `10` | 0x104e2408 | PD2: game-server region selected on the create-game screen | `functions_D2NewFunctions_102ca830` (0x102ca830, functions/D2NewFunctions.cpp); `functions_D2NewFunctions_102ca910` (0x102ca910, functions/D2NewFunctions.cpp); `sub_102e4540` (0x102e4540, _u/between_functions_ItemFunctions_and_functions_SaveFunctions_unit44.cpp) |
| `loot_alloc` | int | 0 | 0..1 | `0` | 0x104e2418 | PD2: loot-allocation mode selected on the create-game screen (0/1) | `functions_D2NewFunctions_102ca8a0` (0x102ca8a0, functions/D2NewFunctions.cpp); `functions_D2NewFunctions_102ca910` (0x102ca910, functions/D2NewFunctions.cpp); `sub_102e4540` (0x102e4540, _u/between_functions_ItemFunctions_and_functions_SaveFunctions_unit44.cpp) |

### `/classic_game_settings/other`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `lng_file` | string | `""` | string | `""` | 0x104e2428 | D2 registry "Lng File" | registry emulation (`SReg*` replacements, see above) |
| `installpath` | string | `""` | string | `<redacted: Windows path>` | 0x104e2458 | D2 registry "InstallPath": game directory | registry emulation (`SReg*` replacements, see above) |
| `save_path` | string | `""` | string | `<redacted: Windows path>` | 0x104e2488 | D2 registry "Save Path": single-player save directory | registry emulation (`SReg*` replacements, see above) |

### `/pd2_game_settings`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `equipment_lock` | bool | false | true/false | `false` | 0x104e24b8 | PD2: lock equipped items against accidental removal | `functions_D2ClientFunctions_1022ee50` (0x1022ee50, functions/D2ClientFunctions.cpp); `sub_1023cc90` (0x1023cc90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp); `sub_Hook_sub_6fb49440_102582c0` (0x102582c0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `buff_timers` | bool | true | true/false | `true` | 0x104e24ba | PD2: buff timer bar (menu BuffTimers) | `sub_10230d00` (0x10230d00, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10257220` (0x10257220, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `quick_cast` | bool | true | true/false | `true` | 0x104e24bc | PD2: quick cast (menu QuickCast) | `sub_10230d30` (0x10230d30, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10236e90` (0x10236e90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit17.cpp); `sub_102598e0` (0x102598e0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `skill_bar` | bool | true | true/false | `true` | 0x104e24be | PD2: skill bar (menu SkillBar) | `sub_10230d60` (0x10230d60, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102574e0` (0x102574e0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `screenshake` | bool | true | true/false | `true` | 0x104e24c0 | PD2: screen shake (menu ScreenShake) | `sub_10230d90` (0x10230d90, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10259d70` (0x10259d70, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10259d70.cpp) |
| `dps` | bool | false | true/false | `false` | 0x104e24c2 | PD2: DPS counter (menu DPSCounter) | `sub_1022ac10` (0x1022ac10, _u/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit07.cpp); `sub_10230da0` (0x10230da0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230dd0` (0x10230dd0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cc30` (0x1023cc30, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp); `sub_102defd0` (0x102defd0, _u/between_functions_ItemFunctions_and_functions_SaveFunctions_unit44.cpp) |
| `belt_status` | bool | true | true/false | `true` | 0x104e24c4 | PD2: belt status display (menu BeltStatus) | `sub_10230e00` (0x10230e00, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10256fb0` (0x10256fb0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `translucent_party` | bool | false | true/false | `false` | 0x104e24c6 | PD2: translucent party members (menu TranslucentParty) | `sub_10230e30` (0x10230e30, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1025c380` (0x1025c380, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10259d70.cpp); `sub_1025c3c0` (0x1025c3c0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10259d70.cpp) |
| `wasd_movement` | bool | false | true/false | `false` | 0x104e24c8 | PD2: WASD movement (menu WASDMovement) | `sub_10229440` (0x10229440, _u/between_client_DrawHoverItem_and_functions_D2ClientFunctions_unit07.cpp); `sub_10230e40` (0x10230e40, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230e60` (0x10230e60, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230e70` (0x10230e70, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10237380` (0x10237380, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit17.cpp); `sub_102594d0` (0x102594d0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp); `sub_1025c3f0` (0x1025c3f0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10259d70.cpp); `sub_Hook_sub_6fb739e0_102589a0` (0x102589a0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `controller_movement` | bool | true | true/false | `true` | 0x104e24ca | PD2: controller movement (menu ControllerMovement; XInput) | `sub_1022ca30` (0x1022ca30, _u/between_client_DrawHoverItem_and_functions_D2ClientFunctions_after_unit07.cpp); `sub_10230f10` (0x10230f10, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230f20` (0x10230f20, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10256420` (0x10256420, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp); `sub_Hook_sub_6fb739e0_102589a0` (0x102589a0, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `controller_sensitivity` | int | 50 | 0..100 | `50` | 0x104e24cc | PD2: controller sensitivity (menu Sensitivity) | `sub_102158c0` (0x102158c0, _u/before_client_DrawHoverItem_unit01.cpp); `sub_10230f60` (0x10230f60, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `controller_aim_assist` | int | 1 | 0..2 | `1` | 0x104e24dc | PD2: controller aim assist level (menu AimAssist) | `sub_10214da0` (0x10214da0, _u/before_client_DrawHoverItem_unit01.cpp); `sub_10230fb0` (0x10230fb0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `controller_deadzone` | int | 20 | 0..40 | `20` | 0x104e24ec | PD2: stick dead zone (menu Deadzone) | `sub_10214350` (0x10214350, _u/before_client_DrawHoverItem_unit01.cpp; Controller_GetDeadzone, see `4_pd2_source/ProjectDiablo/features/Controller/`); `sub_10231000` (0x10231000, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `auto_equip` | bool | true | true/false | `true` | 0x104e24fc | PD2: auto-equip picked-up items (menu AutoEquip) | `functions_D2ClientFunctions_1022ec90` (0x1022ec90, functions/D2ClientFunctions.cpp); `sub_10230e70` (0x10230e70, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230e90` (0x10230e90, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `always_regenerate_levels` | bool | false | true/false | `false` | 0x104e24fe | PD2 single player: always regenerate levels (menu AlwaysRegenerateLevels; read in SaveFunctions) | `functions_SaveFunctions_102e8f00` (0x102e8f00, functions/SaveFunctions.cpp); `sub_10231050` (0x10231050, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `player_count` | int | 1 | 1..8 | `1` | 0x104e2500 | PD2 single player: /players count (menu PlayerCount) | `sub_10231060` (0x10231060, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231120` (0x10231120, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cd10` (0x1023cd10, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |
| `showItemHelpText` | bool | true | true/false | `true` | 0x104e2510 | PD2: item help text on hover (menu ItemHelpText) | `client_DrawHoverItem_10220830` (0x10220830, client/DrawHoverItem.cpp); `sub_10231230` (0x10231230, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `controller_button_style` | int | 0 | 0..2 | `0` | 0x104e2514 | PD2: controller button glyphs: 0 auto, 1 Xbox, 2 PlayStation (menu Auto/MenuXbox/MenuPS) | `client_DrawHoverItem_10220830` (0x10220830, client/DrawHoverItem.cpp); `sub_1022b730` (0x1022b730, _u/between_client_DrawHoverItem_and_functions_D2ClientFunctions_after_unit07.cpp); `sub_10230ea0` (0x10230ea0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10230ee0` (0x10230ee0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `controllerMultiButtonLoot` | bool | false | true/false | `false` | 0x104e2524 | PD2: controller multi-button loot (menu ControllerMultiButtonLoot) | `sub_10215240` (0x10215240, _u/before_client_DrawHoverItem_unit01.cpp); `sub_10231290` (0x10231290, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |
| `autosync` | bool | false | true/false | `false` | 0x104e2526 | PD2: autosync (menu Autosync) | `sub_10231260` (0x10231260, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10256420` (0x10256420, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_100cebc0.cpp) |
| `elme_potter` | bool | false | true/false | `false` | 0x104e2528 | PD2 developer option (menu DeveloperOpt/ElmePotter) | `sub_1022f810` (0x1022f810, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_after_unit10.cpp); `sub_102312c0` (0x102312c0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp) |

### `/pd2_game_settings/auras`

| Key | Type | Default | Range (clamp) | Shipped | Global | Meaning | Other readers (besides the loader) |
|---|---|---|---|---|---|---|---|
| `dev_aura` | int | 0 | 0..1 | `0` | 0x104e252c | PD2 cosmetic aura toggle: developer aura (menu DevAura) | `sub_102312f0` (0x102312f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231350` (0x10231350, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313b0` (0x102313b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231410` (0x10231410, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231470` (0x10231470, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314a0` (0x102314a0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314d0` (0x102314d0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cb90` (0x1023cb90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |
| `max_level_aura` | int | 0 | 0..1 | `0` | 0x104e253c | PD2 cosmetic aura toggle: max-level aura (menu LevelAura) | `sub_102312f0` (0x102312f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231320` (0x10231320, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231350` (0x10231350, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313b0` (0x102313b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231410` (0x10231410, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231470` (0x10231470, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314d0` (0x102314d0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cb90` (0x1023cb90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |
| `rathma_aura` | int | 0 | 0..1 | `0` | 0x104e254c | PD2 cosmetic aura toggle: Rathma aura | `sub_102312f0` (0x102312f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231350` (0x10231350, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313b0` (0x102313b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313e0` (0x102313e0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231410` (0x10231410, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231470` (0x10231470, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314d0` (0x102314d0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cb90` (0x1023cb90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |
| `dclone_aura` | int | 0 | 0..1 | `0` | 0x104e255c | PD2 cosmetic aura toggle: Diablo-clone aura | `sub_102312f0` (0x102312f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231350` (0x10231350, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231380` (0x10231380, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313b0` (0x102313b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231410` (0x10231410, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231470` (0x10231470, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314d0` (0x102314d0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cb90` (0x1023cb90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |
| `pvp_aura` | int | 0 | 0..1 | `0` | 0x104e256c | PD2 cosmetic aura toggle: PvP aura | `sub_102312f0` (0x102312f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231350` (0x10231350, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313b0` (0x102313b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231410` (0x10231410, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231440` (0x10231440, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231470` (0x10231470, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314d0` (0x102314d0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cb90` (0x1023cb90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |
| `lucion_aura` | int | 0 | 0..1 | `0` | 0x104e257c | PD2 cosmetic aura toggle: Lucion aura | `sub_102312f0` (0x102312f0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231350` (0x10231350, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102313b0` (0x102313b0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231410` (0x10231410, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231470` (0x10231470, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_102314d0` (0x102314d0, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_10231500` (0x10231500, _u/between_functions_D2ClientFunctions_and_client_Sound_Sound_unit11.cpp); `sub_1023cb90` (0x1023cb90, _u/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_1009a5f0.cpp) |

## Notable findings

* **`skip_to_open` is dead.** Its setting is initialized `{0, 0, 0, 0}` (`sub_102acd20` words 0..3), so the clamp
  forces it to 0 whatever the file says; D2's "Skip To Open" therefore always reads 0. Skipping to Battle.net is done
  by the launcher's `LauncherArgs.skiptobnet` (`-skiptobnet`, see `launcherSettings.json.md`).
* `lvl_rest` is clamped to 0..666 and `max_player` to 1..8, `selected_game_server` to 1..10.
* `gamma` has a lower bound of 55 (`sub_102aca40` word 6), so a gamma below 55 in the file is raised to 55.
* The shipped values equal the code defaults for every key except the redacted user paths.
* The aura keys are ints with range 0..1 (not JSON booleans), unlike the other PD2 toggles.
