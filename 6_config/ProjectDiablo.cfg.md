# ProjectDiablo.cfg (legacy, unread)

**No shipped binary reads this file.** It is the old BH text config. BH read it until commit `43ff557`
("Add nlohmann json config", 2024-01-15), which replaced it by `BH.json` (see `BH.json.md`); the shipped BH.dll
(`4f7b4d7`) contains no `.cfg` string, and neither do ProjectDiablo.dll, PD2_EXT.dll or D2GL. The file survives
because the launcher still lists it: it is in the launcher's update-exclusion list
(`PD2Shared/Constants.cs:28` and `PD2Launcherv2/Constants.cs:9` of `Project-Diablo-2/PD2Launcher@300ed6f`, together with
`ddraw.ini`, `default.filter`, `loot.filter`), and it is one of the 47 files in `local_metadata.json`, so the
SHA-metadata updater still downloads it (see `launcherSettings.json.md` / `local_metadata.json.md`).

| | |
|---|---|
| Path | `<game dir>\ProjectDiablo.cfg` (old fallback: `ProjectDiablo_Default.cfg`, [BH.cpp:74-80@0070b07](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/BH.cpp#L74)) |
| Format | BH line config: `Key: value`, anything after `//` is a comment, key and value trimmed, split at the first `:` (`Config::Parse`, still present at [Config.cpp:456-506@4f7b4d7](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Config.cpp#L456) and used today only for the loot filter). `Key[sub]: value` lines form arrays/maps (`ReadMapList`, `ReadArray`, `ReadAssoc`). Toggles are `<True\|False>, <key name>`. Lookups are exact, case-sensitive `std::map` finds. |
| Keys | **30** distinct keys (36 value lines). Read by shipped code: **0**. Unread: **30**. Code-only: n/a |

## Keys

"Last reader" is the BH source at `0070b0776e8e50500b52ac87c002a68f750ae98c`, the parent of `43ff557`, i.e. the last
commit that loaded `ProjectDiablo.cfg`. None of the values contain personal data.

| Key | Type | Shipped value | Last reader (BH@0070b07, the parent of 43ff557) | Successor in BH.json |
|---|---|---|---|---|
| `Whisper Color[<account>]` | assoc (one line per entry) | `[*chat]: 9`, `[*hc]: 7` | `Config::ReadAssoc` at [Modules/ChatColor/ChatColor.cpp:41](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/ChatColor/ChatColor.cpp#L41) | `bnet.whisper_color` |
| `Reload Config` | key name | `VK_NUMPAD0` | `Config::ReadKey` at [Modules/GameSettings/GameSettings.cpp:37](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/GameSettings/GameSettings.cpp#L37) | none (BH.h:94 has it commented out; reload is triggered through ProjectDiablo.dll `BH_CONFIG_RELOAD`) |
| `Stats on Right` | toggle `bool, key` | `False, None` | `Config::ReadToggle` at [Drawing/Stats/StatsDisplay.cpp:230](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Drawing/Stats/StatsDisplay.cpp#L230) | `general.stats_on_right` |
| `AutomapInfo[n]` | array (n = 0..) | 6 entries: `Name: %GAMENAME%`, `Password: %GAMEPASS%`, `%LEVEL%`, `%GAMEDIFF%`, `%GAMETIME%`, `Ping: %PING%` (a 7th, `%ACCOUNTNAME%`, is commented out) | `Config::ReadArray` at [Modules/ScreenInfo/ScreenInfo.cpp:37](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/ScreenInfo/ScreenInfo.cpp#L37) | `screen_info.automap_info` |
| `Experience Meter` | toggle | `False, VK_NUMPAD7` | `Config::ReadToggle` at [Modules/ScreenInfo/ScreenInfo.cpp:35](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/ScreenInfo/ScreenInfo.cpp#L35) | `game.experience_meter` (hotkey dropped) |
| `Minimap Max Ghost` | int | `0` | none | none; already unread at the last cfg-based commit (read only by the Maphack module of the upstream lineage, slashdiablo `BH/Modules/Maphack/Maphack.cpp:163`) |
| `Quest Drop Warning` | bool | `False` | none | none; only a commented-out use at ScreenInfo.cpp:186 (upstream AutoTele module) |
| `GameListRefresh` | int (ms) | `1500` | `Config::ReadInt` at [Modules/Gamefilter/Gamefilter.cpp:27](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Gamefilter/Gamefilter.cpp#L27) | `bnet.game_list_refresh` |
| `Show Difficulty` | bool | `True` | `Config::ReadBoolean` at [Modules/Gamefilter/Gamefilter.cpp:40](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Gamefilter/Gamefilter.cpp#L40) | `bnet.show_difficulty` |
| `Show Gameserver` | bool | `True` | `Config::ReadBoolean` at [Modules/Gamefilter/Gamefilter.cpp:41](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Gamefilter/Gamefilter.cpp#L41) | `bnet.show_gameserver` |
| `Autofill Last Game` | bool | `True` | `Config::ReadBoolean` at [Modules/Bnet/Bnet.cpp:39](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Bnet/Bnet.cpp#L39) | `bnet.autofill_last_game` |
| `Autofill Next Game` | bool | `True` | `Config::ReadBoolean` at [Modules/Bnet/Bnet.cpp:41](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Bnet/Bnet.cpp#L41) | `bnet.autofill_next_game` |
| `Autofill Last Password` | bool | `True` | `Config::ReadBoolean` at [Modules/Bnet/Bnet.cpp:40](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Bnet/Bnet.cpp#L40) | `bnet.autofill_last_password` |
| `Autofill Description` | bool | `True` | `Config::ReadBoolean` at [Modules/Bnet/Bnet.cpp:42](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Bnet/Bnet.cpp#L42) | `bnet.autofill_description` |
| `Fail To Join` | int (ms) | `4000` | `Config::ReadInt` at [Modules/Bnet/Bnet.cpp:43](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Bnet/Bnet.cpp#L43) | `bnet.fail_to_join` |
| `Character Stats` | key name | `VK_8` | `Config::ReadKey` at [Modules/GameSettings/GameSettings.cpp:36](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/GameSettings/GameSettings.cpp#L36) | none (advanced-stats key now comes from ProjectDiablo.dll, `BH_CONFIG_ADVANCEDSTATS`) |
| `Show Ethereal` | toggle | `False, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:565](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L565) | `lootfilter.legacy_settings.show_ethereal` |
| `Show Sockets` | toggle | `False, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:566](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L566) | `lootfilter.legacy_settings.show_sockets` |
| `Show iLvl` | toggle | `True, None` | `Config::ReadToggle` (as "Show ILvl") at [Modules/Item/Item.cpp:567](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L567) | `lootfilter.show_iLvl`. **The old reader asked for `"Show ILvl"` and the cfg map is case-sensitive, so this line was never matched even by the legacy reader** |
| `Show Rune Numbers` | toggle | `False, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:568](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L568) | `lootfilter.legacy_settings.show_rune_numbers` |
| `Alt Item Style` | toggle | `False, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:569](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L569) | `lootfilter.legacy_settings.alt_item_style` |
| `Color Mod` | toggle | `False, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:570](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L570) | `lootfilter.legacy_settings.color_mod` |
| `Shorten Item Names` | toggle | `False, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:571](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L571) | `lootfilter.legacy_settings.shorten_item_names` |
| `Show Players Gear` | key name | `VK_0` | `Config::ReadKey` at [Modules/GameSettings/GameSettings.cpp:34](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/GameSettings/GameSettings.cpp#L34) | none |
| `Party Enabled` | toggle | `True, None` | `Config::ReadToggle` at [Modules/Party/Party.cpp:13](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Party/Party.cpp#L13) | `party.auto_party` |
| `Looting Enabled` | toggle | `True, None` | `Config::ReadToggle` at [Modules/Party/Party.cpp:14](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Party/Party.cpp#L14) | `party.auto_corpse_loot` |
| `Advanced Item Display` | toggle | `True, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:573](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L573) | `lootfilter.advanced_item_display` |
| `Item Drop Notifications` | toggle | `True, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:574](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L574) | `lootfilter.legacy_settings.drop_notifications` |
| `Item Close Notifications` | toggle | `True, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:575](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L575) | `lootfilter.legacy_settings.close_notifications` |
| `Item Detailed Notifications` | toggle | `True, None` | `Config::ReadToggle` at [Modules/Item/Item.cpp:576](https://github.com/Project-Diablo-2/BH/blob/0070b0776e8e50500b52ac87c002a68f750ae98c/BH/Modules/Item/Item.cpp#L576) | `lootfilter.detailed_notifications` (now an int 0..2) |

## Findings

* 25 of the 30 keys have a BH.json successor with the same meaning (`Experience Meter` loses its hotkey,
  `Item Detailed Notifications` becomes an int 0..2); 3 (`Reload Config`, `Character Stats`, `Show Players Gear`)
  became hard-wired or moved to ProjectDiablo.dll's config messages; 2 (`Minimap Max Ghost`, `Quest Drop Warning`)
  were already dead before the switch.
* `Show iLvl` never worked from this file: the reader asked for `Show ILvl` (case-sensitive).
* Editing this file has no effect on the current client.
