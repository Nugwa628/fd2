# Storm.dll

- Size: 372,736 bytes
- Machine: 0x14c, DLL, subsystem 2
- TimeDateStamp: 0x4b95c049 (2010-03-09 03:28:09 UTC)
- ImageBase 0x6fbf0000, entry 0x6fc2c470 (in .text)
- Linker 7.10; .NET: no; overlay 0 bytes
- PDB: `X:\trunk\Diablo2\Builder\PDB\Storm.pdb`
- RTTI type descriptors (`.?AV`/`.?AU`): 28
- TLS callbacks: none
- Packer/protector heuristics: none

## Version resource

- Author: Mike O'Brien
- CompanyName: Blizzard Entertainment
- FileDescription: Storm Library
- FileVersion: 1.08b
- LegalCopyright: Copyright Â© 1999, Blizzard Entertainment
- OriginalFilename: Storm.dll
- _FileVersion: 1999.11.18.1

## Sections

| name | VA | vsize | rawsize | entropy | flags |
|---|---|---:|---:|---:|---|
| .text | 0x1000 | 268,651 | 270,336 | 6.68 | 0x60000020 |
| .rdata | 0x43000 | 50,026 | 53,248 | 5.46 | 0x40000040 |
| .data | 0x50000 | 31,928 | 12,288 | 4.41 | 0xc0000040 |
| .rsrc | 0x58000 | 8,640 | 12,288 | 3.94 | 0x40000040 |
| .reloc | 0x5b000 | 19,372 | 20,480 | 5.86 | 0x42000040 |

## Rich header

| product id | build | count | toolchain |
|---:|---:|---:|---|
| 0 | 0 | 2 | ? |
| 93 | 2067 | 2 | ? |
| 93 | 2179 | 11 | ? |
| 1 | 0 | 239 | ? |
| 96 | 6030 | 10 | VS2003 |
| 15 | 6030 | 32 | VS2003 |
| 95 | 6030 | 122 | VS2003 |
| 100 | 6030 | 26 | VS2003 |
| 92 | 6030 | 1 | VS2003 |
| 94 | 3052 | 1 | ? |
| 90 | 6030 | 1 | VS2003 |

## Imports

- **KERNEL32.dll** (116): SetEvent, GetDriveTypeA, GetVolumeInformationA, SizeofResource, CreateEventA, GetFileAttributesA, ReadFile, SetThreadPriority, GetLastError, GetProcAddress, LoadLibraryA, CreateFileMappingA, LockResource, GetDiskFreeSpaceA, GetModuleHandleA, GetFileTime, CreateThread, SetUnhandledExceptionFilter, GetCommandLineA, GetTempFileNameA, GetTempPathA, DeleteFileA, MulDiv, GetCurrentProcessId, GetSystemInfo, SystemTimeToFileTime, Sleep, CreateProcessA, VirtualUnlock, VirtualLock, FindNextFileA, GetSystemTime, GetVersionExA, GetFullPathNameA, WideCharToMultiByte, TlsAlloc, TlsFree, TlsSetValue, TlsGetValue, VirtualProtect, ... (+76)
- **USER32.dll** (74): BeginPaint, DrawEdge, SendMessageA, GetWindowTextLengthA, SetFocus, GetClientRect, FindWindowExA, IsWindowEnabled, RemovePropA, GetParent, GetFocus, GetPropA, DrawTextA, GetTopWindow, IsIconic, PostQuitMessage, SetActiveWindow, GetWindowRect, ScreenToClient, GetUpdateRgn, GetClassNameA, SetCursor, DestroyWindow, ClientToScreen, EndPaint, GetSystemMetrics, DestroyCursor, GetForegroundWindow, LoadIconA, CreateCursor, SetDlgItemTextA, GetDlgItemTextA, SendDlgItemMessageA, IsDialogMessageA, ShowCursor, GetWindowTextA, SetPropA, SetWindowLongA, IntersectRect, InvalidateRect, ... (+34)
- **GDI32.dll** (29): SelectObject, DeleteObject, SetBkMode, GetRegionData, GdiFlush, SetBkColor, GetCurrentObject, CreateFontA, DeleteDC, SetTextColor, CreateCompatibleDC, SetPaletteEntries, SelectPalette, RealizePalette, CreatePalette, GetDeviceCaps, ExtTextOutA, CreateDIBitmap, Rectangle, GetDIBits, GetCharABCWidthsA, CombineRgn, RectInRegion, CreateRectRgn, GetTextMetricsA, SetTextAlign, GetTextExtentPoint32A, GetSystemPaletteEntries, GetStockObject
- **ADVAPI32.dll** (7): RegFlushKey, RegDeleteValueA, RegOpenKeyExA, RegCreateKeyExA, RegQueryValueExA, RegSetValueExA, RegCloseKey
- **comdlg32.dll** (1): GetSaveFileNameA
- **PD2_EXT.dll** (3): GetFileVersionInfoA, GetFileVersionInfoSizeA, VerQueryValueA

