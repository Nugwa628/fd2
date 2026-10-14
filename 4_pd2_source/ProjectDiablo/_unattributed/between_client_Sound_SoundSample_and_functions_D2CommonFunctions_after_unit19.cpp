/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_after_unit19.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10250bd0 - 0x10250d60
 * Functions     : 7
 * Attribution   : gap=7
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10250bd0  (ghidra: FUN_10250bd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall sub_10250bd0(void *this,void *param_1,void *param_2,uint32_t param_3)

{
  void *pvVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  void *extraout_EDX;
  uint32_t extraout_EDX_00;
  uint8_t local_24 [28];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  pvVar1 = *(void **)((int)this + 4);
  uVar2 = sub_1020fe80(param_3);
  if (extraout_EDX == *(void **)((int)this + 8)) {
    param_2 = (void *)sub_10237be0(this,(int)param_2,uVar2);
  }
  else if (param_2 == extraout_EDX) {
    sub_10237830(this,uVar2);
  }
  else {
    uVar3 = thunk_FUN_1020fe80(this);
    sub_10250ce0(local_24,uVar3,uVar2);
    iVar4 = (int)pvVar1 + -0x18;
    uVar2 = sub_1020fe80(iVar4);
    sub_1020fe80(extraout_EDX_00);
    sub_10237bb0(uVar2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
    sub_10250d20((int)param_2,iVar4,pvVar1);
    iVar4 = sub_10219370((int)local_24);
    uVar2 = sub_1020fe80(iVar4);
    sub_1023e1c0(param_2,uVar2);
    sub_10250ca0((int)local_24);
  }
  sub_10250cc0(param_1,param_2);
  return param_1;
}


// 0x10250ca0  (ghidra: FUN_10250ca0)  [gap]
void __fastcall sub_10250ca0(int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  
  iVar1 = sub_10219370(param_1);
  puVar2 = (uint32_t *)sub_1020fe80(iVar1);
  sub_102113e0(extraout_ECX,puVar2);
  return;
}


// 0x10250cc0  (ghidra: FUN_10250cc0)  [gap]
uint32_t sub_10250cc0(void *param_1,uint32_t param_2)

{
  uint32_t extraout_ECX;
  
  sub_10218cd0(param_1,param_2);
  return extraout_ECX;
}


// 0x10250ce0  (ghidra: FUN_10250ce0)  [gap]
uint32_t * __thiscall sub_10250ce0(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(uint32_t *)this = param_1;
  uVar1 = sub_1020fe80(param_2);
  iVar2 = sub_10219370((int)this);
  sub_1020fe80(iVar2);
  sub_10237bb0(uVar1);
  return this;
}


// 0x10250d20  (ghidra: FUN_10250d20)  [gap]
void * __fastcall sub_10250d20(int param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  if (param_2 == param_1) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x18;
    param_3 = (void *)((int)param_3 + -0x18);
    uVar1 = sub_1020fe80(param_2);
    sub_1023e1c0(param_3,uVar1);
  } while (param_2 != param_1);
  return param_3;
}


// 0x10250d58  (ghidra: FUN_10250d58)  [gap]
void __thiscall sub_10250d58(void *this,byte param_1)

{
  sub_1023e250((void *)((int)this - *(int *)((int)this + -4)),param_1);
  return;
}


// 0x10250d60  (ghidra: FUN_10250d60)  [gap]
void __thiscall sub_10250d60(void *this,uint param_1)

{
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  _scalar_deleting_destructor_
            ((basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)this - *(int *)((int)this + -4)),param_1);
  return;
}

