# PD2 launcher update & launch protocol

This document was reconstructed from the decompiled sources in [src/](src/) and cross-checked against the local `update.log`, `launcher-update-debug.log`, `local_metadata.json` and `AppData/launcherSettings.json`. Nothing was executed and no server was contacted. Where the content of a server response can only be inferred from the client code, that is stated.

All requests are anonymous HTTPS `GET`s (plus one unused `HEAD` helper). No authentication, API key, signature or token is involved anywhere.

## 0. Directories, state and endpoints

**Install dir.** This is `Directory.GetCurrentDirectory()`, the *working directory* of the process, not the exe location.
- The two coincide only when the app is started from its own folder, as the shortcut does.
- `launcher-update-debug.log` records `ProcessPath`, `BaseDirectory` and `WorkingDirectory` exactly to diagnose this.

**Settings file.** `<exe dir>/AppData/launcherSettings.json`, written with Newtonsoft. Class `PD2Shared.Storage.LocalStorage`:
- Every `Update()` reloads the whole file, replaces one section, writes `launcherSettings.json.tmp` and then `File.Replace`s the original.
- Every successful `Load()` copies the file to `launcherSettings.json.backup`. On a JSON error the backup is used instead.
- Leftover `*.tmp` files are deleted at startup.

| Section | Model | Fields |
|---|---|---|
| `DdrawOptions` | `DdrawOptions` | mirror of cnc-ddraw `ddraw.ini [ddraw]` keys (Width, Height, Fullscreen, Windowed, Maintas, Boxing, MaxFps, Vsync, AdjMouse, Shader, PosX/PosY, Renderer, DevMode, Border, SaveSettings, Resizeable, Vhack, D3d9Linear, NoActivateApp, MaxGameTicks, HandleMouse, Hook, MinFps, NonExclusive, SingleCpu) |
| `FileUpdateModel` | `FileUpdateModel` | `Client` (base URL of game files), `FilePath` (staging sub-folder & environment name: `Live` / `Beta` / `Custom`), `Other` (unused) |
| `SelectedAuthorAndFilter` | | `selectedAuthor{name,url,author}`, `selectedFilter{name,download_url,path,sha,size,url,html_url,git_url,type}`, `selectedFilterId` |
| `Pd2AuthorList` | | `StorageETag`, `StorageAuthorList[]` (cached `filters.json`) |
| `LauncherArgs` | | `graphics` (true = DirectDraw/cnc-ddraw, false = Glide/D2GL), `skiptobnet`, `sndbkg`, `disableAutoUpdate` |
| `News`, `ResetInfo` | | ETag + cached `news.json` / `reset.json` |
| `WindowPosition` | | launcher window Left/Top |

**Endpoints.** These are constants in the binaries and are listed for documentation only.

| Purpose | URL |
|---|---|
| Launcher self-update manifest | `https://pd2-launcher.projectdiablo2.com/launcher_manifest.json` |
| (legacy, only a constant) | `https://storage.googleapis.com/storage/v1/b/pd2-launcher-update/o` |
| Game files, Live | `FileUpdateModel.Client` = `https://pd2-client-files.projectdiablo2.com/` |
| Game files, Beta | `https://pd2-beta-client-files.projectdiablo2.com/` |
| Game files, Custom | any http(s) URL typed into the hidden Custom box (About page, hold the "!" button 10 s) |
| (legacy Live) | `https://storage.googleapis.com/storage/v1/b/pd2-client-files/o` (migrated to the new Live URL on startup by PD2Launcher and SteamPD2) |
| Loot-filter authors | `https://raw.githubusercontent.com/Project-Diablo-2/LootFilters/main/filters.json` |
| News / season reset | `https://raw.githubusercontent.com/Project-Diablo-2/news/main/news.json`, `.../reset.json` |
| Filter preview (WebView2) | `https://equa1itype4ce.github.io/filterbird/` |

## 1. Manifest format (launcher self-update and CRC-based file listing)

Both the launcher manifest and the CRC-based game-file listing (§3b) are parsed as a Google Cloud Storage "objects list" document. The names are case-insensitive (`System.Text.Json`, `PropertyNameCaseInsensitive`).

```json
{ "items": [
    { "name": "PD2Launcher.exe", "mediaLink": "<absolute or relative URL>",
      "crc32c": "iSRkYA==", "size": 32796830 },
    ...
] }
```