## Exports (361)

- 101 0x6fc04210 
- 102 0x6fc03e10 
- 103 0x6fc018a0 
- 104 0x6fc023b0 
- 105 0x6fc06d90 
- 106 0x6fc03cb0 
- 107 0x6fc00720 
- 108 0x6fc00610 
- 109 0x6fc004f0 
- 110 0x6fc06030 
- 111 0x6fc003f0 
- 112 0x6fc002e0 
- 113 0x6fc00200 
- 114 0x6fc00140 
- 115 0x6fc02af0 
- 116 0x6fc02170 
- 117 0x6fc070b0 
- 118 0x6fc05c10 
- 119 0x6fc03a90 
- 120 0x6fc06260 
- 121 0x6fc05740 
- 122 0x6fc05170 
- 123 0x6fc01830 
- 124 0x6fc000f0 
- 125 0x6fc02080 
- 126 0x6fc07810 
- 127 0x6fc037f0 
- 128 0x6fc036c0 
- 129 0x6fc000c0 
- 130 0x6fc035d0 
- 131 0x6fc010f0 
- 133 0x6fc02250 
- 134 0x6fc029d0 
- 135 0x6fc03940 
- 136 0x6fc059c0 
- 137 0x6fc00e80 
- 138 0x6fc03eb0 
- 139 0x6fc01720 
- 140 0x6fc008c0 
- 201 0x6fc0fb50 
- 202 0x6fc111b0 
- 203 0x6fc0d570 
- 204 0x6fc11440 
- 205 0x6fc114c0 
- 206 0x6fc0cb60 
- 208 0x6fc11350 
- 209 0x6fc11460 
- 210 0x6fc0efc0 
- 211 0x6fc0cb20 
- 212 0x6fc0caf0 
- 213 0x6fc0d460 
- 214 0x6fc0d990 
- 215 0x6fc0dbd0 
- 216 0x6fc0da10 
- 217 0x6fc0ca00 
- 218 0x6fc0d000 
- 219 0x6fc0d730 
- 220 0x6fc0d420 
- 221 0x6fc0f630 
- 222 0x6fc0d780 
- 223 0x6fc0c9e0 
- 251 0x6fc17560 
- 252 0x6fc16cb0 
- 253 0x6fc16e20 
- 254 0x6fc1ab30 
- 255 0x6fc1a650 
- 256 0x6fc16f30 
- 257 0x6fc181f0 
- 258 0x6fc166c0 
- 259 0x6fc165f0 
- 260 0x6fc165b0 
- 261 0x6fc16500 
- 262 0x6fc17020 
- 263 0x6fc15d70 
- 264 0x6fc163d0 
- 265 0x6fc162d0 
- 266 0x6fc1a0b0 
- 267 0x6fc18da0 
- 268 0x6fc18960 
- 269 0x6fc19be0 
- 270 0x6fc16190 
- 271 0x6fc16030 
- 272 0x6fc15d20 
- 273 0x6fc16b90 
- 274 0x6fc15d30 
- 275 0x6fc16430 
- 276 0x6fc16330 
- 277 0x6fc16490 
- 278 0x6fc15d10 
- 279 0x6fc19d90 
- 280 0x6fc16c40 
- 281 0x6fc19d60 
- 282 0x6fc181a0 
- 283 0x6fc18370 
- 284 0x6fc15d50 
- 285 0x6fc16150 
- 286 0x6fc15d60 
- 287 0x6fc19bb0 
- 288 0x6fc182b0 
- 289 0x6fc195b0 
- 290 0x6fc19c10 
- 301 0x6fc15ba0 
- 302 0x6fc159b0 
- 303 0x6fc15aa0 
- 304 0x6fc159c0 
- 312 0x6fc27ed0 
- 313 0x6fc282c0 
- 314 0x6fc285c0 
- 315 0x6fc28470 
- 321 0x6fc229c0 
- 323 0x6fc23ea0 
- 324 0x6fc233c0 
- 325 0x6fc233f0 
- 326 0x6fc231f0 
- 331 0x6fc2a330 
- 332 0x6fc28eb0 
- 334 0x6fc287f0 
- 335 0x6fc2a200 
- 341 0x6fc09e90 
- 342 0x6fc09c80 
- 343 0x6fc09bb0 
- 344 0x6fc098d0 
- 345 0x6fc08f00 
- 346 0x6fc08ee0 
- 347 0x6fc08e60 
- 348 0x6fc08d90 
- 349 0x6fc09470 
- 350 0x6fc092a0 
- 351 0x6fc09850 
- 352 0x6fc095e0 
- 353 0x6fc08d70 
- 354 0x6fc091f0 
- 355 0x6fc09150 
- 356 0x6fc09040 
- 357 0x6fc09520 
- 358 0x6fc099f0 
- 359 0x6fc08d30 
- 372 0x6fc25dd0 
- 373 0x6fc26290 
- 374 0x6fc25cd0 
- 375 0x6fc26020 
- 376 0x6fc26120 
- 377 0x6fc26680 
- 378 0x6fc265a0 
- 381 0x6fc08510 
- 382 0x6fc07e40 
- 383 0x6fc07b30 
- 385 0x6fc08670 
- 386 0x6fc07f80 
- 387 0x6fc08bf0 
- 388 0x6fc08450 
- 389 0x6fc07980 
- 390 0x6fc07c70 
- 391 0x6fc08b80 
- 392 0x6fc07ba0 
- 393 0x6fc07a90 
- 401 0x6fc0c580 
- 403 0x6fc0b960 
- 404 0x6fc0b780 
- 405 0x6fc0c760 
- 412 0x6fc241d0 
- 413 0x6fc24610 
- 414 0x6fc245b0 
- 415 0x6fc24590 
- 416 0x6fc24570 
- 417 0x6fc24550 
- 418 0x6fc24110 
- 419 0x6fc245d0 
- 421 0x6fc2c370 
- 422 0x6fc2c2b0 
- 423 0x6fc2c1d0 
- 424 0x6fc2c150 
- 425 0x6fc2c0e0 
- 426 0x6fc2c080 
- 427 0x6fc2bc50 
- 428 0x6fc2c3e0 
- 431 0x6fc26ca0 
- 432 0x6fc26c60 
- 433 0x6fc27cf0 
- 434 0x6fc26cd0 
- 436 0x6fc279d0 
- 437 0x6fc27620 
- 438 0x6fc278e0 
- 439 0x6fc27e30 
- 440 0x6fc26e00 
- 441 0x6fc26730 
- 442 0x6fc26810 
- 443 0x6fc27060 
- 444 0x6fc27c90 
- 445 0x6fc27c10 
- 446 0x6fc27b90 
- 447 0x6fc27d50 
- 451 0x6fc13250 
- 452 0x6fc131b0 
- 453 0x6fc138b0 
- 454 0x6fc13970 
- 455 0x6fc13e50 
- 456 0x6fc14c20 
- 457 0x6fc147f0 
- 458 0x6fc130c0 
- 459 0x6fc12fd0 
- 461 0x6fc1f590 
- 462 0x6fc1f3f0 
- 463 0x6fc1f160 
- 464 0x6fc1f250 
- 465 0x6fc1f130 
- 466 0x6fc1fb30 
- 467 0x6fc1fc20 
- 468 0x6fc1f120 
- 469 0x6fc1fc90 
- 470 0x6fc1f4f0 
- 472 0x6fc14fb0 
- 473 0x6fc14f70 
- 474 0x6fc14ee0 
- 475 0x6fc15890 
- 476 0x6fc15220 
- 477 0x6fc150c0 
- 478 0x6fc15080 
- 479 0x6fc15990 
- 481 0x6fc0bae0 
- 482 0x6fc0ae50 
- 483 0x6fc0adf0 
- 484 0x6fc0b8e0 
- 485 0x6fc0c4b0 
- 486 0x6fc0bf10 
- 487 0x6fc0b6d0 
- 488 0x6fc0b550 
- 489 0x6fc0c8a0 
- 490 0x6fc0b400 
- 491 0x6fc12c80 
- 492 0x6fc12c50 
- 493 0x6fc12c30 
- 494 0x6fc12c10 
- 495 0x6fc12cb0 
- 496 0x6fc0a500 
- 497 0x6fc0b020 
- 501 0x6fc2b080 
- 502 0x6fc2ac10 
- 503 0x6fc2ae00 
- 504 0x6fc2b3a0 
- 505 0x6fc2bb00 
- 506 0x6fc2afd0 
- 507 0x6fc2bbf0 
- 508 0x6fc2b230 
- 509 0x6fc2b1e0 
- 510 0x6fc2a860 
- 511 0x6fc243d0 
- 512 0x6fc24530 
- 513 0x6fc24510 
- 514 0x6fc244f0 
- 515 0x6fc244d0 
- 516 0x6fc24370 
- 517 0x6fc240b0 
- 518 0x6fc240d0 
- 521 0x6fc20c00 
- 523 0x6fc21ac0 
- 524 0x6fc20b70 
- 525 0x6fc20580 
- 527 0x6fc20730 
- 528 0x6fc21ba0 
- 529 0x6fc21b30 
- 530 0x6fc206a0 
- 531 0x6fc20680 
- 532 0x6fc20620 
- 533 0x6fc20600 
- 534 0x6fc216d0 
- 535 0x6fc219c0 
- 536 0x6fc218f0 
- 537 0x6fc20290 
- 538 0x6fc201b0 
- 539 0x6fc200d0 
- 540 0x6fc1ff40 
- 541 0x6fc24ba0 
- 542 0x6fc24ae0 
- 543 0x6fc248a0 
- 544 0x6fc24f20 
- 545 0x6fc24a50 
- 546 0x6fc249e0 
- 547 0x6fc24e70 
- 548 0x6fc24d60 
- 549 0x6fc24970 
- 550 0x6fc24900 
- 551 0x6fc128d0 
- 552 0x6fc12700 
- 561 0x6fc1fa00 
- 562 0x6fc1fc30 
- 563 0x6fc1f150 
- 564 0x6fc1f2d0 
- 571 0x6fc2b2d0 
- 572 0x6fc2b280 
- 573 0x6fc2b830 
- 574 0x6fc2b660 
- 575 0x6fc2ad50 
- 576 0x6fc2acf0 
- 577 0x6fc2b560 
- 578 0x6fc2ba80 
- 579 0x6fc2a850 
- 580 0x6fc2aa90 
- 581 0x6fc2ba00 
- 582 0x6fc2b330 
- ... (+61)
