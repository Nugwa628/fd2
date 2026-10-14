# Loot filter format (`*.filter`)

Loot filters are read by **BH.dll** (PD2's BH fork, built from `Project-Diablo-2/BH@4f7b4d7`; links go to
`https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/<file>#L<line>`). This page is the grammar as that code implements it. Older BH means the
slashdiablo lineage (`planqi/slashdiablo-maphack@6226ef3`, 2024-08-03, cloned at `fd2_work/ext/slashdiablo-maphack`).

## Which file is loaded

`BH::LoadLootFilter` ([BH.cpp:189-230](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/BH.cpp#L189)), run at start-up and on every config reload:

1. From `./AppData/launcherSettings.json`: if `SelectedAuthorAndFilter.selectedAuthor.author` and
   `.selectedFilter.name` exist, `filters\local\<name>` (author `"Local Filter"`) or `filters\online\<name>`.
2. Else, or if that file cannot be opened: `loot.filter`.
3. Else `default.filter`; else a message box "Could not find default loot filter" and no rules.

All three are relative to BH's module directory (`BH::path`). The shipped install has no selection (both `null`)
and no `loot.filter`, so it uses **`default.filter`**, which contains only the comment
`// Default filter (don't filter anything!)`: no rules, filter levels "0 - Show All Items" and "1 - Standard".

## File syntax

Parsed by `Config::Parse` ([Config.cpp:456-506](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Config.cpp#L456)), the old BH config reader:

* Line based. Everything from the first `//` on a line is a comment (also inside values, so a URL breaks a line).
  Blank lines are skipped. Files are read as narrow (ANSI) text and widened later.
* `key: value` — split at the **first** `:`; key and value are trimmed. A key may appear many times; order is kept.
* Only four keys are used, all in the form `Name[inner]: value` (`ReadMapList`,
  [Config.cpp:518-535](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Config.cpp#L518); `inner` = text between the first `[` and the last character of the
  key, which must be `]`):

| Line | Meaning | Read at |
|---|---|---|
| `Alias[NAME]: replacement` | Text macro. `NAME` is cut at the first space. Every occurrence of `NAME` in rule **conditions** is replaced textually (substring match, applied in file order), and `%NAME%` (upper-cased) in rule **actions** is replaced. PD2 addition. | [ItemDisplay.cpp:3310-3314](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3310), applied at [3351-3366](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3351) |
| `Formula[NAME]: expression` | Named numeric formula (grammar below), registered as `FORMULANAME` (upper-cased): usable as a condition keyword and as `%FORMULANAME%` in actions. PD2 addition. | [3316](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3316), [3335-3348](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3335) |
| `ItemDisplay[conditions]: action` | A rule. | [3318-3322](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3318), built at [3368-3393](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3368) |
| `ItemDisplayFilterName[]: label` | Defines filter level `n` (1-based, in file order) shown as `"<n> - <label>"`; at most 12; if none, a single level "1 - Standard" exists. Level 0 is always "Show All Items". PD2 addition. | [3398-3420](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3398) |

Older BH also read `ConditionGroup[...]`, `ClassSkillsList[...]`, `TabSkillsList[...]` and `No Item Level[...]` from
the filter file; PD2's BH reads none of them (the skill lists moved to `BH.json`
`lootfilter.class_skills_list` / `tab_skills_list`).

## Rules and evaluation

* Rules are kept in file order (`RuleList`). For the item **name** and **description**, every matching rule is
  applied in order and processing stops at the first matching rule that does **not** contain `%CONTINUE%`
  (`ItemNameLookupCache::make_cached_T`, [ItemDisplay.cpp:2777-2795](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L2777)). With `%CONTINUE%` the next
  rule sees the previous result as `%NAME%`.
* A rule whose action (after token extraction) is empty is a **hide** rule: when the active filter level is > 0 the
  item gets `UNITFLAGEX_INVISIBLE` ([Item.cpp:1100-1108](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/Item.cpp#L1100)). Level 0 shows everything.
* A rule with any map/notify token (`%MAP%`, `%MAP-xx%`, `%BORDER-xx%`, `%DOT-xx%`, `%PX-xx%`, `%LINE-xx%`,
  `%SOUNDID-n%`) also goes to `MapRuleList`, used for automap markers, drop notifications and drop sounds
  ([MapNotify.cpp:74-120](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/MapNotify/MapNotify.cpp#L74)); these honour `%TIER-n%` (below).
* Item names that contain newlines are drawn as multiple lines; in chat they are joined with `" - "`.

## Conditions

The condition text is split on **whitespace** into tokens ([3372-3378](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3372)); each token is parsed by
`Condition::BuildConditions` ([3766-4441](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3766)). **No spaces inside a comparison** (`FRES>30`, not `FRES > 30`).

* Leading/trailing `!`, `(`, `)` of a token are operators. Juxtaposed operands are joined by an implicit
  `AND` (`AddOperand`, [4445-4462](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L4445)). `AND`/`&&`, `OR`/`||`, `!`, parentheses; `!` binds tighter than
  `AND`/`OR`, and `AND` and `OR` have **equal precedence, left to right** (shunting-yard,
  `ProcessConditions` [3702-3764](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3702)). A malformed expression makes the rule never match.
* Comparison: `KEY<op><int>` with `<op>` = `=`, `<`, `>` or `~` (between, inclusive: `KEY~10-20`); only the first
  character of the operator counts (`GetOperation`, [3147-3155](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3147)), so `>=` is not available. Values are
  integers (decimal). A keyword without an operator: flag keywords test a property; numeric keywords then compare
  with "NONE", which is false. A malformed number drops the token.
* Keyword lookup order: exact keyword (table below); else, if the token has ≥3 characters and none of the first three
  is upper-case: **item code** (first 4 characters, exact match, e.g. `r33`, `7cr`, `gld`); else a token containing
  `+`: **sum** of stats/formulas (`FRES+CRES+LRES>90`, any keyword of the "Stat" group, `STATn`, `MULTIn,m`
  or a formula, [AddCondition::Init 5171-5203](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L5171)); else prefix keywords `SK`, `OS`, `CHSK`, `CLSK`,
  `TABSK`, `STAT`, `CHARSTAT`, `MULTI`; else a defined formula name. Keywords are **case-sensitive**.

### Keyword reference

From `condition_map` ([ItemDisplay.cpp:569-764](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L569)) and the switch in `BuildConditions`. "PD2" = not in
older BH. Item stats are read from the item; LIFE/MANA are divided by 256.

| Group | Keyword(s) | Argument | Tests |
|---|---|---|---|
| Logic | `AND` `&&`, `OR` `\|\|`, `!`, `(` `)`; `TRUE`, `FALSE` (PD2) | - | operators / constants |
| Quality | `NMAG`, `INF`, `SUP`, `MAG`, `SET`, `RARE`, `UNI`, `CRAFT`, `RW` | - | quality; NMAG = not magic or better; RW = runeword flag |
| Flags | `ETH`, `ID` | - | ethereal, identified |
| Tier / class | `NORM`, `EXC`, `ELT`, `CLASS` (PD2) | - | base tier, class-specific base |
| Item type | `WEAPON`, `ARMOR`, `HELM`/`EQ1`, `CHEST`/`EQ2`, `SHIELD`/`EQ3`, `GLOVES`/`EQ4`, `BOOTS`/`EQ5`, `BELT`/`EQ6`, `CIRC`/`EQ7`, `DRU`/`CL1`, `BAR`/`CL2`, `DIN`/`CL3`, `NEC`/`CL4`, `SIN`/`CL5`, `SOR`/`CL6`, `ZON`/`CL7`, `AXE`/`WP1`, `MACE`/`WP2`, `SWORD`/`WP3`, `DAGGER`/`WP4`, `THROWING`/`WP5`, `JAV`/`WP6`, `SPEAR`/`WP7`, `POLEARM`/`WP8`, `BOW`/`WP9`, `XBOW`/`WP10`, `STAFF`/`WP11`, `WAND`/`WP12`, `SCEPTER`/`WP13`, `CLUB`, `TMACE`, `HAMMER`, `1H`, `2H`, `MISC`, `JEWELRY`, `CHARM`, `QUIVER` | - | item group. Older BH wrote `EQn`/`CLn`/`WPn` as prefix keywords; PD2 lists them explicitly and adds `CLUB`, `TMACE`, `HAMMER`, `1H`, `2H`, `MISC`, `JEWELRY`, `CHARM`, `QUIVER` |
| Location (PD2) | `GROUND`, `EQUIPPED`, `MERC`, `INVENTORY`, `STASH`, `CUBE`, `SHOP` | - | where the item is |
| Character | `AMAZON`, `SORCERESS`, `NECROMANCER`, `PALADIN`, `BARBARIAN`, `DRUID`, `ASSASSIN` (PD2); `CLVL`, `DIFF` (0 normal, 1 nightmare, 2 hell), `FILTLVL`, `CHARSTATn`, `MAPID` (PD2: current level id) | int | player state; `FILTLVL` = active filter level |
| Levels | `ILVL`, `QLVL`, `ALVL`, `CRAFTALVL` (affix level a craft would get: from ½ clvl + ½ ilvl), `REROLLALVL` (PD2: affix level after a reroll recipe; 0 for maps and corrupted items), `LVLREQ`, `REQLVL`/`REQSTR`/`REQDEX` (PD2), `UPLVL`/`UPSTR`/`UPDEX` (PD2: requirements after upgrading the base) | int | |
| PD2 items | `MAPTIER` (map item type → tier: T1..T5 maps 1..5, PvP maps 0; -1 for non-maps), `AUTOMOD` (automagic/class mod id; unidentified magic/rare never match), `PREFIX`, `SUFFIX` (affix row ids; only `=` and `~`; any of the item's prefixes/suffixes) | int | all PD2 |
| Runes / gems / gold | `RUNE` (1 = El ... 33 = Zod), `GEMTYPE`, `GEM`/`GEMLEVEL` (PD2 alias), `GEMMED` (PD2: has socketed items), `GOLD` (pile size) | int | |
| Sockets / size | `SOCK`/`SOCKETS` (PD2 alias), `MAXSOCKETS`, `WIDTH`, `HEIGHT`, `AREA` (PD2) | int | |
| Price (PD2 names) | `PRICE`/`SELLPRICE`, `BUYPRICE` | int | vendor price |
| Base stats (PD2) | `BASEMINONEH`, `BASEMAXONEH`, `BASEMINTWOH`, `BASEMAXTWOH`, `BASEMINTHROW`, `BASEMAXTHROW`, `BASEMINKICK`, `BASEMAXKICK`, `BASEMINSMITE`, `BASEMAXSMITE`, `BASEBLOCK` | int | base item damage/block |
| Stats | `ED` (ED% for the item type), `EDEF`, `EDAM` (PD2), `DEF`, `MAXDUR`, `RES` (all four ≥), `FRES`, `CRES`, `LRES`, `PRES`, `MAXRES` (PD2), `ALLATTRIB` (PD2), `IAS`, `FCR`, `FHR`, `FBR`, `FRW`, `LIFE`, `MANA`, `QTY` (PD2), `STR`, `DEX`, `AR`, `ARPER`, `MINDMG`, `MAXDMG`, `DTM`, `MAEK`, `REPLIFE`, `REPQUANT`, `REPAIR`, `MFIND`, `GFIND`, `ALLSK`, `FOOLS` (flag) | int | item stat value |
| Skills | `SKn` (+n to skill id n), `OSn` (oskill), `CHSKn` (charges of skill n), `CLSKn` (class n, 0..6), `TABSKn` (skill tab n), `GOODSK`, `GOODTBSK` (any class skill / tab marked in `BH.json` lists) | int | |
| Raw stats | `STATn` (stat id n, layer 0), `MULTIn,m` (stat n, layer m), `CHARSTATn` | int | |
| Formulas (PD2) | any `Formula[NAME]` → `FORMULANAME`; inline islands `$f(expr)` | optional int | without an operator: true if the value ≠ 0; with one: float compare |

Removed compared with older BH: `CLASSIC`, `XP` (player-type tests) and `COUNT=n,cond,...`.

## Formulas (PD2)

Grammar ([Formula.h:160-275](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Formula.h#L160)): numbers (`123`, `1.5`), variables (lower-case names from
`formulaVarDefs`, [ItemDisplay.cpp:1780-2745](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L1780)), operators `^` (4) `* /` (3) `+ -` (2)
`== != > < >= <=` (1), unary `-` and `!`, parentheses, and functions `if(c,a,b)`, `and`, `or`, `xor`, `min`,
`max`, `average`, `count`, `countif`, `abs`, `sign`, `floor`, `ceil`, `round`, `ln`, `exp`, `sqrt`, `pow`,
`mod`. Variables are the lower-case forms of the condition keywords (`fres`, `ilvl`, `maptier`, `eq1` ...);
parameterized ones take their numbers right after the name: `stat39`, `multi107,2`, `sk54`, `os54`, `chsk54`,
`clsk1`, `tabsk2`, `cl1`, `eq1`, `wp3`, `charstat12`; plus `onehand`, `twohand`. Results are floats; "true" means ≠ 0.
`$f(expr)` inside a condition or action is compiled into an anonymous formula `ISLAND_A`, `ISLAND_B`...
([IslandReplacementHelper 3208-3290](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3208)); in an action it prints the value.

## Actions

The text after the first `:`. Lower-case letters inside `%...%` are upper-cased first ([BuildAction 3552-3623](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L3552)).
Then these **control tokens** are extracted (removed from the text):

| Token | Meaning | Since |
|---|---|---|
| `%CONTINUE%` | keep evaluating later rules | older BH |
| `%MAP%` | legacy: mark on map, colour = the last colour keyword before it (map palette below) | older BH |
| `%MAP-hh%`, `%BORDER-hh%`, `%DOT-hh%`, `%PX-hh%`, `%LINE-hh%` | automap name colour, box border, dot, pixel, line to the item; `hh` = 1-4 hex digits = palette index | older BH |
| `%NOTIFY-hh%` | chat notification colour; `%NOTIFY-dead%` (0xdead) = no notification | older BH |
| `%TIER-n%` | notification/map tier: the rule's map/notify part is skipped when the filter level > n (`n` 0-9; no tier = always) ([Item.cpp:1062](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/Item.cpp#L1062)) | older BH |
| `%SOUNDID-n%` | play sound id `n` (row of sounds.txt, 1-4 digits) on drop, through ProjectDiablo.dll's `PlaySound` with BH.json `drop_sounds` | **PD2** |
| `{text}` | description: shown in the item tooltip (first `{...}` only) | older BH |

The rest is the display name. **Replacement tokens** `%NAME%` or `%KEY<n>%` / `%KEY<n>,<m>%` (regex
`%([A-Z_]+)(?:(\d{1,9})(?:,(\d{1,9}))?)?%`, [1180](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L1180); table [ReplacementMap 1067-1176](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L1067)); an
unknown `%X%` is left as text:

| Kind | Tokens |
|---|---|
| Item | `%NAME%` (current name, i.e. the previous rule's result), `%BASENAME%`, `%CODE%`, `%SOCKETS%`, `%RUNENUM%`, `%RUNENAME%`, `%GEMLEVEL%`, `%GEMTYPE%`, `%ILVL%`, `%ALVL%`, `%CRAFTALVL%`, `%REROLLALVL%` (PD2), `%LVLREQ%`, `%WPNSPD%`, `%RANGE%`, `%PRICE%`/`%SELLPRICE%`, `%BUYPRICE%` (PD2), `%QTY%` (PD2) |
| Stats (PD2) | `%RES%`, `%ED%`, `%EDEF%`, `%EDAM%`, `%DEF%`, `%FRES%` `%CRES%` `%LRES%` `%PRES%`, `%MAXRES%`, `%IAS%` `%FCR%` `%FHR%` `%FBR%` `%FRW%`, `%LIFE%` `%MANA%`, `%STR%` `%DEX%` `%ALLATTRIB%`, `%AR%` `%ARPER%`, `%MINDMG%` `%MAXDMG%`, `%DTM%` `%MAEK%` `%REPLIFE%` `%REPQUANT%` `%REPAIR%`, `%MFIND%` `%GFIND%`, `%REQSTR%` `%REQDEX%` `%REQLVL%`, `%UPSTR%` `%UPDEX%` `%UPLVL%`, `%MAXSOCKETS%`, `%BASEMINONEH%` ... `%BASEMAXSMITE%`, `%BASEBLOCK%` |
| Parameterized (PD2 syntax) | `%STATn%`, `%SKn%`, `%OSn%`, `%CLSKn%`, `%TABSKn%`, `%CHARSTATn%`, `%MULTIn,m%` (older BH: `%STAT-n%`) |
| Layout | `%NL%` newline, `%CL%` conditional newline, `%CS%` conditional space, `%LBRACE%` `{`, `%RBRACE%` `}`, `%PERCENT%` `%` (PD2) |
| Formulas (PD2) | `%FORMULANAME%`, `$f(expr)`, `%ALIASNAME%` |
| Colours | below |

### Colours

Text colour tokens become D2 colour codes `ÿc<x>`; map colour indices are palette entries used by `%MAP%`
(`MAP_COLOR_REPLACEMENTS`, [ItemDisplay.cpp:14-34](https://github.com/Project-Diablo-2/BH/blob/4f7b4d7cd3915b8f60f5d4fcc820f5a7e98ec71a/BH/Modules/Item/ItemDisplay.cpp#L14)).

| Token | Text code | Map palette | Note |
|---|---|---|---|
| `%WHITE%` | `ÿc0` | 0x20 | |
| `%RED%` | `ÿc1` | 0x0A | |
| `%GREEN%` | `ÿc2` | 0x84 | |
| `%BLUE%` | `ÿc3` | 0x97 | |
| `%GOLD%` | `ÿc4` | 0x0D | |
| `%GRAY%` | `ÿc5` | 0xD0 | |
| `%BLACK%` | `ÿc\x02` in Glide render mode (D2GL, `RenderMode == 4`), else `ÿc6` | 0x00 | PD2 makes it glide-dependent (older BH: `ÿc6`) |
| `%TAN%` | `ÿc7` | 0x5A | |
| `%ORANGE%` | `ÿc8` | 0x60 | |
| `%YELLOW%` | `ÿc9` | 0x0C | |
| `%PURPLE%` | `ÿc;` | 0x9B | |
| `%DARK_GREEN%` | `ÿc:` | 0x76 | |
| `%CORAL%` | `ÿc\x06` in Glide mode, else `ÿc1` | 0x66 | older BH: always `\x06` |
| `%SAGE%` | `ÿc\x07` / `ÿc2` | 0x82 | |
| `%TEAL%` | `ÿc\x09` / `ÿc3` | 0xCB | |
| `%LIGHT_GRAY%` | `ÿc\x0C` / `ÿc5` | 0xD6 | |
| `%FULL_TRANS%`, `%THREE_FOURTHS_TRANS%`, `%HALF_TRANS%`, `%QUARTER_TRANS%` | `ÿc\x40`..`ÿc\x43` when D2GL or HD text is in use, else nothing | 0xCB | **PD2** (text transparency) |

## PD2 additions over older BH (summary)

* File level: `Alias[]`, `Formula[]`, `ItemDisplayFilterName[]` (filter levels + `FILTLVL`), `$f()` islands.
* Operators: `~a-b` range; `TRUE`/`FALSE`.
* Conditions: `MAPTIER`, `MAPID`, `AUTOMOD`, `PREFIX`, `SUFFIX`, `REROLLALVL` (and `CRAFTALVL`, which the
  slashdiablo line also has), class keywords, location keywords, size, buy/sell price, base damage/block,
  requirement and upgrade keywords, `MAXRES`, `ALLATTRIB`, `EDEF`/`EDAM`, `QTY`, `GEMMED`, item-group
  keywords listed above, `+` sums.
* Actions: `%SOUNDID-n%`, transparency colours, all stat replacement tokens, `%PERCENT%`/`%LBRACE%`/`%RBRACE%`,
  `%CS%`/`%CL%`, parameterized `%STATn%` form.
* Removed: `%NOTRACK%`, `CLASSIC`, `XP`, `COUNT`, filter-file `ConditionGroup`/`ClassSkillsList`/`TabSkillsList`.