- `name` is the path relative to the install dir, with `/` as separator. Names ending in `/` are directory placeholders and are skipped.
- `crc32c` is the GCS convention: the CRC-32C (Castagnoli, poly 0x82F63B78 reflected, init/xorout 0xFFFFFFFF) of the whole file, as a **big-endian** uint32, then **base64**.
  - Check: the local `PD2Launcher.exe` gives `iSRkYA==` and `SteamPD2.exe` gives `MKBDEA==`. These are the values in `update.log`.
  - The launcher compares by decoding the base64, reversing the bytes and taking `BitConverter.ToUInt32`, against `Crc32CAlgorithm` (Crc32.NET). UpdateUtility uses its own table-based CRC32C and compares base64 strings.
- `size` (an int64) is read only by UpdateUtility.
- `mediaLink`: PD2Launcher and SteamPD2 use it verbatim. UpdateUtility resolves it as follows:
  - If it is absolute, it is used as-is.
  - If it is relative, it is resolved against the manifest URL.
  - If it is missing, `<manifest dir>/<escaped name>` is used.
- In `update.log` the manifest returned 3 items: `PD2Launcher.exe`, `SteamPD2.exe` and `UpdateUtility.exe`, the "big four" in the code (really three). Any other item in that manifest would be treated as an ordinary launcher-side file: downloaded straight into the install dir when its CRC differs, unless it is excluded (§4).

## 2. Launcher self-update

### 2a. PD2Launcher.exe (GUI): `MainWindow.UpdateLauncherCheck`, at window construction

1. Skip the check if `LauncherArgs.disableAutoUpdate` is set.
2. Append a block to `launcher-update-debug.log` (timestamp, ProcessPath, BaseDirectory, WorkingDirectory, MetadataUrl).
3. GET `launcher_manifest.json`. On a failure the "updates disabled" badge is shown and the launcher carries on. The GET is retried 3× with 2 s between attempts, and the HttpClient timeout is 30 min.
4. For each of `PD2Launcher.exe`, `SteamPD2.exe` and `UpdateUtility.exe` that is in the manifest: if the local file is missing or its CRC32C differs, mark *self-update needed*.
5. **If no self-update is needed:** download every other non-excluded manifest item whose CRC differs, directly over `<install>/<name>`. Done.
6. **If a self-update is needed:**
   1. Download `PD2Launcher.exe` to `TempPD2Launcher.exe` and `SteamPD2.exe` to `TempSteamPD2.exe`.
   2. Download `UpdateUtility.exe` **in place**. This is safe because it is not running.
   3. Download the other manifest items as in step 5.
   4. Wait up to 10×300 ms for both Temp files to exist and be at least 32 KiB.
   5. Show "Launcher update is ready…".
   6. Start `UpdateUtility.exe` with **4 arguments** (`UseShellExecute=true`), then kill its own process:

      ```
      "<install>\PD2Launcher.exe" "<install>\TempPD2Launcher.exe" "<install>\SteamPD2.exe" "<install>\TempSteamPD2.exe"
      ```

### 2b. SteamPD2.exe

SteamPD2 follows the same logic, with a different order and different logging (`SteamPD2.log` next to the exe). It fetches the manifest twice, which is harmless duplicated code. It first updates the non-launcher items. If any launcher exe is outdated, it downloads the Temp files and `UpdateUtility.exe` as above. It then calls `FileUpdateHelpers.StartUpdateProcessWithSteam`, which passes **5 arguments**: the 4 above plus `"<install>\SteamPD2.exe"` as the *explicit executable to restart*. SteamPD2 then exits.

### 2c. UpdateUtility.exe

Command line, as logged in `update.log`:

| argc | Meaning |
|---|---|
| 4 | `PD2Launcher` `TempPD2Launcher` `SteamPD2` `TempSteamPD2`: "new 4/5 argument format"; restart target chosen automatically |
| 5 | as 4, plus the explicit exe to start afterwards |
| 6 / 7 | legacy format of older launchers: `[0]` launcher, `[1]` temp launcher, `[2]`,`[3]` ignored ("PD2Shared arguments"), `[4]` SteamPD2, `[5]` temp SteamPD2, `[6]` optional restart target |
| other | "self-contained repair mode": install dir = UpdateUtility's own dir, or `args[0]` if it is a directory; if `args[0]` is an `.exe` it is both the install-dir anchor and the restart target |

Relative paths are resolved against the directory of `args[0]`. The install directory is the directory of the launcher path.

The steps:

