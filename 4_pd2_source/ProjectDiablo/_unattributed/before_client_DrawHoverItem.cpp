/*
 * _unattributed/before_client_DrawHoverItem.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x1020f190 - 0x1020f460
 * Functions     : 27
 * Attribution   : gap=27
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x1020f190  (ghidra: FUN_1020f190)  [gap]
void sub_1020f190(void)

{
  sub_10255e10(&DAT_104e6b84);
  _atexit(FUN_10322fd0);
  return;
}


// 0x1020f1a6  (ghidra: FUN_1020f1a6)  [gap]
void sub_1020f1a6(void)

{
  _atexit(FUN_10322fda);
  return;
}


// 0x1020f1c0  (ghidra: FUN_1020f1c0)  [gap]
uint32_t sub_1020f1c0(void)

{
  return 0x7fffffff;
}


// 0x1020f1d0  (ghidra: FUN_1020f1d0)  [gap]
uint32_t __fastcall sub_1020f1d0(uint32_t param_1,uint32_t param_2)

{
  return param_2;
}


// 0x1020f1e0  (ghidra: FUN_1020f1e0)  [gap]
uint32_t * __thiscall sub_1020f1e0(void *this,uint32_t param_1)

{
  *(uint8_t ***)this = std::exception::vftable;
  *(uint64_t *)((int)this + 4) = 0;
  *(uint32_t *)((int)this + 4) = param_1;
  return this;
}


// 0x1020f200  (ghidra: FUN_1020f200)  [gap]
uint32_t * __thiscall sub_1020f200(void *this,int param_1)

{
  *(uint8_t ***)this = std::exception::vftable;
  *(uint64_t *)((int)this + 4) = 0;
  __std_exception_copy(param_1 + 4,(uint64_t *)((int)this + 4));
  return this;
}


// 0x1020f230  (ghidra: FUN_1020f230)  [gap]
void __fastcall sub_1020f230(uint32_t *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}


// 0x1020f250  (ghidra: FUN_1020f250)  [gap]
char * __fastcall sub_1020f250(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}


// 0x1020f260  (ghidra: FUN_1020f260)  [gap]
uint32_t * __thiscall sub_1020f260(void *this,byte param_1)

{
  sub_1020f230(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1020f290  (ghidra: FUN_1020f290)  [gap]
uint32_t * __thiscall sub_1020f290(void *this,uint32_t param_1)

{
  sub_1020f1e0(this,param_1);
  *(uint8_t ***)this = std::bad_alloc::vftable;
  return this;
}


// 0x1020f2b0  (ghidra: FUN_1020f2b0)  [gap]
uint32_t * __thiscall sub_1020f2b0(void *this,byte param_1)

{
  sub_1020f2e0(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1020f2e0  (ghidra: FUN_1020f2e0)  [gap]
void __fastcall sub_1020f2e0(uint32_t *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}


// 0x1020f2f0  (ghidra: FUN_1020f2f0)  [gap]
uint32_t * __fastcall sub_1020f2f0(uint32_t *param_1)

{
  sub_1020f290(param_1,"bad array new length");
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


// 0x1020f310  (ghidra: FUN_1020f310)  [gap]
uint32_t * __thiscall sub_1020f310(void *this,byte param_1)

{
  thunk_FUN_1020f2e0(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1020f340  [gap]
void __fastcall thunk_FUN_1020f2e0(uint32_t *param_1)

{
  sub_1020f2e0(param_1);
  return;
}


// 0x1020f370  (ghidra: FUN_1020f370)  [gap]
uint32_t * __thiscall sub_1020f370(void *this,int param_1)

{
  sub_1020f390(this,param_1);
  *(uint8_t ***)this = std::bad_array_new_length::vftable;
  return this;
}


// 0x1020f390  (ghidra: FUN_1020f390)  [gap]
uint32_t * __thiscall sub_1020f390(void *this,int param_1)

{
  sub_1020f200(this,param_1);
  *(uint8_t ***)this = std::bad_alloc::vftable;
  return this;
}


// 0x1020f3b0  (ghidra: FUN_1020f3b0)  [gap]
void __fastcall sub_1020f3b0(uint param_1)

{
  operator_new(param_1);
  return;
}


// 0x1020f3c0  (ghidra: FUN_1020f3c0)  [gap]
void __fastcall sub_1020f3c0(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = *param_2 + 0x23;
  iVar1 = *(int *)(*param_1 + -4);
  if ((*param_1 - iVar1) - 4U < 0x20) {
    *param_1 = iVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1020f3d5. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo_noreturn();
  return;
}


// 0x1020f3e0  (ghidra: FUN_1020f3e0)  [gap]
void sub_stl_1020f3e0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}


// 0x1020f3f0  (ghidra: FUN_1020f3f0)  [gap]
void sub_stl_1020f3f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}


// 0x1020f400  [gap]
void __fastcall thunk_FUN_1020f8e0(uint32_t param_1)

{
  uint32_t uVar1;
  void *this;
  uint32_t extraout_ECX;
  
  uVar1 = thunk_FUN_1020fe80(param_1);
  this = (void *)thunk_FUN_1020fe80(extraout_ECX);
  sub_10210410(this,uVar1);
  return;
}


// 0x1020f410  (ghidra: FUN_1020f410)  [gap]
void __fastcall sub_1020f410(uint64_t *param_1)

{
  *param_1 = 0;
  return;
}


// 0x1020f420  (ghidra: FUN_1020f420)  [gap]
void __fastcall sub_1020f420(uint64_t *param_1)

{
  *param_1 = 0;
  *(uint32_t *)(param_1 + 1) = 0;
  return;
}


// 0x1020f440  (ghidra: FUN_1020f440)  [gap]
void __fastcall sub_1020f440(int param_1)

{
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 4));
  return;
}


// 0x1020f450  [gap]
void __fastcall thunk_FUN_1020f700(uint32_t param_1)

{
  sub_1020f700(param_1);
  return;
}


// 0x1020f460  [gap]
void __fastcall thunk_FUN_1020f5d0(uint32_t param_1)

{
  uint32_t uVar1;
  void *this;
  uint32_t extraout_ECX;
  
  uVar1 = thunk_FUN_1020fe80(param_1);
  this = (void *)thunk_FUN_1020fe80(extraout_ECX);
  sub_10210160(this,uVar1);
  return;
}

