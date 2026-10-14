/*
 * lib/seh_unwind_funclets.cpp
 * Reconstructed from Ghidra output of PD2_EXT.dll (Project Diablo 2).
 * Address range : 0x10002375 - 0x10002375
 * Functions     : 1
 * Attribution   : lib=1
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "pd2_ext_decomp.h"


// 0x10002375  [lib]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void Unwind_10002375(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_100057ed();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

