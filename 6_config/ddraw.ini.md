# ddraw.ini

Config of **cnc-ddraw** (`ddraw.dll`, the DirectDraw wrapper used when the game is started with `-ddraw`, i.e.
`launcherSettings.json` `LauncherArgs.graphics = true`; in the default `-3dfx` mode D2GL renders and this file is
not used). The shipped ddraw.dll is the upstream author's binary, version resource 1.4.0.2, built 2021-03-21
(`0_inventory/INVENTORY.md`). Upstream has no 1.4.0.2 tag; the source is linked at
`7f9a6b5925606365c0dba20e1be64723675f0284` (2021-03-21, the last commit before the build, whose `ddraw.rc` says 1.4.0.2;
1.4.0.2 was set in `c333ff8` 2021-02-22 and replaced by 1.4.0.3 in `9ad3521` 2021-05-05). The ini is
self-documenting: each key is preceded by a comment in the shipped file, and the same template is built into the DLL
(`cfg_create_ini`, [config.c:220-546](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L220), written when `ddraw.ini` is missing).

| | |
|---|---|
| Path | `<current directory>\ddraw.ini` ([config.c:22-30](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L22)) |
| Format | Windows INI, section `[ddraw]`; a section named after the process (`[Game]`) overrides it key by key, optionally gated by its `checkfile=` ([config.c:548-568](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L548)) |
| Value parsing | bool: `yes`, `true` or `1` (case-insensitive) is true, anything else false ([config.c:570-576](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L570)); int: `atoi` ([config.c:578-587](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L578)) |
| Writers | cnc-ddraw itself (`cfg_save`, [config.c:182-218](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L182): `width`, `height`, `posX`, `posY`, `windowed` on exit when `savesettings` is 1 or 2) and the PD2 launcher (`DDrawHelpers.WriteDdrawOptions`, [PD2Launcherv2/Helpers/DDrawHelpers.cs:98-166](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Launcherv2/Helpers/DDrawHelpers.cs#L98), from `launcherSettings.json` → `DdrawOptions`, lower-cased values) |
| Keys | **26** in the shipped file. Read by code: 31 (+ `checkfile` in per-process sections). Shipped but unread: **1** (`resizeable`). Read by code but absent from the shipped file: **6** (`resizable`, `accuratetimers`, `fixchildwindows`, `sierrahack`, `dk2hack`, `bpp`) |

The shipped file has no personal data (window values are generic). It matches the server copy (its MD5 is the one
listed in `local_metadata.json`), so it was not rewritten by the launcher on this install.

## Keys

| Key | Type | Default (code) | Allowed | Shipped | Meaning | Launcher `DdrawOptions` | Read by (cnc-ddraw@7f9a6b5) |
|---|---|---|---|---|---|---|---|
| `width` | int | `0` | 0 = size the game requests | `1068` | Window/stretch width (ignored when fullscreen=true) | `Width` | `cfg_load` [config.c:56](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L56) |
| `height` | int | `0` | 0 = size the game requests | `600` | Window/stretch height | `Height` | `cfg_load` [config.c:57](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L57) |
| `fullscreen` | bool | `false` | true/false | `true` | Stretch to the whole screen; with windowed=true = borderless | `Fullscreen` | `cfg_load` [config.c:107](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L107) |
| `windowed` | bool | `false` | true/false | `true` | Windowed instead of exclusive fullscreen | `Windowed` | `cfg_load` [config.c:39](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L39) |
| `maintas` | bool | `false` | true/false (needs handlemouse) | `false` | Keep aspect ratio | `Maintas` | `cfg_load` [config.c:42](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L42) |
| `boxing` | bool | `false` | true/false (needs handlemouse) | `false` | Integer scaling / windowboxing | `Boxing` | `cfg_load` [config.c:41](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L41) |
| `maxfps` | int | `-1` | -1 screen rate, 0 unlimited, n cap | `0` | Render rate cap | `MaxFps` | `cfg_load` [config.c:67](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L67) |
| `vsync` | bool | `false` | true/false | `false` | V-sync (opengl/direct3d9) | `Vsync` | `cfg_load` [config.c:45](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L45) |
| `adjmouse` | bool | `false` | true/false | `false` | Scale mouse sensitivity with the stretch | `AdjMouse` | `cfg_load` [config.c:43](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L43) |
| `shader` | string | `""` | path to a .glsl (opengl only) | `Shaders\xbr\xbr-lv2-noblend.glsl` | libretro GLSL upscaling shader | `Shader` | `cfg_load` [config.c:139](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L139) |
| `posX` | int | `-32000` | -32000 = centre | `-32000` | Window x | `PosX` | `cfg_load` [config.c:58](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L58) |
| `posY` | int | `-32000` | -32000 = centre | `-32000` | Window y | `PosY` | `cfg_load` [config.c:59](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L59) |
| `renderer` | string | `auto` | auto, opengl, gdi, direct3d9 (first letter decides: s/g gdi, d d3d9, o opengl, else auto) | `opengl` | Renderer | `Renderer` | `cfg_load` [config.c:141](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L141) |
| `devmode` | bool | `false` | true/false | `false` | Do not lock the cursor | `DevMode` | `cfg_load` [config.c:44](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L44) |
| `border` | bool | `true` | true/false | `true` | Window borders in windowed mode | `Border` | `cfg_load` [config.c:40](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L40) |
| `savesettings` | int | `1` | 0 off, 1 [ddraw] section, 2 per-game section | `1` | Save window size/position/state on exit (`cfg_save`) | `SaveSettings` | `cfg_load` [config.c:61](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L61) |
| `resizeable` | bool | - | true/false | `true` | User can resize the window | `Resizeable` | **unread** (the DLL reads `resizable`, see below) |
| `vhack` | bool | `false` | true/false | `false` | C&C video stretch hack (irrelevant for D2) | `Vhack` | `cfg_load` [config.c:47](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L47) |
| `d3d9linear` | bool | `true` | true/false | `true` | Linear filter for the direct3d9 renderer (16-bit games) | `D3d9Linear` | `cfg_load` [config.c:52](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L52) |
| `noactivateapp` | bool | `false` | true/false | `false` | Hide WM_ACTIVATEAPP/WM_NCACTIVATE | `NoActivateApp` | `cfg_load` [config.c:46](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L46) |
| `maxgameticks` | int | `0` | -1 off, -2 refresh rate, 0 emulate 60 Hz vblank, 1..1000 | `-2` | Game tick limiter | `MaxGameTicks` | `cfg_load` [config.c:84](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L84) |
| `handlemouse` | bool | `true` | true/false (false forces adjmouse) | `true` | cnc-ddraw controls the cursor | `HandleMouse` | `cfg_load` [config.c:112](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L112) |
| `hook` | int | `4` | 0 none, 1 IAT, 2 Detours, 3 IAT+Detours all modules, 4 IAT all modules | `4` | WinAPI hooking method | `Hook` | `cfg_load` [config.c:64](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L64) |
| `minfps` | int | `0` | 0 off, -1 = maxfps, 1..1000 (capped at 1000) | `0` | Force a minimum redraw rate | `MinFps` | `cfg_load` [config.c:68](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L68) |
| `nonexclusive` | bool | `false` | true/false | `false` | Disable fullscreen-exclusive mode | `NonExclusive` | `cfg_load` [config.c:50](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L50) |
| `singlecpu` | bool | `true` | true/false | `true` | Pin the process to CPU 0 | `SingleCpu` | `cfg_load` [config.c:117](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L117) |
| `accuratetimers` | bool | `false` | true/false | (absent) | Waitable timers for the limiters | - | `cfg_load` [config.c:48](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L48) |
| `resizable` | bool | `true` | true/false | (absent) | User can resize the window | - (launcher writes `resizeable` instead) | `cfg_load` [config.c:49](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L49) |
| `fixchildwindows` | bool | `true` | true/false | (absent) | Child window fix | - | `cfg_load` [config.c:51](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L51) |
| `sierrahack` | bool | `false` | true/false | (absent) | Sierra game hack | - | `cfg_load` [config.c:53](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L53) |
| `dk2hack` | bool | `false` | true/false | (absent) | Dungeon Keeper 2 hack | - | `cfg_load` [config.c:54](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L54) |
| `bpp` | int | `0` | 0, 16, 24, 32 (others -> 0) | (absent) | Force colour depth | - | `cfg_load` [config.c:131](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L131) |

## Findings

* **`resizeable` is a dead key.** cnc-ddraw at this version reads `resizable` ([config.c:49](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L49)) but its own
  template writes `resizeable=true` ([config.c:283-284](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L283)); both strings are in the shipped ddraw.dll. The
  PD2 launcher propagates the misspelling (`SetOption("resizeable", ...)`,
  [DDrawHelpers.cs:150](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Launcherv2/Helpers/DDrawHelpers.cs#L150), and reads it back at
  [DDrawHelpers.cs:76](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Launcherv2/Helpers/DDrawHelpers.cs#L76)), so the launcher's "Resizeable" option has no
  effect: the window is always resizable (code default `TRUE`).
* `maxfps`: code default is -1 (screen rate); the launcher's default is `"60"`.
* `maxgameticks=-2` keeps the game at the monitor refresh rate for flips ([config.c:84-104](https://github.com/FunkyFr3sh/cnc-ddraw/blob/7f9a6b5925606365c0dba20e1be64723675f0284/src/config.c#L84)).