1. Log the plan.
2. Note whether `PD2Launcher` and `SteamPD2` processes are running *from these exact paths*. The match is by `MainModule.FileName`.
3. Download the manifest. On a failure it continues and existing valid Temp files can still be installed.
4. `EnsureTempFile` for each of the two exes. An existing Temp file is used if it passes validation; otherwise it is deleted and downloaded again. The download goes to `<temp>.download`, is validated, then moved over `<temp>`, with 3 attempts 1.5 s apart.
   - **Validation:** size ≥ 32 KiB; first bytes `MZ`; size equals the manifest `size` when one is known; CRC32C (base64) equals the manifest `crc32c` when one is known.
5. If neither Temp file is usable, exit with code 2.
6. Kill the matching `PD2Launcher` and `SteamPD2` processes (entire process tree), waiting up to 20 s each, then sleep 1.5 s.
7. For each exe, replace it, with up to 15 attempts 1 s apart:
   1. Move `final` to `final.update-backup`.
   2. Move `temp` to `final`.
   3. Validate (MZ and ≥ 32 KiB only).
   4. Delete the backup.
   5. On an error, restore from the backup.
8. Exit codes:

   | Code | Meaning |
   |---|---|
   | 3 | launcher replacement failed (deliberately no restart, to avoid an update loop) |
   | 4 | nothing was updated |
   | 5 | restart failed |
   | 0 | success |

9. Restart, in this priority order: the explicit 5th argument; else `SteamPD2.exe` if it was running; else `PD2Launcher.exe`. It is started with `UseShellExecute`, with the working dir set to the exe's directory. The process is checked to be still alive after 1 s.

`PD2Shared.GameUpdateManager.RunUpdateAndLaunchAsync` is a third, **unreferenced** copy of this flow. It passes `SteamPD2.exe`/`PD2Launcher.exe` as a bare 5th argument.

## 3. Game files

There are two independent implementations. Which one runs depends on the entry point.

| Entry point | Game-file update used |
|---|---|
| GUI **Play** button | §3a `GameFileUpdateHelpers.UpdateFromShaMetadataAsync`, then `SyncFilesFromEnvToRoot` |
| `PD2Launcher.exe --launch` (no window) | §3b `FileUpdateHelpers.UpdateFilesCheck`, then `SyncFilesFromEnvToRoot` |
| `SteamPD2.exe` | §3b, then `SyncFilesFromEnvToRoot` |

Both are skipped when `disableAutoUpdate` is set. Both stage files in `<install>/<FilePath>/` (e.g. `Live/`, which exists in the analysed install with 47 files) and copy them to the install root.

### 3a. md5sum metadata (`<Client>/metadata.json` and `local_metadata.json`)

```json
{ "checksum": [ "01a5b0f44d0f31f5251d26aad5bcd7bb  D2Win.dll", "...  Game.exe", ... ] }
```

This is `md5sum` output, two spaces between hash and name, sorted by hash. The local copy lists 47 entries: the D2 1.13c DLLs patched by PD2, `ProjectDiablo.dll`, `PD2_EXT.dll`, `BH.dll`, `SGD2FreeRes.dll`, `glide3x.dll`, the `pd2*.mpq` and `d2gl.mpq` archives, `ProjectDiablo.cfg`, `ddraw.ini`, `default.filter` and so on.

1. GET `Client.TrimEnd('/') + "/metadata.json"`.
2. If the response text equals `<install>/local_metadata.json` **byte for byte**, stop. This is the fast path.
3. Otherwise, for each entry: the URL is `<metadata dir>/<name>`, the stage path is `<install>/<FilePath>/<name>` and the destination is `<install>/<name>`.
   - If the stage file is missing or fails the hash check, download it into stage and `File.Copy` it over the destination.
   - **Caveat:** the hash check is `CompareSha1`, which computes SHA-1 and compares it with the 32-hex MD5. It never matches. In practice *every* file is downloaded again whenever the metadata changes.
   - This path does **not** apply the exclusion list, so the user-editable `ProjectDiablo.cfg`, `ddraw.ini` and `default.filter` from the manifest are overwritten on each patch.
4. Write the remote text to `local_metadata.json`. Any exception falls through to launching the game ("offline mode").

### 3b. CRC32C listing (`GET <Client>`)

1. `GET FileUpdateModel.Client` is parsed as the `items[]` document of §1. The client treats the base URL itself as a listing endpoint; this was designed for the GCS `.../b/<bucket>/o` API. What the new CDN returns at `/` was not verified, because it was not contacted.
2. For each item: if it is not excluded and (the stage copy is missing or its CRC differs), download `mediaLink` into stage and copy it to the root. Excluded items are downloaded only if the stage copy is missing.

