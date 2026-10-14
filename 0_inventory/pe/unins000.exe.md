# unins000.exe

- Size: 858,789 bytes
- Machine: 0x14c, EXE, subsystem 2
- TimeDateStamp: 0x2a425e19 (1992-06-19 22:22:17 UTC)
- ImageBase 0x00400000, entry 0x0049a490 (in CODE)
- Linker 2.25; .NET: no; overlay 11,429 bytes
- PDB: `(none)`
- RTTI type descriptors (`.?AV`/`.?AU`): 0
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- FileDescription: Setup/Uninstall
- FileVersion: 51.52.0.0
- _FileVersion: 51.52.0.0

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| CODE | 0x1000 | 628,436 | 628,736 | 6.60 | 0x60000020 |
| DATA | 0x9b000 | 4,384 | 4,608 | 4.54 | 0xc0000040 |
| BSS | 0x9d000 | 5,520 | 0 | 0.00 | 0xc0000000 |
| .idata | 0x9f000 | 9,754 | 10,240 | 4.92 | 0xc0000040 |
| .tls | 0xa2000 | 8 | 0 | 0.00 | 0xc0000000 |
| .rdata | 0xa3000 | 24 | 512 | 0.21 | 0x50000040 |
| .reloc | 0xa4000 | 35,920 | 0 | 0.00 | 0x50000040 |
| .rsrc | 0xad000 | 202,220 | 202,240 | 6.12 | 0x50000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|

## Imports

- **kernel32.dll** (28): DeleteCriticalSection, LeaveCriticalSection, EnterCriticalSection, InitializeCriticalSection, VirtualFree, VirtualAlloc, LocalFree, LocalAlloc, WideCharToMultiByte, TlsSetValue, TlsGetValue, MultiByteToWideChar, GetModuleHandleA, GetLastError, GetCommandLineA, WriteFile, SetFilePointer, SetEndOfFile, RtlUnwind, ReadFile, RaiseException, GetStdHandle, GetFileSize, GetSystemTime, GetFileType, ExitProcess, CreateFileA, CloseHandle
- **user32.dll** (1): MessageBoxA
- **oleaut32.dll** (7): SafeArrayPutElement, SafeArrayCreate, VariantChangeTypeEx, VariantCopyInd, VariantClear, SysStringLen, SysAllocStringLen
- **advapi32.dll** (20): SetSecurityDescriptorDacl, RegSetValueExA, RegQueryValueExA, RegQueryInfoKeyA, RegOpenKeyExA, RegEnumValueA, RegEnumKeyExA, RegDeleteValueA, RegDeleteKeyA, RegCreateKeyExA, RegCloseKey, OpenThreadToken, OpenProcessToken, LookupPrivilegeValueA, InitializeSecurityDescriptor, GetUserNameA, GetTokenInformation, FreeSid, EqualSid, AllocateAndInitializeSid
- **kernel32.dll** (105): lstrcmpA, WriteProfileStringA, WritePrivateProfileStringA, WriteFile, WaitForSingleObject, VirtualFree, VirtualAlloc, TransactNamedPipe, TerminateThread, TerminateProcess, Sleep, SizeofResource, SetNamedPipeHandleState, SetLastError, SetFileTime, SetFilePointer, SetFileAttributesA, SetErrorMode, SetEndOfFile, SetCurrentDirectoryA, RemoveDirectoryA, ReleaseMutex, ReadFile, QueryPerformanceCounter, OpenProcess, OpenMutexA, MultiByteToWideChar, MulDiv, MoveFileExA, MoveFileA, LockResource, LocalFree, LocalFileTimeToFileTime, LoadResource, LoadLibraryExA, LoadLibraryA, IsDBCSLeadByte, IsBadWritePtr, GlobalUnlock, GlobalReAlloc, ... (+65)
- **mpr.dll** (5): WNetOpenEnumA, WNetGetUniversalNameA, WNetGetConnectionA, WNetEnumResourceA, WNetCloseEnum
- **version.dll** (3): VerQueryValueA, GetFileVersionInfoSizeA, GetFileVersionInfoA
- **gdi32.dll** (62): UnrealizeObject, TextOutA, StretchDIBits, StretchBlt, SetWindowOrgEx, SetViewportOrgEx, SetTextColor, SetStretchBltMode, SetROP2, SetPixel, SetBkMode, SetBkColor, SelectPalette, SelectObject, SaveDC, RoundRect, RestoreDC, RemoveFontResourceA, Rectangle, RectVisible, RealizePalette, Polyline, Pie, PatBlt, MoveToEx, LineTo, LineDDA, IntersectClipRect, GetWindowOrgEx, GetTextMetricsA, GetTextExtentPointA, GetTextExtentPoint32A, GetSystemPaletteEntries, GetStockObject, GetPixel, GetPaletteEntries, GetObjectA, GetDeviceCaps, GetDIBits, GetCurrentPositionEx, ... (+22)
- **user32.dll** (157): WindowFromPoint, WinHelpA, WaitMessage, WaitForInputIdle, UpdateWindow, UnregisterClassA, UnhookWindowsHookEx, TranslateMessage, TranslateMDISysAccel, TrackPopupMenu, SystemParametersInfoA, ShowWindow, ShowOwnedPopups, ShowCursor, SetWindowRgn, SetWindowsHookExA, SetWindowTextA, SetWindowPos, SetWindowPlacement, SetWindowLongW, SetWindowLongA, SetTimer, SetScrollPos, SetScrollInfo, SetRectEmpty, SetRect, SetPropA, SetMenu, SetForegroundWindow, SetFocus, SetCursor, SetCapture, SetActiveWindow, SendNotifyMessageA, SendMessageTimeoutA, SendMessageW, SendMessageA, ScrollWindowEx, ScrollWindow, ScreenToClient, ... (+117)
- **comctl32.dll** (1): InitCommonControls
- **comctl32.dll** (13): ImageList_GetDragImage, ImageList_DragShowNolock, ImageList_SetDragCursorImage, ImageList_DragMove, ImageList_DragLeave, ImageList_DragEnter, ImageList_EndDrag, ImageList_BeginDrag, ImageList_SetBkColor, ImageList_ReplaceIcon, ImageList_Destroy, ImageList_Create, InitCommonControls
- **ole32.dll** (7): CoTaskMemFree, CLSIDFromProgID, CoCreateInstance, CoFreeUnusedLibraries, CoUninitialize, CoInitialize, IsEqualGUID
- **oleaut32.dll** (4): GetActiveObject, RegisterTypeLib, LoadTypeLib, SysFreeString
- **shell32.dll** (4): ShellExecuteExA, ShellExecuteA, SHGetFileInfoA, ExtractIconA
- **shell32.dll** (4): SHChangeNotify, SHBrowseForFolder, SHGetPathFromIDList, SHGetMalloc
- **comdlg32.dll** (2): GetSaveFileNameA, GetOpenFileNameA
- **ole32.dll** (1): CoDisconnectObject
- **advapi32.dll** (1): AdjustTokenPrivileges
- **msimg32.dll** (1): AlphaBlend

## Exports (0)

