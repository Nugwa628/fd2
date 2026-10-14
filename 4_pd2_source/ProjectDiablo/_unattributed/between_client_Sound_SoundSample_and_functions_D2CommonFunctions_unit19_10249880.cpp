/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit19_10249880.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10249880 - 0x102507b0
 * Functions     : 300
 * Attribution   : gap=300
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10249880  (ghidra: FUN_10249880)  [gap]
void __thiscall sub_10249880(void *this,uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 4);
  iVar4 = *(int *)this;
  uVar3 = iVar1 - iVar4 >> 4;
  if (param_1 < uVar3) {
    iVar4 = param_1 * 0x10 + iVar4;
    sub_10241090(iVar4,iVar1);
    *(int *)((int)this + 4) = iVar4;
    return;
  }
  if (uVar3 < param_1) {
    if ((uint)(*(int *)((int)this + 8) - iVar4 >> 4) < param_1) {
      sub_1024c670(this,param_1);
      return;
    }
    uVar2 = sub_1024a5f0(this,iVar1,param_1 - uVar3);
    *(uint32_t *)((int)this + 4) = uVar2;
  }
  return;
}


// 0x102498f0  (ghidra: FUN_102498f0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_102498f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this;
  int *extraout_ECX;
  uint32_t local_28;
  uint32_t local_24;
  uint64_t local_20;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030634d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  local_24 = param_2;
  iVar1 = sub_1020faf0(&local_24);
  sub_1020f420(&local_20);
  sub_10212360(this,param_3,param_4);
  local_8 = 0;
  for (iVar2 = sub_1020faf0(&local_28); iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    sub_1024c6f0(&local_20,iVar2);
  }
  uVar3 = sub_10212340((uint32_t *)&local_20);
  sub_10249c00(extraout_ECX);
  ExceptionList = local_10;
  return uVar3;
}


// 0x10249990  (ghidra: FUN_10249990)  [gap]
void __thiscall sub_10249990(void *this,uint *param_1,uint32_t param_2,uint *param_3,int param_4)

{
  sub_1024c720(this,param_1,param_2,param_3,param_4);
  return;
}


// 0x102499b0  (ghidra: FUN_102499b0)  [gap]
void __cdecl sub_102499b0(uint32_t param_1)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  uint8_t *puVar3;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  puVar1 = (uint8_t *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  puVar3 = (uint8_t *)sub_1020f1d0(extraout_ECX,uVar2);
  *puVar3 = *puVar1;
  return;
}


// 0x102499e0  (ghidra: FUN_102499e0)  [gap]
int __thiscall sub_102499e0(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  uint uVar5;
  
  iVar4 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar4;
  uVar1 = sub_10210be0();
  if (uVar5 != uVar1) {
    uVar5 = uVar5 + 1;
    uVar1 = sub_1024a820(this,uVar5);
    iVar2 = sub_10210080(uVar1);
    iVar4 = (iVar2 - iVar4) + param_1;
    uVar3 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_102499b0(uVar3);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_1024a850(*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10210f50(*(uint32_t *)this,param_1,iVar2);
      sub_10210f50(param_1,*(uint32_t *)((int)this + 4),iVar4 + 1);
    }
    sub_1024a7e0(this,iVar2,uVar5,uVar1);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10249a90  (ghidra: FUN_10249a90)  [gap]
void sub_10249a90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int *piVar5;
  uint32_t extraout_EDX;
  uint8_t local_10 [8];
  uint32_t *local_8;
  
  puVar4 = (uint32_t *)sub_1020fe80(&param_1);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  puVar4 = (uint32_t *)sub_1020fe80(&param_3);
  uVar3 = *puVar4;
  puVar4 = (uint32_t *)sub_1020fe80(&param_5);
  piVar5 = sub_1024c7f0(local_10,uVar1,uVar2,uVar3,extraout_EDX,*puVar4,puVar4[1]);
  sub_1024c870(&param_5,piVar5);
  *local_8 = param_5;
  local_8[1] = param_6;
  return;
}


// 0x10249b00  (ghidra: FUN_10249b00)  [gap]
void __thiscall sub_10249b00(void *this,uint param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = *(int *)((int)this + 4) - iVar1 >> 2;
  if (param_1 < uVar3) {
    *(uint *)((int)this + 4) = iVar1 + param_1 * 4;
    return;
  }
  if (uVar3 < param_1) {
    if ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < param_1) {
      sub_1024c890(this,param_1,param_2);
      return;
    }
    uVar2 = sub_1024a920(this,*(int *)((int)this + 4),param_1 - uVar3,param_2);
    *(uint32_t *)((int)this + 4) = uVar2;
  }
  return;
}


// 0x10249b60  (ghidra: FUN_10249b60)  [gap]
void * __thiscall sub_10249b60(void *this,int *param_1)

{
  int iVar1;
  
  sub_1024a790(this,param_1);
  iVar1 = param_1[5];
  *(int *)((int)this + 0x10) = param_1[4];
  *(int *)((int)this + 0x14) = iVar1;
  *(char *)((int)this + 0x18) = (char)param_1[6];
  return this;
}


// 0x10249b90  (ghidra: FUN_10249b90)  [gap]
void * __thiscall sub_10249b90(void *this,int *param_1)

{
  sub_1024a6b0(this,param_1);
  return this;
}


// 0x10249bb0  (ghidra: FUN_10249bb0)  [gap]
uint32_t * __fastcall sub_10249bb0(uint32_t *param_1)

{
  sub_10249be0(param_1);
  return param_1;
}


// 0x10249bc0  (ghidra: FUN_10249bc0)  [gap]
uint32_t * __fastcall sub_10249bc0(uint32_t *param_1)

{
  thunk_FUN_1020fc60(param_1);
  return param_1;
}