### 3c. `SyncFilesFromEnvToRoot`

This walks `<install>/<FilePath>/**` and copies each file to the same relative path in the root:
- if the root file is missing, or
- if the file is not excluded and the CRC32C of stage ≠ root.

Excluded files are never overwritten once they exist. This repairs root files that were modified, from the staged pristine copies.

## 4. Exclusions

These files are not overwritten once present: `D2.LNG`, `BnetLog.txt`, `ProjectDiablo.cfg`, `ddraw.ini`, `default.filter`, `loot.filter`, `UI.ini`, `d2gl.yaml`, and `PD2Shared.dll` (PD2Shared's list only).
- Matching is case-insensitive. A `*` wildcard and a `dir/*` prefix are supported.
- `d2gl.yaml` is stale: the PD2 D2GL fork moved to `d2gl.json`. See `4_pd2_source/D2GL`.

## 5. Launching the game (`PD2Shared.Helpers.LaunchGameHelpers`)

- **Executable and directory:** `<install>/Game.exe`, run with working directory = install dir (`UseShellExecute=false`). The GUI refuses to launch if a `Game` process already exists.
- **Command line:** built only from `LauncherArgs`:
  - `-3dfx` (Glide → PD2's D2GL `glide3x.dll`) when `graphics=false`, the default; or `-ddraw` (DirectDraw → cnc-ddraw `ddraw.dll`) when `graphics=true`.
  - `-skiptobnet` if `skiptobnet`. The `LauncherArgs` model defaults it to true; it is false in the analysed settings.
  - `-sndbkg` if `sndbkg`.
  - The analysed settings therefore yield `Game.exe -3dfx`.
- **Applied settings:**
  - Only `LauncherArgs` reaches the command line.
  - `DdrawOptions` is not passed to the game. On startup the launcher *reads* `ddraw.ini [ddraw]` into the settings. When the Options view closes it *writes* the options back to `ddraw.ini` (lower-cased values; the window mode maps to `fullscreen`/`windowed`). cnc-ddraw reads that file itself.
  - D2GL options (`d2gl.json`) are not touched by the launcher; D2GL has its own in-game menu.
  - `FileUpdateModel` selects the update source and staging folder.
  - `SelectedAuthorAndFilter` drives §6.
- **Before launch:** loot filter refresh (§6), then the game-file update (§3) unless disabled.

## 6. Loot filters

1. **Authors.** GET `filters.json` from the `Project-Diablo-2/LootFilters` repo, with the `User-Agent: PD2Launcherv2` and `If-None-Match` ETag headers; a 304 keeps the cache. The result is a list of `{ "name", "url", "author" }`. Each `url` is a GitHub *contents API* directory URL; "Open author page" rewrites `api.github.com/repos` → `github.com`. A synthetic author "Local Filter" (url `local`) is prepended.
2. **Filters of an author.** GET `author.url` (with the `User-Agent` header). The result is a GitHub contents listing `[{name, path, sha, size, url, html_url, git_url, download_url, type}]`.
   - The `*.filter` entries become the list.
   - If a `filter_definitions.json` exists in the directory, it is fetched: `{ "filter_info": { "<id>": { "display_name", "description", "file_name", "file_name_beta" } } }`. Only the files listed in it are shown, with their display names. `file_name_beta` is used when `FilePath` is `Beta`. Selection is remembered by id (`selectedFilterId`), falling back to the file name.
3. **Apply.** Download `download_url` to `<install>/filters/online/<name>`, then copy it to **`<install>/loot.filter`**, the file the in-game filter (BH) reads. Local filters come from `<install>/filters/local/*.filter`. "Copy to local" saves the online file there.
4. **Auto-update** on Play, `--launch` and SteamPD2:
   - Re-resolve the selected filter remotely.
   - If its git blob `sha` differs from the stored `selectedFilter.sha`, download it again and copy it to `loot.filter`, then store the new entry.
   - For "Local Filter", the local file is copied to `loot.filter` again.
5. **Preview.** The FilterBird page is loaded in WebView2, and the filter text is injected via `ExecuteScriptAsync` into `#filter_text_1`, followed by `loadedFromApp()`.

## 7. Other network use

- `news.json` / `reset.json` are fetched with an ETag. A future `ResetTime` is shown as the first news item.
- The Donate and news links open in the default browser.
- `HttpFileHelper.FileNeedsUpdateAsync` (HEAD and compare Content-Length) is unused.
