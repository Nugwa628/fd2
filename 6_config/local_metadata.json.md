# local_metadata.json

The launcher's copy of the last game-file manifest it applied. Written and read only by the **PD2 launcher**
(`PD2Launcher.exe` and the shared `PD2Shared` library, source `Project-Diablo-2/PD2Launcher@300ed6f`, links to
`https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/<file>`). No game DLL reads it.

| | |
|---|---|
| Path | `<game dir>\local_metadata.json` (`installPath` = current directory, [PD2Shared/Helpers/GameFileUpdateHelpers.cs:23-29](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L23)) |
| Format | JSON object with one key; PowerShell `ConvertTo-Json` style indentation (the server generates it) |
| Keys | **1** (`checksum`). Shipped: 1. Read by code: 1. Unread: 0. Code-only: 0 |
| Reader / writer | `GameFileUpdateHelpers.UpdateFromShaMetadataAsync` [PD2Shared/Helpers/GameFileUpdateHelpers.cs:20-91](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L20), called before every launch unless `LauncherArgs.disableAutoUpdate` ([PD2Launcherv2/MainWindow.xaml.cs:255-259](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Launcherv2/MainWindow.xaml.cs#L255)) |

## Keys

| Key | Type | Default | Shipped | Meaning | Read by |
|---|---|---|---|---|---|
| `checksum` | array of string, each `"<hex hash>␠␠<relative path>"` (two spaces, `md5sum` output format) | file absent → `null` → full comparison | 47 entries (game DLLs, MPQs, `ProjectDiablo.cfg`, `ddraw.ini`, `default.filter`, licences); values are file hashes, not personal data, not copied | Manifest of `<FileUpdateModel.Client>/metadata.json` as last applied | [PD2Shared/Helpers/GameFileUpdateHelpers.cs:29](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L29) reads the file as raw text; [PD2Shared/Helpers/GameFileUpdateHelpers.cs:38](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L38) compares it with the remote manifest **as a string**; the remote one is parsed at [PD2Shared/Helpers/GameFileUpdateHelpers.cs:45-57](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L45) (`parsed["checksum"]`, split at `"  "`); written back verbatim at [PD2Shared/Helpers/GameFileUpdateHelpers.cs:83](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L83) |

## How it is used

1. Download `<Client>/metadata.json`. If its text equals `local_metadata.json`, stop (nothing changed).
2. Otherwise, for each `checksum` entry: `Live\<path>` is re-downloaded from `<Client>/<path>` unless it exists
   and `CompareSha1(file, hash)` matches ([PD2Shared/Helpers/GameFileUpdateHelpers.cs:93-100](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Helpers/GameFileUpdateHelpers.cs#L93)), then copied over `<game dir>\<path>`.
3. Save the remote text as `local_metadata.json`. Afterwards `SyncFilesFromEnvToRoot` copies `Live\` to the root
   with the CRC32C/exclusion logic of `FileUpdateHelpers`.

## Findings

* **Hash mismatch.** The shipped entries are 32 hex digits and all 47 equal the **MD5** of the shipped files
  (checked); `CompareSha1` computes a 40-digit SHA-1, so no entry can ever match. Whenever the server manifest
  changes, the launcher therefore re-downloads **every** listed file, not only the changed ones.
* **No exclusion list on this path.** `UpdateFromShaMetadataAsync` does not consult `Constants.excludedFiles`
  ([PD2Shared/Constants.cs:26-31](https://github.com/Project-Diablo-2/PD2Launcher/blob/300ed6fbbcb85bf6b02e8bb052e4e0c5f3a77de3/PD2Shared/Constants.cs#L26)), and the manifest lists `ddraw.ini`,
  `ProjectDiablo.cfg` and `default.filter`, which that list is meant to protect. A manifest change therefore
  overwrites a user-edited `ddraw.ini` with the server copy. (The shipped ddraw.ini indeed has the manifest's MD5.)