// 0x10249bd0  (ghidra: FUN_10249bd0)  [gap]
void __fastcall sub_10249bd0(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// 0x10249be0  (ghidra: FUN_10249be0)  [gap]
uint64_t __fastcall sub_10249be0(uint32_t *param_1)

{
  uint64_t uVar1;
  
  sub_1023dd40((char *)(param_1 + 6));
  uVar1 = thunk_FUN_1020fc60(param_1);
  return uVar1;
}


// 0x10249c00  (ghidra: FUN_10249c00)  [gap]
void __fastcall sub_10249c00(int *param_1)

{
  sub_102444d0(*param_1,param_1[1]);
  return;
}


// 0x10249c10  (ghidra: FUN_10249c10)  [gap]
uint32_t __fastcall sub_10249c10(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  
  piVar1 = (int *)(param_1 + 4);
  uVar3 = sub_10240bb0(piVar1);
  if ((char)uVar3 != '\0') {
    _wassert(L"!ref_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1abb);
  }
  puVar4 = (uint32_t *)sub_1024aa90((int)piVar1);
  bVar2 = sub_10240d40((char *)*puVar4);
  if (!bVar2) {
    _wassert(L"ref_stack.back()->is_array()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1abc);
  }
  uVar3 = sub_1024aaa0((int)piVar1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


// 0x10249c70  (ghidra: FUN_10249c70)  [gap]
uint32_t __fastcall sub_10249c70(void *param_1)

{
  uint32_t uVar1;
  int local_c;
  uint8_t local_5;
  
  local_5 = 2;
  local_c = sub_1024c900(param_1,&local_5);
  uVar1 = sub_1024aab0(&local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x10249ca0  (ghidra: FUN_10249ca0)  [gap]
uint32_t __fastcall sub_10249ca0(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  
  piVar1 = (int *)(param_1 + 4);
  uVar3 = sub_10240bb0(piVar1);
  if ((char)uVar3 != '\0') {
    _wassert(L"!ref_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aa5);
  }
  puVar4 = (uint32_t *)sub_1024aa90((int)piVar1);
  bVar2 = sub_1023fc60((char *)*puVar4);
  if (!bVar2) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aa6);
  }
  uVar3 = sub_1024aaa0((int)piVar1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


// 0x10249d00  (ghidra: FUN_10249d00)  [gap]
uint32_t __thiscall sub_10249d00(void *this,int param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    _wassert(L"!ref_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1a9b);
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1a9c);
  }
  piVar4 = (int *)sub_1024aa90((int)this + 4);
  iVar5 = sub_1024ae70(*(void **)(*piVar4 + 8),param_1);
  *(int *)((int)this + 0x10) = iVar5;
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}


// 0x10249d80  (ghidra: FUN_10249d80)  [gap]
uint32_t __fastcall sub_10249d80(void *param_1)

{
  uint32_t uVar1;
  int local_c;
  uint8_t local_5;
  
  local_5 = 1;
  local_c = sub_1024c900(param_1,&local_5);
  uVar1 = sub_1024aab0(&local_c);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x10249db0  (ghidra: FUN_10249db0)  [gap]
uint32_t __thiscall sub_10249db0(void *this,uint32_t param_1)

{
  int iVar1;
  
  iVar1 = sub_1024caa0(this,param_1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10249dd0  (ghidra: FUN_10249dd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10249dd0(void *param_1)

{
  int iVar1;
  uint8_t local_10 [8];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar1 = sub_1024cc30(param_1,local_10);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10249e00  (ghidra: FUN_10249e00)  [gap]
uint32_t __fastcall sub_10249e00(void *param_1)

{
  int iVar1;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  iVar1 = sub_1024cdc0(param_1,&stack0x00000004);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10249e20  (ghidra: FUN_10249e20)  [gap]
uint32_t __fastcall sub_10249e20(void *param_1)

{
  int iVar1;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  iVar1 = sub_1024cf50(param_1,&stack0x00000004);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10249e40  (ghidra: FUN_10249e40)  [gap]
uint32_t __fastcall sub_10249e40(void *param_1)

{
  int iVar1;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  iVar1 = sub_1024d0e0(param_1,&stack0x00000004);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10249e60  (ghidra: FUN_10249e60)  [gap]
uint32_t __fastcall sub_10249e60(int *param_1)

{
  int iVar1;
  
  iVar1 = sub_1024d270(param_1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


// 0x10249e70  (ghidra: FUN_10249e70)  [gap]
uint32_t __fastcall sub_10249e70(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint32_t *puVar4;
  uint32_t uVar5;
  uint32_t extraout_var;
  uint32_t extraout_EDX;
  uint32_t uStack_24;
  char local_5;
  
  local_5 = '\x01';
  piVar2 = (int *)sub_1024aa90(param_1 + 4);
  if (*piVar2 != 0) {
    sub_1024aa90(param_1 + 4);
    iVar3 = sub_10218980((int *)(param_1 + 4));
    uStack_24 = 0x10249eaa;
    local_5 = sub_1024abe0((void *)(param_1 + 0x38),iVar3 + -1,3,extraout_EDX);
    if (local_5 == '\0') {
      sub_1023ddd0(&uStack_24,(char *)(param_1 + 0x68));
      puVar4 = (uint32_t *)sub_1024aa90(param_1 + 4);
      sub_1023dd90((char *)*puVar4);
    }
  }
  uVar5 = sub_10240bb0((int *)(param_1 + 4));
  if ((char)uVar5 != '\0') {
    uStack_24 = 0x10249ef3;
    _wassert(L"!ref_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1baf);
  }
  bVar1 = sub_102471c0(param_1 + 0x10);
  if (bVar1) {
    uStack_24 = 0x10249f17;
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1bb0);
  }
  sub_1024aaa0(param_1 + 4);
  uVar5 = sub_1024a8b0((void *)(param_1 + 0x10));
  if (local_5 == '\0') {
    uVar5 = sub_10240bb0((int *)(param_1 + 4));
    if ((char)uVar5 == '\0') {
      puVar4 = (uint32_t *)sub_1024aa90(param_1 + 4);
      bVar1 = sub_10240d40((char *)*puVar4);
      uVar5 = CONCAT31(extraout_var,bVar1);
      if (bVar1) {
        piVar2 = (int *)sub_1024aa90(param_1 + 4);
        uVar5 = sub_10240c20(*(int *)(*piVar2 + 8));
      }
    }
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


// 0x10249f70  (ghidra: FUN_10249f70)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10249f70(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint8_t local_11;
  uint8_t local_10 [4];
  uint8_t local_c [4];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar3 = (int)param_1 + 0x68;
  uVar2 = 2;
  iVar1 = sub_10218980((int *)((int)param_1 + 4));
  local_11 = sub_1024abe0((void *)((int)param_1 + 0x38),iVar1,uVar2,iVar3);
  sub_10245b40((void *)((int)param_1 + 0x10),&local_11);
  local_11 = 2;
  sub_1024d3d0(param_1,local_10,&local_11);
  uVar2 = sub_10218990((void *)((int)param_1 + 4),local_c);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


// 0x10249fe0  (ghidra: FUN_10249fe0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10249fe0(int param_1)

{
  void *this;
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint32_t *puVar5;
  uint32_t uVar6;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  char *pcVar7;
  uint32_t extraout_var_01;
  uint32_t extraout_EDX;
  char *in_stack_ffffffb0;
  wchar_t *in_stack_ffffffb4;
  char *pcVar8;
  uint8_t auStack_34 [8];
  uint32_t local_2c [4];
  uint32_t local_1c [4];
  uint local_c;
  uint8_t  stack0xffffffb0;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)auStack_34;
  piVar3 = (int *)sub_1024aa90(param_1 + 4);
  if (*piVar3 != 0) {
    sub_1024aa90(param_1 + 4);
    iVar4 = sub_10218980((int *)(param_1 + 4));
    in_stack_ffffffb4 = (wchar_t *)(iVar4 + -1);
    in_stack_ffffffb0 = (char *)0x1024a025;
    cVar1 = sub_1024abe0((void *)(param_1 + 0x38),in_stack_ffffffb4,1,extraout_EDX);
    if (cVar1 == '\0') {
      sub_1023ddd0(&stack0xffffffb0,(char *)(param_1 + 0x68));
      puVar5 = (uint32_t *)sub_1024aa90(param_1 + 4);
      sub_1023dd90((char *)*puVar5);
    }
  }
  uVar6 = sub_10240bb0((int *)(param_1 + 4));
  if ((char)uVar6 != '\0') {
    in_stack_ffffffb4 = L"!ref_stack.empty()";
    in_stack_ffffffb0 = (char *)0x1024a069;
    _wassert(L"!ref_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1b77);
  }
  bVar2 = sub_102471c0(param_1 + 0x10);
  if (bVar2) {
    in_stack_ffffffb4 = L"!keep_stack.empty()";
    in_stack_ffffffb0 = (char *)0x1024a089;
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1b78);
  }
  sub_1024aaa0(param_1 + 4);
  sub_1024a8b0((void *)(param_1 + 0x10));
  piVar3 = (int *)sub_10240bb0((int *)(param_1 + 4));
  if (((char)piVar3 == '\0') && (piVar3 = (int *)sub_1024aa90(param_1 + 4), *piVar3 != 0)) {
    puVar5 = (uint32_t *)sub_1024aa90(param_1 + 4);
    cVar1 = sub_1024af70((char *)*puVar5);
    piVar3 = (int *)CONCAT31(extraout_var,cVar1);
    if (cVar1 != '\0') {
      sub_10249bd0(local_1c);
      sub_1024aa90(param_1 + 4);
      sub_1024af40(local_1c);
      sub_1024aa90(param_1 + 4);
      piVar3 = sub_1024af10(local_2c);
      pcVar8 = (char *)0x1024a110;
      bVar2 = sub_1024d680(local_1c,piVar3);
      piVar3 = (int *)CONCAT31(extraout_var_00,bVar2);
      if (bVar2) {
        while( true ) {
          pcVar7 = (char *)sub_json_1024acb0(local_1c);
          bVar2 = sub_10245780(pcVar7);
          if (bVar2) break;
          sub_1024ac30(local_1c);
          sub_1024aa90(param_1 + 4);
          piVar3 = sub_1024af10(local_2c);
          pcVar8 = (char *)0x1024a15b;
          bVar2 = sub_1024d680(local_1c,piVar3);
          if (!bVar2) {
            return CONCAT31(extraout_var_01,1);
          }
        }
        puVar5 = (uint32_t *)sub_1024aa90(param_1 + 4);
        this = (void *)*puVar5;
        sub_1024ae20(&stack0xffffffb0,local_1c);
        piVar3 = sub_1024d6a0(this,local_2c,in_stack_ffffffb0,(int)in_stack_ffffffb4,pcVar8);
      }
    }
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}


// 0x1024a1b0  (ghidra: FUN_1024a1b0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024a1b0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint32_t uStack_4c;
  uint32_t uVar4;
  char local_25;
  char local_24 [16];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  int local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306395;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10241960(local_24,param_1);
  pcVar3 = local_24;
  local_8 = 0;
  uVar4 = 4;
  iVar1 = sub_10218980((int *)((int)this + 4));
  uStack_4c = 0x1024a207;
  local_25 = sub_1024abe0((void *)((int)this + 0x38),iVar1,uVar4,pcVar3);
  sub_10245b40((void *)((int)this + 0x20),&local_25);
  if (local_25 != '\0') {
    piVar2 = (int *)sub_1024aa90((int)this + 4);
    if (*piVar2 != 0) {
      piVar2 = (int *)sub_1024aa90((int)this + 4);
      this_00 = *(void **)(*piVar2 + 8);
      sub_1023ddd0(&uStack_4c,(char *)((int)this + 0x68));
      local_8._0_1_ = 1;
      pcVar3 = (char *)sub_1024ae70(this_00,param_1);
      local_8 = (uint)local_8._1_3_ << 8;
      pcVar3 = sub_1023dd90(pcVar3);
      *(char **)((int)this + 0x30) = pcVar3;
    }
  }
  uVar4 = sub_1023dd40(local_24);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


// 0x1024a290  (ghidra: FUN_1024a290)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_1024a290(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint8_t local_11;
  uint8_t local_10 [4];
  uint8_t local_c [4];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar3 = (int)param_1 + 0x68;
  uVar2 = 0;
  iVar1 = sub_10218980((int *)((int)param_1 + 4));
  local_11 = sub_1024abe0((void *)((int)param_1 + 0x38),iVar1,uVar2,iVar3);
  sub_10245b40((void *)((int)param_1 + 0x10),&local_11);
  local_11 = 1;
  sub_1024d3d0(param_1,local_10,&local_11);
  uVar2 = sub_10218990((void *)((int)param_1 + 4),local_c);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


// 0x1024a300  (ghidra: FUN_1024a300)  [gap]
uint32_t __thiscall sub_1024a300(void *this,int *param_1)

{
  uint32_t uVar1;
  uint8_t local_10 [12];
  
  uVar1 = sub_1024d870(this,local_10,param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x1024a320  (ghidra: FUN_1024a320)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_1024a320(void *param_1)

{
  uint32_t uVar1;
  uint8_t auStack_20 [4];
  uint8_t local_1c [8];
  uint8_t local_14 [8];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_20;
  uVar1 = sub_1024db10(param_1,local_1c,local_14);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x1024a360  (ghidra: FUN_1024a360)  [gap]
uint32_t __fastcall sub_1024a360(void *param_1)

{
  uint32_t uVar1;
  uint8_t local_10 [12];
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  uVar1 = sub_1024ddb0(param_1,local_10,&stack0x00000004);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x1024a380  (ghidra: FUN_1024a380)  [gap]
uint32_t __fastcall sub_1024a380(void *param_1)

{
  uint32_t uVar1;
  uint8_t local_10 [12];
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  uVar1 = sub_1024e050(param_1,local_10,&stack0x00000004);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x1024a3a0  (ghidra: FUN_1024a3a0)  [gap]
uint32_t __fastcall sub_1024a3a0(void *param_1)

{
  uint32_t uVar1;
  uint8_t local_10 [12];
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  uVar1 = sub_1024e2f0(param_1,local_10,&stack0x00000004);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x1024a3c0  (ghidra: FUN_1024a3c0)  [gap]
uint32_t __fastcall sub_1024a3c0(void *param_1)

{
  uint32_t uVar1;
  uint8_t local_10 [12];
  
  uVar1 = sub_1024e590(param_1,local_10);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


// 0x1024a3e0  (ghidra: FUN_1024a3e0)  [gap]
void * __thiscall sub_1024a3e0(void *this,uint32_t param_1)

{
  int extraout_ECX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103063cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10212600(this,param_1);
  local_8 = 0;
  sub_1024aad0(extraout_ECX);
  ExceptionList = local_10;
  return this;
}


// 0x1024a440  (ghidra: FUN_1024a440)  [gap]
void * __thiscall sub_1024a440(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint8_t in_stack_00000030;
  PRECEX in_stack_00000034;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10306410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  sub_10244bd0(this,(int)&stack0x00000008);
  *(uint32_t *)((int)this + 0x28) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_1024aaf0((PRECEX *)((int)this + 0x30),uVar1,in_stack_00000034);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(uint8_t *)((int)this + 0x98) = in_stack_00000030;
  sub_10245510((int)this);
  thunk_FUN_1023f130(&stack0x00000008);
  ExceptionList = local_10;
  return this;
}


// 0x1024a4d0  (ghidra: FUN_1024a4d0)  [gap]
int __fastcall sub_1024a4d0(int param_1)

{
  return param_1 + 0x2c;
}


// 0x1024a4e0  (ghidra: FUN_1024a4e0)  [gap]
void sub_1024a4e0(void)

{
  return;
}


// 0x1024a4f0  (ghidra: FUN_1024a4f0)  [gap]
uint64_t __fastcall sub_1024a4f0(int param_1)

{
  return *(uint64_t *)(param_1 + 0x50);
}


// 0x1024a500  (ghidra: FUN_1024a500)  [gap]
uint64_t __fastcall sub_1024a500(int param_1)

{
  return *(uint64_t *)(param_1 + 0x48);
}


// 0x1024a510  (ghidra: FUN_1024a510)  [gap]
void * __thiscall sub_1024a510(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_10240c70(uVar1);
  return this;
}


// 0x1024a530  (ghidra: FUN_1024a530)  [gap]
void * __thiscall sub_1024a530(void *this,uint32_t param_1)

{
  void *pvVar1;
  
  sub_1023f170(this);
  pvVar1 = (void *)sub_1020fe80(param_1);
  sub_1024ab80(this,pvVar1);
  return this;
}


// 0x1024a560  (ghidra: FUN_1024a560)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * sub_1024a560(void)

{
  DAT_104e0a74 = 0;
  DAT_104e0a78 = 0;
  return &DAT_104e0a74;
}


// 0x1024a580  (ghidra: FUN_1024a580)  [gap]
void __fastcall sub_1024a580(uint32_t param_1,void *param_2)

{
  sub_10210850(param_2,0x2c);
  return;
}


// 0x1024a590  (ghidra: FUN_1024a590)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * sub_1024a590(void)

{
  DAT_104e0abc = 0;
  DAT_104e0ac0 = 0;
  return &DAT_104e0abc;
}


// 0x1024a5b0  (ghidra: FUN_1024a5b0)  [gap]
uint32_t __thiscall sub_1024a5b0(void *this,int param_1)

{
  uint32_t extraout_ECX;
  
  sub_1024a5d0(this,param_1);
  return extraout_ECX;
}


// 0x1024a5d0  (ghidra: FUN_1024a5d0)  [gap]
int * __thiscall sub_1024a5d0(void *this,int param_1)

{
  *(int *)this = *(int *)this + param_1 * 0x28;
  return this;
}


// 0x1024a5f0  (ghidra: FUN_1024a5f0)  [gap]
void __thiscall sub_1024a5f0(void *this,uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_1024e830(param_1,param_2,uVar1);
  return;
}


// 0x1024a610  (ghidra: FUN_1024a610)  [gap]
uint32_t * __thiscall sub_1024a610(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this_00;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030643d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10210180(this);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 != iVar2) {
    sub_1024ae40(this_00,iVar2 - iVar1 >> 4);
    local_8 = 0;
    param_1 = this;
    uVar3 = sub_1024e890(this,iVar1,iVar2,*(uint32_t *)this);
    *(uint32_t *)((int)this + 4) = uVar3;
    param_1 = (int *)0x0;
    sub_1024aa30(&param_1);
  }
  ExceptionList = local_10;
  return this;
}


// 0x1024a6a0  (ghidra: FUN_1024a6a0)  [gap]
uint32_t __fastcall sub_1024a6a0(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  
  sub_1020f7c0(param_1);
  return extraout_ECX;
}


// 0x1024a6b0  (ghidra: FUN_1024a6b0)  [gap]
uint32_t * __thiscall sub_1024a6b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030646d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10210180(this);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 != iVar2) {
    sub_1024aee0(this,(iVar2 - iVar1) / 0x28);
    local_8 = 0;
    param_1 = this;
    uVar3 = sub_1024e8b0(this,iVar1,iVar2,*(uint32_t *)this);
    *(uint32_t *)((int)this + 4) = uVar3;
    param_1 = (int *)0x0;
    sub_1024aa20(&param_1);
  }
  ExceptionList = local_10;
  return this;
}


// 0x1024a750  (ghidra: FUN_1024a750)  [gap]
void sub_1024a750(void *param_1,int param_2)

{
  sub_1024e8d0(param_1,param_2);
  return;
}


// 0x1024a770  (ghidra: FUN_1024a770)  [gap]
int __fastcall sub_1024a770(uint32_t *param_1)

{
  int extraout_ECX;
  
  sub_1020f7c0(param_1);
  *(uint32_t *)(extraout_ECX + 0x10) = 0;
  *(uint32_t *)(extraout_ECX + 0x14) = 0;
  *(uint8_t *)(extraout_ECX + 0x18) = 0;
  return extraout_ECX;
}


// 0x1024a790  (ghidra: FUN_1024a790)  [gap]
int * __thiscall sub_1024a790(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this_00;
  
  sub_10210180(this);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 != iVar2) {
    sub_10210bc0(this_00,iVar2 - iVar1);
    uVar3 = sub_10210f50(iVar1,iVar2,*(int *)this);
    *(uint32_t *)((int)this + 4) = uVar3;
    param_1 = (int *)0x0;
    sub_102109b0(&param_1);
  }
  return this;
}


// 0x1024a7e0  (ghidra: FUN_1024a7e0)  [gap]
void __thiscall sub_1024a7e0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    sub_102100a0(pvVar1,*(int *)((int)this + 8) - (int)pvVar1);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2 + param_1;
  *(int *)((int)this + 8) = param_3 + param_1;
  return;
}


// 0x1024a820  (ghidra: FUN_1024a820)  [gap]
uint __thiscall sub_1024a820(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_1024afb0(this);
  uVar2 = sub_10210be0();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x1024a850  (ghidra: FUN_1024a850)  [gap]
void sub_1024a850(uint32_t param_1,uint32_t param_2,int param_3)

{
  sub_1024af90(param_1,param_2,param_3);
  return;
}


// 0x1024a870  (ghidra: FUN_1024a870)  [gap]
bool __fastcall sub_1024a870(uint32_t *param_1)

{
  uint uVar1;
  int extraout_ECX;
  uint *extraout_EDX;
  
  sub_1020faf0(param_1);
  uVar1 = sub_1024afc0(extraout_ECX);
  return (*extraout_EDX & uVar1) != 0;
}


// 0x1024a890  (ghidra: FUN_1024a890)  [gap]
void sub_1024a890(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t *extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  *extraout_EDX = uVar1;
  return;
}


// 0x1024a8b0  (ghidra: FUN_1024a8b0)  [gap]
void __fastcall sub_1024a8b0(void *param_1)

{
  uint64_t *this;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  this = sub_10246ad0(param_1,&local_20);
  sub_1024aa40(this,&local_18);
  sub_1024afd0(param_1,&local_10);
  return;
}


// 0x1024a8f0  (ghidra: FUN_1024a8f0)  [gap]
uint32_t __thiscall sub_1024a8f0(void *this,void *param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t local_18;
  uint64_t local_10;
  
  puVar1 = sub_10246ad0(this,&local_10);
  puVar1 = sub_1024aa40(puVar1,&local_18);
  uVar2 = sub_1024aa70(puVar1,param_1);
  return (int)((ulonglong)uVar2 >> 0x20);
}


// 0x1024a920  (ghidra: FUN_1024a920)  [gap]
void __thiscall sub_1024a920(void *this,int param_1,int param_2,int *param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_1024e8e0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x1024a940  (ghidra: FUN_1024a940)  [gap]
void __thiscall sub_1024a940(void *this,byte *param_1)

{
  uint64_t uVar1;
  
  sub_1020fe50((char *)param_1);
  uVar1 = sub_1020fe30((int)this);
  sub_1024e970((byte *)uVar1,*(uint *)((int)this + 0x10),param_1,(uint)((ulonglong)uVar1 >> 0x20),
               (byte *)uVar1);
  return;
}


// 0x1024a970  (ghidra: FUN_1024a970)  [gap]
void __thiscall sub_1024a970(void *this,int param_1)

{
  uint64_t uVar1;
  
  sub_1020fe30(param_1);
  uVar1 = sub_1020fe30((int)this);
  sub_1024e970((byte *)uVar1,*(uint *)((int)this + 0x10),(byte *)((ulonglong)uVar1 >> 0x20),
               *(uint *)(param_1 + 0x10),(byte *)uVar1);
  return;
}


// 0x1024a9b0  (ghidra: FUN_1024a9b0)  [gap]
void __thiscall sub_1024a9b0(void *this,int param_1,uint param_2)

{
  uint64_t uVar1;
  
  sub_1020fe30(param_1);
  uVar1 = sub_1020fe30((int)this);
  sub_10237da0((int)uVar1,*(uint *)((int)this + 0x10),param_2,(byte *)((ulonglong)uVar1 >> 0x20),
               *(uint *)(param_1 + 0x10));
  return;
}


// 0x1024a9f0  (ghidra: FUN_1024a9f0)  [gap]
void __thiscall sub_1024a9f0(void *this,uint param_1,uint32_t param_2,int param_3)

{
  uint64_t uVar1;
  
  uVar1 = sub_1020fe30(param_3);
  sub_1024b0e0(this,param_1,param_2,(void *)uVar1,(uint)((ulonglong)uVar1 >> 0x20));
  return;
}


// 0x1024aa20  (ghidra: FUN_1024aa20)  [gap]
void __fastcall sub_1024aa20(uint32_t *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 0) {
    sub_10241180(*piVar1,piVar1[1]);
    sub_10244e20((void *)*piVar1,(piVar1[2] - *piVar1) / 0x28);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}


// 0x1024aa30  (ghidra: FUN_1024aa30)  [gap]
void __fastcall sub_1024aa30(uint32_t *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 0) {
    sub_10241090(*piVar1,piVar1[1]);
    sub_102413a0((void *)*piVar1,piVar1[2] - *piVar1 >> 4);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}


// 0x1024aa40  (ghidra: FUN_1024aa40)  [gap]
uint64_t * __thiscall sub_1024aa40(void *this,uint64_t *param_1)

{
  uint32_t uVar1;
  
  sub_1020f410(param_1);
  uVar1 = *(uint32_t *)this;
  *(uint32_t *)((int)param_1 + 4) = *(uint32_t *)((int)this + 4);
  *(uint32_t *)param_1 = uVar1;
  sub_1024b2b0(param_1);
  return param_1;
}


// 0x1024aa70  (ghidra: FUN_1024aa70)  [gap]
uint64_t __thiscall sub_1024aa70(void *this,void *param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = sub_1024b520(param_1,this);
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),extraout_ECX);
}


// 0x1024aa90  (ghidra: FUN_1024aa90)  [gap]
int __fastcall sub_1024aa90(int param_1)

{
  return *(int *)(param_1 + 4) + -4;
}


// 0x1024aaa0  (ghidra: FUN_1024aaa0)  [gap]
void __fastcall sub_1024aaa0(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -4;
  return;
}


// 0x1024aab0  (ghidra: FUN_1024aab0)  [gap]
void sub_1024aab0(uint32_t param_1)

{
  uint32_t uVar1;
  void *this;
  
  uVar1 = sub_1020fe80(param_1);
  sub_102189a0(this,uVar1);
  return;
}


// 0x1024aad0  (ghidra: FUN_1024aad0)  [gap]
void __fastcall sub_1024aad0(int param_1)

{
  uint32_t uVar1;
  
  *(uint32_t *)(param_1 + 4) = 0;
  uVar1 = sub_10244c60();
  *(uint32_t *)(param_1 + 4) = uVar1;
  return;
}


// 0x1024aaf0  (ghidra: FUN_1024aaf0)  [gap]
PRECEX * __thiscall sub_1024aaf0(PRECEX *param_1,uint32_t param_2,PRECEX param_3)

{
  PRECEX *pPVar1;
  uint32_t uVar2;
  
  pPVar1 = (PRECEX *)sub_1020fe80(param_2);
  TPI1::PRECEX::operator=(param_1,pPVar1);
  param_1[8] = param_3;
  uVar2 = sub_102100c0();
  *(uint32_t *)(param_1 + 0xc) = uVar2;
  param_1[0x10] = (PRECEX)0x0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  *(uint32_t *)(param_1 + 0x18) = 0;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  sub_1020f7c0((uint32_t *)(param_1 + 0x20));
  sub_10237930((uint32_t *)(param_1 + 0x2c));
  *(uint8_t **)(param_1 + 0x44) = &DAT_10367500;
  *(uint32_t *)(param_1 + 0x48) = 0;
  *(uint32_t *)(param_1 + 0x4c) = 0;
  *(uint32_t *)(param_1 + 0x50) = 0;
  *(uint32_t *)(param_1 + 0x54) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  uVar2 = sub_1024b2c0();
  *(int *)(param_1 + 0x60) = (int)(char)uVar2;
  return param_1;
}


// 0x1024ab80  (ghidra: FUN_1024ab80)  [gap]
void __thiscall sub_1024ab80(void *this,void *param_1)

{
  bool bVar1;
  int *piVar2;
  uint32_t uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  
  bVar1 = sub_10240880((int)param_1);
  if (!bVar1) {
    bVar1 = sub_10240870(extraout_ECX);
    if (bVar1) {
      piVar2 = (int *)sub_10240860(extraout_ECX_00);
      uVar3 = (**(code **)(*piVar2 + 4))(this);
      sub_10240850(this,uVar3);
      sub_1023f130(param_1);
      return;
    }
    uVar3 = sub_10240860(extraout_ECX_00);
    sub_10240850(this,uVar3);
    sub_10240850(param_1,0);
  }
  return;
}


// 0x1024abe0  (ghidra: FUN_1024abe0)  [gap]
void __thiscall sub_1024abe0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int extraout_ECX;
  code *extraout_EDX;
  
  uVar2 = param_3;
  bVar1 = sub_10240880((int)this);
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_function_call();
  }
  sub_10240860(extraout_ECX);
  uVar2 = sub_1020fe80(uVar2);
  uVar3 = sub_1020fe80(&param_2);
  uVar4 = sub_1020fe80(&param_1);
  (*extraout_EDX)(uVar4,uVar3,uVar2);
  return;
}


// 0x1024ac30  (ghidra: FUN_1024ac30)  [gap]
uint32_t * __fastcall sub_1024ac30(uint32_t *param_1)

{
  uint8_t *puVar1;
  
  puVar1 = (uint8_t *)*param_1;
  if (puVar1 == (uint8_t *)0x0) {
    _wassert(L"m_object != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x336d);
    puVar1 = (uint8_t *)*param_1;
  }
  switch(*puVar1) {
  default:
    sub_10238960(param_1 + 3);
    return param_1;
  case 1:
    sub_10248120(param_1 + 1,1);
    return param_1;
  case 2:
    sub_1024e990(param_1 + 2);
    return param_1;
  }
}


// 0x1024acb0  (ghidra: FUN_1024acb0)  [gap]
int __fastcall sub_json_1024acb0(uint32_t *param_1)

{
  bool bVar1;
  int iVar2;
  uint8_t *puVar3;
  int extraout_EDX;
  uint64_t uVar4;
  uint8_t local_48 [28];
  uint8_t local_2c [24];
  uint8_t local_14 [4];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030649d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (uint8_t *)*param_1;
  if (puVar3 == (uint8_t *)0x0) {
    _wassert(L"m_object != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x3338);
    puVar3 = (uint8_t *)*param_1;
  }
  switch(*puVar3) {
  case 1:
    uVar4 = sub_10218c90(*(void **)(puVar3 + 8),local_14);
    bVar1 = sub_1023d8f0(param_1 + 1,(int *)uVar4);
    if (!bVar1) {
      _wassert(L"m_it.object_iterator != m_object->m_value.object->end()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x333e);
    }
    iVar2 = sub_1020faf0(param_1 + 1);
    ExceptionList = local_10;
    return iVar2 + 0x18;
  case 2:
    uVar4 = sub_10218c90(*(void **)(puVar3 + 8),local_14);
    bVar1 = sub_1023d8f0(param_1 + 2,(int *)uVar4);
    if (!bVar1) {
      _wassert(L"m_it.array_iterator != m_object->m_value.array->end()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x3344);
    }
    iVar2 = thunk_FUN_1020faf0(param_1 + 2);
    ExceptionList = local_10;
    return iVar2;
  }
  bVar1 = sub_10238940(param_1 + 3);
  if (bVar1) {
    ExceptionList = local_10;
    return extraout_EDX;
  }
  sub_1020f990(local_2c,"cannot get value");
  local_8 = 0;
  sub_1024e9a0(local_48,0xd6,local_2c);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_10393bc4);
}


// 0x1024ae20  (ghidra: FUN_1024ae20)  [gap]
uint32_t * __thiscall sub_1024ae20(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  *(uint64_t *)((int)this + 4) = *(uint64_t *)(param_1 + 1);
  *(uint32_t *)((int)this + 0xc) = param_1[3];
  return this;
}


// 0x1024ae40  (ghidra: FUN_1024ae40)  [gap]
void __thiscall sub_1024ae40(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = sub_10241380(param_1);
  *(int *)this = iVar1;
  *(int *)((int)this + 4) = iVar1;
  *(uint *)((int)this + 8) = param_1 * 0x10 + iVar1;
  return;
}


// 0x1024ae70  (ghidra: FUN_1024ae70)  [gap]
int __thiscall sub_1024ae70(void *this,int param_1)

{
  char *pcVar1;
  uint32_t *puVar2;
  int iVar3;
  char local_28 [16];
  uint8_t local_18 [8];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103064cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = sub_1023dec0(local_28);
  local_8 = 0;
  puVar2 = (uint32_t *)sub_1023fa80(this,local_18,param_1,pcVar1);
  iVar3 = sub_1020faf0(puVar2);
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return iVar3 + 0x18;
}


// 0x1024aee0  (ghidra: FUN_1024aee0)  [gap]
void __thiscall sub_1024aee0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = sub_10244e00(param_1);
  *(int *)this = iVar1;
  *(int *)((int)this + 4) = iVar1;
  *(uint *)((int)this + 8) = iVar1 + param_1 * 0x28;
  return;
}


// 0x1024af10  (ghidra: FUN_1024af10)  [gap]
uint32_t * sub_1024af10(uint32_t *param_1)

{
  void *this;
  uint32_t extraout_EDX;
  
  sub_10249bd0(param_1);
  sub_1024b430(this,extraout_EDX);
  sub_1024b300(param_1);
  return param_1;
}


// 0x1024af40  (ghidra: FUN_1024af40)  [gap]
uint32_t * sub_1024af40(uint32_t *param_1)

{
  void *this;
  uint32_t extraout_EDX;
  
  sub_10249bd0(param_1);
  sub_1024b430(this,extraout_EDX);
  sub_1024b390(param_1);
  return param_1;
}


// 0x1024af70  (ghidra: FUN_1024af70)  [gap]
uint8_t __fastcall sub_1024af70(char *param_1)

{
  bool bVar1;
  char *extraout_ECX;
  
  bVar1 = sub_10240d40(param_1);
  if (!bVar1) {
    bVar1 = sub_1023fc60(extraout_ECX);
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}


// 0x1024af90  (ghidra: FUN_1024af90)  [gap]
void sub_1024af90(uint32_t param_1,uint32_t param_2,int param_3)

{
  sub_10211960(param_1,param_2,param_3);
  return;
}


// 0x1024afb0  (ghidra: FUN_1024afb0)  [gap]
int __fastcall sub_1024afb0(int *param_1)

{
  return param_1[2] - *param_1;
}


// 0x1024afc0  (ghidra: FUN_1024afc0)  [gap]
int __fastcall sub_1024afc0(int param_1)

{
  return 1 << ((byte)*(uint32_t *)(param_1 + 4) & 0x1f);
}


// 0x1024afd0  (ghidra: FUN_1024afd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t * __thiscall sub_1024afd0(void *this,uint64_t *param_1)

{
  void *this_00;
  uint64_t *puVar1;
  uint32_t *puVar2;
  uint64_t *extraout_ECX;
  uint64_t uVar3;
  uint8_t local_60 [8];
  uint32_t local_58 [2];
  uint64_t local_50;
  uint8_t local_48 [4];
  int local_44;
  uint64_t *local_40;
  void *local_3c;
  uint32_t local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint local_24;
  uint8_t *puStack_20;
  void *local_1c;
  uint8_t *puStack_18;
  uint32_t uStack_14;
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_103064f0;
  local_1c = ExceptionList;
  local_24 = DAT_1039800c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_40 = param_1;
  local_3c = this;
  sub_1020f410((uint64_t *)&local_2c);
  sub_1024b5d0(extraout_ECX);
  uVar3 = sub_10246ee0(this,local_48);
  local_44 = sub_10247110(&local_2c,(int *)uVar3);
  puVar1 = sub_10246ad0(this,&local_50);
  local_38 = *(uint32_t *)puVar1;
  local_30 = *(uint32_t *)((int)puVar1 + 4);
  puVar2 = sub_1024ea70(local_58);
  sub_1024ea90(*puVar2,puVar2[1],local_38,local_30,local_2c,local_28);
  this_00 = local_3c;
  sub_1024b540(local_3c,*(int *)((int)local_3c + 0xc) - 1);
  uVar3 = sub_10246ee0(this_00,local_60);
  puVar1 = local_40;
  sub_10246b10((void *)uVar3,local_40,local_44);
  ExceptionList = local_1c;
  return puVar1;
}


// 0x1024b0e0  (ghidra: FUN_1024b0e0)  [gap]
uint32_t * __thiscall
sub_1024b0e0(void *this,uint param_1,uint32_t param_2,void *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t *puVar5;
  void *pvVar6;
  void *pvVar7;
  size_t sVar8;
  uint64_t uVar9;
  
  uVar2 = param_1;
  sub_10231d20(this,param_1);
  uVar3 = sub_10237b90(this,param_1);
  if (uVar3 == param_4) {
    uVar9 = sub_1020fe30((int)this);
    sub_10210060((void *)(param_1 + (int)uVar9),param_3,param_4);
    return this;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (uVar3 <= param_4) {
    uVar4 = param_4 - uVar3;
    if ((uint)(*(int *)((int)this + 0x14) - iVar1) < uVar4) {
      param_1 = param_1 & 0xffffff00;
      puVar5 = sub_1024eb00(this,uVar4,param_1,uVar2,uVar3,param_3,param_4);
      return puVar5;
    }
    *(uint *)((int)this + 0x10) = iVar1 + uVar4;
    uVar9 = sub_1020fe30((int)this);
    pvVar6 = (void *)((int)uVar9 + param_1);
    pvVar7 = (void *)(uVar3 + (int)pvVar6);
    sVar8 = param_4;
    if ((pvVar6 < (void *)((int)param_3 + param_4)) && (param_3 <= (void *)(iVar1 + (int)uVar9))) {
      if (param_3 < pvVar7) {
        sVar8 = (int)pvVar7 - (int)param_3;
      }
      else {
        sVar8 = 0;
      }
    }
    sub_10210060((void *)((int)pvVar7 + uVar4),pvVar7,(size_t)((ulonglong)uVar9 >> 0x20));
    sub_10210060(pvVar6,param_3,sVar8);
    sub_1020fe60((void *)((int)pvVar6 + sVar8),(void *)(uVar4 + sVar8 + (int)param_3),
                 param_4 - sVar8);
    return this;
  }
  *(uint *)((int)this + 0x10) = (iVar1 - uVar3) + param_4;
  uVar9 = sub_1020fe30((int)this);
  pvVar6 = (void *)(param_1 + (int)uVar9);
  sub_10210060(pvVar6,param_3,param_4);
  sub_10210060((void *)((int)pvVar6 + param_4),(void *)((int)pvVar6 + uVar3),
               ((iVar1 - param_1) - uVar3) + 1);
  return this;
}


// 0x1024b240  (ghidra: FUN_1024b240)  [gap]
void sub_1024b240(void *param_1,void *param_2,int param_3,size_t param_4,int param_5,void *param_6,
                 size_t param_7)

{
  sub_1020fe60(param_1,param_2,param_4);
  sub_1020fe60((void *)(param_4 + (int)param_1),param_6,param_7);
  sub_1020fe60((void *)((int)(param_4 + (int)param_1) + param_7),
               (void *)((int)param_2 + param_5 + param_4),((param_3 - param_4) - param_5) + 1);
  return;
}


// 0x1024b290  (ghidra: FUN_1024b290)  [gap]
uint32_t * __thiscall sub_1024b290(void *this,int param_1)

{
  sub_1023e370(this,param_1);
  *(uint8_t ***)this = nlohmann::json_abi_v3_11_2::detail::invalid_iterator::vftable;
  return this;
}


// 0x1024b2b0  (ghidra: FUN_1024b2b0)  [gap]
void * __fastcall sub_1024b2b0(void *param_1)

{
  sub_1024b660(param_1);
  return param_1;
}


// 0x1024b2c0  (ghidra: FUN_1024b2c0)  [gap]
uint32_t sub_1024b2c0(void)

{
  char *pcVar1;
  lconv *plVar2;
  
  plVar2 = localeconv();
  if (plVar2 == (lconv *)0x0) {
    _wassert(L"loc != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1d17);
  }
  pcVar1 = plVar2->decimal_point;
  if (pcVar1 == (char *)0x0) {
    return 0x2e;
  }
  return CONCAT31((int3)((uint)pcVar1 >> 8),*pcVar1);
}


// 0x1024b300  (ghidra: FUN_1024b300)  [gap]
void __fastcall sub_1024b300(uint32_t *param_1)

{
  uint8_t *puVar1;
  uint64_t uVar2;
  uint32_t *local_8;
  
  puVar1 = (uint8_t *)*param_1;
  local_8 = param_1;
  if (puVar1 == (uint8_t *)0x0) {
    _wassert(L"m_object != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x32e5);
    puVar1 = (uint8_t *)*param_1;
  }
  switch(*puVar1) {
  default:
    sub_10238930(param_1 + 3);
    return;
  case 1:
    uVar2 = sub_10218c90(*(void **)(puVar1 + 8),&local_8);
    param_1[1] = *(uint32_t *)uVar2;
    return;
  case 2:
    uVar2 = sub_10218c90(*(void **)(puVar1 + 8),&local_8);
    param_1[2] = *(uint32_t *)uVar2;
    return;
  }
}


// 0x1024b390  (ghidra: FUN_1024b390)  [gap]
void __fastcall sub_1024b390(uint32_t *param_1)

{
  uint8_t *puVar1;
  uint64_t uVar2;
  uint32_t *local_8;
  
  puVar1 = (uint8_t *)*param_1;
  local_8 = param_1;
  if (puVar1 == (uint8_t *)0x0) {
    _wassert(L"m_object != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x32b9);
    puVar1 = (uint8_t *)*param_1;
  }
  switch(*puVar1) {
  case 0:
    sub_10238930(param_1 + 3);
    return;
  case 1:
    uVar2 = sub_10218cb0(*(void **)(puVar1 + 8),&local_8);
    param_1[1] = *(uint32_t *)uVar2;
    return;
  case 2:
    uVar2 = sub_10218cb0(*(void **)(puVar1 + 8),&local_8);
    param_1[2] = *(uint32_t *)uVar2;
    return;
  default:
    sub_10238920(param_1 + 3);
    return;
  }
}


// 0x1024b430  (ghidra: FUN_1024b430)  [gap]
uint32_t * __thiscall sub_1024b430(void *this,uint32_t param_1)

{
  uint8_t *puVar1;
  uint32_t *puVar2;
  uint64_t uVar3;
  
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 4) = 0;
  sub_1024b620((uint32_t *)((int)this + 4));
  *(uint32_t *)((int)this + 8) = 0;
  sub_1024b620((uint32_t *)((int)this + 8));
  *(uint32_t *)((int)this + 0xc) = 0;
  sub_10238970();
  puVar1 = *(uint8_t **)this;
  if (puVar1 == (uint8_t *)0x0) {
    _wassert(L"m_object != nullptr",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x3258);
    puVar1 = *(uint8_t **)this;
  }
  switch(*puVar1) {
  default:
    param_1 = 0;
    uVar3 = sub_10238970();
    *(uint32_t *)((ulonglong)uVar3 >> 0x20) = *(uint32_t *)uVar3;
    return this;
  case 1:
    param_1 = 0;
    puVar2 = (uint32_t *)sub_1024b620(&param_1);
    *(uint32_t *)((int)this + 4) = *puVar2;
    return this;
  case 2:
    param_1 = 0;
    puVar2 = (uint32_t *)sub_1024b620(&param_1);
    *(uint32_t *)((int)this + 8) = *puVar2;
    return this;
  }
}


// 0x1024b520  (ghidra: FUN_1024b520)  [gap]
uint64_t __thiscall sub_1024b520(void *this,uint32_t *param_1)

{
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  sub_10247190(this,*param_1,param_1[1]);
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x1024b540  (ghidra: FUN_1024b540)  [gap]
void __thiscall sub_1024b540(void *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  void *this_00;
  uint extraout_EDX;
  uint64_t uVar8;
  uint8_t local_14 [4];
  uint32_t local_10;
  uint8_t local_c [4];
  uint8_t local_8 [4];
  
  uVar3 = sub_102471d0();
  if (param_1 <= uVar3) {
    uVar4 = sub_10247210(param_1);
    uVar5 = sub_10218980(this);
    uVar3 = extraout_EDX;
    if (extraout_EDX < uVar5) {
      uVar8 = sub_10218c90(this_00,local_8);
      iVar1 = *(int *)uVar8;
      uVar8 = sub_10218cb0(this,local_c);
      piVar6 = sub_1024b630(&local_10,(int)((ulonglong)uVar8 >> 0x20));
      sub_1024b670(this,local_14,*piVar6,iVar1);
      uVar3 = uVar4;
    }
    *(uint *)((int)this + 0xc) = param_1;
    if ((param_1 & 0x1f) != 0) {
      puVar7 = (uint *)sub_10218970(this,uVar3 - 1);
      *puVar7 = *puVar7 & (1 << (sbyte)(param_1 & 0x1f)) - 1U;
    }
    return;
  }
  sub_102471b0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// 0x1024b5d0  (ghidra: FUN_1024b5d0)  [gap]
uint64_t * sub_1024b5d0(uint64_t *param_1)

{
  int iVar1;
  void *this;
  void *this_00;
  uint64_t uVar2;
  uint8_t local_10 [12];
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  sub_1020f410(param_1);
  uVar2 = sub_10246ee0(this,param_1);
  this_00 = (void *)((ulonglong)uVar2 >> 0x20);
  if (*(int *)((int)this_00 + 0xc) != 0) {
    uVar2 = sub_10246ee0(this_00,local_10);
    iVar1 = sub_10247110(&stack0x00000008,(int *)uVar2);
    sub_10246f20(param_1,iVar1);
  }
  return param_1;
}


// 0x1024b620  (ghidra: FUN_1024b620)  [gap]
uint32_t __fastcall sub_1024b620(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  
  sub_10210df0(param_1);
  return extraout_ECX;
}


// 0x1024b630  (ghidra: FUN_1024b630)  [gap]
uint32_t * sub_1024b630(uint32_t *param_1,int param_2)

{
  uint32_t *extraout_EDX;
  
  sub_102401f0(param_1);
  *param_1 = *extraout_EDX;
  sub_1024b6b0(param_1,param_2);
  return param_1;
}


// 0x1024b660  (ghidra: FUN_1024b660)  [gap]
void __fastcall sub_1024b660(void *param_1)

{
  sub_10247130(param_1,-1);
  return;
}


// 0x1024b670  (ghidra: FUN_1024b670)  [gap]
uint32_t __thiscall sub_1024b670(void *this,void *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  if (param_2 != param_3) {
    uVar1 = sub_1024ebd0(param_3,*(uint32_t *)((int)this + 4),param_2);
    *(uint32_t *)((int)this + 4) = uVar1;
  }
  sub_10218cd0(param_1,param_2);
  return extraout_ECX;
}


// 0x1024b6b0  (ghidra: FUN_1024b6b0)  [gap]
uint32_t __thiscall sub_1024b6b0(void *this,int param_1)

{
  uint32_t extraout_ECX;
  
  sub_1024b6d0(this,param_1);
  return extraout_ECX;
}


// 0x1024b6d0  (ghidra: FUN_1024b6d0)  [gap]
int * __thiscall sub_1024b6d0(void *this,int param_1)

{
  *(int *)this = *(int *)this + param_1 * 4;
  return this;
}


// 0x1024b6f0  (ghidra: FUN_1024b6f0)  [gap]
void __fastcall sub_1024b6f0(uint32_t param_1,uint32_t param_2)

{
  uint8_t *puVar1;
  
  puVar1 = (uint8_t *)sub_1020fe80(param_1);
  sub_1024f010(puVar1,param_2);
  return;
}


// 0x1024b700  (ghidra: FUN_1024b700)  [gap]
void __fastcall sub_1024b700(uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)sub_1020fe80(param_1);
  sub_1024f030(pcVar1,param_2);
  return;
}


// 0x1024b710  (ghidra: FUN_1024b710)  [gap]
void __fastcall sub_1024b710(uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)sub_1020fe80(param_1);
  sub_1024f050(pcVar1,param_2);
  return;
}


// 0x1024b720  (ghidra: FUN_1024b720)  [gap]
void sub_1024b720(void *param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)sub_1020fe80(param_2);
  sub_1024f080(param_1,*piVar1);
  return;
}


// 0x1024b740  (ghidra: FUN_1024b740)  [gap]
void sub_1024b740(char *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  thunk_FUN_10250370(param_1,uVar1);
  return;
}


// 0x1024b760  (ghidra: FUN_1024b760)  [gap]
void sub_1024b760(char *param_1,uint32_t param_2)

{
  uint8_t *puVar1;
  
  puVar1 = (uint8_t *)sub_1020fe80(param_2);
  sub_1024f0a0(param_1,*puVar1);
  return;
}


// 0x1024b780  (ghidra: FUN_1024b780)  [gap]
char * __fastcall sub_1024b780(char *param_1,uint32_t param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  iVar3 = sub_1020fe80(param_2);
  iVar3 = sub_1024f0b0(iVar3);
  return param_1 + (iVar3 - (int)pcVar1);
}


// 0x1024b7b0  (ghidra: FUN_1024b7b0)  [gap]
void __fastcall sub_1024b7b0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_4);
  uVar3 = sub_1020fe80(param_3);
  sub_1024f0c0(param_1,uVar3,uVar2);
  return;
}


// 0x1024b7f0  (ghidra: FUN_1024b7f0)  [gap]
uint32_t * sub_1024b7f0(uint32_t param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  uint32_t *extraout_EDX;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  *extraout_EDX = *puVar1;
  return extraout_EDX;
}


// 0x1024b810  (ghidra: FUN_1024b810)  [gap]
int __thiscall sub_1024b810(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t extraout_ECX;
  int extraout_EDX;
  
  uVar1 = sub_1020fe80(param_2);
  uVar2 = sub_1020fe80(param_1);
  sub_1024f0f0(extraout_ECX,uVar2,uVar1);
  iVar3 = client_DrawHoverItem_10224f20((int)this);
  return iVar3 + extraout_EDX;
}


// 0x1024b840  (ghidra: FUN_1024b840)  [gap]
void __fastcall
sub_1024b840(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_5);
  uVar3 = sub_1020fe80(param_4);
  uVar4 = sub_1020fe80(param_3);
  sub_1024f120(param_1,uVar4,uVar3,uVar2);
  return;
}


// 0x1024b880  (ghidra: FUN_1024b880)  [gap]
int __fastcall sub_1024b880(int param_1,uint32_t param_2,uint32_t param_3)

{
  char *pcVar1;
  int iVar2;
  uint32_t extraout_EDX;
  int extraout_EDX_00;
  
  sub_1020fe80(param_3);
  pcVar1 = (char *)sub_1020fe80(param_2);
  sub_10248310(pcVar1,extraout_EDX);
  iVar2 = client_DrawHoverItem_10224f20(param_1);
  return iVar2 + extraout_EDX_00;
}


// 0x1024b8b0  (ghidra: FUN_1024b8b0)  [gap]
void __fastcall sub_1024b8b0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_4);
  uVar3 = sub_1020fe80(param_3);
  sub_10248340(param_1,uVar3,uVar2);
  return;
}


// 0x1024b8f0  (ghidra: FUN_1024b8f0)  [gap]
void * __thiscall sub_1024b8f0(void *this,uint32_t param_1)

{
  sub_1024f160(this,param_1,param_1);
  return this;
}


// 0x1024b910  (ghidra: FUN_1024b910)  [gap]
void __fastcall
sub_1024b910(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  void *pvVar2;
  uint8_t *puVar3;
  uint32_t *puVar4;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  void *this;
  uint32_t uStack_10;
  
  uStack_10 = 0x1024b91c;
  uVar1 = sub_1020fe80(param_2);
  uStack_10 = 0x1024b923;
  pvVar2 = (void *)sub_1020f1d0(extraout_ECX,uVar1);
  uStack_10 = 0x1024b92d;
  puVar3 = (uint8_t *)sub_1020fe80(param_3);
  uStack_10 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*puVar3);
  sub_10238350(&uStack_10);
  puVar4 = (uint32_t *)sub_1020fe80(param_4);
  sub_1024ebe0(this,puVar4);
  sub_1024f180(pvVar2);
  return;
}


// 0x1024b960  (ghidra: FUN_1024b960)  [gap]
void __fastcall sub_1024b960(uint32_t param_1,void *param_2)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  
  puVar1 = (uint32_t *)sub_1020fe80((int)param_2 + 0x10);
  sub_102484e0(extraout_ECX,puVar1);
  sub_10247870(extraout_ECX_00,param_2);
  return;
}


// 0x1024b980  (ghidra: FUN_1024b980)  [gap]
uint32_t * __thiscall sub_1024b980(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80("\' must not begin with \'0\'");
  uVar2 = sub_1020fe80(param_1);
  pcVar3 = (char *)sub_1020fe80("array index \'");
  pcVar4 = sub_10248130(pcVar3,uVar2,uVar1);
  sub_1023e080(this,(uint)pcVar4);
  sub_10248170(this,pcVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x1024ba30  (ghidra: FUN_1024ba30)  [gap]
uint32_t * __thiscall sub_1024ba30(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80("\' is not a number");
  uVar2 = sub_1020fe80(param_1);
  pcVar3 = (char *)sub_1020fe80("array index \'");
  pcVar4 = sub_10248130(pcVar3,uVar2,uVar1);
  sub_1023e080(this,(uint)pcVar4);
  sub_10248170(this,pcVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x1024bae0  (ghidra: FUN_1024bae0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall sub_1024bae0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint32_t local_7c [6];
  uint32_t local_64 [6];
  uint32_t local_4c [6];
  void *local_34;
  void *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a7d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  local_30 = param_1;
  pvVar1 = sub_102385e0(local_7c);
  local_8 = 0;
  sub_1020f990(local_4c,"out_of_range");
  local_8._0_1_ = 1;
  pvVar2 = sub_10238570(local_64,local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_10247d50(local_2c,pvVar2,pvVar1,param_3);
  thunk_FUN_1020fc60(local_64);
  thunk_FUN_1020fc60(local_4c);
  thunk_FUN_1020fc60(local_7c);
  uVar3 = thunk_FUN_1020fe30((int)local_2c);
  sub_102387c0(local_30,param_2,(int)uVar3);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return local_30;
}


// 0x1024bbb0  (ghidra: FUN_1024bbb0)  [gap]
uint32_t * __thiscall sub_1024bbb0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305bee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(" exceeds size_type");
  uVar2 = sub_1020fe80(param_1);
  pcVar3 = (char *)sub_1020fe80("array index ");
  pcVar4 = sub_10248130(pcVar3,uVar2,uVar1);
  sub_1023e080(this,(uint)pcVar4);
  sub_10248170(this,pcVar3,uVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x1024bc60  (ghidra: FUN_1024bc60)  [gap]
uint __fastcall sub_1024bc60(void *param_1)

{
  uint uVar1;
  
  uVar1 = sub_1023dfd0(param_1,&DAT_103789c8);
  return uVar1 >> 0x1f;
}


// 0x1024bc70  (ghidra: FUN_1024bc70)  [gap]
bool __fastcall sub_1024bc70(uint32_t param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = sub_1023dfd0(param_2,&DAT_10378a4c);
  return 0 < iVar1;
}


// 0x1024bc90  (ghidra: FUN_1024bc90)  [gap]
int sub_1024bc90(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t *puVar1;
  uint32_t *extraout_EDX;
  int extraout_EDX_00;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  *extraout_EDX = *puVar1;
  puVar1 = (uint32_t *)sub_1020fe80(param_3);
  *(uint32_t *)(extraout_EDX_00 + 4) = *puVar1;
  return extraout_EDX_00;
}


// 0x1024bcc0  (ghidra: FUN_1024bcc0)  [gap]
bool __fastcall sub_1024bcc0(int param_1)

{
  bool bVar1;
  
  bVar1 = sub_1024ec50(param_1);
  return !bVar1;
}


// 0x1024bcd0  (ghidra: FUN_1024bcd0)  [gap]
int __fastcall sub_1024bcd0(char *param_1)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar2 = sub_102384f0();
  return iVar2 + extraout_ECX;
}


// 0x1024bcf0  (ghidra: FUN_1024bcf0)  [gap]
void __fastcall sub_1024bcf0(void *param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,(char *)*puVar1);
  return;
}


// 0x1024bd10  (ghidra: FUN_1024bd10)  [gap]
int __fastcall sub_1024bd10(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t extraout_EDX;
  int extraout_EDX_00;
  
  sub_1020fe80(param_3);
  iVar1 = sub_1020fe80(param_2);
  sub_1024f1b0(iVar1,extraout_EDX);
  iVar1 = client_DrawHoverItem_10224f20(param_1);
  return iVar1 + extraout_EDX_00;
}


// 0x1024bd40  (ghidra: FUN_1024bd40)  [gap]
void __fastcall sub_1024bd40(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_4);
  uVar3 = sub_1020fe80(param_3);
  sub_1024f1d0(param_1,uVar3,uVar2);
  return;
}


// 0x1024bd80  (ghidra: FUN_1024bd80)  [gap]
void __fastcall sub_1024bd80(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(param_2);
  uVar2 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(uVar2);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1024ec60(this,uVar1);
  return;
}


// 0x1024bdb0  (ghidra: FUN_1024bdb0)  [gap]
int * sub_1024bdb0(int *param_1,int param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  uint32_t *puVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  uint32_t uVar8;
  void *pvVar9;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = (uint32_t *)thunk_FUN_102495b0();
  pvVar9 = param_3;
  piVar7 = (int *)*puVar3;
  if (*(char *)(param_2 + 0xd) != '\0') {
    if (*(char *)(piVar7[1] + 0xd) == '\0') {
      pvVar5 = param_3;
      pvVar4 = (void *)sub_1020fe80(piVar7[2] + 0x10);
      cVar2 = sub_1024a750(pvVar4,(int)pvVar5);
      if (cVar2 == '\0') goto LAB_1024bee1;
    }
    *param_1 = piVar7[2];
    *(uint8_t *)(param_1 + 2) = 0;
    param_1[1] = 0;
    return param_1;
  }
  pvVar5 = (void *)sub_1020fe80(param_2 + 0x10);
  pvVar9 = param_3;
  cVar2 = sub_1024a750(param_3,(int)pvVar5);
  if (param_2 == *piVar7) {
    if (cVar2 != '\0') {
      *param_1 = param_2;
      param_1[1] = 1;
      *(uint8_t *)(param_1 + 2) = 0;
      return param_1;
    }
  }
  else {
    if (cVar2 == '\0') {
      cVar2 = sub_1024a750(pvVar5,(int)pvVar9);
      if (cVar2 == '\0') {
        *(uint8_t *)(param_1 + 2) = 1;
      }
      else {
        piVar7 = sub_10212570(&param_3,param_2);
        piVar7 = sub_10212530(piVar7);
        iVar1 = *piVar7;
        if (*(char *)(iVar1 + 0xd) == '\0') {
          iVar6 = sub_1020fe80(iVar1 + 0x10);
          cVar2 = sub_1024a750(pvVar9,iVar6);
          if (cVar2 == '\0') goto LAB_1024bee1;
        }
        cVar2 = *(char *)(*(int *)(param_2 + 8) + 0xd);
        *(uint8_t *)(param_1 + 2) = 0;
        if (cVar2 == '\0') {
          *param_1 = iVar1;
          param_1[1] = 1;
          return param_1;
        }
      }
      *param_1 = param_2;
      param_1[1] = 0;
      return param_1;
    }
    piVar7 = sub_10212570(&param_3,param_2);
    piVar7 = sub_102124c0(piVar7);
    iVar1 = *piVar7;
    pvVar5 = pvVar9;
    pvVar4 = (void *)sub_1020fe80(iVar1 + 0x10);
    cVar2 = sub_1024a750(pvVar4,(int)pvVar5);
    if (cVar2 != '\0') {
      cVar2 = *(char *)(*(int *)(iVar1 + 8) + 0xd);
      *(uint8_t *)(param_1 + 2) = 0;
      if (cVar2 != '\0') {
        *param_1 = iVar1;
        param_1[1] = 0;
        return param_1;
      }
      *param_1 = param_2;
      param_1[1] = 1;
      return param_1;
    }
  }
LAB_1024bee1:
  piVar7 = sub_102476b0(&local_10,(int)pvVar9);
  uVar8 = sub_10247710(local_8,pvVar9,piVar7);
  if ((char)uVar8 != '\0') {
    *param_1 = local_8;
    param_1[1] = 2;
    *(uint8_t *)(param_1 + 2) = 1;
    return param_1;
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  *(uint8_t *)(param_1 + 2) = 0;
  return param_1;
}


// 0x1024bf70  (ghidra: FUN_1024bf70)  [gap]
void * __thiscall sub_1024bf70(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  uVar1 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030652d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1024a3e0(this,param_1);
  local_8 = 0;
  uVar1 = sub_1020fe80(uVar1);
  sub_1020fe80(*(int *)((int)this + 4) + 0x10);
  sub_1024f200(uVar1);
  sub_10210750(*(uint32_t *)((int)this + 4),&param_2);
  sub_10210750(*(int *)((int)this + 4) + 4,&param_2);
  sub_10210750(*(int *)((int)this + 4) + 8,&param_2);
  *(uint8_t *)(*(int *)((int)this + 4) + 0xc) = 0;
  *(uint8_t *)(*(int *)((int)this + 4) + 0xd) = 0;
  ExceptionList = local_10;
  return this;
}


// 0x1024c020  (ghidra: FUN_1024c020)  [gap]
int * sub_1024c020(int *param_1,int param_2,void *param_3)

{
  int iVar1;
  char cVar2;
  uint32_t *puVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  uint32_t uVar8;
  void *pvVar9;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = (uint32_t *)thunk_FUN_102495d0();
  pvVar9 = param_3;
  piVar7 = (int *)*puVar3;
  if (*(char *)(param_2 + 0xd) != '\0') {
    if (*(char *)(piVar7[1] + 0xd) == '\0') {
      pvVar5 = param_3;
      pvVar4 = (void *)sub_1020fe80(piVar7[2] + 0x10);
      cVar2 = sub_1024a750(pvVar4,(int)pvVar5);
      if (cVar2 == '\0') goto LAB_1024c151;
    }
    *param_1 = piVar7[2];
    *(uint8_t *)(param_1 + 2) = 0;
    param_1[1] = 0;
    return param_1;
  }
  pvVar5 = (void *)sub_1020fe80(param_2 + 0x10);
  pvVar9 = param_3;
  cVar2 = sub_1024a750(param_3,(int)pvVar5);
  if (param_2 == *piVar7) {
    if (cVar2 != '\0') {
      *param_1 = param_2;
      param_1[1] = 1;
      *(uint8_t *)(param_1 + 2) = 0;
      return param_1;
    }
  }
  else {
    if (cVar2 == '\0') {
      cVar2 = sub_1024a750(pvVar5,(int)pvVar9);
      if (cVar2 == '\0') {
        *(uint8_t *)(param_1 + 2) = 1;
      }
      else {
        piVar7 = sub_10212570(&param_3,param_2);
        piVar7 = sub_10212530(piVar7);
        iVar1 = *piVar7;
        if (*(char *)(iVar1 + 0xd) == '\0') {
          iVar6 = sub_1020fe80(iVar1 + 0x10);
          cVar2 = sub_1024a750(pvVar9,iVar6);
          if (cVar2 == '\0') goto LAB_1024c151;
        }
        cVar2 = *(char *)(*(int *)(param_2 + 8) + 0xd);
        *(uint8_t *)(param_1 + 2) = 0;
        if (cVar2 == '\0') {
          *param_1 = iVar1;
          param_1[1] = 1;
          return param_1;
        }
      }
      *param_1 = param_2;
      param_1[1] = 0;
      return param_1;
    }
    piVar7 = sub_10212570(&param_3,param_2);
    piVar7 = sub_102124c0(piVar7);
    iVar1 = *piVar7;
    pvVar5 = pvVar9;
    pvVar4 = (void *)sub_1020fe80(iVar1 + 0x10);
    cVar2 = sub_1024a750(pvVar4,(int)pvVar5);
    if (cVar2 != '\0') {
      cVar2 = *(char *)(*(int *)(iVar1 + 8) + 0xd);
      *(uint8_t *)(param_1 + 2) = 0;
      if (cVar2 != '\0') {
        *param_1 = iVar1;
        param_1[1] = 0;
        return param_1;
      }
      *param_1 = param_2;
      param_1[1] = 1;
      return param_1;
    }
  }
LAB_1024c151:
  piVar7 = sub_10247880(&local_10,(int)pvVar9);
  uVar8 = sub_10247710(local_8,pvVar9,piVar7);
  if ((char)uVar8 != '\0') {
    *param_1 = local_8;
    param_1[1] = 2;
    *(uint8_t *)(param_1 + 2) = 1;
    return param_1;
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  *(uint8_t *)(param_1 + 2) = 0;
  return param_1;
}


// 0x1024c1e0  (ghidra: FUN_1024c1e0)  [gap]
int __fastcall sub_1024c1e0(int param_1,uint32_t param_2)

{
  char *pcVar1;
  int iVar2;
  int extraout_EDX;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  sub_1024bcd0(pcVar1);
  iVar2 = client_DrawHoverItem_10224f20(param_1);
  return iVar2 + extraout_EDX;
}


// 0x1024c200  (ghidra: FUN_1024c200)  [gap]
void __fastcall sub_1024c200(void *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_3);
  sub_1024f230(param_1,uVar2);
  return;
}


// 0x1024c230  (ghidra: FUN_1024c230)  [gap]
int __fastcall
sub_1024c230(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
            ,uint32_t param_6)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  char *pcVar4;
  int iVar5;
  uint32_t extraout_EDX;
  int extraout_EDX_00;
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */
  
  uVar1 = sub_1020fe80(param_6);
  uVar2 = sub_1020fe80(param_5);
  uVar3 = sub_1020fe80(param_4);
  sub_1020fe80(param_3);
  pcVar4 = (char *)sub_1020fe80(param_2);
  sub_1024f250(pcVar4,extraout_EDX,uVar3,uVar2,uVar1);
  iVar5 = client_DrawHoverItem_10224f20(param_1);
  return iVar5 + extraout_EDX_00;
}


// 0x1024c280  (ghidra: FUN_1024c280)  [gap]
void __fastcall
sub_1024c280(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_7);
  uVar3 = sub_1020fe80(param_6);
  uVar4 = sub_1020fe80(param_5);
  uVar5 = sub_1020fe80(param_4);
  uVar6 = sub_1020fe80(param_3);
  sub_1024f2a0(param_1,uVar6,uVar5,uVar4,uVar3,uVar2);
  return;
}


// 0x1024c2d0  (ghidra: FUN_1024c2d0)  [gap]
int __fastcall sub_1024c2d0(int param_1)

{
  int iVar1;
  int extraout_ECX;
  
  client_DrawHoverItem_10224f20(param_1);
  iVar1 = sub_102384f0();
  return iVar1 + extraout_ECX;
}


// 0x1024c2e0  (ghidra: FUN_1024c2e0)  [gap]
void __fastcall sub_1024c2e0(void *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  return;
}


// 0x1024c300  (ghidra: FUN_1024c300)  [gap]
void * __cdecl sub_1024c300(void *param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  uint32_t *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint32_t in_XMM1_Da;
  uint32_t in_XMM1_Db;
  ulonglong uVar9;
  int iVar10;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint local_18;
  uint uStack_14;
  uint64_t uStack_10;
  
  uStack_10 = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  bVar2 = sub_10243b10();
  if (!bVar2) {
    _wassert(L"std::isfinite(value)",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x424e);
  }
  if (uStack_10 <= 0.0) {
    _wassert(L"value > 0",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x424f);
  }
  uVar9 = sub_1024f2f0();
  uVar6 = (uint)(uVar9 >> 0x20);
  uVar5 = uVar6 >> 0x14;
  uVar6 = uVar6 & 0xfffff;
  if (uVar5 == 0) {
    iVar10 = -0x432;
  }
  else {
    iVar10 = uVar5 - 0x433;
    uVar6 = uVar6 + 0x100000;
  }
  puVar3 = sub_10238980(&local_48,(int)uVar9,uVar6,iVar10);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar1 = puVar3[2];
  uStack_2c = puVar3[3];
  local_38 = uVar6;
  uStack_34 = uVar7;
  uStack_30 = uVar1;
  if (((int)uVar9 == 0 && (uVar9 & 0xfffff00000000) == 0) && (1 < uVar5)) {
    sub_10238980(&local_18,uVar6 * 2 + 1,
                 (uVar7 << 1 | uVar6 >> 0x1f) + (uint)(0xfffffffe < uVar6 * 2),uVar1 - 1);
    iVar10 = uVar1 - 2;
    uVar5 = uVar6 << 2;
    iVar8 = ((uVar7 << 2 | uVar6 >> 0x1e) - 1) + (uint)(uVar5 != 0);
  }
  else {
    iVar10 = uVar1 - 1;
    uVar7 = uVar7 << 1 | uVar6 >> 0x1f;
    uVar5 = uVar6 * 2;
    sub_10238980(&local_18,uVar5 + 1,uVar7 + (0xfffffffe < uVar5),iVar10);
    iVar8 = (uVar7 - 1) + (uint)(uVar5 != 0);
  }
  puVar4 = sub_10238980(&local_48,uVar5 - 1,iVar8,iVar10);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  uStack_20 = puVar4[2];
  uStack_1c = puVar4[3];
  sub_10238ad0(&local_18,local_18,uStack_14,(uint)uStack_10,uStack_10._4_4_);
  sub_10238b40(&local_48,&local_28,(uint)uStack_10);
  sub_10238ad0(param_1,local_38,uStack_34,uStack_30,uStack_2c);
  *(uint32_t *)((int)param_1 + 0x10) = local_48;
  *(uint32_t *)((int)param_1 + 0x14) = uStack_44;
  *(uint32_t *)((int)param_1 + 0x18) = uStack_40;
  *(uint32_t *)((int)param_1 + 0x1c) = uStack_3c;
  *(uint *)((int)param_1 + 0x20) = local_18;
  *(uint *)((int)param_1 + 0x24) = uStack_14;
  *(uint *)((int)param_1 + 0x28) = (uint)uStack_10;
  *(uint *)((int)param_1 + 0x2c) = uStack_10._4_4_;
  return param_1;
}


// 0x1024c4a0  (ghidra: FUN_1024c4a0)  [gap]
uint32_t * __thiscall sub_1024c4a0(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  uint32_t uVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("number overflow parsing \'");
  pcVar3 = sub_1024b780(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  uVar4 = sub_1020fe80(param_2);
  sub_1024b7b0(this,pcVar2,uVar1,uVar4);
  ExceptionList = local_10;
  return this;
}


// 0x1024c540  (ghidra: FUN_1024c540)  [gap]
uint __thiscall
sub_1024c540(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX)

{
  uint8_t local_20 [28];
  
  *(uint8_t *)((int)this + 0x34) = 1;
  if (*(char *)((int)this + 0x60) == '\0') {
    return reg_EAX & 0xffffff00;
  }
  sub_102445a0(local_20,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_10393cac);
}


// 0x1024c580  (ghidra: FUN_1024c580)  [gap]
uint __thiscall
sub_1024c580(void *this,uint32_t param_2,uint32_t param_3,int param_4,uint reg_EAX)

{
  uint8_t local_20 [28];
  
  *(uint8_t *)((int)this + 0x14) = 1;
  if (*(char *)((int)this + 0x15) == '\0') {
    return reg_EAX & 0xffffff00;
  }
  sub_102445a0(local_20,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_20,(ThrowInfo *)&DAT_10393cac);
}


// 0x1024c5c0  (ghidra: FUN_1024c5c0)  [gap]
void __thiscall sub_1024c5c0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_1024f310(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
  return;
}


// 0x1024c5f0  (ghidra: FUN_1024c5f0)  [gap]
char * __fastcall sub_1024c5f0(char *param_1,uint32_t param_2,uint32_t param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint32_t extraout_EDX;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  sub_1020fe80(param_3);
  pcVar3 = (char *)sub_1020fe80(param_2);
  pcVar3 = sub_1024b780(pcVar3,extraout_EDX);
  return pcVar3 + ((int)param_1 - (int)pcVar1);
}


// 0x1024c630  (ghidra: FUN_1024c630)  [gap]
void __fastcall
sub_1024c630(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,(char *)*puVar1);
  uVar2 = sub_1020fe80(param_5);
  uVar3 = sub_1020fe80(param_4);
  uVar4 = sub_1020fe80(param_3);
  sub_1024b7b0(param_1,uVar4,uVar3,uVar2);
  return;
}


// 0x1024c670  (ghidra: FUN_1024c670)  [gap]
void __thiscall sub_1024c670(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = sub_102410c0();
  if (param_1 <= uVar1) {
    iVar3 = *(int *)((int)this + 4) - *(int *)this >> 4;
    uVar1 = sub_10244ca0(this,param_1);
    iVar2 = sub_10241380(uVar1);
    sub_1024a5f0(this,iVar3 * 0x10 + iVar2,param_1 - iVar3);
    sub_10241350(this,*(uint32_t *)this,*(uint32_t *)((int)this + 4),iVar2);
    sub_10241300(this,iVar2,param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024c6f0  (ghidra: FUN_1024c6f0)  [gap]
void __thiscall sub_1024c6f0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_1024f340(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
  return;
}


// 0x1024c720  (ghidra: FUN_1024c720)  [gap]
void __thiscall sub_1024c720(void *this,uint *param_1,uint32_t param_2,uint *param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int _Val;
  uint uVar4;
  uint uVar5;
  
  uVar3 = sub_1024ec30(&param_1,(uint *)&param_3);
  puVar2 = param_3;
  if ((char)uVar3 == '\0') {
    cVar1 = *(char *)this;
    uVar3 = -1 << ((byte)param_2 & 0x1f);
    if (param_1 == param_3) {
      uVar4 = 0xffffffff >> (0x20U - (char)param_4 & 0x1f);
      uVar5 = 0;
      if (cVar1 != '\0') {
        uVar5 = uVar4;
      }
      *param_1 = uVar5 & uVar3 | (~uVar4 | ~uVar3) & *param_1;
      return;
    }
    uVar5 = 0;
    if (cVar1 != '\0') {
      uVar5 = uVar3;
    }
    *param_1 = uVar5 | *param_1 & ~uVar3;
    _Val = 0;
    if (*(char *)this != '\0') {
      _Val = 0xff;
    }
    memset(param_1 + 1,_Val,(int)param_3 - (int)(param_1 + 1));
    if (param_4 != 0) {
      uVar5 = 0xffffffff >> (0x20U - (char)param_4 & 0x1f);
      uVar3 = 0;
      if (cVar1 != '\0') {
        uVar3 = uVar5;
      }
      *puVar2 = ~uVar5 & *puVar2 | uVar3;
    }
  }
  return;
}


// 0x1024c7f0  (ghidra: FUN_1024c7f0)  [gap]
int * __thiscall
sub_1024c7f0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  char cVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  uint8_t local_14 [8];
  uint8_t local_c [8];
  
  uVar2 = sub_1024ec10(&param_1,&param_3);
  cVar1 = (char)uVar2;
  while (cVar1 != '\0') {
    uVar4 = sub_1024ebf0(&param_3);
    sub_1024aa70((void *)uVar4,local_c);
    uVar4 = sub_1024ebf0(&param_5);
    puVar3 = (uint32_t *)((ulonglong)uVar4 >> 0x20);
    uVar4 = sub_1024aa70((void *)uVar4,local_14);
    sub_1024ed40((void *)uVar4,puVar3);
    uVar2 = sub_1024ec10(&param_1,&param_3);
    cVar1 = (char)uVar2;
  }
  *(uint32_t *)this = param_5;
  *(uint32_t *)((int)this + 4) = param_6;
  return this;
}


// 0x1024c870  (ghidra: FUN_1024c870)  [gap]
void __fastcall sub_1024c870(uint32_t *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  puVar2 = (uint32_t *)sub_1020fe80(param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return;
}


// 0x1024c890  (ghidra: FUN_1024c890)  [gap]
void __thiscall sub_1024c890(void *this,uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = sub_10210ca0();
  if (param_1 <= uVar1) {
    iVar3 = *(int *)((int)this + 4) - *(int *)this >> 2;
    uVar1 = sub_10218c40(this,param_1);
    iVar2 = sub_10210e40(uVar1);
    sub_1024a920(this,iVar2 + iVar3 * 4,param_1 - iVar3,param_2);
    sub_10218c70(*(uint32_t *)this,*(uint32_t *)((int)this + 4),iVar2);
    sub_10218c00(this,iVar2,param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024c900  (ghidra: FUN_1024c900)  [gap]
int __thiscall sub_1024c900(void *this,uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  char *pcVar3;
  uint32_t *puVar4;
  int *piVar5;
  int iVar6;
  void *this_00;
  void *this_01;
  void *this_02;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    pcVar3 = (char *)sub_1020fe80(param_1);
    sub_1023fc80(this_00,*pcVar3);
    sub_1023dd90(*(char **)this);
    return *(int *)this;
  }
  puVar4 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar4);
  if (!bVar1) {
    puVar4 = (uint32_t *)sub_1024aa90((int)this + 4);
    bVar1 = sub_1023fc60((char *)*puVar4);
    if (!bVar1) {
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar4 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar4);
  if (bVar1) {
    sub_1024aa90((int)this + 4);
    uVar2 = sub_1020fe80(param_1);
    sub_1024ca40(this_01,uVar2);
    piVar5 = (int *)sub_1024aa90((int)this + 4);
    iVar6 = sub_10240b90(*(int *)(*piVar5 + 8));
    return iVar6;
  }
  puVar4 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar4);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  pcVar3 = (char *)sub_1020fe80(param_1);
  sub_1023fc80(this_02,*pcVar3);
  sub_1023dd90(*(char **)((int)this + 0x10));
  return *(int *)((int)this + 0x10);
}


// 0x1024ca40  (ghidra: FUN_1024ca40)  [gap]
void __thiscall sub_1024ca40(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this_00 + 4));
    sub_1024f400(uVar2);
    *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 0x10;
    return;
  }
  sub_1024f430(this_00,iVar1,uVar2);
  return;
}


// 0x1024caa0  (ghidra: FUN_1024caa0)  [gap]
int __thiscall sub_1024caa0(void *this,uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    uVar2 = sub_1020fe80(param_1);
    sub_10241960(this_00,uVar2);
    sub_1023dd90(*(char **)this);
    return *(int *)this;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (!bVar1) {
    puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
    bVar1 = sub_1023fc60((char *)*puVar3);
    if (!bVar1) {
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (bVar1) {
    sub_1024aa90((int)this + 4);
    uVar2 = sub_1020fe80(param_1);
    sub_1024cbd0(this_01,uVar2);
    piVar4 = (int *)sub_1024aa90((int)this + 4);
    iVar5 = sub_10240b90(*(int *)(*piVar4 + 8));
    return iVar5;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  uVar2 = sub_1020fe80(param_1);
  sub_10241960(this_02,uVar2);
  sub_1023dd90(*(char **)((int)this + 0x10));
  return *(int *)((int)this + 0x10);
}


// 0x1024cbd0  (ghidra: FUN_1024cbd0)  [gap]
void __thiscall sub_1024cbd0(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this_00 + 4));
    sub_1024f550(uVar2);
    *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 0x10;
    return;
  }
  sub_1024f580(this_00,iVar1,uVar2);
  return;
}


// 0x1024cc30  (ghidra: FUN_1024cc30)  [gap]
int __thiscall sub_1024cc30(void *this,uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    uVar2 = sub_1020fe80(param_1);
    sub_1024f6a0(this_00,uVar2);
    sub_1023dd90(*(char **)this);
    return *(int *)this;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (!bVar1) {
    puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
    bVar1 = sub_1023fc60((char *)*puVar3);
    if (!bVar1) {
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (bVar1) {
    sub_1024aa90((int)this + 4);
    uVar2 = sub_1020fe80(param_1);
    sub_1024cd60(this_01,uVar2);
    piVar4 = (int *)sub_1024aa90((int)this + 4);
    iVar5 = sub_10240b90(*(int *)(*piVar4 + 8));
    return iVar5;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  uVar2 = sub_1020fe80(param_1);
  sub_1024f6a0(this_02,uVar2);
  sub_1023dd90(*(char **)((int)this + 0x10));
  return *(int *)((int)this + 0x10);
}


// 0x1024cd60  (ghidra: FUN_1024cd60)  [gap]
void __thiscall sub_1024cd60(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this_00 + 4));
    sub_1024f6e0(uVar2);
    *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 0x10;
    return;
  }
  sub_1024f710(this_00,iVar1,uVar2);
  return;
}


// 0x1024cdc0  (ghidra: FUN_1024cdc0)  [gap]
int __thiscall sub_1024cdc0(void *this,uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    uVar2 = sub_1020fe80(param_1);
    sub_1024f7d0(this_00,uVar2);
    sub_1023dd90(*(char **)this);
    return *(int *)this;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (!bVar1) {
    puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
    bVar1 = sub_1023fc60((char *)*puVar3);
    if (!bVar1) {
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (bVar1) {
    sub_1024aa90((int)this + 4);
    uVar2 = sub_1020fe80(param_1);
    sub_1024cef0(this_01,uVar2);
    piVar4 = (int *)sub_1024aa90((int)this + 4);
    iVar5 = sub_10240b90(*(int *)(*piVar4 + 8));
    return iVar5;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  uVar2 = sub_1020fe80(param_1);
  sub_1024f7d0(this_02,uVar2);
  sub_1023dd90(*(char **)((int)this + 0x10));
  return *(int *)((int)this + 0x10);
}


// 0x1024cef0  (ghidra: FUN_1024cef0)  [gap]
void __thiscall sub_1024cef0(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this_00 + 4));
    sub_1024f810(uVar2);
    *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 0x10;
    return;
  }
  sub_1024f840(this_00,iVar1,uVar2);
  return;
}


// 0x1024cf50  (ghidra: FUN_1024cf50)  [gap]
int __thiscall sub_1024cf50(void *this,uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    uVar2 = sub_1020fe80(param_1);
    sub_1024f900(this_00,uVar2);
    sub_1023dd90(*(char **)this);
    return *(int *)this;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (!bVar1) {
    puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
    bVar1 = sub_1023fc60((char *)*puVar3);
    if (!bVar1) {
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (bVar1) {
    sub_1024aa90((int)this + 4);
    uVar2 = sub_1020fe80(param_1);
    sub_1024d080(this_01,uVar2);
    piVar4 = (int *)sub_1024aa90((int)this + 4);
    iVar5 = sub_10240b90(*(int *)(*piVar4 + 8));
    return iVar5;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  uVar2 = sub_1020fe80(param_1);
  sub_1024f900(this_02,uVar2);
  sub_1023dd90(*(char **)((int)this + 0x10));
  return *(int *)((int)this + 0x10);
}


// 0x1024d080  (ghidra: FUN_1024d080)  [gap]
void __thiscall sub_1024d080(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this_00 + 4));
    sub_1024f940(uVar2);
    *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 0x10;
    return;
  }
  sub_1024f970(this_00,iVar1,uVar2);
  return;
}


// 0x1024d0e0  (ghidra: FUN_1024d0e0)  [gap]
int __thiscall sub_1024d0e0(void *this,uint32_t param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  
  uVar2 = sub_10240bb0((int *)((int)this + 4));
  if ((char)uVar2 != '\0') {
    uVar2 = sub_1020fe80(param_1);
    sub_102419a0(this_00,uVar2);
    sub_1023dd90(*(char **)this);
    return *(int *)this;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (!bVar1) {
    puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
    bVar1 = sub_1023fc60((char *)*puVar3);
    if (!bVar1) {
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_10240d40((char *)*puVar3);
  if (bVar1) {
    sub_1024aa90((int)this + 4);
    uVar2 = sub_1020fe80(param_1);
    sub_1024d210(this_01,uVar2);
    piVar4 = (int *)sub_1024aa90((int)this + 4);
    iVar5 = sub_10240b90(*(int *)(*piVar4 + 8));
    return iVar5;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  uVar2 = sub_1020fe80(param_1);
  sub_102419a0(this_02,uVar2);
  sub_1023dd90(*(char **)((int)this + 0x10));
  return *(int *)((int)this + 0x10);
}


// 0x1024d210  (ghidra: FUN_1024d210)  [gap]
void __thiscall sub_1024d210(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    uVar2 = sub_1020fe80(uVar2);
    sub_1020fe80(*(uint32_t *)((int)this_00 + 4));
    sub_1024fa30(uVar2);
    *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + 0x10;
    return;
  }
  sub_1024fa60(this_00,iVar1,uVar2);
  return;
}


// 0x1024d270  (ghidra: FUN_1024d270)  [gap]
int __fastcall sub_1024d270(int *param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int *piVar4;
  int iVar5;
  char acStackY_24 [4];
  
  uVar2 = sub_10240bb0(param_1 + 1);
  if ((char)uVar2 != '\0') {
    sub_1023dec0(acStackY_24);
    sub_1023dd90((char *)*param_1);
    return *param_1;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)(param_1 + 1));
  bVar1 = sub_10240d40((char *)*puVar3);
  if (!bVar1) {
    puVar3 = (uint32_t *)sub_1024aa90((int)(param_1 + 1));
    bVar1 = sub_1023fc60((char *)*puVar3);
    if (!bVar1) {
      acStackY_24[0] = -0x21;
      acStackY_24[1] = -0x2e;
      acStackY_24[2] = '$';
      acStackY_24[3] = '\x10';
      _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x1ae6);
    }
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)(param_1 + 1));
  bVar1 = sub_10240d40((char *)*puVar3);
  if (bVar1) {
    piVar4 = (int *)sub_1024aa90((int)(param_1 + 1));
    sub_1024d380(*(void **)(*piVar4 + 8));
    piVar4 = (int *)sub_1024aa90((int)(param_1 + 1));
    iVar5 = sub_10240b90(*(int *)(*piVar4 + 8));
    return iVar5;
  }
  puVar3 = (uint32_t *)sub_1024aa90((int)(param_1 + 1));
  bVar1 = sub_1023fc60((char *)*puVar3);
  if (!bVar1) {
    acStackY_24[0] = 'D';
    acStackY_24[1] = -0x2d;
    acStackY_24[2] = '$';
    acStackY_24[3] = '\x10';
    _wassert(L"ref_stack.back()->is_object()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aee);
  }
  if (param_1[4] == 0) {
    acStackY_24[0] = '^';
    acStackY_24[1] = -0x2d;
    acStackY_24[2] = '$';
    acStackY_24[3] = '\x10';
    _wassert(L"object_element",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1aef);
  }
  sub_1023dec0(acStackY_24);
  sub_1023dd90((char *)param_1[4]);
  return param_1[4];
}


// 0x1024d380  (ghidra: FUN_1024d380)  [gap]
void __fastcall sub_1024d380(void *param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  if (*(int *)((int)param_1 + 4) == *(int *)((int)param_1 + 8)) {
    sub_1024fb40(param_1,*(int *)((int)param_1 + 4));
    return;
  }
  uVar1 = sub_1020fe80(*(uint32_t *)((int)param_1 + 4));
  sub_1024fb20(extraout_ECX,uVar1);
  *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 0x10;
  return;
}


// 0x1024d3d0  (ghidra: FUN_1024d3d0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024d3d0(void *this,uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  uint32_t *puVar2;
  char *pcVar3;
  uint32_t uVar4;
  int *piVar5;
  int extraout_ECX;
  void *this_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar6;
  void *this_01;
  void *this_02;
  uint8_t local_34 [4];
  int local_30;
  int *local_2c;
  uint8_t local_25;
  char local_24 [16];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030655d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar2 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_34);
  local_25 = sub_1024a870(puVar2);
  if ((bool)local_25) {
    pcVar3 = (char *)sub_1020fe80(param_2);
    sub_1023fc80(local_24,*pcVar3);
    local_2c = (int *)((int)this + 4);
    local_8 = 0;
    uVar4 = sub_10240bb0(local_2c);
    if ((char)uVar4 == '\0') {
      local_30 = (int)this + 4;
      piVar5 = (int *)sub_1024aa90(local_30);
      if (*piVar5 == 0) {
        local_25 = 0;
        local_2c = (int *)0x0;
        sub_10210130(&local_25,&local_2c);
      }
      else {
        puVar2 = (uint32_t *)sub_1024aa90(extraout_ECX);
        bVar1 = sub_10240d40((char *)*puVar2);
        iVar6 = extraout_EDX;
        if (!bVar1) {
          puVar2 = (uint32_t *)sub_1024aa90(extraout_EDX);
          bVar1 = sub_1023fc60((char *)*puVar2);
          iVar6 = extraout_EDX_00;
          if (!bVar1) {
            _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                     L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                     ,0x1c05);
            iVar6 = (int)this + 4;
          }
        }
        puVar2 = (uint32_t *)sub_1024aa90(iVar6);
        bVar1 = sub_10240d40((char *)*puVar2);
        if (bVar1) {
          sub_1024aa90((int)local_2c);
          uVar4 = sub_1020fe80(local_24);
          sub_10240c90(this_01,uVar4);
          local_25 = 1;
          piVar5 = (int *)sub_1024aa90(local_30);
          local_30 = sub_10240b90(*(int *)(*piVar5 + 8));
          sub_10210130(&local_25,&local_30);
        }
        else {
          puVar2 = (uint32_t *)sub_1024aa90((int)this + 4);
          bVar1 = sub_1023fc60((char *)*puVar2);
          if (!bVar1) {
            _wassert(L"ref_stack.back()->is_object()",
                     L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                     ,0x1c0f);
          }
          bVar1 = sub_102471c0((int)this + 0x20);
          if (bVar1) {
            _wassert(L"!key_keep_stack.empty()",
                     L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                     ,0x1c11);
          }
          puVar2 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_34);
          bVar1 = sub_1024a870(puVar2);
          sub_1024a8b0((void *)((int)this + 0x20));
          if (bVar1) {
            piVar5 = (int *)((int)this + 0x30);
            if (*piVar5 == 0) {
              _wassert(L"object_element",
                       L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                       ,0x1c1a);
            }
            pcVar3 = (char *)sub_1020fe80(local_24);
            sub_10240d50(this_02,pcVar3);
            sub_1023dd90((char *)*piVar5);
            local_25 = 1;
            sub_10210130(&local_25,piVar5);
          }
          else {
            local_30 = 0;
            local_25 = bVar1;
            sub_10210130(&local_25,&local_30);
          }
        }
      }
    }
    else {
      pcVar3 = (char *)sub_1020fe80(local_24);
      sub_10240d50(this_00,pcVar3);
      sub_1023dd90(*(char **)this);
      local_2c = *(int **)this;
      local_25 = 1;
      sub_10210130(&local_25,&local_2c);
    }
    sub_1023dd40(local_24);
  }
  else {
    local_2c = (int *)0x0;
    sub_10210130(&local_25,&local_2c);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x1024d680  (ghidra: FUN_1024d680)  [gap]
bool __thiscall sub_1024d680(void *this,int *param_1)

{
  char cVar1;
  
  cVar1 = sub_1024fc00(this,param_1);
  return cVar1 == '\0';
}


// 0x1024d6a0  (ghidra: FUN_1024d6a0)  [gap]
uint32_t * __thiscall
sub_1024d6a0(void *this,uint32_t *param_1,char *param_2,int param_3,char *param_4)

{
  bool bVar1;
  int *piVar2;
  uint32_t *puVar3;
  char *extraout_ECX;
  uint32_t extraout_ECX_00;
  uint32_t extraout_ECX_01;
  uint32_t extraout_ECX_02;
  uint8_t local_84 [24];
  uint8_t local_6c [28];
  uint8_t local_50 [28];
  uint8_t local_34 [24];
  int local_1c;
  char *local_18 [2];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000014;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_2) {
    sub_1020f990(local_34,"iterator does not fit current value");
    local_8 = 0;
    sub_1024e9a0(local_50,0xca,local_34);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_50,(ThrowInfo *)&DAT_10393bc4);
  }
  sub_10249bd0(param_1);
  sub_1024af10(param_1);
  switch(*(uint8_t *)this) {
  default:
    local_18[0] = sub_1023fbf0(this);
    puVar3 = sub_1024f370(local_84,local_18);
    local_8 = 2;
    sub_10242490(local_6c,0x133,puVar3);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_6c,(ThrowInfo *)&DAT_10393ba4);
  case 1:
    piVar2 = sub_1024ece0(*(void **)((int)this + 8),&local_1c,param_3);
    param_1[1] = *piVar2;
    break;
  case 2:
    puVar3 = (uint32_t *)sub_1024ec90(*(void **)((int)this + 8),&local_1c,param_4);
    param_1[2] = *puVar3;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    bVar1 = sub_10238940((int *)&stack0x00000014);
    if (!bVar1) {
      sub_1020f990(local_34,"iterator out of range");
      local_8 = 1;
      sub_1024e9a0(local_50,0xcd,local_34);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_50,(ThrowInfo *)&DAT_10393bc4);
    }
    bVar1 = sub_1024ed30(this);
    if (bVar1) {
      sub_102113e0(extraout_ECX,*(uint32_t **)((int)this + 8));
      sub_102116d0(extraout_ECX_00,*(void **)((int)this + 8));
LAB_1024d747:
      *(uint32_t *)((int)this + 8) = 0;
    }
    else {
      bVar1 = sub_1024ed20(extraout_ECX);
      if (bVar1) {
        sub_10243060(extraout_ECX_01,*(uint32_t **)((int)this + 8));
        sub_10211700(extraout_ECX_02,*(void **)((int)this + 8));
        goto LAB_1024d747;
      }
    }
    *(uint8_t *)this = 0;
    sub_1023fcc0(this);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x1024d870  (ghidra: FUN_1024d870)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024d870(void *this,uint32_t param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  void *this_00;
  int extraout_EDX;
  int extraout_EDX_00;
  void *this_01;
  void *this_02;
  uint8_t local_38 [8];
  int *local_30;
  uint8_t local_29;
  char local_28 [16];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065dd;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_2;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_38);
  local_29 = sub_1024a870(puVar3);
  if (!(bool)local_29) {
    local_30 = (int *)0x0;
    sub_10210130(&local_29,&local_30);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = sub_1020fe80(local_30);
  sub_10241960(local_28,uVar4);
  pcVar6 = local_28;
  local_8 = 0;
  local_30 = (int *)((int)this + 4);
  uVar4 = 5;
  iVar5 = sub_10218980(local_30);
  cVar2 = sub_1024abe0((void *)((int)this + 0x38),iVar5,uVar4,pcVar6);
  if (cVar2 != '\0') {
    uVar4 = sub_10240bb0((int *)((int)this + 4));
    if ((char)uVar4 != '\0') {
      pcVar6 = (char *)sub_1020fe80(local_28);
      sub_10240d50(this_00,pcVar6);
      sub_1023dd90(*(char **)this);
      local_30 = *(int **)this;
      local_29 = 1;
LAB_1024d986:
      sub_10210130(&local_29,&local_30);
      goto LAB_1024dadf;
    }
    piVar7 = (int *)sub_1024aa90(extraout_ECX);
    if (*piVar7 != 0) {
      puVar3 = (uint32_t *)sub_1024aa90(extraout_ECX_00);
      bVar1 = sub_10240d40((char *)*puVar3);
      iVar5 = extraout_EDX;
      if (!bVar1) {
        puVar3 = (uint32_t *)sub_1024aa90(extraout_EDX);
        bVar1 = sub_1023fc60((char *)*puVar3);
        iVar5 = extraout_EDX_00;
        if (!bVar1) {
          _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c05);
          iVar5 = (int)this + 4;
        }
      }
      puVar3 = (uint32_t *)sub_1024aa90(iVar5);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (bVar1) {
        sub_1024aa90((int)this + 4);
        uVar4 = sub_1020fe80(local_28);
        sub_10240c90(this_01,uVar4);
        local_29 = 1;
        piVar7 = (int *)sub_1024aa90((int)local_30);
        local_30 = (int *)sub_10240b90(*(int *)(*piVar7 + 8));
        goto LAB_1024d986;
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_1023fc60((char *)*puVar3);
      if (!bVar1) {
        _wassert(L"ref_stack.back()->is_object()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c0f);
      }
      bVar1 = sub_102471c0((int)this + 0x20);
      if (bVar1) {
        _wassert(L"!key_keep_stack.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c11);
      }
      puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_38);
      bVar1 = sub_1024a870(puVar3);
      sub_1024a8b0((void *)((int)this + 0x20));
      if (bVar1) {
        piVar7 = (int *)((int)this + 0x30);
        if (*piVar7 == 0) {
          _wassert(L"object_element",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c1a);
        }
        pcVar6 = (char *)sub_1020fe80(local_28);
        sub_10240d50(this_02,pcVar6);
        sub_1023dd90((char *)*piVar7);
        local_29 = 1;
        sub_10210130(&local_29,piVar7);
        goto LAB_1024dadf;
      }
    }
  }
  local_29 = 0;
  local_30 = (int *)0x0;
  sub_10210130(&local_29,&local_30);
LAB_1024dadf:
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x1024db10  (ghidra: FUN_1024db10)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024db10(void *this,uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  void *this_00;
  int extraout_EDX;
  int extraout_EDX_00;
  void *this_01;
  void *this_02;
  uint8_t local_34 [4];
  int *local_30;
  uint8_t local_29;
  char local_28 [16];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065dd;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_34);
  local_29 = sub_1024a870(puVar3);
  if (!(bool)local_29) {
    local_30 = (int *)0x0;
    sub_10210130(&local_29,&local_30);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = sub_1020fe80(param_2);
  sub_1024f6a0(local_28,uVar4);
  pcVar6 = local_28;
  local_8 = 0;
  local_30 = (int *)((int)this + 4);
  uVar4 = 5;
  iVar5 = sub_10218980(local_30);
  cVar2 = sub_1024abe0((void *)((int)this + 0x38),iVar5,uVar4,pcVar6);
  if (cVar2 != '\0') {
    uVar4 = sub_10240bb0((int *)((int)this + 4));
    if ((char)uVar4 != '\0') {
      pcVar6 = (char *)sub_1020fe80(local_28);
      sub_10240d50(this_00,pcVar6);
      sub_1023dd90(*(char **)this);
      local_30 = *(int **)this;
      local_29 = 1;
LAB_1024dc20:
      sub_10210130(&local_29,&local_30);
      goto LAB_1024dd79;
    }
    piVar7 = (int *)sub_1024aa90(extraout_ECX);
    if (*piVar7 != 0) {
      puVar3 = (uint32_t *)sub_1024aa90(extraout_ECX_00);
      bVar1 = sub_10240d40((char *)*puVar3);
      iVar5 = extraout_EDX;
      if (!bVar1) {
        puVar3 = (uint32_t *)sub_1024aa90(extraout_EDX);
        bVar1 = sub_1023fc60((char *)*puVar3);
        iVar5 = extraout_EDX_00;
        if (!bVar1) {
          _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c05);
          iVar5 = (int)this + 4;
        }
      }
      puVar3 = (uint32_t *)sub_1024aa90(iVar5);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (bVar1) {
        sub_1024aa90((int)this + 4);
        uVar4 = sub_1020fe80(local_28);
        sub_10240c90(this_01,uVar4);
        local_29 = 1;
        piVar7 = (int *)sub_1024aa90((int)local_30);
        local_30 = (int *)sub_10240b90(*(int *)(*piVar7 + 8));
        goto LAB_1024dc20;
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_1023fc60((char *)*puVar3);
      if (!bVar1) {
        _wassert(L"ref_stack.back()->is_object()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c0f);
      }
      bVar1 = sub_102471c0((int)this + 0x20);
      if (bVar1) {
        _wassert(L"!key_keep_stack.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c11);
      }
      puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_34);
      bVar1 = sub_1024a870(puVar3);
      sub_1024a8b0((void *)((int)this + 0x20));
      if (bVar1) {
        piVar7 = (int *)((int)this + 0x30);
        if (*piVar7 == 0) {
          _wassert(L"object_element",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c1a);
        }
        pcVar6 = (char *)sub_1020fe80(local_28);
        sub_10240d50(this_02,pcVar6);
        sub_1023dd90((char *)*piVar7);
        local_29 = 1;
        sub_10210130(&local_29,piVar7);
        goto LAB_1024dd79;
      }
    }
  }
  local_29 = 0;
  local_30 = (int *)0x0;
  sub_10210130(&local_29,&local_30);
LAB_1024dd79:
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x1024ddb0  (ghidra: FUN_1024ddb0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024ddb0(void *this,uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  void *this_00;
  int extraout_EDX;
  int extraout_EDX_00;
  void *this_01;
  void *this_02;
  uint8_t local_34 [4];
  int *local_30;
  uint8_t local_29;
  char local_28 [16];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065dd;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_34);
  local_29 = sub_1024a870(puVar3);
  if (!(bool)local_29) {
    local_30 = (int *)0x0;
    sub_10210130(&local_29,&local_30);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = sub_1020fe80(param_2);
  sub_1024f7d0(local_28,uVar4);
  pcVar6 = local_28;
  local_8 = 0;
  local_30 = (int *)((int)this + 4);
  uVar4 = 5;
  iVar5 = sub_10218980(local_30);
  cVar2 = sub_1024abe0((void *)((int)this + 0x38),iVar5,uVar4,pcVar6);
  if (cVar2 != '\0') {
    uVar4 = sub_10240bb0((int *)((int)this + 4));
    if ((char)uVar4 != '\0') {
      pcVar6 = (char *)sub_1020fe80(local_28);
      sub_10240d50(this_00,pcVar6);
      sub_1023dd90(*(char **)this);
      local_30 = *(int **)this;
      local_29 = 1;
LAB_1024dec0:
      sub_10210130(&local_29,&local_30);
      goto LAB_1024e019;
    }
    piVar7 = (int *)sub_1024aa90(extraout_ECX);
    if (*piVar7 != 0) {
      puVar3 = (uint32_t *)sub_1024aa90(extraout_ECX_00);
      bVar1 = sub_10240d40((char *)*puVar3);
      iVar5 = extraout_EDX;
      if (!bVar1) {
        puVar3 = (uint32_t *)sub_1024aa90(extraout_EDX);
        bVar1 = sub_1023fc60((char *)*puVar3);
        iVar5 = extraout_EDX_00;
        if (!bVar1) {
          _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c05);
          iVar5 = (int)this + 4;
        }
      }
      puVar3 = (uint32_t *)sub_1024aa90(iVar5);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (bVar1) {
        sub_1024aa90((int)this + 4);
        uVar4 = sub_1020fe80(local_28);
        sub_10240c90(this_01,uVar4);
        local_29 = 1;
        piVar7 = (int *)sub_1024aa90((int)local_30);
        local_30 = (int *)sub_10240b90(*(int *)(*piVar7 + 8));
        goto LAB_1024dec0;
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_1023fc60((char *)*puVar3);
      if (!bVar1) {
        _wassert(L"ref_stack.back()->is_object()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c0f);
      }
      bVar1 = sub_102471c0((int)this + 0x20);
      if (bVar1) {
        _wassert(L"!key_keep_stack.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c11);
      }
      puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_34);
      bVar1 = sub_1024a870(puVar3);
      sub_1024a8b0((void *)((int)this + 0x20));
      if (bVar1) {
        piVar7 = (int *)((int)this + 0x30);
        if (*piVar7 == 0) {
          _wassert(L"object_element",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c1a);
        }
        pcVar6 = (char *)sub_1020fe80(local_28);
        sub_10240d50(this_02,pcVar6);
        sub_1023dd90((char *)*piVar7);
        local_29 = 1;
        sub_10210130(&local_29,piVar7);
        goto LAB_1024e019;
      }
    }
  }
  local_29 = 0;
  local_30 = (int *)0x0;
  sub_10210130(&local_29,&local_30);
LAB_1024e019:
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x1024e050  (ghidra: FUN_1024e050)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024e050(void *this,uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  void *this_00;
  int extraout_EDX;
  int extraout_EDX_00;
  void *this_01;
  void *this_02;
  uint8_t local_34 [4];
  int *local_30;
  uint8_t local_29;
  char local_28 [16];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065dd;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_34);
  local_29 = sub_1024a870(puVar3);
  if (!(bool)local_29) {
    local_30 = (int *)0x0;
    sub_10210130(&local_29,&local_30);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = sub_1020fe80(param_2);
  sub_1024f900(local_28,uVar4);
  pcVar6 = local_28;
  local_8 = 0;
  local_30 = (int *)((int)this + 4);
  uVar4 = 5;
  iVar5 = sub_10218980(local_30);
  cVar2 = sub_1024abe0((void *)((int)this + 0x38),iVar5,uVar4,pcVar6);
  if (cVar2 != '\0') {
    uVar4 = sub_10240bb0((int *)((int)this + 4));
    if ((char)uVar4 != '\0') {
      pcVar6 = (char *)sub_1020fe80(local_28);
      sub_10240d50(this_00,pcVar6);
      sub_1023dd90(*(char **)this);
      local_30 = *(int **)this;
      local_29 = 1;
LAB_1024e160:
      sub_10210130(&local_29,&local_30);
      goto LAB_1024e2b9;
    }
    piVar7 = (int *)sub_1024aa90(extraout_ECX);
    if (*piVar7 != 0) {
      puVar3 = (uint32_t *)sub_1024aa90(extraout_ECX_00);
      bVar1 = sub_10240d40((char *)*puVar3);
      iVar5 = extraout_EDX;
      if (!bVar1) {
        puVar3 = (uint32_t *)sub_1024aa90(extraout_EDX);
        bVar1 = sub_1023fc60((char *)*puVar3);
        iVar5 = extraout_EDX_00;
        if (!bVar1) {
          _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c05);
          iVar5 = (int)this + 4;
        }
      }
      puVar3 = (uint32_t *)sub_1024aa90(iVar5);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (bVar1) {
        sub_1024aa90((int)this + 4);
        uVar4 = sub_1020fe80(local_28);
        sub_10240c90(this_01,uVar4);
        local_29 = 1;
        piVar7 = (int *)sub_1024aa90((int)local_30);
        local_30 = (int *)sub_10240b90(*(int *)(*piVar7 + 8));
        goto LAB_1024e160;
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_1023fc60((char *)*puVar3);
      if (!bVar1) {
        _wassert(L"ref_stack.back()->is_object()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c0f);
      }
      bVar1 = sub_102471c0((int)this + 0x20);
      if (bVar1) {
        _wassert(L"!key_keep_stack.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c11);
      }
      puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_34);
      bVar1 = sub_1024a870(puVar3);
      sub_1024a8b0((void *)((int)this + 0x20));
      if (bVar1) {
        piVar7 = (int *)((int)this + 0x30);
        if (*piVar7 == 0) {
          _wassert(L"object_element",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c1a);
        }
        pcVar6 = (char *)sub_1020fe80(local_28);
        sub_10240d50(this_02,pcVar6);
        sub_1023dd90((char *)*piVar7);
        local_29 = 1;
        sub_10210130(&local_29,piVar7);
        goto LAB_1024e2b9;
      }
    }
  }
  local_29 = 0;
  local_30 = (int *)0x0;
  sub_10210130(&local_29,&local_30);
LAB_1024e2b9:
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x1024e2f0  (ghidra: FUN_1024e2f0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024e2f0(void *this,uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  void *this_00;
  int extraout_EDX;
  int extraout_EDX_00;
  void *this_01;
  void *this_02;
  uint8_t local_34 [4];
  int *local_30;
  uint8_t local_29;
  char local_28 [16];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065dd;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_34);
  local_29 = sub_1024a870(puVar3);
  if (!(bool)local_29) {
    local_30 = (int *)0x0;
    sub_10210130(&local_29,&local_30);
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = sub_1020fe80(param_2);
  sub_102419a0(local_28,uVar4);
  pcVar6 = local_28;
  local_8 = 0;
  local_30 = (int *)((int)this + 4);
  uVar4 = 5;
  iVar5 = sub_10218980(local_30);
  cVar2 = sub_1024abe0((void *)((int)this + 0x38),iVar5,uVar4,pcVar6);
  if (cVar2 != '\0') {
    uVar4 = sub_10240bb0((int *)((int)this + 4));
    if ((char)uVar4 != '\0') {
      pcVar6 = (char *)sub_1020fe80(local_28);
      sub_10240d50(this_00,pcVar6);
      sub_1023dd90(*(char **)this);
      local_30 = *(int **)this;
      local_29 = 1;
LAB_1024e400:
      sub_10210130(&local_29,&local_30);
      goto LAB_1024e559;
    }
    piVar7 = (int *)sub_1024aa90(extraout_ECX);
    if (*piVar7 != 0) {
      puVar3 = (uint32_t *)sub_1024aa90(extraout_ECX_00);
      bVar1 = sub_10240d40((char *)*puVar3);
      iVar5 = extraout_EDX;
      if (!bVar1) {
        puVar3 = (uint32_t *)sub_1024aa90(extraout_EDX);
        bVar1 = sub_1023fc60((char *)*puVar3);
        iVar5 = extraout_EDX_00;
        if (!bVar1) {
          _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c05);
          iVar5 = (int)this + 4;
        }
      }
      puVar3 = (uint32_t *)sub_1024aa90(iVar5);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (bVar1) {
        sub_1024aa90((int)this + 4);
        uVar4 = sub_1020fe80(local_28);
        sub_10240c90(this_01,uVar4);
        local_29 = 1;
        piVar7 = (int *)sub_1024aa90((int)local_30);
        local_30 = (int *)sub_10240b90(*(int *)(*piVar7 + 8));
        goto LAB_1024e400;
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_1023fc60((char *)*puVar3);
      if (!bVar1) {
        _wassert(L"ref_stack.back()->is_object()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c0f);
      }
      bVar1 = sub_102471c0((int)this + 0x20);
      if (bVar1) {
        _wassert(L"!key_keep_stack.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c11);
      }
      puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_34);
      bVar1 = sub_1024a870(puVar3);
      sub_1024a8b0((void *)((int)this + 0x20));
      if (bVar1) {
        piVar7 = (int *)((int)this + 0x30);
        if (*piVar7 == 0) {
          _wassert(L"object_element",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c1a);
        }
        pcVar6 = (char *)sub_1020fe80(local_28);
        sub_10240d50(this_02,pcVar6);
        sub_1023dd90((char *)*piVar7);
        local_29 = 1;
        sub_10210130(&local_29,piVar7);
        goto LAB_1024e559;
      }
    }
  }
  local_29 = 0;
  local_30 = (int *)0x0;
  sub_10210130(&local_29,&local_30);
LAB_1024e559:
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x1024e590  (ghidra: FUN_1024e590)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall sub_1024e590(void *this,uint32_t param_1)

{
  bool bVar1;
  char cVar2;
  uint32_t *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  void *this_00;
  void *this_01;
  void *this_02;
  uint32_t uVar7;
  uint8_t local_34 [4];
  int local_30;
  uint8_t local_29;
  char local_28 [16];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103065dd;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_102471c0((int)this + 0x10);
  if (bVar1) {
    _wassert(L"!keep_stack.empty()",
             L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
             ,0x1be2);
  }
  puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x10),local_34);
  local_29 = sub_1024a870(puVar3);
  if (!(bool)local_29) {
    local_30 = 0;
    sub_10210130(&local_29,&local_30);
    ExceptionList = local_10;
    return param_1;
  }
  sub_1023dec0(local_28);
  pcVar5 = local_28;
  local_8 = 0;
  uVar7 = 5;
  iVar4 = sub_10218980((int *)((int)this + 4));
  cVar2 = sub_1024abe0((void *)((int)this + 0x38),iVar4,uVar7,pcVar5);
  if (cVar2 != '\0') {
    uVar7 = sub_10240bb0((int *)((int)this + 4));
    if ((char)uVar7 != '\0') {
      pcVar5 = (char *)sub_1020fe80(local_28);
      sub_10240d50(this_00,pcVar5);
      sub_1023dd90(*(char **)this);
      local_30 = *(int *)this;
      local_29 = 1;
LAB_1024e691:
      sub_10210130(&local_29,&local_30);
      goto LAB_1024e7fb;
    }
    piVar6 = (int *)sub_1024aa90((int)this + 4);
    if (*piVar6 != 0) {
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (!bVar1) {
        puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
        bVar1 = sub_1023fc60((char *)*puVar3);
        if (!bVar1) {
          _wassert(L"ref_stack.back()->is_array() || ref_stack.back()->is_object()",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c05);
        }
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_10240d40((char *)*puVar3);
      if (bVar1) {
        sub_1024aa90((int)this + 4);
        uVar7 = sub_1020fe80(local_28);
        sub_10240c90(this_01,uVar7);
        local_29 = 1;
        piVar6 = (int *)sub_1024aa90((int)this + 4);
        local_30 = sub_10240b90(*(int *)(*piVar6 + 8));
        goto LAB_1024e691;
      }
      puVar3 = (uint32_t *)sub_1024aa90((int)this + 4);
      bVar1 = sub_1023fc60((char *)*puVar3);
      if (!bVar1) {
        _wassert(L"ref_stack.back()->is_object()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c0f);
      }
      bVar1 = sub_102471c0((int)this + 0x20);
      if (bVar1) {
        _wassert(L"!key_keep_stack.empty()",
                 L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                 ,0x1c11);
      }
      puVar3 = (uint32_t *)sub_1024a8f0((void *)((int)this + 0x20),local_34);
      bVar1 = sub_1024a870(puVar3);
      sub_1024a8b0((void *)((int)this + 0x20));
      if (bVar1) {
        piVar6 = (int *)((int)this + 0x30);
        if (*piVar6 == 0) {
          _wassert(L"object_element",
                   L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
                   ,0x1c1a);
        }
        pcVar5 = (char *)sub_1020fe80(local_28);
        sub_10240d50(this_02,pcVar5);
        sub_1023dd90((char *)*piVar6);
        local_29 = 1;
        sub_10210130(&local_29,piVar6);
        goto LAB_1024e7fb;
      }
    }
  }
  local_29 = 0;
  local_30 = 0;
  sub_10210130(&local_29,&local_30);
LAB_1024e7fb:
  sub_1023dd40(local_28);
  ExceptionList = local_10;
  return param_1;
}


// 0x1024e830  (ghidra: FUN_1024e830)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_1024e830(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  void *this;
  int *extraout_ECX;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar1 = sub_1020f420(&local_14);
  sub_10212360(this,uVar1,param_3);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    sub_1024fd20((int)&local_14);
  }
  uVar1 = sub_10212340((uint32_t *)&local_14);
  sub_10244650(extraout_ECX);
  return uVar1;
}


// 0x1024e890  (ghidra: FUN_1024e890)  [gap]
void __thiscall sub_1024e890(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_1024fd40(param_1,param_2,param_3,uVar1);
  return;
}


// 0x1024e8b0  (ghidra: FUN_1024e8b0)  [gap]
void __thiscall sub_1024e8b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102498f0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x1024e8d0  (ghidra: FUN_1024e8d0)  [gap]
uint __fastcall sub_1024e8d0(void *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = sub_1023e000(param_1,param_2);
  return uVar1 >> 0x1f;
}


// 0x1024e8e0  (ghidra: FUN_1024e8e0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall sub_1024e8e0(int param_1,int param_2,int *param_3,uint32_t param_4)

{
  uint32_t uVar1;
  int iVar2;
  void *this;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar1 = sub_1024fde0(param_3);
  if ((char)uVar1 == '\0') {
    sub_1020f420(&local_14);
    sub_10212360(this,param_1,param_4);
    for (; param_2 != 0; param_2 = param_2 + -1) {
      sub_1024fe50(&local_14,param_3);
    }
    iVar2 = sub_10212340((uint32_t *)&local_14);
    return iVar2;
  }
  uVar1 = sub_1020fe80(param_1);
  sub_1024fe10(uVar1,param_2);
  return param_1 + param_2 * 4;
}


// 0x1024e970  (ghidra: FUN_1024e970)  [gap]
uint32_t __fastcall
sub_1024e970(byte *param_1,uint param_2,byte *param_3,uint param_4,uint reg_EAX)

{
  if (param_2 == param_4) {
    reg_EAX = sub_10238060(param_1,param_3,param_2);
    if (reg_EAX == 0) {
      return 1;
    }
  }
  return reg_EAX & 0xffffff00;
}


// 0x1024e990  (ghidra: FUN_1024e990)  [gap]
void __fastcall sub_1024e990(void *param_1)

{
  sub_1024ec80(param_1);
  return;
}


// 0x1024e9a0  (ghidra: FUN_1024e9a0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall sub_1024e9a0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint32_t local_7c [6];
  uint32_t local_64 [6];
  uint32_t local_4c [6];
  void *local_34;
  void *local_30;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a7d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  local_30 = param_1;
  pvVar1 = sub_102385e0(local_7c);
  local_8 = 0;
  sub_1020f990(local_4c,"invalid_iterator");
  local_8._0_1_ = 1;
  pvVar2 = sub_10238570(local_64,local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_10247d50(local_2c,pvVar2,pvVar1,param_3);
  thunk_FUN_1020fc60(local_64);
  thunk_FUN_1020fc60(local_4c);
  thunk_FUN_1020fc60(local_7c);
  uVar3 = thunk_FUN_1020fe30((int)local_2c);
  sub_10238750(local_30,param_2,(int)uVar3);
  thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return local_30;
}


// 0x1024ea70  (ghidra: FUN_1024ea70)  [gap]
uint32_t * __fastcall sub_1024ea70(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  puVar2 = (uint32_t *)sub_1024ec00((int *)&stack0x00000004);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}


// 0x1024ea90  (ghidra: FUN_1024ea90)  [gap]
void sub_1024ea90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int *piVar5;
  uint32_t extraout_EDX;
  uint8_t local_10 [8];
  uint32_t *local_8;
  
  puVar4 = (uint32_t *)sub_1020fe80(&param_1);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  puVar4 = (uint32_t *)sub_1020fe80(&param_3);
  uVar3 = *puVar4;
  puVar4 = (uint32_t *)sub_1020fe80(&param_5);
  piVar5 = sub_1024fe80(local_10,uVar1,uVar2,uVar3,extraout_EDX,*puVar4,puVar4[1]);
  sub_1024c870(&param_5,piVar5);
  *local_8 = param_5;
  local_8[1] = param_6;
  return;
}


// 0x1024eb00  (ghidra: FUN_1024eb00)  [gap]
uint32_t * __thiscall
sub_1024eb00(void *this,uint param_1,uint32_t param_2,size_t param_3,int param_4,void *param_5,
            size_t param_6)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  int iVar5;
  void *pvVar6;
  uint32_t local_10;
  int local_c;
  void *local_8;
  
  local_8 = param_5;
  iVar5 = *(int *)((int)this + 0x10);
  local_c = iVar5;
  uVar1 = sub_1020ffe0();
  if (uVar1 - iVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = sub_10210b70(this,iVar5 + param_1);
  local_10 = sub_10210080(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = iVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_10);
  if (0xf < uVar1) {
    pvVar3 = *(void **)this;
    iVar5 = local_c;
    pvVar6 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_1024b240(extraout_EDX,pvVar4,iVar5,param_3,param_4,pvVar6,param_6);
    sub_102100a0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_10;
    return this;
  }
  sub_1024b240(pvVar3,this,local_c,param_3,param_4,local_8,param_6);
  sub_10210750(this,&local_10);
  return this;
}


// 0x1024ebd0  (ghidra: FUN_1024ebd0)  [gap]
void __fastcall sub_1024ebd0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_102126a0(param_1,param_2,param_3);
  return;
}


// 0x1024ebe0  (ghidra: FUN_1024ebe0)  [gap]
uint32_t * __thiscall sub_1024ebe0(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  return this;
}


// 0x1024ebf0  (ghidra: FUN_1024ebf0)  [gap]
uint64_t __fastcall sub_1024ebf0(int *param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = sub_1024edb0(param_1);
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),extraout_ECX);
}


// 0x1024ec00  (ghidra: FUN_1024ec00)  [gap]
uint32_t __fastcall sub_1024ec00(int *param_1)

{
  uint32_t extraout_ECX;
  
  sub_1024edc0(param_1);
  return extraout_ECX;
}


// 0x1024ec10  (ghidra: FUN_1024ec10)  [gap]
uint __thiscall sub_1024ec10(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = sub_1024ec30(this,param_1);
  return uVar1 ^ 1;
}


// 0x1024ec30  (ghidra: FUN_1024ec30)  [gap]
uint __thiscall sub_1024ec30(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 == *param_1) && (uVar1 = *(uint *)((int)this + 4), uVar1 == param_1[1])) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


// 0x1024ec50  (ghidra: FUN_1024ec50)  [gap]
bool __fastcall sub_1024ec50(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}


// 0x1024ec60  (ghidra: FUN_1024ec60)  [gap]
uint32_t * __thiscall sub_1024ec60(void *this,uint32_t param_1)

{
  uint32_t *extraout_ECX;
  
  sub_1024ed80(this);
  extraout_ECX[1] = param_1;
  *extraout_ECX = nlohmann::json_abi_v3_11_2::detail::output_stream_adapter<char>::vftable;
  return extraout_ECX;
}


// 0x1024ec80  (ghidra: FUN_1024ec80)  [gap]
uint32_t __fastcall sub_1024ec80(void *param_1)

{
  uint32_t extraout_ECX;
  
  sub_102412e0(param_1,1);
  return extraout_ECX;
}


// 0x1024ec90  (ghidra: FUN_1024ec90)  [gap]
uint32_t __thiscall sub_1024ec90(void *this,void *param_1,char *param_2)

{
  char *pcVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  
  sub_1024fef0((int)(param_2 + 0x10),*(int *)((int)this + 4),param_2);
  pcVar1 = (char *)sub_1020fe80(*(int *)((int)this + 4) + -0x10);
  sub_10244080(extraout_ECX,pcVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x10;
  sub_10218cd0(param_1,param_2);
  return extraout_ECX_00;
}


// 0x1024ece0  (ghidra: FUN_1024ece0)  [gap]
int * __thiscall sub_1024ece0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  void *local_8;
  
  local_8 = this;
  piVar1 = sub_1024ff40(&local_8,1,param_2);
  sub_1024edd0(this,param_1,param_2,*piVar1);
  return param_1;
}


// 0x1024ed20  (ghidra: FUN_1024ed20)  [gap]
bool __fastcall sub_1024ed20(char *param_1)

{
  return *param_1 == '\b';
}


// 0x1024ed30  (ghidra: FUN_1024ed30)  [gap]
bool __fastcall sub_1024ed30(char *param_1)

{
  return *param_1 == '\x03';
}


// 0x1024ed40  (ghidra: FUN_1024ed40)  [gap]
void __thiscall sub_1024ed40(void *this,uint32_t *param_1)

{
  bool bVar1;
  
  bVar1 = sub_1024a870(param_1);
  sub_1024ef20(this,bVar1);
  return;
}


// 0x1024ed60  (ghidra: FUN_1024ed60)  [gap]
void * __thiscall sub_1024ed60(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1024ed80  (ghidra: FUN_1024ed80)  [gap]
uint32_t * __fastcall sub_1024ed80(uint32_t *param_1)

{
  *param_1 = nlohmann::json_abi_v3_11_2::detail::output_adapter_protocol<char>::vftable;
  return param_1;
}


// 0x1024ed90  (ghidra: FUN_1024ed90)  [gap]
void * __thiscall sub_1024ed90(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1024edb0  (ghidra: FUN_1024edb0)  [gap]
uint64_t __fastcall sub_1024edb0(int *param_1)

{
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  sub_1024efa0(param_1);
  return CONCAT44(extraout_EDX,extraout_ECX);
}


// 0x1024edc0  (ghidra: FUN_1024edc0)  [gap]
uint32_t __fastcall sub_1024edc0(int *param_1)

{
  uint32_t extraout_ECX;
  
  sub_1024ef80(param_1);
  return extraout_ECX;
}


// 0x1024edd0  (ghidra: FUN_1024edd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall sub_1024edd0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  uint uVar5;
  void *this_00;
  int iVar6;
  uint32_t extraout_ECX;
  void *this_01;
  uint64_t uVar7;
  uint32_t local_24;
  int *local_20;
  uint8_t local_1c [4];
  uint32_t local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  bVar2 = sub_10228020(&param_2,&param_3);
  if (bVar2) {
    *param_1 = param_2;
  }
  else {
    local_10 = sub_1024ff60();
    sub_10218cb0(this,&local_14);
    local_14 = sub_1024ff60();
    iVar6 = param_2;
    local_c = param_2;
    sub_1024ff40(&local_18,local_10,param_2);
    uVar7 = sub_10218c90(this,local_1c);
    bVar2 = sub_1023d8f0((void *)((ulonglong)uVar7 >> 0x20),(int *)uVar7);
    iVar1 = local_10;
    if (bVar2) {
      do {
        puVar3 = (uint32_t *)sub_1020faf0(&local_c);
        sub_10249bb0(puVar3);
        puVar3 = sub_1024ff40(&local_24,iVar1,iVar6);
        uVar4 = thunk_FUN_1020faf0(puVar3);
        uVar5 = sub_1020fe80(uVar4);
        uVar4 = thunk_FUN_1020faf0(&local_c);
        this_00 = (void *)sub_1020f1d0(extraout_ECX,uVar4);
        sub_1024ef50(this_00,uVar5);
        sub_10240b20(&local_c);
        iVar6 = local_c;
        sub_1024ff40(&local_18,iVar1,local_c);
        uVar7 = sub_10218c90(this,local_1c);
        bVar2 = sub_1023d8f0((void *)((ulonglong)uVar7 >> 0x20),(int *)uVar7);
        param_1 = local_20;
      } while (bVar2);
    }
    iVar6 = sub_10240d00(this);
    sub_1024eff0(this_01,iVar6 - local_10);
    sub_10218cb0(this,&local_24);
    sub_1024efc0(param_1,local_14);
  }
  return param_1;
}


// 0x1024ef20  (ghidra: FUN_1024ef20)  [gap]
uint32_t * __thiscall sub_1024ef20(void *this,char param_1)

{
  uint uVar1;
  int extraout_ECX;
  uint *extraout_EDX;
  
  sub_1020faf0(this);
  uVar1 = sub_1024afc0(extraout_ECX);
  if (param_1 != '\0') {
    *extraout_EDX = *extraout_EDX | uVar1;
    return this;
  }
  *extraout_EDX = *extraout_EDX & ~uVar1;
  return this;
}


// 0x1024ef50  (ghidra: FUN_1024ef50)  [gap]
void * __thiscall sub_1024ef50(void *this,uint param_1)

{
  sub_1020f9c0(this,param_1);
  sub_10240d50((void *)((int)this + 0x18),(char *)(param_1 + 0x18));
  return this;
}


// 0x1024ef80  (ghidra: FUN_1024ef80)  [gap]
void __fastcall sub_1024ef80(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = param_1[1] + 1;
    return;
  }
  *param_1 = *param_1 + 4;
  param_1[1] = 0;
  return;
}


// 0x1024efa0  (ghidra: FUN_1024efa0)  [gap]
void __fastcall sub_1024efa0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
    return;
  }
  *param_1 = *param_1 + -4;
  param_1[1] = 0x1f;
  return;
}


// 0x1024efc0  (ghidra: FUN_1024efc0)  [gap]
uint32_t * sub_1024efc0(uint32_t *param_1,int param_2)

{
  uint32_t *extraout_EDX;
  
  sub_102401f0(param_1);
  *param_1 = *extraout_EDX;
  sub_1024a5b0(param_1,param_2);
  return param_1;
}


// 0x1024eff0  (ghidra: FUN_1024eff0)  [gap]
void __thiscall sub_1024eff0(void *this,uint param_1)

{
  sub_1024ff80(this,param_1);
  return;
}


// 0x1024f010  (ghidra: FUN_1024f010)  [gap]
void sub_1024f010(uint8_t *param_1,uint32_t param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)sub_1020fe80(param_2);
  sub_json_10250200(param_1,puVar1);
  return;
}


// 0x1024f030  (ghidra: FUN_1024f030)  [gap]
void sub_1024f030(char *param_1,uint32_t param_2)

{
  uint8_t *puVar1;
  
  puVar1 = (uint8_t *)sub_1020fe80(param_2);
  sub_10250170(param_1,puVar1);
  return;
}


// 0x1024f050  (ghidra: FUN_1024f050)  [gap]
void sub_1024f050(char *param_1,uint32_t param_2)

{
  sub_1020fe80(param_2);
  sub_json_102500e0(param_1);
  return;
}


// 0x1024f070  [gap]
void __fastcall thunk_FUN_10250370(char *param_1,uint32_t param_2)

{
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  sub_1023f650(param_1 + 8,*param_1);
  *param_1 = '\x03';
  sub_1023f980(&uStack_10,param_2);
  *(uint32_t *)(param_1 + 0xc) = uStack_c;
  *(uint32_t *)(param_1 + 8) = uStack_10;
  sub_1023fcc0(param_1);
  return;
}


// 0x1024f080  (ghidra: FUN_1024f080)  [gap]
void __fastcall sub_1024f080(void *param_1,int param_2)

{
  sub_102503c0(param_1,param_2,param_2 >> 0x1f);
  return;
}


// 0x1024f0a0  (ghidra: FUN_1024f0a0)  [gap]
void __fastcall sub_1024f0a0(char *param_1,uint8_t param_2)

{
  sub_10250430(param_1,param_2);
  return;
}


// 0x1024f0b0  (ghidra: FUN_1024f0b0)  [gap]
int __fastcall sub_1024f0b0(int param_1)

{
  int iVar1;
  int extraout_ECX;
  
  client_DrawHoverItem_10224f20(param_1);
  iVar1 = sub_102504a0();
  return iVar1 + extraout_ECX;
}


// 0x1024f0c0  (ghidra: FUN_1024f0c0)  [gap]
void __fastcall sub_1024f0c0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_3);
  sub_102504b0(param_1,uVar2);
  return;
}


// 0x1024f0f0  (ghidra: FUN_1024f0f0)  [gap]
int __fastcall sub_1024f0f0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t extraout_EDX;
  
  sub_1020fe80(param_3);
  iVar1 = sub_1020fe80(param_2);
  iVar1 = sub_1024c1e0(iVar1,extraout_EDX);
  return iVar1 + 1;
}


// 0x1024f120  (ghidra: FUN_1024f120)  [gap]
void __fastcall sub_1024f120(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  byte *pbVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  pbVar1 = (byte *)sub_1020fe80(param_2);
  sub_1023e190(param_1,(uint)*pbVar1);
  uVar2 = sub_1020fe80(param_4);
  uVar3 = sub_1020fe80(param_3);
  sub_1024c200(param_1,uVar3,uVar2);
  return;
}


// 0x1024f160  (ghidra: FUN_1024f160)  [gap]
void * __thiscall sub_1024f160(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_10244a10(uVar1);
  return this;
}


// 0x1024f180  (ghidra: FUN_1024f180)  [gap]
void * __fastcall sub_1024f180(void *param_1)

{
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */

  sub_102504d0(param_1,&stack0x00000008);
  return param_1;
}


// 0x1024f1b0  (ghidra: FUN_1024f1b0)  [gap]
int __fastcall sub_1024f1b0(int param_1,uint32_t param_2)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = sub_1020fe80(param_2);
  sub_1024c2d0(iVar1);
  iVar1 = client_DrawHoverItem_10224f20(param_1);
  return iVar1 + extraout_EDX;
}


// 0x1024f1d0  (ghidra: FUN_1024f1d0)  [gap]
void __fastcall sub_1024f1d0(void *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_3);
  sub_1024c2e0(param_1,uVar2);
  return;
}


// 0x1024f200  (ghidra: FUN_1024f200)  [gap]
void __cdecl sub_1024f200(uint32_t param_1)

{
  uint uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10250010(this,uVar1);
  return;
}


// 0x1024f230  (ghidra: FUN_1024f230)  [gap]
void __fastcall sub_1024f230(void *param_1,uint32_t param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  return;
}


// 0x1024f250  (ghidra: FUN_1024f250)  [gap]
char * __fastcall
sub_1024f250(char *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  char *pcVar1;
  char cVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t extraout_EDX;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  uVar3 = sub_1020fe80(param_5);
  uVar4 = sub_1020fe80(param_4);
  sub_1020fe80(param_3);
  iVar5 = sub_1020fe80(param_2);
  iVar5 = sub_10250510(iVar5,extraout_EDX,uVar4,uVar3);
  return param_1 + (iVar5 - (int)pcVar1);
}


// 0x1024f2a0  (ghidra: FUN_1024f2a0)  [gap]
void __fastcall
sub_1024f2a0(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  char *pcVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  
  pcVar1 = (char *)sub_1020fe80(param_2);
  client_DrawHoverItem_102250a0(param_1,pcVar1);
  uVar2 = sub_1020fe80(param_6);
  uVar3 = sub_1020fe80(param_5);
  uVar4 = sub_1020fe80(param_4);
  uVar5 = sub_1020fe80(param_3);
  sub_10250550(param_1,uVar5,uVar4,uVar3,uVar2);
  return;
}


// 0x1024f2f0  (ghidra: FUN_1024f2f0)  [gap]
uint64_t sub_1024f2f0(void)

{
  uint64_t in_XMM0_Qa;
  
  return in_XMM0_Qa;
}


// 0x1024f310  (ghidra: FUN_1024f310)  [gap]
void __cdecl sub_1024f310(uint32_t param_1)

{
  uint uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1024ef50(this,uVar1);
  return;
}


// 0x1024f340  (ghidra: FUN_1024f340)  [gap]
void __cdecl sub_1024f340(uint32_t param_1)

{
  uint uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10250040(this,uVar1);
  return;
}


// 0x1024f370  (ghidra: FUN_1024f370)  [gap]
uint32_t * __thiscall sub_1024f370(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("cannot use erase() with ");
  pcVar3 = sub_10247cf0(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  sub_10247d20(this,pcVar2,uVar1);
  ExceptionList = local_10;
  return this;
}


// 0x1024f400  (ghidra: FUN_1024f400)  [gap]
void __cdecl sub_1024f400(uint32_t param_1)

{
  char *pcVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  char cVar3;
  
  pcVar1 = (char *)sub_1020fe80(param_1);
  cVar3 = *pcVar1;
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1023fc80(this,cVar3);
  return;
}


// 0x1024f430  (ghidra: FUN_1024f430)  [gap]
int __thiscall sub_1024f430(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t extraout_EDX;
  uint uVar3;
  int iVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)this;
  uVar3 = *(int *)((int)this + 4) - *(int *)this >> 4;
  uVar1 = sub_102410c0();
  if (uVar3 != uVar1) {
    uVar3 = uVar3 + 1;
    uVar1 = sub_10244ca0(this,uVar3);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    local_8 = 0;
    sub_1020fe80(param_2);
    sub_1020fe80(iVar4);
    sub_1024f400(extraout_EDX);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar3,uVar1);
    ExceptionList = local_10;
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024f518  [gap]
void Catch_All_1024f518(void)

{
  int unaff_EBP;
  
  sub_10241090(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x14));
  sub_102413a0(*(void **)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x1024f550  (ghidra: FUN_1024f550)  [gap]
void __cdecl sub_1024f550(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10241960(this,uVar1);
  return;
}


// 0x1024f580  (ghidra: FUN_1024f580)  [gap]
int __thiscall sub_1024f580(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t extraout_EDX;
  uint uVar3;
  int iVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)this;
  uVar3 = *(int *)((int)this + 4) - *(int *)this >> 4;
  uVar1 = sub_102410c0();
  if (uVar3 != uVar1) {
    uVar3 = uVar3 + 1;
    uVar1 = sub_10244ca0(this,uVar3);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    local_8 = 0;
    sub_1020fe80(param_2);
    sub_1020fe80(iVar4);
    sub_1024f550(extraout_EDX);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar3,uVar1);
    ExceptionList = local_10;
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024f668  [gap]
void Catch_All_1024f668(void)

{
  int unaff_EBP;
  
  sub_10241090(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x14));
  sub_102413a0(*(void **)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x1024f6a0  (ghidra: FUN_1024f6a0)  [gap]
char * __thiscall sub_1024f6a0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint8_t *)this = 0;
  *(uint64_t *)((int)this + 8) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_10250310(this,uVar1);
  sub_1023fcc0(this);
  return this;
}


// 0x1024f6e0  (ghidra: FUN_1024f6e0)  [gap]
void __cdecl sub_1024f6e0(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1024f6a0(this,uVar1);
  return;
}


// 0x1024f710  (ghidra: FUN_1024f710)  [gap]
int __thiscall sub_1024f710(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  uint uVar5;
  
  iVar4 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar4 >> 4;
  uVar1 = sub_102410c0();
  if (uVar5 != uVar1) {
    uVar5 = uVar5 + 1;
    uVar1 = sub_10244ca0(this,uVar5);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    uVar3 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_1024f6e0(uVar3);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar5,uVar1);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024f7d0  (ghidra: FUN_1024f7d0)  [gap]
char * __thiscall sub_1024f7d0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint8_t *)this = 0;
  *(uint64_t *)((int)this + 8) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_10250330(this,uVar1);
  sub_1023fcc0(this);
  return this;
}


// 0x1024f810  (ghidra: FUN_1024f810)  [gap]
void __cdecl sub_1024f810(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1024f7d0(this,uVar1);
  return;
}


// 0x1024f840  (ghidra: FUN_1024f840)  [gap]
int __thiscall sub_1024f840(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  uint uVar5;
  
  iVar4 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar4 >> 4;
  uVar1 = sub_102410c0();
  if (uVar5 != uVar1) {
    uVar5 = uVar5 + 1;
    uVar1 = sub_10244ca0(this,uVar5);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    uVar3 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_1024f810(uVar3);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar5,uVar1);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024f900  (ghidra: FUN_1024f900)  [gap]
char * __thiscall sub_1024f900(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  *(uint8_t *)this = 0;
  *(uint64_t *)((int)this + 8) = 0;
  uVar1 = sub_1020fe80(param_1);
  sub_10250350(this,uVar1);
  sub_1023fcc0(this);
  return this;
}


// 0x1024f940  (ghidra: FUN_1024f940)  [gap]
void __cdecl sub_1024f940(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1024f900(this,uVar1);
  return;
}


// 0x1024f970  (ghidra: FUN_1024f970)  [gap]
int __thiscall sub_1024f970(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  uint uVar5;
  
  iVar4 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar4 >> 4;
  uVar1 = sub_102410c0();
  if (uVar5 != uVar1) {
    uVar5 = uVar5 + 1;
    uVar1 = sub_10244ca0(this,uVar5);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    uVar3 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_1024f940(uVar3);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar5,uVar1);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024fa30  (ghidra: FUN_1024fa30)  [gap]
void __cdecl sub_1024fa30(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_102419a0(this,uVar1);
  return;
}


// 0x1024fa60  (ghidra: FUN_1024fa60)  [gap]
int __thiscall sub_1024fa60(void *this,int param_1,uint32_t param_2)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t extraout_EDX;
  uint uVar5;
  
  iVar4 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar4 >> 4;
  uVar1 = sub_102410c0();
  if (uVar5 != uVar1) {
    uVar5 = uVar5 + 1;
    uVar1 = sub_10244ca0(this,uVar5);
    iVar2 = sub_10241380(uVar1);
    iVar4 = (param_1 - iVar4 & 0xfffffff0U) + iVar2;
    uVar3 = sub_1020fe80(param_2);
    sub_1020fe80(extraout_EDX);
    sub_1024fa30(uVar3);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar2);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar2);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar4 + 0x10);
    }
    sub_10241300(this,iVar2,uVar5,uVar1);
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024fb20  (ghidra: FUN_1024fb20)  [gap]
void __fastcall sub_1024fb20(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  char *pcVar2;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(param_2);
  pcVar2 = (char *)sub_1020f1d0(extraout_ECX,uVar1);
  sub_1023dec0(pcVar2);
  return;
}


// 0x1024fb40  (ghidra: FUN_1024fb40)  [gap]
int __thiscall sub_1024fb40(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t extraout_ECX;
  uint uVar5;
  
  iVar1 = *(int *)this;
  uVar5 = *(int *)((int)this + 4) - iVar1 >> 4;
  uVar2 = sub_102410c0();
  if (uVar5 != uVar2) {
    uVar5 = uVar5 + 1;
    uVar2 = sub_10244ca0(this,uVar5);
    iVar3 = sub_10241380(uVar2);
    iVar1 = (param_1 - iVar1 & 0xfffffff0U) + iVar3;
    uVar4 = sub_1020fe80(iVar1);
    sub_1024fb20(extraout_ECX,uVar4);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10241350(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar3);
    }
    else {
      sub_10244cd0(this,*(uint32_t *)this,param_1,iVar3);
      sub_10244cd0(this,param_1,*(uint32_t *)((int)this + 4),iVar1 + 0x10);
    }
    sub_10241300(this,iVar3,uVar5,uVar2);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x1024fc00  (ghidra: FUN_1024fc00)  [gap]
void __thiscall sub_1024fc00(void *this,int *param_1)

{
  uint8_t *puVar1;
  uint8_t local_48 [28];
  uint8_t local_2c [28];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030665d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint8_t **)this;
  if (puVar1 == (uint8_t *)*param_1) {
    if (puVar1 == (uint8_t *)0x0) {
      _wassert(L"m_object != nullptr",
               L"C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\thirdparty\\include\\nlohmann\\json.hpp"
               ,0x33cf);
      puVar1 = *(uint8_t **)this;
    }
    switch(*puVar1) {
    default:
      sub_10238950(*(int *)((int)this + 0xc),param_1[3]);
      ExceptionList = local_10;
      return;
    case 1:
      sub_10228020((void *)((int)this + 4),param_1 + 1);
      ExceptionList = local_10;
      return;
    case 2:
      sub_10228020((void *)((int)this + 8),param_1 + 2);
      ExceptionList = local_10;
      return;
    }
  }
  sub_1020f990(local_2c,"cannot compare iterators of different containers");
  local_8 = 0;
  sub_1024e9a0(local_48,0xd4,local_2c);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_10393bc4);
}


// 0x1024fd20  (ghidra: FUN_1024fd20)  [gap]
void __fastcall sub_1024fd20(int param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(*(uint32_t *)(param_1 + 4));
  sub_1024fb20(extraout_ECX,uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
  return;
}


// 0x1024fd40  (ghidra: FUN_1024fd40)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_1024fd40(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this;
  int *extraout_ECX;
  uint32_t local_28;
  uint32_t local_24;
  uint64_t local_20;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030668d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  local_24 = param_2;
  iVar1 = sub_1020faf0(&local_24);
  sub_1020f420(&local_20);
  sub_10212360(this,param_3,param_4);
  local_8 = 0;
  for (iVar2 = sub_1020faf0(&local_28); iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    sub_10250590(&local_20,iVar2);
  }
  uVar3 = sub_10212340((uint32_t *)&local_20);
  sub_10244650(extraout_ECX);
  ExceptionList = local_10;
  return uVar3;
}


// 0x1024fde0  (ghidra: FUN_1024fde0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_1024fde0(int *param_1)

{
  return CONCAT31((int3)((uint)*param_1 >> 8),*param_1 == 0);
}


// 0x1024fe10  (ghidra: FUN_1024fe10)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_1024fe10(uint32_t param_1,int param_2)

{
  void *_Dst;
  int _Val;
  size_t _Size;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  _Size = param_2 * 4;
  _Val = 0;
  local_c = param_1;
  _Dst = (void *)sub_1020faf0(&local_c);
  memset(_Dst,_Val,_Size);
  return;
}


// 0x1024fe50  (ghidra: FUN_1024fe50)  [gap]
void __thiscall sub_1024fe50(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_10212910(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return;
}


// 0x1024fe80  (ghidra: FUN_1024fe80)  [gap]
int * __thiscall
sub_1024fe80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  char cVar1;
  uint uVar2;
  uint32_t *puVar3;
  void *this_00;
  uint64_t uVar4;
  uint8_t local_14 [8];
  uint8_t local_c [8];
  
  uVar2 = sub_1024ec10(&param_1,&param_3);
  cVar1 = (char)uVar2;
  while (cVar1 != '\0') {
    uVar4 = sub_1024aa70(&param_1,local_c);
    puVar3 = (uint32_t *)uVar4;
    uVar4 = sub_1024aa70(&param_5,local_14);
    sub_1024ed40((void *)uVar4,puVar3);
    sub_1024ec00(&param_5);
    sub_1024ec00(&param_1);
    uVar2 = sub_1024ec10(this_00,&param_3);
    cVar1 = (char)uVar2;
  }
  *(uint32_t *)this = param_5;
  *(uint32_t *)((int)this + 4) = param_6;
  return this;
}


// 0x1024fef0  (ghidra: FUN_1024fef0)  [gap]
char * __fastcall sub_1024fef0(int param_1,int param_2,char *param_3)

{
  char *pcVar1;
  void *this;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    pcVar1 = (char *)sub_1020fe80(param_1);
    sub_10240d50(this,pcVar1);
    sub_1023dd90(param_3);
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
  } while (param_1 != param_2);
  return param_3;
}


// 0x1024ff40  (ghidra: FUN_1024ff40)  [gap]
uint32_t * __fastcall sub_1024ff40(uint32_t *param_1,int param_2,uint32_t param_3)

{
  sub_10248120(&param_3,param_2);
  *param_1 = param_3;
  return param_1;
}


// 0x1024ff60  (ghidra: FUN_1024ff60)  [gap]
void sub_1024ff60(void)

{
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */

  sub_102500a0(&stack0x00000008,(int *)&stack0x00000004);
  return;
}


// 0x1024ff80  (ghidra: FUN_1024ff80)  [gap]
int __thiscall sub_1024ff80(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - *(int *)this;
  iVar2 = iVar3 * 0x66666667;
  uVar1 = iVar3 / 0x28;
  if (param_1 < uVar1) {
    iVar2 = *(int *)this + param_1 * 0x28;
    iVar3 = sub_10241180(iVar2,*(int *)((int)this + 4));
    *(int *)((int)this + 4) = iVar2;
    return iVar3;
  }
  if (uVar1 < param_1) {
    if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x28) < param_1) {
      iVar2 = sub_102505c0(this,param_1);
      return iVar2;
    }
    iVar2 = sub_102500c0(this,*(uint32_t *)((int)this + 4),param_1 - uVar1);
    *(int *)((int)this + 4) = iVar2;
  }
  return iVar2;
}


// 0x10250010  (ghidra: FUN_10250010)  [gap]
void * __thiscall sub_10250010(void *this,uint param_1)

{
  sub_1020f9c0(this,param_1);
  *(uint32_t *)((int)this + 0x18) = *(uint32_t *)(param_1 + 0x18);
  return this;
}


// 0x10250040  (ghidra: FUN_10250040)  [gap]
void * __thiscall sub_10250040(void *this,uint param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103054cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f9c0(this,param_1);
  local_8 = 0;
  sub_1023ddd0((void *)((int)this + 0x18),(char *)(param_1 + 0x18));
  ExceptionList = local_10;
  return this;
}


// 0x102500a0  (ghidra: FUN_102500a0)  [gap]
int __thiscall sub_102500a0(void *this,int *param_1)

{
  return (*(int *)this - *param_1) / 0x28;
}


// 0x102500c0  (ghidra: FUN_102500c0)  [gap]
void __thiscall sub_102500c0(void *this,uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102506b0(param_1,param_2,uVar1);
  return;
}


// 0x102500e0  (ghidra: FUN_102500e0)  [gap]
void __fastcall sub_json_102500e0(char *param_1)

{
  bool bVar1;
  uint32_t *puVar2;
  char *extraout_ECX;
  uint64_t uVar3;
  uint8_t local_48 [28];
  uint32_t local_2c [6];
  char *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103066cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = sub_1024ed30(param_1);
  if (bVar1) {
    uVar3 = sub_102507a0(extraout_ECX);
    sub_10237900((void *)((ulonglong)uVar3 >> 0x20),(int)uVar3);
    ExceptionList = local_10;
    return;
  }
  local_14 = sub_1023fbf0(extraout_ECX);
  puVar2 = sub_102497f0(local_2c,"type must be string, but is ",&local_14);
  local_8 = 0;
  sub_10242490(local_48,0x12e,puVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_10393ba4);
}


// 0x10250170  (ghidra: FUN_10250170)  [gap]
void __fastcall sub_10250170(char *param_1,uint8_t *param_2)

{
  bool bVar1;
  uint8_t *puVar2;
  uint32_t *puVar3;
  char *extraout_ECX;
  uint8_t local_48 [28];
  uint8_t local_2c [24];
  char *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030588d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = sub_10250710(param_1);
  if (bVar1) {
    puVar2 = (uint8_t *)sub_10250840(extraout_ECX);
    *param_2 = *puVar2;
    ExceptionList = local_10;
    return;
  }
  local_14 = sub_1023fbf0(extraout_ECX);
  puVar3 = sub_json_102507b0(local_2c,&local_14);
  local_8 = 0;
  sub_10242490(local_48,0x12e,puVar3);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_10393ba4);
}


// 0x10250200  (ghidra: FUN_10250200)  [gap]
void __fastcall sub_json_10250200(uint8_t *param_1,uint *param_2)

{
  uint8_t uVar1;
  uint *puVar2;
  double *pdVar3;
  byte *pbVar4;
  uint32_t *puVar5;
  char *extraout_ECX;
  uint8_t local_48 [28];
  uint32_t local_2c [6];
  char *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030588d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = sub_102450d0(param_1);
  switch(uVar1) {
  default:
    local_14 = sub_1023fbf0(extraout_ECX);
    puVar5 = sub_102497f0(local_2c,"type must be number, but is ",&local_14);
    local_8 = 0;
    sub_10242490(local_48,0x12e,puVar5);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_10393ba4);
  case 4:
    pbVar4 = (byte *)sub_10250840(extraout_ECX);
    *param_2 = (uint)*pbVar4;
    ExceptionList = local_10;
    return;
  case 5:
    puVar2 = (uint *)sub_10250860(extraout_ECX);
    *param_2 = *puVar2;
    ExceptionList = local_10;
    return;
  case 6:
    puVar2 = (uint *)sub_10250850(extraout_ECX);
    *param_2 = *puVar2;
    ExceptionList = local_10;
    return;
  case 7:
    pdVar3 = (double *)sub_10250870(extraout_ECX);
    *param_2 = (int)*pdVar3;
    ExceptionList = local_10;
    return;
  }
}


// 0x10250310  (ghidra: FUN_10250310)  [gap]
void __fastcall sub_10250310(char *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_10250720(param_1,uVar1);
  return;
}


// 0x10250330  (ghidra: FUN_10250330)  [gap]
void __fastcall sub_10250330(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_10250740(param_1,uVar1);
  return;
}


// 0x10250350  (ghidra: FUN_10250350)  [gap]
void __fastcall sub_10250350(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_10250770(param_1,uVar1);
  return;
}


// 0x10250370  (ghidra: FUN_10250370)  [gap]
void __fastcall sub_10250370(char *param_1,uint32_t param_2)

{
  uint32_t local_10;
  uint32_t local_c;
  
  sub_1023f650(param_1 + 8,*param_1);
  *param_1 = '\x03';
  sub_1023f980(&local_10,param_2);
  *(uint32_t *)(param_1 + 0xc) = local_c;
  *(uint32_t *)(param_1 + 8) = local_10;
  sub_1023fcc0(param_1);
  return;
}


// 0x102503c0  (ghidra: FUN_102503c0)  [gap]
void __thiscall sub_102503c0(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t local_1c;
  uint32_t local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103066f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1023f650((void *)((int)this + 8),*(char *)this);
  *(uint8_t *)this = 5;
  sub_1023f9b0(&local_1c,param_1,param_2);
  *(uint32_t *)((int)this + 0xc) = local_18;
  *(uint32_t *)((int)this + 8) = local_1c;
  sub_1023fcc0(this);
  ExceptionList = local_10;
  return;
}


// 0x10250430  (ghidra: FUN_10250430)  [gap]
void __fastcall sub_10250430(char *param_1,uint8_t param_2)

{
  uint32_t local_1c;
  uint32_t local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103066f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1023f650(param_1 + 8,*param_1);
  *param_1 = '\x04';
  sub_1023f9d0(&local_1c,param_2);
  *(uint32_t *)(param_1 + 0xc) = local_18;
  *(uint32_t *)(param_1 + 8) = local_1c;
  sub_1023fcc0(param_1);
  ExceptionList = local_10;
  return;
}


// 0x102504a0  (ghidra: FUN_102504a0)  [gap]
int sub_102504a0(void)

{
  int iVar1;
  
  iVar1 = sub_102384f0();
  return iVar1 + 1;
}


// 0x102504b0  (ghidra: FUN_102504b0)  [gap]
void __fastcall sub_102504b0(void *param_1,uint32_t param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)sub_1020fe80(param_2);
  sub_1023e190(param_1,(uint)*pbVar1);
  return;
}


// 0x102504d0  (ghidra: FUN_102504d0)  [gap]
void * __thiscall sub_102504d0(void *this,uint32_t param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_1);
  uVar2 = sub_1020faf0(puVar1);
  sub_1020f9c0(this,uVar2);
  *(uint32_t *)((int)this + 0x18) = 0;
  return this;
}


// 0x10250510  (ghidra: FUN_10250510)  [gap]
int __fastcall sub_10250510(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  uint32_t uVar1;
  char *pcVar2;
  int iVar3;
  uint32_t extraout_EDX;
  int extraout_EDX_00;
  
  uVar1 = sub_1020fe80(param_4);
  sub_1020fe80(param_3);
  pcVar2 = (char *)sub_1020fe80(param_2);
  sub_10250880(pcVar2,extraout_EDX,uVar1);
  iVar3 = client_DrawHoverItem_10224f20(param_1);
  return iVar3 + extraout_EDX_00;
}


// 0x10250550  (ghidra: FUN_10250550)  [gap]
void __fastcall
sub_10250550(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  iVar1 = sub_1020fe80(param_2);
  client_Sound_Sound_10233cb0(param_1,iVar1);
  uVar2 = sub_1020fe80(param_5);
  uVar3 = sub_1020fe80(param_4);
  uVar4 = sub_1020fe80(param_3);
  sub_102508c0(param_1,uVar4,uVar3,uVar2);
  return;
}


// 0x10250590  (ghidra: FUN_10250590)  [gap]
void __thiscall sub_10250590(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_10250900(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return;
}


// 0x102505c0  (ghidra: FUN_102505c0)  [gap]
void __thiscall sub_102505c0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = sub_10244dc0();
  if (param_1 <= uVar2) {
    iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x28;
    uVar2 = sub_10244d50(this,param_1);
    iVar3 = sub_10244e00(uVar2);
    local_8 = 0;
    sub_102500c0(this,iVar3 + iVar1 * 0x28,param_1 - iVar1);
    sub_10244d80(this,*(uint32_t *)this,*(uint32_t *)((int)this + 4),iVar3);
    sub_10244cf0(this,iVar3,param_1,uVar2);
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10250683  [gap]
void Catch_All_10250683(void)

{
  int unaff_EBP;
  
  sub_10241180(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0xc));
  sub_10244e20(*(void **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x102506b0  (ghidra: FUN_102506b0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102506b0(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  void *this;
  int *extraout_ECX;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar1 = sub_1020f420(&local_14);
  sub_10212360(this,uVar1,param_3);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    sub_10250930((int)&local_14);
  }
  uVar1 = sub_10212340((uint32_t *)&local_14);
  sub_10249c00(extraout_ECX);
  return uVar1;
}


// 0x10250710  (ghidra: FUN_10250710)  [gap]
bool __fastcall sub_10250710(char *param_1)

{
  return *param_1 == '\x04';
}


// 0x10250720  (ghidra: FUN_10250720)  [gap]
void sub_10250720(char *param_1,uint32_t param_2)

{
  sub_1020fe80(param_2);
  sub_10250a20(param_1);
  return;
}


// 0x10250740  (ghidra: FUN_10250740)  [gap]
void sub_10250740(void *param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  sub_10250a30(param_1,*puVar1,puVar1[1]);
  return;
}


// 0x10250770  (ghidra: FUN_10250770)  [gap]
void sub_10250770(void *param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  sub_10250a50(param_1,*puVar1,puVar1[1]);
  return;
}


// 0x102507a0  (ghidra: FUN_102507a0)  [gap]
void __fastcall sub_102507a0(char *param_1)

{
  sub_102509d0(param_1);
  return;
}


// 0x102507b0  (ghidra: FUN_102507b0)  [gap]
uint32_t * __thiscall sub_json_102507b0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10305a3e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10237930(this);
  local_8 = 0;
  uVar1 = sub_1020fe80(param_1);
  pcVar2 = (char *)sub_1020fe80("type must be boolean, but is ");
  pcVar3 = sub_10247cf0(pcVar2,uVar1);
  sub_1023e080(this,(uint)pcVar3);
  sub_10247d20(this,pcVar2,uVar1);
  ExceptionList = local_10;
  return this;
}

