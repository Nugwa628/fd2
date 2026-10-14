# d2gl.json

Settings of **D2GL** (`glide3x.dll`, the OpenGL renderer PD2 uses in its default `-3dfx` mode). The shipped
glide3x.dll is PD2's build of D2GL 1.3.3 (PDB `...\scripts\build-d2gl-release\glide3x.pdb`, 2026-05-13, see
`0_inventory/INVENTORY.md`). Upstream `bayaraa/d2gl` v1.3.3 has **no** `d2gl.json`: it reads `d2gl.ini`
(`[Screen]/[Graphic]/[Feature]/[Other]`, `d2gl/src/option/ini.cpp` at `2bbec75`). The JSON file is a PD2 fork change
(`Project-Diablo-2/d2gl` commit `00fb16c` "Replace yaml usage with json", 2024-01-15, preceded by a YAML period;
`d586e66` added the `.bak` safeguards). Links point to the last fork commit before the DLL's build date,
`94438403389a01922be77b64197f4380681b52ad` (2026-04-23); `option/config.cpp` and `app.h` are unchanged from there to the fork head `ab34011`.

| | |
|---|---|
| Path | `d2gl.json` / `d2gl.json.bak` in the working directory ([app.h:46-47](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/app.h#L46)) |
| Format | JSON (`nlohmann::ordered_json`), 4 sections, written with `setw(4)` by `Config::SaveConfig` [config.cpp:90-166](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L90), called by the D2GL options menu ([menu.cpp:155](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/menu.cpp#L155), [283](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/menu.cpp#L283)), at the end of a load that (re)created the file ([config.cpp:347](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L347)) and after every `d2glConfigSetImpl` ([d2gl.cpp:78](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/d2gl.cpp#L78)) |
| Reader | `Config::LoadConfig` [config.cpp:168-349](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L168), called from [app.cpp:97](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/app.cpp#L97) |
| Keys | **45**. Shipped: 45. Read by code: 45. Shipped but unread: **0**. Code-only: **0** (`hd_orbs`, `hd_orbs_centered` are commented out in both reader and writer; upstream's `show_monster_res` is not read) |

Load rules: identical missing/corrupt-file handling to BH.json (create `{}`, fall back to `.bak`, reset both).
`GetInt`/`GetFloat` ([config.cpp:10-50](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L10)) take the value if present and convertible
(conversion errors are logged to the D2GL log), then clamp to the given min/max; `GetInt` treats INT_MIN/INT_MAX as
"no bound". Defaults are the `App` member initializers in [app.h](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/app.h) unless the call passes a literal.
At run time BH.dll and ProjectDiablo.dll change some of these settings through D2GL's exports
`d2glConfigQueryImpl` / `d2glConfigSetImpl` ([d2gl.cpp:30,47](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/d2gl.cpp#L30)); each such change is saved back to this file.

Note 1: `App.window.size = App.desktop_resolution` assigns the first two components of
`{SM_XVIRTUALSCREEN, SM_YVIRTUALSCREEN, SM_CXVIRTUALSCREEN, SM_CYVIRTUALSCREEN}`, i.e. the virtual-screen origin
(normally 0, 0), so a missing width/height falls to the clamp minimum 800 x 600, not to the desktop size.

The shipped values contain no personal data (window size and position are generic).

## Keys

### `screen`

| Key | Type | Default | Clamp / allowed | Shipped | Meaning | Upstream v1.3.3 ini | Read by |
|---|---|---|---|---|---|---|---|
| `window_size_width` | int | `App.desktop_resolution.x` (see note 1) | 800..virtual-screen width | `3840` | Window width (windowed mode) | `Screen/window_width` | `Config::LoadConfig` [config.cpp:237](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L237) |
| `window_size_height` | int | `App.desktop_resolution.y` (note 1) | 600..virtual-screen height | `2160` | Window height | `Screen/window_height` | `Config::LoadConfig` [config.cpp:238](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L238) |
| `window_centered` | bool | true | - | `true` | Centre the window | `Screen/centered_window` | `Config::LoadConfig` [config.cpp:240](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L240) |
| `window_position_x` | int | 0 | virtual-screen x..width | `0` | Window x when not centred | `Screen/window_posx` | `Config::LoadConfig` [config.cpp:241](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L241) |
| `window_position_y` | int | 0 | virtual-screen y..height | `0` | Window y when not centred | `Screen/window_posy` | `Config::LoadConfig` [config.cpp:242](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L242) |
| `unlock_cursor` | bool | false | - | `false` | Do not confine the cursor to the window | `Screen/unlock_cursor` | `Config::LoadConfig` [config.cpp:243](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L243) |
| `window_fullscreen` | bool | true (PD2; App default false) | - | `true` | Fullscreen | `Screen/fullscreen` | `Config::LoadConfig` [config.cpp:245](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L245) |
| `window_vsync` | bool | true | - | `true` | V-sync | `Screen/vsync` | `Config::LoadConfig` [config.cpp:246](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L246) |
| `foreground_fps_active` | bool | true (PD2; App default false) | - | `true` | Cap FPS while focused | `Screen/foreground_fps` | `Config::LoadConfig` [config.cpp:247](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L247) |
| `foreground_fps_value` | int | 60 | 25..240 | `60` | Foreground FPS cap | `Screen/foreground_fps_value` | `Config::LoadConfig` [config.cpp:248](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L248) |
| `background_fps_active` | bool | true | - | `true` | Cap FPS while unfocused | `Screen/background_fps` | `Config::LoadConfig` [config.cpp:249](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L249) |
| `background_fps_value` | int | 25 | 25..60 | `25` | Background FPS cap | `Screen/background_fps_value` | `Config::LoadConfig` [config.cpp:250](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L250) |
| `auto_minimize` | bool | false | - | `false` | Minimize fullscreen window on focus loss | `Screen/auto_minimize` | `Config::LoadConfig` [config.cpp:251](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L251) |
| `window_dark_mode` | bool | true | - | `true` | Dark window title bar | `Screen/dark_mode` | `Config::LoadConfig` [config.cpp:252](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L252) |

### `graphics`

| Key | Type | Default | Clamp / allowed | Shipped | Meaning | Upstream v1.3.3 ini | Read by |
|---|---|---|---|---|---|---|---|
| `shader_preset` | string | "anti-aliasing\\advanced-aa.slangp" | path of a .slangp under d2gl.mpq shaders | `"anti-aliasing\\advanced-aa.slangp"` | Upscaling shader preset | `Graphic/shader_preset` | `Config::LoadConfig` [config.cpp:255](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L255) |
| `sharpen` | bool | true | - | `true` | Luma sharpen pass | `Graphic/sharpen` | `Config::LoadConfig` [config.cpp:257](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L257) |
| `sharpen_strength` | float | 1.2 | 0.1..3.0 | `1.2000000476837158` | Sharpen strength | `Graphic/sharpen_strength` | `Config::LoadConfig` [config.cpp:258](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L258) |
| `sharpen_clamp` | float | 0.8 | 0.0..1.0 | `0.800000011920929` | Sharpen clamp | `Graphic/sharpen_clamp` | `Config::LoadConfig` [config.cpp:259](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L259) |
| `sharpen_radius` | float | 0.4 | 0.0..6.0 | `0.4000000059604645` | Sharpen radius | `Graphic/sharpen_radius` | `Config::LoadConfig` [config.cpp:260](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L260) |
| `fxaa` | bool | false | - | `false` | FXAA pass | `Graphic/fxaa` | `Config::LoadConfig` [config.cpp:261](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L261) |
| `fxaa_preset` | int | 1 | 0..2 (Low, Medium, High) | `1` | FXAA quality | `Graphic/fxaa_preset` | `Config::LoadConfig` [config.cpp:262](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L262) |
| `lut` | int | 0 | 0..14 (0 = game default, 1..14 = "Color #n") | `0` | Colour grading LUT | `Graphic/lut` | `Config::LoadConfig` [config.cpp:264](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L264) |
| `bloom` | bool | true | - | `true` | Bloom pass | `Graphic/bloom` | `Config::LoadConfig` [config.cpp:265](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L265) |
| `bloom_exposure` | float | 1.0 | 1.0..2.0 | `1.0` | Bloom exposure | `Graphic/bloom_exposure` | `Config::LoadConfig` [config.cpp:266](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L266) |
| `bloom_gamma` | float | 0.75 | 0.5..1.2 | `0.75` | Bloom gamma | `Graphic/bloom_gamma` | `Config::LoadConfig` [config.cpp:267](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L267) |
| `stretched_horizontal` | bool | false | - | `false` | Stretch the game image horizontally | `Graphic/stretched_horizontal` | `Config::LoadConfig` [config.cpp:268](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L268) |
| `stretched_vertical` | bool | false | - | `false` | Stretch vertically | `Graphic/stretched_vertical` | `Config::LoadConfig` [config.cpp:269](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L269) |

### `features`

| Key | Type | Default | Clamp / allowed | Shipped | Meaning | Upstream v1.3.3 ini | Read by |
|---|---|---|---|---|---|---|---|
| `hd_cursor` | bool | true | - | `true` | HD cursor | `Feature/hd_cursor` | `Config::LoadConfig` [config.cpp:272](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L272) |
| `hd_text` | bool | true | - | `true` | HD fonts | `Feature/hd_text` | `Config::LoadConfig` [config.cpp:273](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L273) |
| `hd_text_scale` | float | 1.0 | 0.8..1.2; forced to 1.0 when ISHDTEXT() | `1.0` | HD text scale | `Feature/hd_text_scale` | `Config::LoadConfig` [config.cpp:274](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L274) |
| `mini_map` | bool | true | - (and only with the glide3x renderer, ISGLIDE3X()) | `true` | D2GL minimap | `Feature/mini_map` | `Config::LoadConfig` [config.cpp:275](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L275) |
| `mini_map_text_over` | bool | true | - (glide3x only) | `true` | Draw text over the minimap | `Feature/mini_map_text_over` | `Config::LoadConfig` [config.cpp:276](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L276) |
| `mini_map_width` | int | 200 | 200..300 | `200` | Minimap width | `Feature/mini_map_width` | `Config::LoadConfig` [config.cpp:277](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L277) |
| `mini_map_height` | int | 140 | 100..200 | `140` | Minimap height | `Feature/mini_map_height` | `Config::LoadConfig` [config.cpp:278](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L278) |
| `motion_prediction` | bool | true | - | `true` | Motion prediction (smooth movement at high FPS) | `Feature/motion_prediction` | `Config::LoadConfig` [config.cpp:282](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L282) |
| `skip_intro` | bool | false | - | `false` | Skip intro videos | `Feature/skip_intro` | `Config::LoadConfig` [config.cpp:283](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L283) |
| `no_pickup` | bool | false | - | `false` | Start games with /nopickup | `Feature/no_pickup` | `Config::LoadConfig` [config.cpp:284](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L284) |
| `show_item_quantity` | bool | true | - | `true` | Show stack quantity on items | `Feature/show_item_quantity` | `Config::LoadConfig` [config.cpp:285](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L285) |
| `show_fps` | bool | false | - | `false` | FPS counter | `Feature/show_fps` | `Config::LoadConfig` [config.cpp:286](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L286) |

### `other`

| Key | Type | Default | Clamp / allowed | Shipped | Meaning | Upstream v1.3.3 ini | Read by |
|---|---|---|---|---|---|---|---|
| `gl_ver_major` | int | 4 | 3..4 | `4` | OpenGL major version requested | `Other/gl_ver_major` | `Config::LoadConfig` [config.cpp:289](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L289) |
| `gl_ver_minor` | int | 6 | 0..6 (forced to 3 when major = 3) | `6` | OpenGL minor version | `Other/gl_ver_minor` | `Config::LoadConfig` [config.cpp:290](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L290) |
| `use_compute_shader` | bool | false | - | `false` | Use compute shaders (GL 4.3+) | `Other/use_compute_shader` | `Config::LoadConfig` [config.cpp:295](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L295) |
| `frame_latency` | int | 1 | 1..5 | `1` | Max frames in flight | `Other/frame_latency` | `Config::LoadConfig` [config.cpp:296](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L296) |
| `load_dlls_early` | string | "" | comma-separated DLL list | `""` | DLLs D2GL loads before the game DLLs | `Other/load_dlls_early` | `Config::LoadConfig` [config.cpp:297](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L297) |
| `load_dlls_late` | string | "SGD2FreeRes.dll" | comma-separated DLL list | `"SGD2FreeRes.dll"` | DLLs D2GL loads after the game DLLs (PD2 loads SGD2FreeRes this way) | `Other/load_dlls_late` | `Config::LoadConfig` [config.cpp:298](https://github.com/Project-Diablo-2/d2gl/blob/94438403389a01922be77b64197f4380681b52ad/d2gl/src/option/config.cpp#L298) |
