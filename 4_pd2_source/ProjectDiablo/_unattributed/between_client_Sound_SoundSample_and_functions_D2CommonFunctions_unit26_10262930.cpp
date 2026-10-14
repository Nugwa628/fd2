/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10262930.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10262930 - 0x10266dd0
 * Functions     : 196
 * Attribution   : gap=196
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10262930  (ghidra: FUN_10262930)  [gap]
void __thiscall sub_10262930(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_10263db0(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


// 0x10262960  (ghidra: FUN_10262960)  [gap]
void __thiscall sub_10262960(void *this,uint param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = *(int *)((int)this + 4) - iVar1 >> 3;
  if (param_1 < uVar3) {
    *(uint *)((int)this + 4) = iVar1 + param_1 * 8;
    return;
  }
  if (uVar3 < param_1) {
    if ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < param_1) {
      sub_10263de0(this,param_1);
      return;
    }
    uVar2 = sub_10262ab0(this,*(uint32_t *)((int)this + 4),param_1 - uVar3);
    *(uint32_t *)((int)this + 4) = uVar2;
  }
  return;
}


// 0x102629c0  (ghidra: FUN_102629c0)  [gap]
void __thiscall sub_102629c0(void *this,uint param_1,int *param_2)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    sub_10210a70(this,param_1);
    uVar2 = sub_1024a920(this,*(int *)this,uVar1,param_2);
    *(uint32_t *)((int)this + 4) = uVar2;
    param_1 = 0;
    sub_10210970(&param_1);
  }
  return;
}


// 0x10262a00  (ghidra: FUN_10262a00)  [gap]
void __fastcall sub_10262a00(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


// 0x10262a20  (ghidra: FUN_10262a20)  [gap]
void __fastcall sub_10262a20(uint32_t *param_1)

{
  *param_1 = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  sub_10262d20((void *)param_1[5]);
  FUN_1030207a((void *)param_1[6]);
  if ((void *)param_1[7] != (void *)0x0) {
    sub_10262d00((void *)param_1[7]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    sub_10262d00((void *)param_1[8]);
  }
  sub_10262d20((void *)param_1[10]);
  sub_10254b00(param_1);
  return;
}


// 0x10262a70  (ghidra: FUN_10262a70)  [gap]
uint32_t __fastcall sub_10262a70(int param_1)

{
  return *(uint32_t *)(param_1 + 8);
}


// 0x10262a80  (ghidra: FUN_10262a80)  [gap]
int __thiscall sub_10262a80(void *this,int param_1)

{
  return *(int *)this + param_1 * 8;
}


// 0x10262a90  (ghidra: FUN_10262a90)  [gap]
uint * __thiscall sub_10262a90(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this - uVar2;
  *(int *)((int)this + 4) = (*(int *)((int)this + 4) - param_1[1]) - (uint)(uVar1 < uVar2);
  return this;
}


// 0x10262ab0  (ghidra: FUN_10262ab0)  [gap]
void __thiscall sub_10262ab0(void *this,uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_10263e60(param_1,param_2,uVar1);
  return;
}


// 0x10262ad0  (ghidra: FUN_10262ad0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * sub_10262ad0(void *param_1,int param_2)

{
  void *extraout_ECX;
  void *this;
  void *this_00;
  uint64_t local_10;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_1020f410(&local_10);
  sub_10246ee0(this_00,extraout_ECX);
  sub_10262d60(&local_10,param_2);
  sub_1024aa70(this,param_1);
  return param_1;
}


// 0x10262b20  (ghidra: FUN_10262b20)  [gap]
void __thiscall sub_10262b20(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  void *this_01;
  uint extraout_EDX;
  uint64_t uVar3;
  uint64_t local_3c;
  uint64_t local_34;
  uint8_t local_2c [8];
  uint64_t local_24;
  uint64_t local_1c;
  uint8_t local_14 [4];
  
  local_14[0] = 0;
  local_1c._4_4_ = this;
  uVar1 = sub_102471f0((int)this);
  if (uVar1 < param_1) {
    sub_10246ad0(this_00,&local_1c);
    iVar2 = sub_102471f0((int)this);
    sub_10246e60(this,&local_24,param_1 - iVar2,local_14);
    return;
  }
  uVar1 = sub_102471f0((int)this_00);
  if (extraout_EDX < uVar1) {
    sub_10246ad0(this_01,&local_24);
    uVar3 = sub_10246ee0(local_1c._4_4_,local_2c);
    sub_10246b10((void *)uVar3,&local_34,param_1);
    sub_10262d80(local_1c._4_4_,&local_3c);
  }
  return;
}


// 0x10262be0  (ghidra: FUN_10262be0)  [gap]
bool __thiscall sub_10262be0(void *this,wchar_t param_1,short param_2)

{
  bool bVar1;
  ctype<wchar_t> *pcVar2;
  short extraout_DX;
  wchar_t extraout_DX_00;
  
  if (param_2 != -1) {
    pcVar2 = (ctype<wchar_t> *)sub_1020fae0((int)this);
    bVar1 = std::ctype<wchar_t>::is(pcVar2,extraout_DX,param_1);
    return bVar1;
  }
  if (param_1 != L'_') {
    pcVar2 = (ctype<wchar_t> *)sub_1020fae0((int)this);
    bVar1 = std::ctype<wchar_t>::is(pcVar2,0x107,extraout_DX_00);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}


// 0x10262c30  (ghidra: FUN_10262c30)  [gap]
void __thiscall sub_10262c30(void *this,wchar_t param_1)

{
  ctype<wchar_t> *this_00;
  
  this_00 = (ctype<wchar_t> *)sub_1020fae0((int)this);
                    /* WARNING: Could not recover jumptable at 0x10262c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ctype<wchar_t>::tolower(this_00,param_1);
  return;
}


// 0x10262c50  (ghidra: FUN_10262c50)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint16_t __thiscall sub_10262c50(void *this,uint16_t param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  uint16_t *puVar3;
  int extraout_ECX;
  uint16_t uVar4;
  uint32_t *puVar5;
  uint32_t local_24 [6];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)local_24;
  iVar1 = sub_1020fe80(&param_1);
  iVar2 = iVar1 + 2;
  puVar5 = local_24;
  this_00 = (void *)sub_1020faf0(this);
  sub_10262eb0(this_00,puVar5,iVar1,iVar2);
  iVar2 = client_DrawHoverItem_10224f20((int)local_24);
  uVar4 = param_1;
  if (iVar2 == 1) {
    puVar3 = (uint16_t *)sub_1025f090(extraout_ECX);
    uVar4 = *puVar3;
  }
  thunk_FUN_102250f0(local_24);
  return uVar4;
}


// 0x10262cd0  (ghidra: FUN_10262cd0)  [gap]
uint32_t * __thiscall sub_10262cd0(void *this,byte param_1)

{
  sub_10262a20(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x10262d00  (ghidra: FUN_10262d00)  [gap]
void * __fastcall sub_10262d00(void *param_1)

{
  sub_10262d50((int)param_1);
  FUN_1030207a(param_1);
  return param_1;
}


// 0x10262d20  (ghidra: FUN_10262d20)  [gap]
void sub_10262d20(void *param_1)

{
  void *pvVar1;
  
  while (param_1 != (void *)0x0) {
    pvVar1 = *(void **)((int)param_1 + 0x10);
    sub_10262ed0(param_1);
    param_1 = pvVar1;
  }
  return;
}


// 0x10262d50  (ghidra: FUN_10262d50)  [gap]
void __fastcall sub_10262d50(int param_1)

{
  free(*(void **)(param_1 + 8));
  return;
}


// 0x10262d60  (ghidra: FUN_10262d60)  [gap]
void __thiscall sub_10262d60(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)this = *(int *)this + (uVar1 >> 5) * 4;
  *(uint *)((int)this + 4) = uVar1 & 0x1f;
  return;
}


// 0x10262d80  (ghidra: FUN_10262d80)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t * __thiscall sub_10262d80(void *this,uint64_t *param_1)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *extraout_ECX;
  uint64_t *extraout_ECX_00;
  void *this_00;
  uint64_t uVar3;
  uint64_t local_48;
  int local_40;
  uint64_t local_3c;
  uint local_34;
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
  puStack_18 = &LAB_10307300;
  local_1c = ExceptionList;
  local_24 = DAT_1039800c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  sub_1020f410((uint64_t *)&local_2c);
  sub_1024b5d0(extraout_ECX);
  sub_1020f410((uint64_t *)&local_34);
  sub_1024b5d0(extraout_ECX_00);
  uVar3 = sub_10246ee0(this,&local_3c);
  local_40 = sub_10247110(&local_2c,(int *)uVar3);
  uVar1 = sub_1024ec10(this_00,&local_34);
  if ((char)uVar1 != '\0') {
    sub_1020f410(&local_3c);
    puVar2 = sub_10246ad0(this,&local_48);
    sub_1024ea90(local_34,local_30,*(uint32_t *)puVar2,*(uint32_t *)((int)puVar2 + 4),local_2c,
                 local_28);
    uVar3 = sub_10246ee0(this,&local_48);
    uVar1 = sub_10247110(&local_3c,(int *)uVar3);
    sub_1024b540(this,uVar1);
  }
  uVar3 = sub_10246ee0(this,&local_34);
  sub_10246b10((void *)uVar3,param_1,local_40);
  ExceptionList = local_1c;
  return param_1;
}


// 0x10262eb0  (ghidra: FUN_10262eb0)  [gap]
uint32_t __thiscall
sub_10262eb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (**(code **)(*(int *)this + 0x10))(param_1,param_2,param_3);
  return param_1;
}


// 0x10262ed0  (ghidra: FUN_10262ed0)  [gap]
void * __fastcall sub_10262ed0(void *param_1)

{
  sub_10262ef0((int)param_1);
  FUN_1030207a(param_1);
  return param_1;
}


// 0x10262ef0  (ghidra: FUN_10262ef0)  [gap]
void __fastcall sub_10262ef0(int param_1)

{
  sub_10262d50(param_1 + 4);
  return;
}


// 0x10262f00  (ghidra: FUN_10262f00)  [gap]
void * __fastcall sub_10262f00(void *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t local_c;
  
  uVar1 = sub_10255060(param_2);
  local_c = __alldiv((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),1000000000,0);
  sub_10255040(param_1,(uint32_t *)&local_c);
  return param_1;
}


// 0x10262f40  (ghidra: FUN_10262f40)  [gap]
uint64_t * __thiscall sub_10262f40(void *this,uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint8_t local_10 [12];
  
  puVar1 = sub_10264ba0(local_10,param_1);
  uVar2 = sub_10255060(puVar1);
  *(uint64_t *)this = uVar2;
  return this;
}


// 0x10262f70  (ghidra: FUN_10262f70)  [gap]
uint __fastcall sub_10262f70(int *param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*param_1 + 2);
  if ((puVar1 != (ushort *)param_1[2]) &&
     ((((param_1[0x14] & 8U) == 0 && ((*puVar1 == 0x28 || (*puVar1 == 0x29)))) ||
      (((param_1[0x14] & 0x10U) == 0 &&
       ((puVar1 = (ushort *)(uint)*puVar1, puVar1 == (ushort *)0x7b || (puVar1 == (ushort *)0x7d))))
      )))) {
    return CONCAT31((int3)((uint)puVar1 >> 8),1);
  }
  return (uint)puVar1 & 0xffffff00;
}


// 0x10262fb0  (ghidra: FUN_10262fb0)  [gap]
void __fastcall sub_10262fb0(int *param_1)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  if (psVar2 != (short *)param_1[2]) {
    if (*psVar2 == 0x5c) {
      uVar1 = sub_10262f70(param_1);
      if ((char)uVar1 != '\0') {
        psVar2 = psVar2 + 1;
      }
    }
    *param_1 = (int)(psVar2 + 1);
  }
  sub_10261f50(param_1);
  return;
}


// 0x10262fe0  (ghidra: FUN_10262fe0)  [gap]
uint32_t __fastcall sub_10262fe0(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  iVar1 = param_1[0x13];
  while ((iVar1 != -1 && (uVar3 = uVar4, iVar1 != 0x7c))) {
    if (iVar1 == 0x29) {
      if (param_1[4] != 0) break;
      if ((param_1[0x14] & 0x10000000U) == 0) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(5);
      }
LAB_10263132:
      sub_102644d0(param_1 + 9,*(wchar_t *)(param_1 + 0x12));
LAB_1026313f:
      sub_10262fb0(param_1);
LAB_10263146:
      sub_10264360(param_1);
    }
    else {
      if (iVar1 == 0x2e) {
        sub_102644c0(param_1 + 9);
        goto LAB_1026313f;
      }
      if (iVar1 == 0x5c) {
        sub_10262fb0(param_1);
        if ((*(byte *)(param_1 + 0x14) & 0x80) != 0) {
          if ((short)param_1[0x12] == 0x62) {
            sub_102644b0(param_1 + 9);
            sub_10262fb0(param_1);
          }
          else {
            if ((short)param_1[0x12] != 0x42) goto LAB_1026307f;
            sub_102644b0(param_1 + 9);
            sub_10264570((int)(param_1 + 9));
            sub_10262fb0(param_1);
          }
          goto LAB_1026314d;
        }
LAB_1026307f:
        sub_102641e0(param_1);
        goto LAB_10263146;
      }
      if (iVar1 == 0x5b) {
        sub_10262fb0(param_1);
        sub_10264190(param_1);
        sub_10264170(param_1,0x5d,4);
        goto LAB_10263146;
      }
      if (iVar1 == 0x28) {
        sub_10262fb0(param_1);
        uVar2 = sub_102642b0(param_1);
        sub_10264170(param_1,0x29,5);
        if ((char)uVar2 != '\0') goto LAB_10263146;
      }
      else if (iVar1 == 0x5e) {
        sub_10264490(param_1 + 9);
        sub_10262fb0(param_1);
      }
      else {
        if (iVar1 != 0x24) {
          if ((((iVar1 == 0x2a) || (iVar1 == 0x2b)) || (iVar1 == 0x3f)) || (iVar1 == 0x7b)) {
                    /* WARNING: Subroutine does not return */
            sub_regex_10261f40(10);
          }
          if (iVar1 == 0x7d) {
            if ((param_1[0x14] & 0x10000000U) == 0) {
                    /* WARNING: Subroutine does not return */
              sub_regex_10261f40(6);
            }
          }
          else if ((iVar1 == 0x5d) && ((param_1[0x14] & 0x10000000U) == 0)) {
                    /* WARNING: Subroutine does not return */
            sub_regex_10261f40(4);
          }
          goto LAB_10263132;
        }
        sub_102644a0(param_1 + 9);
        sub_10262fb0(param_1);
      }
    }
LAB_1026314d:
    uVar4 = 1;
    uVar3 = 1;
    iVar1 = param_1[0x13];
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar3);
}


// 0x10263180  (ghidra: FUN_10263180)  [gap]
uint __fastcall sub_10263180(int param_1)

{
  uint uVar1;
  int extraout_ECX;
  
  uVar1 = sub_10264460(*(int *)(param_1 + 4));
  if ((char)uVar1 == '\0') {
    if (*(int *)(extraout_ECX + 4) == 2) {
      uVar1 = sub_10264460(*(int *)(extraout_ECX + 0x10));
      if ((char)uVar1 != '\0') goto LAB_102631a2;
    }
    return uVar1 & 0xffffff00;
  }
LAB_102631a2:
  return CONCAT31((int3)(uVar1 >> 8),1);
}


// 0x102631b0  (ghidra: FUN_102631b0)  [gap]
void __fastcall sub_102631b0(void *param_1)

{
  sub_102632d0(param_1,8);
  return;
}


// 0x102631c0  (ghidra: FUN_102631c0)  [gap]
uint32_t * __thiscall sub_102631c0(void *this,int param_1)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  void *extraout_ECX;
  void *this_00;
  
  puVar1 = operator_new(0x14);
  sub_10255e50(puVar1);
  puVar1 = sub_10254ce0(extraout_ECX);
  sub_10263290(this,(int)puVar1);
  puVar2 = operator_new(0x1c);
  sub_10263ec0(puVar2);
  puVar2 = sub_10254d30(this_00,puVar1);
  sub_10264580(*(int *)(param_1 + 0xc),(int)puVar2);
  return puVar1;
}


// 0x10263220  (ghidra: FUN_10263220)  [gap]
void __thiscall sub_10263220(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t *puVar4;
  void *this_00;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_2 + 0xc);
  *(uint32_t *)(param_2 + 0xc) = 0;
  iVar3 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = param_2;
  *(uint32_t *)(param_2 + 0xc) = 0;
  *(int *)(iVar3 + 0xc) = param_2;
  for (iVar3 = *(int *)(iVar1 + 0x18); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
    iVar1 = iVar3;
  }
  puVar4 = operator_new(0x1c);
  sub_10263ec0(puVar4);
  puVar4 = sub_10254d30(this_00,param_2);
  *(uint32_t **)(iVar1 + 0x18) = puVar4;
  puVar4[3] = iVar2;
  *(uint32_t *)(iVar2 + 0x10) = *(uint32_t *)(iVar1 + 0x18);
  return;
}


// 0x10263290  (ghidra: FUN_10263290)  [gap]
int __thiscall sub_10263290(void *this,int param_1)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)((int)this + 4);
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)(iVar1 + 0xc) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(iVar1 + 0xc);
    *(int *)(*(int *)(*(int *)((int)this + 4) + 0xc) + 0x10) = param_1;
    iVar1 = *(int *)((int)this + 4);
  }
  *(int *)(iVar1 + 0xc) = param_1;
  *(int *)((int)this + 4) = param_1;
  return param_1;
}


// 0x102632d0  (ghidra: FUN_102632d0)  [gap]
void __thiscall sub_102632d0(void *this,uint32_t param_1)

{
  uint32_t *puVar1;
  void *this_00;
  
  puVar1 = operator_new(0x14);
  sub_10255e50(puVar1);
  puVar1 = sub_10254ad0(this_00,param_1,0);
  sub_10263290(this,(int)puVar1);
  return;
}


// 0x10263310  (ghidra: FUN_10263310)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

uint8_t __thiscall sub_regex_10263310(void *this,wchar_t *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  uint8_t uVar9;
  char cVar18;
  uint uVar10;
  uint extraout_EAX;
  short *psVar11;
  uint32_t extraout_var;
  wchar_t *pwVar12;
  uint3 extraout_var_00;
  uint uVar13;
  void *pvVar14;
  uint32_t *puVar15;
  int *piVar16;
  uint32_t extraout_EAX_00;
  byte bVar19;
  uint32_t uVar20;
  char *pcVar17;
  int iVar21;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  void *this_00;
  char *extraout_ECX_03;
  wchar_t *extraout_EDX;
  int extraout_EDX_00;
  uint32_t extraout_EDX_01;
  byte bVar22;
  char cVar23;
  byte in_AF;
  uint64_t uVar24;
  uint8_t local_50 [8];
  uint8_t local_48 [8];
  uint8_t local_40 [8];
  wchar_t *local_38;
  int *local_34;
  wchar_t *local_30;
  uint local_2c;
  uint32_t local_28 [5];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030733d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar21 = *(int *)((int)this + 0x7c);
  local_30 = param_1;
  local_34 = this;
  if (0 < iVar21) {
    iVar21 = iVar21 + -1;
    *(int *)((int)this + 0x7c) = iVar21;
    if (iVar21 < 1) {
      std::_Xregex_error(0xc);
      iVar21 = extraout_ECX;
    }
  }
  uVar10 = *(uint *)((int)this + 0x78);
  if (0 < (int)uVar10) {
    uVar10 = uVar10 - 1;
    *(uint *)((int)this + 0x78) = uVar10;
    if ((int)uVar10 < 1) {
      std::_Xregex_error(0xb);
      uVar10 = extraout_EAX;
      iVar21 = extraout_ECX_00;
    }
  }
  uVar10 = uVar10 & 0xffffff00;
  local_2c = uVar10;
  if (param_1 != (wchar_t *)0x0) {
LAB_10263390:
    iVar21 = *(int *)(param_1 + 2);
    switch(iVar21) {
    default:
      std::_Xregex_error(0xd);
      in_AF = 9 < ((byte)extraout_EAX_00 & 0xf) | in_AF;
      uVar10 = CONCAT31((int3)((uint)extraout_EAX_00 >> 8),(byte)extraout_EAX_00 + in_AF * '\x06') &
               0xffffff0f;
      bVar7 = (byte)uVar10;
      cVar18 = (char)((uint)extraout_EAX_00 >> 8) + in_AF;
      pcVar17 = (char *)CONCAT22((short)(uVar10 >> 0x10),CONCAT11(cVar18,bVar7));
      cVar23 = (char)((uint)param_1 >> 8);
      *pcVar17 = *pcVar17 + cVar23 + in_AF;
      in_AF = 9 < bVar7 | in_AF;
      uVar10 = CONCAT31((int3)((uint)pcVar17 >> 8),bVar7 + in_AF * '\x06') & 0xffffff0f;
      uVar9 = (uint8_t)uVar10;
      bVar19 = cVar18 + in_AF;
      *(char *)((int)param_1 + -0x13efd9cd) = *(char *)((int)param_1 + -0x13efd9cd) + bVar19 + in_AF
      ;
      DAT_36102634 = DAT_36102634 + (char)extraout_ECX_03;
      uVar20 = (uint32_t)(CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar19,uVar9)) >> 8);
      uVar10 = CONCAT31(uVar20,uVar9) ^ 0x26;
      pbVar1 = (byte *)(uVar10 + 0x34);
      bVar7 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar19;
      bVar22 = (byte)param_1;
      *(byte *)(param_1 + 0x1c08131a) = (char)param_1[0x1c08131a] + bVar22 + CARRY1(bVar7,bVar19);
      bVar7 = (byte)uVar10;
      in_AF = 9 < (bVar7 & 0xf) | in_AF;
      uVar10 = CONCAT31(uVar20,bVar7 + in_AF * '\x06') & 0xffffff0f;
      bVar7 = (byte)uVar10;
      pcVar17 = (char *)CONCAT22((short)(uVar10 >> 0x10),CONCAT11(bVar19 + in_AF,bVar7));
      *pcVar17 = *pcVar17 + cVar23 + in_AF;
      bVar3 = 9 < bVar7 | in_AF;
      uVar10 = CONCAT31((int3)((uint)pcVar17 >> 8),bVar7 + bVar3 * '\x06') & 0xffffff0f;
      cVar8 = (char)uVar10;
      bVar5 = (cVar8 * '\x02' + bVar3 ^ 0x26) * '\x02';
      cVar18 = (byte)extraout_EDX_01 + bVar22;
      *extraout_ECX_03 = *extraout_ECX_03 + bVar22 + CARRY1((byte)extraout_EDX_01,bVar22);
      pcVar17 = (char *)(CONCAT31((int3)(CONCAT22((short)(uVar10 >> 0x10),
                                                  CONCAT11(bVar19 + in_AF + bVar3,cVar8)) >> 8),
                                  bVar5) ^ 0x35631000);
      pbVar1 = (byte *)((int)param_1 + 0x44102635);
      bVar7 = *pbVar1;
      bVar19 = (byte)((uint)pcVar17 >> 8);
      *pbVar1 = *pbVar1 + bVar19;
      *pcVar17 = *pcVar17 + cVar23 + CARRY1(bVar7,bVar19);
      bVar3 = 9 < (bVar5 & 0xf) | bVar3;
      pbVar1 = (byte *)((int)this + 0x36);
      bVar7 = *pbVar1;
      bVar19 = *pbVar1;
      *pbVar1 = bVar19 + bVar22 + bVar3;
      pcVar17 = (char *)(CONCAT31((int3)((uint)extraout_EDX_01 >> 8),cVar18) + 0x38102636);
      *pcVar17 = *pcVar17 + cVar18 + (CARRY1(bVar7,bVar22) || CARRY1(bVar19 + bVar22,bVar3));
      bVar7 = (byte)((uint)extraout_EDX_01 >> 8);
      *(char *)((int)param_1 + -0x333c97bf) =
           *(char *)((int)param_1 + -0x333c97bf) + (char)extraout_ECX_03 +
           (CARRY1(bVar7,bVar22) ||
           CARRY1(bVar7 + bVar22,9 < (bVar5 + bVar3 * '\x06' & 0xf) | bVar3));
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    case 1:
    case 8:
    case 9:
    case 0x11:
    case 0x14:
      break;
    case 2:
      uVar10 = *(uint *)((int)this + 0x60);
      uVar24 = sub_102549b0(uVar10,0x100);
      if (((int)uVar24 == 0) && (*(int *)this == *(int *)((int)this + 0x4c))) {
        uVar24 = sub_102549b0(uVar10,1);
        local_2c = CONCAT31((int3)((ulonglong)uVar24 >> 8),(int)uVar24 != 0);
        uVar10 = local_2c;
      }
      else {
        psVar11 = (short *)sub_102639c0(*(int *)this);
LAB_102633dd:
        local_2c = CONCAT31((int3)((uint)psVar11 >> 8),*psVar11 != 10);
        uVar10 = local_2c;
      }
      break;
    case 3:
      psVar11 = *(short **)this;
      if (psVar11 != *(short **)((int)this + 0x50)) goto LAB_102633dd;
      uVar24 = sub_102549b0(*(uint *)((int)this + 0x60),2);
      local_2c = CONCAT31((int3)((ulonglong)uVar24 >> 8),(int)uVar24 != 0);
      uVar10 = local_2c;
      break;
    case 4:
      uVar24 = sub_102549b0(*(uint *)(param_1 + 4),1);
      bVar6 = sub_10264ae0(this);
      local_2c = CONCAT31(extraout_var,bVar6 == ((int)uVar24 != 0));
      uVar10 = local_2c;
      break;
    case 5:
      psVar11 = *(short **)this;
      if (((psVar11 == *(short **)((int)this + 0x50)) || (*psVar11 == 10)) || (*psVar11 == 0xd)) {
LAB_10263604:
        local_2c = 1;
LAB_10263608:
        iVar21 = *(int *)((int)this + 0x7c);
        goto LAB_1026360b;
      }
      *(short **)this = psVar11 + 1;
      uVar10 = local_2c;
      break;
    case 6:
      sub_1020fae0((int)(param_1 + 10));
      sub_10262a70(extraout_ECX_01);
      pwVar12 = (wchar_t *)sub_10262a70(extraout_ECX_02);
      iVar21 = sub_10263a30(*(wchar_t **)this,*(wchar_t **)((int)this + 0x50),pwVar12,extraout_EDX,
                            *(int *)((int)this + 0x70),*(uint *)((int)this + 0x5c));
      if (iVar21 == *(int *)this) goto LAB_10263604;
      *(int *)this = iVar21;
      uVar10 = local_2c;
      break;
    case 7:
      if ((*(int *)this == *(int *)((int)this + 0x50)) ||
         (cVar18 = sub_10264860(this,(int)param_1), cVar18 == '\0')) goto LAB_10263604;
      uVar10 = (uint)extraout_var_00 << 8;
      local_2c = uVar10;
      goto LAB_10263745;
    case 10:
    case 0xb:
      iVar2 = *(int *)this;
      sub_10255e50(local_28);
      sub_10263ee0(this_00,this);
      local_8 = 0;
      cVar18 = sub_regex_10263310(this,*(wchar_t **)(local_30 + 10));
      if ((bool)cVar18 == (iVar21 == 0xb)) {
        sub_10263f80(this,local_28);
        local_2c = CONCAT31(local_2c._1_3_,1);
      }
      else {
        *(int *)this = iVar2;
      }
      local_8 = 0xffffffff;
      sub_10261b50((int)local_28);
      uVar10 = local_2c;
      param_1 = local_30;
      break;
    case 0xc:
      goto switchD_1026339c_caseD_c;
    case 0xd:
      piVar16 = (int *)sub_10262a80((int *)((int)this + 0x14),*(int *)(param_1 + 10));
      *piVar16 = *(int *)this;
      local_30 = (wchar_t *)((int)this + 4);
      uVar13 = sub_102471f0((int)local_30);
      uVar10 = local_2c;
      if (*(uint *)(param_1 + 10) < uVar13) {
        do {
          cVar18 = '\0';
          uVar13 = uVar13 - 1;
          pvVar14 = sub_10262ad0(local_40,uVar13);
          sub_1024ef20(pvVar14,cVar18);
          uVar10 = local_2c;
          this = local_34;
        } while (*(uint *)(param_1 + 10) < uVar13);
      }
      break;
    case 0xe:
      iVar21 = *(int *)(param_1 + 10);
      if ((*(char *)((int)this + 0x65) != '\0') || (*(int *)(iVar21 + 0x14) != 0)) {
        cVar18 = '\x01';
        pvVar14 = sub_10262ad0(local_48,*(int *)(iVar21 + 0x14));
        sub_1024ef20(pvVar14,cVar18);
        iVar21 = sub_10262a80((int *)((int)this + 0x14),*(int *)(iVar21 + 0x14));
        *(int *)(iVar21 + 4) = *(int *)this;
        uVar10 = local_2c;
      }
      break;
    case 0xf:
      puVar15 = sub_10262ad0(local_50,*(int *)(param_1 + 10));
      bVar6 = sub_1024a870(puVar15);
      uVar10 = local_2c;
      if (bVar6) {
        local_30 = *(wchar_t **)this;
        puVar15 = (uint32_t *)sub_10262a80((int *)((int)this + 0x14),*(int *)(param_1 + 10));
        local_38 = (wchar_t *)*puVar15;
        iVar21 = sub_10262a80((int *)((int)this + 0x14),extraout_EDX_00);
        if ((local_38 != *(wchar_t **)(iVar21 + 4)) &&
           (local_30 = (wchar_t *)
                       sub_10263a30(local_30,*(wchar_t **)((int)this + 0x50),local_38,
                                    *(wchar_t **)(iVar21 + 4),*(int *)((int)this + 0x70),
                                    *(uint *)((int)this + 0x5c)), local_30 == *(wchar_t **)this))
        goto LAB_10263604;
        *(wchar_t **)this = local_30;
        uVar10 = local_2c;
      }
      break;
    case 0x10:
      cVar18 = sub_102645a0(this,(int)param_1);
      local_2c = local_2c & 0xff;
      if (cVar18 == '\0') {
        local_2c = 1;
      }
      goto LAB_10263733;
    case 0x12:
      iVar21 = 0;
      uVar24 = sub_102549b0(*(uint *)(param_1 + 4),2);
      cVar18 = sub_102646d0(this,(int)param_1,(int)uVar24 != 0,iVar21);
      uVar9 = (uint8_t)local_2c;
      if (cVar18 == '\0') {
        uVar9 = 1;
      }
      local_2c = CONCAT31(local_2c._1_3_,uVar9);
      goto LAB_10263733;
    case 0x13:
      iVar21 = *(int *)(param_1 + 10);
      if (*(int *)(iVar21 + 0x24) == 0) {
        piVar16 = (int *)sub_10262a80((int *)((int)this + 0x40),*(int *)(iVar21 + 0x20));
        iVar2 = *piVar16;
        uVar24 = sub_102549b0(*(uint *)(iVar21 + 8),2);
        cVar18 = sub_102646d0(this,iVar21,(int)uVar24 != 0,iVar2);
        uVar9 = (uint8_t)local_2c;
        if (cVar18 == '\0') {
          uVar9 = 1;
        }
        local_2c = CONCAT31(local_2c._1_3_,uVar9);
        uVar10 = local_2c;
      }
switchD_1026339c_caseD_c:
      param_1 = (wchar_t *)0x0;
      break;
    case 0x15:
      uVar10 = sub_102549c0(0x20,0x2000);
      uVar24 = sub_102549b0(*(uint *)((int)this + 0x60),uVar10);
      if ((((int)uVar24 == 0) || (*(int *)((int)this + 0x4c) != *(int *)this)) &&
         (((char)*(int *)((int)this + 0x74) == '\0' || (*(int *)this == *(int *)((int)this + 0x50)))
         )) {
        if (((char)*(int *)((int)this + 100) == '\0') || (bVar6 = sub_102649f0((int)this), bVar6)) {
          sub_10263f10((int *)((int)this + 0x20),this);
          *(uint8_t *)((int)this + 100) = 1;
        }
      }
      else {
        local_2c = CONCAT31(local_2c._1_3_,1);
      }
LAB_10263733:
      param_1 = (wchar_t *)0x0;
      uVar10 = local_2c;
    }
    if ((char)uVar10 != '\0') goto LAB_10263608;
LAB_10263745:
    if ((param_1 == (wchar_t *)0x0) ||
       (param_1 = *(wchar_t **)(param_1 + 6), local_30 = param_1, param_1 == (wchar_t *)0x0))
    goto LAB_10263608;
    goto LAB_10263390;
  }
LAB_1026360b:
  if (0 < iVar21) {
    *(int *)((int)this + 0x7c) = iVar21 + 1;
  }
  ExceptionList = local_10;
  return (char)local_2c == '\0';
}


// 0x102637d0  (ghidra: FUN_102637d0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_102637d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

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
  puStack_c = &LAB_1030737d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  local_24 = param_2;
  iVar1 = sub_1020faf0(&local_24);
  sub_1020f420(&local_20);
  sub_10212360(this,param_3,param_4);
  local_8 = 0;
  for (iVar2 = sub_1020faf0(&local_28); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    sub_10264bf0(&local_20,iVar2);
  }
  uVar3 = sub_10212340((uint32_t *)&local_20);
  sub_10261b60(extraout_ECX);
  ExceptionList = local_10;
  return uVar3;
}


// 0x10263870  (ghidra: FUN_10263870)  [gap]
void * __fastcall sub_10263870(void *param_1,uint32_t *param_2,uint32_t *param_3)

{
  longlong lVar1;
  uint64_t local_18;
  uint32_t local_10;
  uint32_t local_c;
  
  local_18._0_4_ = *param_2;
  local_18._4_4_ = param_2[1];
  local_10 = *param_3;
  local_c = param_3[1];
  lVar1 = sub_10255060((uint64_t *)&local_10);
  local_18 = sub_10255060(&local_18);
  local_18 = local_18 - lVar1;
  sub_10255040(param_1,(uint32_t *)&local_18);
  return param_1;
}


// 0x102638d0  (ghidra: FUN_102638d0)  [gap]
uint64_t * __thiscall sub_102638d0(void *this,uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint8_t local_10 [12];
  
  puVar1 = sub_10264c20(local_10,param_1);
  uVar2 = sub_10255060(puVar1);
  *(uint64_t *)this = uVar2;
  return this;
}


// 0x10263900  (ghidra: FUN_10263900)  [gap]
bool __fastcall sub_10263900(uint32_t param_1,uint64_t *param_2)

{
  double in_XMM0_Qa;
  uint8_t local_1c [8];
  uint64_t local_14;
  double local_c;
  
  sub_10264c60(&local_14);
  sub_10255070();
  local_c = in_XMM0_Qa;
  sub_10264c90(local_1c,param_2);
  sub_10255070();
  return local_c < in_XMM0_Qa;
}


// 0x10263940  (ghidra: FUN_10263940)  [gap]
void * __fastcall sub_10263940(void *param_1,uint64_t *param_2)

{
  uint64_t local_c;
  
  local_c = sub_10255060(param_2);
  sub_10255040(param_1,(uint32_t *)&local_c);
  return param_1;
}


// 0x10263970  (ghidra: FUN_10263970)  [gap]
void * __thiscall sub_10263970(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_10264cc0(this,param_1,uVar1);
  return this;
}


// 0x10263990  (ghidra: FUN_10263990)  [gap]
uint64_t __fastcall sub_10263990(uint32_t param_1)

{
  uint64_t uVar1;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  uVar1 = sub_10264ce0(param_1,&stack0x00000004);
  return CONCAT44((int)((ulonglong)uVar1 >> 0x20),param_1);
}


// 0x102639b0  [gap]
void __fastcall thunk_FUN_10259bb0(uint32_t *param_1)

{
  sub_10259590((int *)*param_1,(int)*(short *)(param_1 + 1));
  return;
}


// 0x102639c0  (ghidra: FUN_102639c0)  [gap]
int __fastcall sub_102639c0(int param_1)

{
  return param_1 + -2;
}


// 0x102639d0  (ghidra: FUN_102639d0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_102639d0(uint32_t param_1,uint32_t param_2,uint *param_3)

{
  ushort *puVar1;
  ushort *extraout_EDX;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  sub_1020faf0(&local_10);
  puVar1 = (ushort *)sub_1020faf0(&local_c);
  local_14 = sub_10264d00(puVar1,extraout_EDX,param_3);
  sub_10248040(&local_c,&local_14);
  return local_c;
}


// 0x10263a30  (ghidra: FUN_10263a30)  [gap]
void __fastcall
sub_10263a30(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,uint32_t param_5,
            uint param_6)

{
  uint64_t uVar1;
  wchar_t *local_8;
  
  local_8 = param_1;
  uVar1 = sub_102549b0(param_6,0x100);
  if ((int)uVar1 != 0) {
    sub_102423f0(&local_8,param_5);
    sub_10264d20(param_1,param_2,param_3,param_4);
    return;
  }
  uVar1 = sub_102549b0(param_6,0x800);
  if ((int)uVar1 != 0) {
    sub_102423f0(&local_8,param_5);
    sub_10264d80(param_1,param_2,param_3,param_4);
    return;
  }
  local_8 = (wchar_t *)((uint)local_8 & 0xffffff00);
  sub_10264df0(param_1,param_2,param_3,param_4);
  return;
}


// 0x10263ad0  (ghidra: FUN_10263ad0)  [gap]
short * __fastcall sub_10263ad0(short *param_1,short *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_ECX_00;
  uint *extraout_EDX;
  int extraout_EDX_00;
  uint *puVar6;
  short *psVar7;
  int iVar8;
  uint local_c;
  
  do {
    if (param_3 == (uint *)0x0) {
      return param_1;
    }
    local_c = 0;
    uVar3 = sub_1020fae0((int)(param_3 + 1));
    puVar6 = extraout_EDX;
    if (uVar3 != 0) {
      uVar2 = *extraout_EDX;
      iVar5 = extraout_ECX;
      do {
        psVar7 = param_1;
        if (uVar2 != 0) {
          iVar8 = local_c * 2;
          do {
            sVar1 = *psVar7;
            iVar4 = sub_10262a70(iVar5);
            psVar7 = psVar7 + 1;
            iVar5 = extraout_ECX_00;
            if (sVar1 != *(short *)(iVar4 + iVar8)) break;
            iVar8 = iVar8 + 2;
          } while (extraout_EDX_00 + 1U < uVar2);
        }
        if (psVar7 == param_2) {
          return param_2;
        }
        local_c = local_c + uVar2;
        puVar6 = param_3;
      } while (local_c < uVar3);
    }
    param_3 = (uint *)puVar6[4];
  } while( true );
}


// 0x10263b70  (ghidra: FUN_10263b70)  [gap]
uint __fastcall sub_10263b70(uint param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint16_t extraout_var;
  uint uVar3;
  void *extraout_EDX;
  void *this;
  void *extraout_EDX_00;
  void *this_00;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = sub_1020fae0(param_2);
  uVar3 = 0;
  this_00 = extraout_EDX;
  if (uVar2 != 0) {
    do {
      uVar1 = sub_10263f60(this_00,uVar4);
      uVar3 = CONCAT22(extraout_var,uVar1);
      this_00 = this;
      if (uVar1 <= param_1) {
        uVar1 = sub_10263f60(this,uVar4 + 1);
        uVar3 = (uint)uVar1;
        this_00 = extraout_EDX_00;
        if (param_1 <= uVar3) {
          return CONCAT31((uint3)(byte)(uVar1 >> 8),1);
        }
      }
      uVar4 = uVar4 + 2;
    } while (uVar4 < uVar2);
  }
  return uVar3 & 0xffffff00;
}


// 0x10263bc0  (ghidra: FUN_10263bc0)  [gap]
uint32_t __thiscall sub_10263bc0(void *this,ushort param_1)

{
  int iVar1;
  
  iVar1 = 1 << ((byte)param_1 & 7);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  (*(byte *)((uint)(param_1 >> 3) + (int)this) & (byte)iVar1) != 0);
}


// 0x10263bf0  (ghidra: FUN_10263bf0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10263bf0(uint32_t param_1,uint32_t param_2,short *param_3)

{
  short *psVar1;
  short *extraout_EDX;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  sub_1020faf0(&local_10);
  psVar1 = (short *)sub_1020faf0(&local_c);
  local_14 = sub_10264e40(psVar1,extraout_EDX,param_3);
  sub_10248040(&local_c,&local_14);
  return local_c;
}


// 0x10263c50  (ghidra: FUN_10263c50)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __fastcall sub_10263c50(uint32_t param_1,int *param_2,void *param_3)

{
  int *piVar1;
  char cVar2;
  uint32_t *puVar3;
  int iVar4;
  uint uVar5;
  void *this;
  uint extraout_EDX;
  uint8_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint32_t local_6c [6];
  uint8_t local_54 [4];
  uint8_t local_50 [4];
  void *local_4c;
  uint32_t local_48 [6];
  uint32_t local_30 [6];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103073c5;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_3;
  client_DrawHoverItem_10225070(local_48);
  local_8 = 0;
  client_DrawHoverItem_10225070(local_30);
  local_8 = CONCAT31(local_8._1_3_,1);
  sub_1025efe0(this,param_1);
  sub_1025f0b0(local_30,local_50);
  uVar8 = sub_1025f0e0(local_30,local_54);
  puVar3 = sub_10264e60(param_3,local_6c,*(uint32_t *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  sub_1025f140(local_30,puVar3);
  thunk_FUN_102250f0(local_6c);
  do {
    if (param_2 == (int *)0x0) {
      uVar6 = 0;
LAB_10263d79:
      thunk_FUN_102250f0(local_30);
      thunk_FUN_102250f0(local_48);
      ExceptionList = local_10;
      return uVar6;
    }
    piVar1 = param_2 + 1;
    uVar7 = 0;
    iVar4 = sub_1020fae0((int)piVar1);
    if (iVar4 != 0) {
      do {
        iVar4 = sub_10262a70((int)piVar1);
        client_DrawHoverItem_10225190(local_48,(void *)(iVar4 + uVar7 * 2),extraout_EDX);
        sub_1025f0b0(local_48,local_54);
        uVar8 = sub_1025f0e0(local_48,local_50);
        puVar3 = sub_10264e60(local_4c,local_6c,*(uint32_t *)uVar8,(int)((ulonglong)uVar8 >> 0x20)
                             );
        sub_1025f140(local_48,puVar3);
        thunk_FUN_102250f0(local_6c);
        cVar2 = sub_10264f70(local_48,(int)local_30);
        if (cVar2 != '\0') {
          uVar6 = 1;
          goto LAB_10263d79;
        }
        uVar7 = uVar7 + *param_2;
        uVar5 = sub_1020fae0((int)piVar1);
      } while (uVar7 < uVar5);
    }
    param_2 = (int *)param_2[4];
  } while( true );
}


// 0x10263db0  (ghidra: FUN_10263db0)  [gap]
void __cdecl sub_10263db0(uint32_t param_1)

{
  uint16_t *puVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  puVar1 = (uint16_t *)sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_10237860(this,puVar1);
  return;
}


// 0x10263de0  (ghidra: FUN_10263de0)  [gap]
void __thiscall sub_10263de0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = sub_10210d60();
  if (param_1 <= uVar1) {
    iVar3 = *(int *)((int)this + 4) - *(int *)this >> 3;
    uVar1 = sub_10264000(this,param_1);
    iVar2 = sub_10210ea0(uVar1);
    sub_10262ab0(this,iVar2 + iVar3 * 8,param_1 - iVar3);
    sub_10264030(*(uint32_t *)this,*(uint32_t *)((int)this + 4),iVar2);
    sub_10263fc0(this,iVar2,param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10263e60  (ghidra: FUN_10263e60)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_10263e60(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  void *this;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar1 = sub_1020f420(&local_14);
  sub_10212360(this,uVar1,param_3);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    sub_10264f80((int)&local_14);
  }
  sub_10212340((uint32_t *)&local_14);
  return;
}


// 0x10263ec0  (ghidra: FUN_10263ec0)  [gap]
void __fastcall sub_10263ec0(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  param_1[6] = 0;
  return;
}


// 0x10263ee0  (ghidra: FUN_10263ee0)  [gap]
uint32_t * __thiscall sub_10263ee0(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  sub_10264080((void *)((int)this + 4),param_1 + 1);
  return this;
}


// 0x10263f10  (ghidra: FUN_10263f10)  [gap]
void * __thiscall sub_10263f10(void *this,uint32_t *param_1)

{
  sub_10263f40(this,param_1);
  sub_10263f90((void *)((int)this + 0x14),param_1 + 5);
  return this;
}


// 0x10263f40  (ghidra: FUN_10263f40)  [gap]
uint32_t * __thiscall sub_10263f40(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  sub_10264050((void *)((int)this + 4),(int)(param_1 + 1));
  return this;
}


// 0x10263f60  (ghidra: FUN_10263f60)  [gap]
uint16_t __thiscall sub_10263f60(void *this,int param_1)

{
  return *(uint16_t *)(*(int *)((int)this + 8) + param_1 * 2);
}


// 0x10263f80  (ghidra: FUN_10263f80)  [gap]
void __thiscall sub_10263f80(void *this,uint32_t *param_1)

{
  sub_10263f40(this,param_1);
  return;
}


// 0x10263f90  (ghidra: FUN_10263f90)  [gap]
int __thiscall sub_10263f90(void *this,uint32_t param_1)

{
  void *pvVar1;
  uint32_t *extraout_ECX;
  
  pvVar1 = (void *)sub_1020fe80(param_1);
  if (this != pvVar1) {
    sub_102640a0(extraout_ECX);
  }
  return (int)this;
}


// 0x10263fc0  (ghidra: FUN_10263fc0)  [gap]
void __thiscall sub_10263fc0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    sub_1020ffa0(pvVar1,*(int *)((int)this + 8) - (int)pvVar1 >> 3);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 8;
  *(int *)((int)this + 8) = param_1 + param_3 * 8;
  return;
}


// 0x10264000  (ghidra: FUN_10264000)  [gap]
uint __thiscall sub_10264000(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_102640e0(this);
  uVar2 = sub_10210d60();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x10264030  (ghidra: FUN_10264030)  [gap]
void sub_10264030(uint32_t param_1,uint32_t param_2,int param_3)

{
  sub_102640c0(param_1,param_2,param_3);
  return;
}


// 0x10264050  (ghidra: FUN_10264050)  [gap]
void * __thiscall sub_10264050(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)sub_1020fe80(param_1);
  if (this != pvVar1) {
    sub_102640f0(this,param_1);
    *(uint32_t *)((int)this + 0xc) = *(uint32_t *)(param_1 + 0xc);
  }
  return this;
}


// 0x10264080  (ghidra: FUN_10264080)  [gap]
void * __thiscall sub_10264080(void *this,int *param_1)

{
  sub_10264120(this,param_1);
  return this;
}


// 0x102640a0  (ghidra: FUN_102640a0)  [gap]
void sub_102640a0(uint32_t *param_1)

{
  sub_10264fa0(*param_1,param_1[1]);
  return;
}


// 0x102640c0  (ghidra: FUN_102640c0)  [gap]
void sub_102640c0(uint32_t param_1,uint32_t param_2,int param_3)

{
  sub_10264ff0(param_1,param_2,param_3);
  return;
}


// 0x102640e0  (ghidra: FUN_102640e0)  [gap]
int __fastcall sub_102640e0(int *param_1)

{
  return param_1[2] - *param_1 >> 3;
}


// 0x102640f0  (ghidra: FUN_102640f0)  [gap]
int __thiscall sub_102640f0(void *this,uint32_t param_1)

{
  void *pvVar1;
  uint32_t *extraout_ECX;
  
  pvVar1 = (void *)sub_1020fe80(param_1);
  if (this != pvVar1) {
    sub_10264150(extraout_ECX);
  }
  return (int)this;
}


// 0x10264120  (ghidra: FUN_10264120)  [gap]
void * __thiscall sub_10264120(void *this,int *param_1)

{
  sub_10210b20(this,param_1);
  *(int *)((int)this + 0xc) = param_1[3];
  return this;
}


// 0x10264150  (ghidra: FUN_10264150)  [gap]
void sub_10264150(uint32_t *param_1)

{
  sub_10265050(*param_1,param_1[1]);
  return;
}


// 0x10264170  (ghidra: FUN_10264170)  [gap]
void __thiscall sub_10264170(void *this,int param_1,error_type param_2)

{
  if (*(int *)((int)this + 0x4c) == param_1) {
    sub_10262fb0(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_regex_10261f40(param_2);
}


// 0x10264190  (ghidra: FUN_10264190)  [gap]
void __fastcall sub_10264190(int *param_1)

{
  sub_10265670(param_1 + 9);
  if (param_1[0x13] == 0x5e) {
    sub_10264570((int)(param_1 + 9));
    sub_10262fb0(param_1);
  }
  if (((param_1[0x14] & 0x20000000U) != 0) && (param_1[0x13] == 0x5d)) {
    sub_102656b0(param_1 + 9,L']');
    sub_10262fb0(param_1);
  }
  sub_10265390(param_1);
  return;
}


// 0x102641e0  (ghidra: FUN_102641e0)  [gap]
void __fastcall sub_102641e0(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  uint extraout_EDX;
  uint8_t local_c [8];
  
  if (((param_1[0x14] & 0x100U) != 0) && (bVar1 = sub_102652f0(param_1), bVar1)) {
    uVar2 = param_1[0x11];
    if (uVar2 != 0) {
      if (((((param_1[0x14] & 0x200U) == 0) || (uVar2 < 10)) && (uVar2 <= (uint)param_1[3])) &&
         (uVar2 = sub_102471f0((int)(param_1 + 5)), extraout_EDX < uVar2)) {
        puVar3 = sub_10262ad0(local_c,extraout_EDX);
        bVar1 = sub_1024a870(puVar3);
        if (bVar1) {
          sub_102656e0(param_1 + 9,param_1[0x11]);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      sub_regex_10261f40(3);
    }
    if ((param_1[0x14] & 0x100000U) != 0) {
      sub_102644d0(param_1 + 9,L'\0');
      return;
    }
                    /* WARNING: Subroutine does not return */
    sub_regex_10261f40(2);
  }
  uVar4 = sub_10265480(param_1);
  if ((char)uVar4 != '\0') {
    sub_102644d0(param_1 + 9,*(wchar_t *)(param_1 + 0x11));
    return;
  }
  if (((param_1[0x14] & 0x20000U) != 0) &&
     (uVar4 = sub_10265310(param_1,'\x01',uVar4), (char)uVar4 != '\0')) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_regex_10261f40(2);
}


// 0x102642b0  (ghidra: FUN_102642b0)  [gap]
uint __fastcall sub_102642b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  param_1[4] = param_1[4] + 1;
  if (((param_1[0x14] & 0x8000000U) == 0) && (param_1[0x13] == 0x29)) {
                    /* WARNING: Subroutine does not return */
    sub_regex_10261f40(5);
  }
  if (((param_1[0x14] & 0x20U) == 0) || (param_1[0x13] != 0x3f)) {
    uVar4 = sub_102549b0(param_1[0x10],0x200);
    if ((int)uVar4 == 0) {
      uVar3 = sub_102655a0((int)param_1);
      param_1[4] = param_1[4] + -1;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  else {
    sub_10262fb0(param_1);
    iVar1 = param_1[0x13];
    sub_10262fb0(param_1);
    if (iVar1 != 0x3a) {
      if (iVar1 == 0x21) {
        uVar2 = sub_10265640(param_1,1);
        param_1[4] = param_1[4] + -1;
        return uVar2 & 0xffffff00;
      }
      if (iVar1 == 0x3d) {
        uVar2 = sub_10265640(param_1,0);
        param_1[4] = param_1[4] + -1;
        return uVar2 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      sub_regex_10261f40(0xe);
    }
  }
  uVar3 = sub_10265610((int)param_1);
  param_1[4] = param_1[4] + -1;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


// 0x10264360  (ghidra: FUN_10264360)  [gap]
void __fastcall sub_10264360(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = -1;
  iVar2 = param_1[0x13];
  if (iVar2 == 0x2a) goto LAB_1026437e;
  if (iVar2 == 0x2b) {
    iVar3 = 1;
    goto LAB_1026437e;
  }
  if (iVar2 == 0x3f) {
    iVar4 = 1;
    goto LAB_1026437e;
  }
  if (iVar2 != 0x7b) {
    return;
  }
  sub_10262fb0(param_1);
  bVar1 = sub_102652f0(param_1);
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    sub_regex_10261f40(7);
  }
  iVar2 = param_1[0x13];
  iVar3 = param_1[0x11];
  iVar5 = iVar3;
  if (iVar2 == 0x2c) {
    sub_10262fb0(param_1);
    if (param_1[0x13] != 0x7d) {
      bVar1 = sub_102652f0(param_1);
      if (!bVar1) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(7);
      }
      iVar2 = param_1[0x13];
      iVar5 = param_1[0x11];
      goto LAB_10264411;
    }
  }
  else {
LAB_10264411:
    iVar4 = iVar5;
    if (iVar2 != 0x7d) goto LAB_1026444e;
  }
  if ((iVar4 == -1) || (iVar3 <= iVar4)) {
LAB_1026437e:
    sub_102658c0((int)(param_1 + 9));
    sub_10262fb0(param_1);
    if (((param_1[0x14] & 0x400U) != 0) && (param_1[0x13] == 0x3f)) {
      sub_10262fb0(param_1);
      sub_10265710(param_1 + 9,iVar3,iVar4,0);
      return;
    }
    sub_10265710(param_1 + 9,iVar3,iVar4,1);
    return;
  }
LAB_1026444e:
                    /* WARNING: Subroutine does not return */
  sub_regex_10261f40(7);
}


// 0x10264460  (ghidra: FUN_10264460)  [gap]
int sub_10264460(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 0x14) && (iVar1 != 8)) && (iVar1 != 0xd)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


// 0x10264490  (ghidra: FUN_10264490)  [gap]
void __fastcall sub_10264490(void *param_1)

{
  sub_102632d0(param_1,2);
  return;
}


// 0x102644a0  (ghidra: FUN_102644a0)  [gap]
void __fastcall sub_102644a0(void *param_1)

{
  sub_102632d0(param_1,3);
  return;
}


// 0x102644b0  (ghidra: FUN_102644b0)  [gap]
void __fastcall sub_102644b0(void *param_1)

{
  sub_102632d0(param_1,4);
  return;
}


// 0x102644c0  (ghidra: FUN_102644c0)  [gap]
void __fastcall sub_102644c0(void *param_1)

{
  sub_102632d0(param_1,5);
  return;
}


// 0x102644d0  (ghidra: FUN_102644d0)  [gap]
void __thiscall sub_102644d0(void *this,wchar_t param_1)

{
  uint16_t uVar1;
  uint64_t uVar2;
  
  if (*(int *)(*(int *)((int)this + 4) + 4) == 6) {
    uVar2 = sub_102549b0(*(uint *)(*(int *)((int)this + 4) + 8),4);
    if ((int)uVar2 == 0) goto LAB_102644f7;
  }
  sub_102658d0(this);
LAB_102644f7:
  uVar2 = sub_102549b0(*(uint *)((int)this + 8),0x100);
  if ((int)uVar2 != 0) {
    uVar1 = sub_10262c30(*(void **)((int)this + 0xc),param_1);
    sub_102651b0((void *)(*(int *)((int)this + 4) + 0x14),uVar1);
    return;
  }
  uVar2 = sub_102549b0(*(uint *)((int)this + 8),0x800);
  if ((int)uVar2 != 0) {
    uVar1 = sub_10262c50(*(void **)((int)this + 0xc),param_1);
    sub_102651b0((void *)(*(int *)((int)this + 4) + 0x14),uVar1);
    return;
  }
  sub_102651b0((void *)(*(int *)((int)this + 4) + 0x14),param_1);
  return;
}


// 0x10264570  (ghidra: FUN_10264570)  [gap]
void __fastcall sub_10264570(int param_1)

{
  sub_10254ab0((uint *)(*(int *)(param_1 + 4) + 8));
  return;
}


// 0x10264580  (ghidra: FUN_10264580)  [gap]
void __fastcall sub_10264580(int param_1,int param_2)

{
  *(int *)(*(int *)(param_1 + 0x10) + 0xc) = param_2;
  *(uint32_t *)(param_2 + 0x10) = *(uint32_t *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_2 + 0xc) = param_1;
  return;
}


// 0x102645a0  (ghidra: FUN_102645a0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __thiscall sub_102645a0(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *this_00;
  void *this_01;
  uint8_t uVar4;
  int local_58;
  int local_54 [8];
  uint32_t local_34 [8];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307405;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10265100(local_54);
  sub_102650a0(this_00,this);
  local_8 = 0;
  do {
    if (param_1 == 0) {
      uVar4 = 0;
LAB_10264612:
      sub_10261b30((int)local_54);
      ExceptionList = local_10;
      return uVar4;
    }
    sub_10263f10(this,local_54);
    cVar2 = sub_regex_10263310(this,*(wchar_t **)(param_1 + 0xc));
    if (cVar2 != '\0') {
      if (*(char *)((int)this + 0x6c) == '\0') {
        uVar4 = 1;
      }
      else {
        sub_10265100(local_34);
        sub_102650a0(this_01,this);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_58 = sub_10264be0(local_54[0],*(int *)this);
        for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
          sub_10263f10(this,local_54);
          cVar2 = sub_regex_10263310(this,*(wchar_t **)(iVar1 + 0xc));
          if ((cVar2 != '\0') && (iVar3 = sub_10264be0(local_54[0],*(int *)this), local_58 < iVar3))
          {
            sub_10263f10(local_34,this);
            local_58 = iVar3;
          }
        }
        sub_10263f10(this,local_34);
        uVar4 = 1;
        sub_10261b30((int)local_34);
      }
      goto LAB_10264612;
    }
    param_1 = *(int *)(param_1 + 0x18);
  } while( true );
}


// 0x102646d0  (ghidra: FUN_102646d0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char __thiscall sub_102646d0(void *this,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  wchar_t *pwVar7;
  void *this_00;
  char local_39;
  int local_38;
  uint32_t local_34 [8];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030743d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x24) == 1) {
    cVar4 = sub_10265900(this,param_1,param_2);
    ExceptionList = local_10;
    return cVar4;
  }
  local_39 = '\0';
  sub_10265100(local_34);
  sub_102650a0(this_00,this);
  local_8 = 0;
  piVar5 = (int *)sub_10262a80((void *)((int)this + 0x40),*(int *)(param_1 + 0x20));
  local_38 = *(int *)this;
  iVar1 = *piVar5;
  piVar2 = (int *)piVar5[1];
  if ((param_3 == 0) || (*piVar2 != local_38)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(int *)(param_1 + 0x18) < 0) || (param_3 < *(int *)(param_1 + 0x18))) {
    if (param_3 < *(int *)(param_1 + 0x14)) {
      if (!bVar3) goto LAB_10264801;
LAB_102647ae:
      *piVar5 = param_3 + 1;
      iVar6 = sub_1020fe80(&local_38);
      piVar5[1] = iVar6;
      pwVar7 = *(wchar_t **)(param_1 + 0xc);
      goto LAB_10264807;
    }
    if (param_2 != '\0') {
      if (bVar3) {
        *piVar5 = param_3 + 1;
        iVar6 = sub_1020fe80(&local_38);
        piVar5[1] = iVar6;
        local_39 = sub_regex_10263310(this,*(wchar_t **)(param_1 + 0xc));
        if (local_39 != '\0') goto LAB_10264821;
      }
      else if (1 < param_3) goto LAB_10264816;
      *piVar5 = iVar1;
      piVar5[1] = (int)piVar2;
      sub_10263f10(this,local_34);
      goto LAB_10264801;
    }
    local_39 = sub_regex_10263310(this,*(wchar_t **)(*(int *)(param_1 + 0x1c) + 0xc));
    if (local_39 != '\0') goto LAB_10264821;
    if (bVar3) {
      sub_10263f10(this,local_34);
      goto LAB_102647ae;
    }
  }
  else {
LAB_10264801:
    pwVar7 = *(wchar_t **)(*(int *)(param_1 + 0x1c) + 0xc);
LAB_10264807:
    local_39 = sub_regex_10263310(this,pwVar7);
    if (local_39 != '\0') goto LAB_10264821;
  }
LAB_10264816:
  sub_10263f10(this,local_34);
LAB_10264821:
  *piVar5 = iVar1;
  piVar5[1] = (int)piVar2;
  sub_10261b30((int)local_34);
  ExceptionList = local_10;
  return local_39;
}


// 0x10264860  (ghidra: FUN_10264860)  [gap]
uint8_t __thiscall sub_10264860(void *this,int param_1)

{
  wchar_t wVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint32_t uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint32_t extraout_EDX;
  ushort uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint local_c;
  wchar_t *local_8;
  
  pwVar5 = *(wchar_t **)this;
  wVar1 = *pwVar5;
  uVar12 = (uint)(ushort)wVar1;
  local_c = uVar12;
  uVar13 = sub_102549b0(*(uint *)((int)this + 0x5c),0x100);
  if ((int)uVar13 != 0) {
    uVar12 = sub_10262c30(*(void **)((int)this + 0x70),wVar1);
    pwVar5 = *(wchar_t **)this;
    uVar12 = uVar12 & 0xffff;
    local_c = uVar12;
  }
  local_8 = pwVar5 + 1;
  if ((*(uint **)(param_1 + 0x14) != (uint *)0x0) &&
     (pwVar5 = sub_10263ad0(*(short **)this,*(short **)((int)this + 0x50),*(uint **)(param_1 + 0x14)
                           ), pwVar5 != *(wchar_t **)this)) {
    bVar2 = true;
    goto LAB_102649b3;
  }
  iVar8 = *(int *)(param_1 + 0x20);
  uVar11 = (ushort)uVar12;
  if (iVar8 != 0) {
    uVar13 = sub_102549b0(*(uint *)((int)this + 0x5c),0x800);
    uVar6 = uVar12;
    if ((int)uVar13 != 0) {
      uVar4 = sub_10262c50(*(void **)((int)this + 0x70),uVar11);
      uVar6 = (uint)uVar4;
    }
    uVar6 = sub_10263b70(uVar6,iVar8);
    if ((char)uVar6 != '\0') {
      bVar2 = true;
      pwVar5 = local_8;
      goto LAB_102649b3;
    }
  }
  if (uVar11 < 0x100) {
    if ((*(void **)(param_1 + 0x18) != (void *)0x0) &&
       (uVar7 = sub_10263bc0(*(void **)(param_1 + 0x18),uVar11), (char)uVar7 != '\0')) {
      bVar2 = true;
      pwVar5 = local_8;
      goto LAB_102649b3;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 0) {
      sub_1020fae0(*(int *)(param_1 + 0x1c));
      sub_10262a70(extraout_ECX);
      uVar7 = sub_10262a70(extraout_ECX_00);
      iVar8 = sub_1020fae0(extraout_ECX_01);
      iVar9 = sub_10262a70(extraout_ECX_02);
      iVar10 = sub_10263bf0(uVar7,extraout_EDX,(short *)&local_c);
      uVar12 = local_c;
      if (iVar10 != iVar9 + iVar8 * 2) {
        bVar2 = true;
        pwVar5 = local_8;
        goto LAB_102649b3;
      }
    }
    if ((*(short *)(param_1 + 0x24) != 0) &&
       (bVar2 = sub_10262be0(*(void **)((int)this + 0x70),(wchar_t)uVar12,*(short *)(param_1 + 0x24)
                            ), bVar2)) {
      bVar2 = true;
      pwVar5 = local_8;
      goto LAB_102649b3;
    }
    if ((*(int **)(param_1 + 0x28) != (int *)0x0) &&
       (cVar3 = sub_10263c50(uVar12,*(int **)(param_1 + 0x28),*(void **)((int)this + 0x70)),
       cVar3 != '\0')) {
      bVar2 = true;
      pwVar5 = local_8;
      goto LAB_102649b3;
    }
  }
  bVar2 = false;
  pwVar5 = local_8;
LAB_102649b3:
  uVar13 = sub_102549b0(*(uint *)(param_1 + 8),1);
  if (bVar2 != ((int)uVar13 != 0)) {
    *(wchar_t **)this = pwVar5;
    return (char)((ulonglong)uVar13 >> 0x20);
  }
  return 0;
}


// 0x102649f0  (ghidra: FUN_102649f0)  [gap]
bool __fastcall sub_102649f0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint32_t *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar8;
  uint8_t auStack_18 [8];
  uint8_t auStack_10 [12];
  
  uVar8 = 0;
  iVar2 = func_0x102637c0();
  if (iVar2 != 0) {
    do {
      puVar3 = sub_10262ad0(auStack_18,uVar8);
      bVar1 = sub_1024a870(puVar3);
      if (bVar1) {
        puVar3 = sub_10262ad0(auStack_10,uVar8);
        bVar1 = sub_1024a870(puVar3);
        if (bVar1) {
          sub_10262a80((void *)(param_1 + 0x34),uVar8);
          piVar4 = (int *)sub_10262a80((void *)(param_1 + 0x14),uVar8);
          if (extraout_EDX != *piVar4) {
            piVar4 = (int *)sub_10262a80((void *)(param_1 + 0x14),uVar8);
            iVar6 = *piVar4;
            piVar4 = (int *)sub_10262a80((void *)(param_1 + 0x34),uVar8);
            iVar2 = *(int *)(param_1 + 0x4c);
            iVar7 = *piVar4;
LAB_10264ac2:
            iVar2 = sub_10264be0(iVar2,iVar7);
            iVar6 = sub_10264be0(extraout_ECX,iVar6);
            return iVar2 < iVar6;
          }
          sub_10262a80((void *)(param_1 + 0x14),uVar8);
          iVar2 = sub_10262a80((void *)(param_1 + 0x34),uVar8);
          if (*(int *)(iVar2 + 4) != *(int *)(extraout_EDX_00 + 4)) {
            iVar6 = sub_10262a80((void *)(param_1 + 0x14),uVar8);
            iVar2 = *(int *)(param_1 + 0x4c);
            iVar6 = *(int *)(iVar6 + 4);
            iVar7 = sub_10262a80((void *)(param_1 + 0x34),uVar8);
            iVar7 = *(int *)(iVar7 + 4);
            goto LAB_10264ac2;
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = func_0x102637c0();
    } while (uVar8 < uVar5);
  }
  return false;
}


// 0x10264ae0  (ghidra: FUN_10264ae0)  [gap]
bool __fastcall sub_10264ae0(uint32_t *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte extraout_DL;
  uint64_t uVar7;
  
  uVar1 = param_1[0x18];
  uVar7 = sub_102549b0(uVar1,0x100);
  if (((int)uVar7 == 0) && (puVar5 = (ushort *)*param_1, puVar5 == (ushort *)param_1[0x13])) {
    if (puVar5 == (ushort *)param_1[0x14]) {
      uVar4 = sub_102549c0(4,8);
      uVar7 = sub_102549b0(uVar1,uVar4);
      return (int)uVar7 == 0;
    }
    uVar7 = sub_102549b0(uVar1,4);
    if ((int)uVar7 == 0) {
      cVar2 = sub_10265a80(*puVar5);
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  else {
    puVar5 = (ushort *)*param_1;
    if (puVar5 != (ushort *)param_1[0x14]) {
      puVar6 = (ushort *)sub_102639c0((int)puVar5);
      sub_10265a80(*puVar6);
      bVar3 = sub_10265a80(*puVar5);
      return (bool)(bVar3 ^ extraout_DL);
    }
    uVar7 = sub_102549b0(uVar1,8);
    if ((int)uVar7 == 0) {
      puVar5 = (ushort *)sub_102639c0((int)puVar5);
      cVar2 = sub_10265a80(*puVar5);
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  return false;
}


// 0x10264ba0  (ghidra: FUN_10264ba0)  [gap]
void * __fastcall sub_10264ba0(void *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong local_c;
  
  uVar1 = sub_10255060(param_2);
  local_c = __allmul((uint)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000000000,0);
  sub_10255040(param_1,(uint32_t *)&local_c);
  return param_1;
}


// 0x10264be0  (ghidra: FUN_10264be0)  [gap]
int __fastcall sub_10264be0(int param_1,int param_2)

{
  return param_2 - param_1 >> 1;
}


// 0x10264bf0  (ghidra: FUN_10264bf0)  [gap]
void __thiscall sub_10264bf0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_102602b0(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


// 0x10264c20  (ghidra: FUN_10264c20)  [gap]
void * __fastcall sub_10264c20(void *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong local_c;
  
  uVar1 = sub_10255060(param_2);
  local_c = __allmul((uint)uVar1,(int)((ulonglong)uVar1 >> 0x20),100,0);
  sub_10255040(param_1,(uint32_t *)&local_c);
  return param_1;
}


// 0x10264c60  (ghidra: FUN_10264c60)  [gap]
uint64_t * __fastcall sub_10264c60(uint64_t *param_1)

{
  uint64_t in_XMM0_Qa;
  uint8_t local_10 [12];
  
  sub_10265aa0(local_10);
  sub_10255070();
  *param_1 = in_XMM0_Qa;
  return param_1;
}


// 0x10264c90  (ghidra: FUN_10264c90)  [gap]
uint64_t * __thiscall sub_10264c90(void *this,uint64_t *param_1)

{
  uint64_t in_XMM0_Qa;
  uint8_t local_10 [12];
  
  sub_10265ad0(local_10,param_1);
  sub_10255070();
  *(uint64_t *)this = in_XMM0_Qa;
  return this;
}


// 0x10264cc0  (ghidra: FUN_10264cc0)  [gap]
void * __thiscall sub_10264cc0(void *this,uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_2);
  sub_10265b00(uVar1);
  return this;
}


// 0x10264ce0  (ghidra: FUN_10264ce0)  [gap]
uint64_t sub_10264ce0(uint32_t param_1,uint32_t param_2)

{
  uint32_t *puVar1;
  uint32_t *extraout_EDX;
  
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  *extraout_EDX = *puVar1;
  return CONCAT44(extraout_EDX,extraout_EDX);
}


// 0x10264d00  (ghidra: FUN_10264d00)  [gap]
void __fastcall sub_10264d00(ushort *param_1,ushort *param_2,uint *param_3)

{
  sub_10265b30(param_1,param_2,param_3);
  return;
}


// 0x10264d20  (ghidra: FUN_10264d20)  [gap]
wchar_t * __fastcall
sub_10264d20(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  bool bVar3;
  wchar_t *pwVar4;
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */
  
  pwVar4 = param_1;
  while ((pwVar4 != param_2 && (param_3 != param_4))) {
    wVar1 = *param_3;
    param_3 = param_3 + 1;
    wVar2 = *pwVar4;
    pwVar4 = pwVar4 + 1;
    bVar3 = sub_10265180(&stack0x0000000c,wVar2,wVar1);
    if (!bVar3) {
      return param_1;
    }
  }
  if (param_3 == param_4) {
    param_1 = pwVar4;
  }
  return param_1;
}


// 0x10264d80  (ghidra: FUN_10264d80)  [gap]
uint16_t * __fastcall
sub_10264d80(uint16_t *param_1,uint16_t *param_2,uint16_t *param_3,uint16_t *param_4)

{
  uint16_t uVar1;
  uint16_t uVar2;
  bool bVar3;
  uint16_t *puVar4;
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */
  
  puVar4 = param_1;
  while ((puVar4 != param_2 && (param_3 != param_4))) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    bVar3 = sub_10265150(&stack0x0000000c,uVar2,uVar1);
    if (!bVar3) {
      return param_1;
    }
  }
  if (param_3 == param_4) {
    param_1 = puVar4;
  }
  return param_1;
}


// 0x10264df0  (ghidra: FUN_10264df0)  [gap]
short * __fastcall sub_10264df0(short *param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  short *extraout_EDX;
  short *psVar4;
  
  psVar4 = param_1;
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      sVar2 = *psVar4;
      psVar4 = psVar4 + 1;
      bVar3 = sub_10265130(sVar2,sVar1);
      if (!bVar3) {
        return param_1;
      }
    } while (psVar4 != extraout_EDX);
  }
  if (param_3 == param_4) {
    param_1 = psVar4;
  }
  return param_1;
}


// 0x10264e40  (ghidra: FUN_10264e40)  [gap]
void __fastcall sub_10264e40(short *param_1,short *param_2,short *param_3)

{
  sub_10265b60(param_1,param_2,param_3);
  return;
}


// 0x10264e60  (ghidra: FUN_10264e60)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall sub_10264e60(void *this,uint32_t *param_1,uint32_t param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ctype<wchar_t> *this_00;
  void *this_01;
  uint32_t uVar3;
  uint32_t *extraout_ECX;
  wchar_t *extraout_EDX;
  int extraout_EDX_00;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint32_t local_44 [6];
  uint32_t *local_2c;
  uint32_t local_28;
  int local_24 [3];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307496;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = param_1;
  local_28 = 0;
  client_DrawHoverItem_10225070(param_1);
  local_8 = 0;
  local_28 = 1;
  bVar1 = sub_1023d8f0(&param_2,&param_3);
  if (bVar1) {
    sub_1020f420((uint64_t *)local_24);
    sub_10265b80(extraout_ECX);
    local_8 = 1;
    sub_10218bf0(local_24);
    iVar2 = sub_10265110(local_24);
    pwVar5 = extraout_EDX + iVar2;
    pwVar4 = extraout_EDX;
    this_00 = (ctype<wchar_t> *)sub_1020fae0((int)this);
    std::ctype<wchar_t>::tolower(this_00,pwVar4,pwVar5);
    this_01 = (void *)sub_1020faf0(this);
    sub_10218bf0(local_24);
    iVar2 = sub_10265110(local_24);
    uVar3 = sub_10262eb0(this_01,local_44,extraout_EDX_00,extraout_EDX_00 + iVar2 * 2);
    sub_1025f140(param_1,uVar3);
    thunk_FUN_102250f0(local_44);
    thunk_FUN_10265280(local_24);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x10264f70  (ghidra: FUN_10264f70)  [gap]
void __fastcall sub_10264f70(void *param_1,int param_2)

{
  sub_10265230(param_1,param_2);
  return;
}


// 0x10264f80  (ghidra: FUN_10264f80)  [gap]
void __fastcall sub_10264f80(int param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  uVar1 = sub_1020fe80(*(uint32_t *)(param_1 + 4));
  sub_10265bc0(extraout_ECX,uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  return;
}


// 0x10264fa0  (ghidra: FUN_10264fa0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10264fa0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  void *this;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_10 = param_2;
  iVar1 = sub_1020faf0(&local_10);
  iVar2 = sub_1020faf0(&local_c);
  sub_10265be0(this,iVar2,iVar1);
  return;
}


// 0x10264ff0  (ghidra: FUN_10264ff0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall sub_10264ff0(uint32_t param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  iVar1 = sub_1020faf0(&local_c);
  iVar2 = sub_1020faf0(&local_10);
  uVar3 = sub_1020fe80(param_3);
  sub_102126a0(iVar1,iVar2,uVar3);
  return param_3 + (iVar2 - iVar1 >> 3) * 8;
}


// 0x10265050  (ghidra: FUN_10265050)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_10265050(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  void *this;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_10 = param_2;
  iVar1 = sub_1020faf0(&local_10);
  iVar2 = sub_1020faf0(&local_c);
  sub_10265c40(this,iVar2,iVar1);
  return;
}


// 0x102650a0  (ghidra: FUN_102650a0)  [gap]
void * __thiscall sub_102650a0(void *this,uint32_t *param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103074cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10263ee0(this,param_1);
  local_8 = 0;
  sub_102651e0((void *)((int)this + 0x14),param_1 + 5);
  ExceptionList = local_10;
  return this;
}


// 0x10265100  (ghidra: FUN_10265100)  [gap]
void __fastcall sub_10265100(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


// 0x10265110  (ghidra: FUN_10265110)  [gap]
int __fastcall sub_10265110(int *param_1)

{
  return param_1[1] - *param_1 >> 1;
}


// 0x10265120  [gap]
void __fastcall thunk_FUN_10265280(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    client_DrawHoverItem_102253e0(pvVar1,param_1[2] - (int)pvVar1 >> 1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10265130  (ghidra: FUN_10265130)  [gap]
bool sub_10265130(short param_1,short param_2)

{
  return param_1 == param_2;
}


// 0x10265150  (ghidra: FUN_10265150)  [gap]
bool __thiscall sub_10265150(void *this,uint16_t param_1,uint16_t param_2)

{
  void *this_00;
  short sVar1;
  short sVar2;
  
  this_00 = *(void **)this;
  sVar1 = sub_10262c50(this_00,param_2);
  sVar2 = sub_10262c50(this_00,param_1);
  return sVar2 == sVar1;
}


// 0x10265180  (ghidra: FUN_10265180)  [gap]
bool __thiscall sub_10265180(void *this,wchar_t param_1,wchar_t param_2)

{
  void *this_00;
  short sVar1;
  short sVar2;
  
  this_00 = *(void **)this;
  sVar1 = sub_10262c30(this_00,param_2);
  sVar2 = sub_10262c30(this_00,param_1);
  return sVar2 == sVar1;
}


// 0x102651b0  (ghidra: FUN_102651b0)  [gap]
void __thiscall sub_102651b0(void *this,uint16_t param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this <= uVar1) {
    sub_102652b0(this,uVar1 + 0x10);
    uVar1 = *(uint *)((int)this + 4);
  }
  *(uint16_t *)(*(int *)((int)this + 8) + uVar1 * 2) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


// 0x102651e0  (ghidra: FUN_102651e0)  [gap]
int * __thiscall sub_102651e0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  vector<CHN*,std::allocator<CHN*>_> *this_00;
  
  sub_10210180(this);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 != iVar2) {
    std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw(this_00,iVar2 - iVar1 >> 3);
    uVar3 = sub_10265ca0(iVar1,iVar2,*(int *)this);
    *(uint32_t *)((int)this + 4) = uVar3;
    param_1 = (int *)0x0;
    sub_10265270(&param_1);
  }
  return this;
}


// 0x10265230  (ghidra: FUN_10265230)  [gap]
void __thiscall sub_10265230(void *this,int param_1)

{
  uint64_t uVar1;
  
  client_DrawHoverItem_10225280(param_1);
  uVar1 = client_DrawHoverItem_10225280((int)this);
  sub_10261ab0((ushort *)uVar1,*(int *)((int)this + 0x10),(ushort *)((ulonglong)uVar1 >> 0x20),
               *(int *)(param_1 + 0x10),(ushort *)uVar1);
  return;
}


// 0x10265270  (ghidra: FUN_10265270)  [gap]
void __fastcall sub_10265270(uint32_t *param_1)

{
  void *pvVar1;
  uint32_t *puVar2;
  
  puVar2 = (uint32_t *)*param_1;
  if (puVar2 == (uint32_t *)0x0) {
    return;
  }
  pvVar1 = (void *)*puVar2;
  if (pvVar1 != (void *)0x0) {
    sub_1020ffa0(pvVar1,puVar2[2] - (int)pvVar1 >> 3);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  return;
}


// 0x10265280  (ghidra: FUN_10265280)  [gap]
void __fastcall sub_10265280(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    client_DrawHoverItem_102253e0(pvVar1,param_1[2] - (int)pvVar1 >> 1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x102652b0  (ghidra: FUN_102652b0)  [gap]
void __thiscall sub_102652b0(void *this,uint param_1)

{
  size_t _NewSize;
  void *pvVar1;
  
  _NewSize = client_DrawHoverItem_10225700(param_1);
  pvVar1 = realloc(*(void **)((int)this + 8),_NewSize);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *(uint *)this = param_1;
  *(void **)((int)this + 8) = pvVar1;
  return;
}


// 0x102652f0  (ghidra: FUN_102652f0)  [gap]
bool __fastcall sub_102652f0(void *param_1)

{
  int iVar1;
  
  iVar1 = sub_10265e70(param_1,10,0x7fffffff);
  return iVar1 != 0x7fffffff;
}


// 0x10265310  (ghidra: FUN_10265310)  [gap]
uint32_t __thiscall sub_10265310(void *this,char param_2,uint reg_EAX)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  uint16_t extraout_var;
  uint32_t uVar4;
  uint64_t uVar5;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 8)) {
    uVar5 = sub_102549b0(*(uint *)((int)this + 0x40),0x100);
    uVar3 = sub_10266380(*(void **)((int)this + 0x3c),iVar1,iVar1 + 2,(int)uVar5 != 0);
    reg_EAX = CONCAT22(extraout_var,uVar3);
    if (uVar3 != 0) {
      if (param_2 != '\0') {
        sub_10265670((void *)((int)this + 0x24));
      }
      bVar2 = sub_10262be0(*(void **)((int)this + 0x3c),*(wchar_t *)((int)this + 0x48),1);
      sub_102661c0((void *)((int)this + 0x24),uVar3,bVar2);
      uVar4 = sub_10262fb0(this);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return reg_EAX & 0xffffff00;
}


// 0x10265390  (ghidra: FUN_10265390)  [gap]
void __fastcall sub_10265390(int *param_1)

{
  bool bVar1;
  ushort uVar2;
  wchar_t wVar3;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  uint64_t uVar5;
  int iVar4;
  
  bVar1 = sub_10265f00(param_1);
  iVar4 = CONCAT31(extraout_var,bVar1);
  if (iVar4 == 0) {
    return;
  }
  do {
    if (iVar4 != 2) {
      wVar3 = (wchar_t)param_1[0x11];
      if ((param_1[0x11] == 0) && (wVar3 = L'\0', (param_1[0x14] & 0x100000U) == 0)) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(2);
      }
      if (param_1[0x13] == 0x2d) {
        sub_10262fb0(param_1);
        wVar3 = *(wchar_t *)(param_1 + 0x11);
        bVar1 = sub_10265f00(param_1);
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          sub_102656b0(param_1 + 9,*(wchar_t *)(param_1 + 0x11));
          sub_102656b0(param_1 + 9,L'-');
          return;
        }
        if (CONCAT31(extraout_var_00,bVar1) == 2) {
LAB_1026546c:
                    /* WARNING: Subroutine does not return */
          sub_regex_10261f40(8);
        }
        uVar5 = sub_102549b0(param_1[0x10],0x800);
        if ((int)uVar5 != 0) {
          uVar2 = sub_10262c50((void *)param_1[0xf],(short)param_1[0x11]);
          param_1[0x11] = (uint)uVar2;
          wVar3 = sub_10262c50((void *)param_1[0xf],wVar3);
        }
        if ((ushort)*(wchar_t *)(param_1 + 0x11) < (ushort)wVar3) goto LAB_1026546c;
        sub_102660c0(param_1 + 9,wVar3,*(wchar_t *)(param_1 + 0x11));
      }
      else {
        sub_102656b0(param_1 + 9,wVar3);
      }
    }
    bVar1 = sub_10265f00(param_1);
    iVar4 = CONCAT31(extraout_var_01,bVar1);
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}


// 0x10265480  (ghidra: FUN_10265480)  [gap]
uint32_t __fastcall sub_10265480(int *param_1)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  uint32_t uVar5;
  uint extraout_ECX;
  int iVar6;
  
  if (param_1[0x13] == -1) {
                    /* WARNING: Subroutine does not return */
    sub_regex_10261f40(2);
  }
  if ((((param_1[0x14] & 0x10000U) != 0) &&
      (uVar3 = sub_10266010(param_1,*(ushort *)(param_1 + 0x12)), (char)uVar3 != '\0')) ||
     (((param_1[0x14] & 0x8000U) != 0 &&
      (uVar4 = sub_10266080(param_1,*(ushort *)(param_1 + 0x12),(uint)*(ushort *)(param_1 + 0x12)),
      (char)uVar4 != '\0')))) {
    sub_10262fb0(param_1);
    goto LAB_1026552a;
  }
  sVar1 = (short)param_1[0x12];
  if (sVar1 == 99) {
    if ((param_1[0x14] & 0x40000U) != 0) {
      sub_10262fb0(param_1);
      bVar2 = sub_10262be0((void *)param_1[0xf],*(wchar_t *)(param_1 + 0x12),0x103);
      if (!bVar2) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(2);
      }
      param_1[0x11] = *(ushort *)(param_1 + 0x12) & 0x1f;
      sub_10262fb0(param_1);
      goto LAB_1026552a;
    }
  }
  else if (sVar1 == 0x78) {
    if ((param_1[0x14] & 0x1000U) != 0) {
      sub_10262fb0(param_1);
      iVar6 = 2;
LAB_10265523:
      sub_10265ed0(param_1,iVar6);
      goto LAB_1026552a;
    }
  }
  else if ((sVar1 == 0x75) && ((param_1[0x14] & 0x800U) != 0)) {
    sub_10262fb0(param_1);
    iVar6 = 4;
    goto LAB_10265523;
  }
  if (((param_1[0x14] & 0x2000U) == 0) || (bVar2 = sub_10265ef0(param_1), !bVar2)) {
    uVar5 = sub_10265ff0((int)param_1);
    return uVar5;
  }
  if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
    sub_regex_10261f40(2);
  }
LAB_1026552a:
  uVar4 = sub_10237ae0();
  if ((uVar4 & 0xffff) < extraout_ECX) {
                    /* WARNING: Subroutine does not return */
    sub_regex_10261f40(2);
  }
  param_1[0x11] = extraout_ECX & 0xffff;
  return CONCAT31((int3)((extraout_ECX & 0xffff) >> 8),1);
}


// 0x102655a0  (ghidra: FUN_102655a0)  [gap]
void __fastcall sub_102655a0(int param_1)

{
  int iVar1;
  void *this;
  char cVar2;
  uint8_t local_c [8];
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  iVar1 = sub_10262290((void *)(param_1 + 0x24),*(uint32_t *)(param_1 + 0xc));
  sub_10262100((int *)param_1);
  sub_10262230((void *)(param_1 + 0x24),iVar1);
  sub_10262b20((void *)(param_1 + 0x14),
               -(uint)(0xfffffffe < *(uint *)(param_1 + 0xc)) | *(uint *)(param_1 + 0xc) + 1);
  cVar2 = '\x01';
  this = sub_10262ad0(local_c,*(int *)(iVar1 + 0x14));
  sub_1024ef20(this,cVar2);
  return;
}


// 0x10265610  (ghidra: FUN_10265610)  [gap]
void __fastcall sub_10265610(int param_1)

{
  int iVar1;
  
  iVar1 = sub_102631b0((void *)(param_1 + 0x24));
  sub_10262100((int *)param_1);
  sub_10262230((void *)(param_1 + 0x24),iVar1);
  return;
}


// 0x10265640  (ghidra: FUN_10265640)  [gap]
void __thiscall sub_10265640(void *this,byte param_1)

{
  int iVar1;
  
  iVar1 = sub_102661f0((void *)((int)this + 0x24),param_1);
  sub_10262100(this);
  sub_102662a0((void *)((int)this + 0x24),iVar1);
  return;
}


// 0x10265670  (ghidra: FUN_10265670)  [gap]
void __fastcall sub_10265670(void *param_1)

{
  void *pvVar1;
  uint32_t *puVar2;
  
  pvVar1 = operator_new(0x2c);
  sub_10265cc0(pvVar1);
  puVar2 = sub_10265cf0(pvVar1);
  sub_10263290(param_1,(int)puVar2);
  return;
}


// 0x102656b0  (ghidra: FUN_102656b0)  [gap]
void __thiscall sub_102656b0(void *this,wchar_t param_1)

{
  if ((ushort)param_1 < 0x100) {
    sub_102662c0(this,param_1);
    return;
  }
  sub_10266320(this,param_1);
  return;
}


// 0x102656e0  (ghidra: FUN_102656e0)  [gap]
void __thiscall sub_102656e0(void *this,uint32_t param_1)

{
  uint32_t *puVar1;
  void *this_00;
  
  puVar1 = operator_new(0x18);
  sub_10245260(puVar1);
  puVar1 = sub_10254cc0(this_00,param_1);
  sub_10263290(this,(int)puVar1);
  return;
}


// 0x10265710  (ghidra: FUN_10265710)  [gap]
uint64_t __thiscall sub_10265710(void *this,int param_1,int param_2,byte param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  uint32_t *puVar7;
  void *this_00;
  int extraout_ECX;
  void *extraout_ECX_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *extraout_ECX_01;
  uint64_t uVar8;
  int local_8;
  
  local_8 = *(int *)((int)this + 4);
  if (*(int *)(local_8 + 4) == 6) {
    iVar1 = sub_1020fae0(local_8 + 0x14);
    if (iVar1 != 1) {
      uVar2 = sub_10265d30(extraout_ECX);
      sub_102644d0(this,(wchar_t)uVar2);
      local_8 = *(int *)((int)this + 4);
    }
  }
  if ((*(int *)(local_8 + 4) == 9) || (*(int *)(local_8 + 4) == 0xe)) {
    local_8 = *(int *)(local_8 + 0x14);
  }
  if ((param_1 == 0) && (param_2 == 1)) {
    puVar3 = operator_new(0x14);
    sub_10255e50(puVar3);
    puVar3 = sub_10254ce0(extraout_ECX_00);
    puVar4 = operator_new(0x1c);
    sub_10263ec0(puVar4);
    puVar4 = sub_10254d30(this_01,puVar3);
    puVar5 = operator_new(0x1c);
    sub_10263ec0(puVar5);
    puVar5 = sub_10254d30(this_02,puVar3);
    puVar6 = operator_new(0x14);
    sub_10255e50(puVar6);
    puVar6 = sub_10254ad0(this_03,8,0);
    puVar7 = operator_new(0x18);
    sub_10245260(puVar7);
    puVar7 = sub_10254be0(this_04,9,this_04,puVar6);
    puVar5[3] = puVar6;
    puVar6[4] = puVar5;
    puVar6[3] = puVar7;
    puVar7[4] = puVar6;
    puVar7[3] = puVar3;
    puVar4[6] = puVar5;
    sub_10263290(this,(int)puVar3);
    uVar8 = sub_10264580(local_8,(int)puVar4);
    if (param_3 == 0) {
      thunk_FUN_10219510((uint32_t *)(puVar4[3] + 0x10));
      uVar8 = thunk_FUN_10219510(puVar4 + 3);
      return uVar8;
    }
  }
  else {
    puVar3 = operator_new(0x18);
    sub_10245260(puVar3);
    puVar3 = sub_10254dd0(extraout_ECX_01);
    puVar4 = operator_new(0x28);
    this_00 = (void *)sub_10265cd0(puVar4);
    iVar1 = *(int *)(*(int *)this + 0x18);
    *(int *)(*(int *)this + 0x18) = iVar1 + 1;
    puVar4 = sub_10254df0(this_00,param_3,param_1,param_2,puVar3,iVar1);
    puVar3[5] = puVar4;
    sub_10263290(this,(int)puVar3);
    uVar8 = sub_10264580(local_8,(int)puVar4);
  }
  return uVar8;
}


// 0x102658c0  (ghidra: FUN_102658c0)  [gap]
void __fastcall sub_102658c0(int param_1)

{
  sub_10254aa0((uint *)(*(int *)(param_1 + 4) + 8),4);
  return;
}


// 0x102658d0  (ghidra: FUN_102658d0)  [gap]
void __fastcall sub_102658d0(void *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  void *extraout_ECX;
  
  puVar1 = operator_new(0x20);
  sub_10265100(puVar1);
  iVar2 = sub_10265d40(extraout_ECX);
  sub_10263290(param_1,iVar2);
  return;
}


// 0x10265900  (ghidra: FUN_10265900)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char __thiscall sub_10265900(void *this,int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint32_t *puVar3;
  void *this_00;
  void *this_01;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_5c;
  char local_55;
  uint32_t local_54;
  uint8_t local_50 [28];
  uint32_t local_34 [8];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307505;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = 0;
  sub_10265100(&local_54);
  sub_102650a0(this_00,this);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_5c = *(int *)this;
    do {
      cVar2 = sub_regex_10263310(this,*(wchar_t **)(param_1 + 0xc));
      if (cVar2 == '\0') {
        sub_10263f10(this,&local_54);
        local_55 = '\0';
        goto LAB_10265a55;
      }
      if (local_5c == *(int *)this) {
        iVar4 = *(int *)(param_1 + 0x14) + -1;
      }
      iVar4 = iVar4 + 1;
      local_5c = *(int *)this;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  sub_10265100(local_34);
  sub_102650a0(this_01,this);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_5c = *(int *)this;
  local_55 = '\0';
  cVar2 = sub_regex_10263310(this,*(wchar_t **)(*(int *)(param_1 + 0x1c) + 0xc));
  if (cVar2 != '\0') {
    if (param_2 == '\0') {
LAB_10265a33:
      local_55 = '\x01';
      goto LAB_10265a4d;
    }
    sub_10263f10(local_34,this);
    local_55 = '\x01';
  }
  do {
    iVar5 = iVar4;
    if ((*(int *)(param_1 + 0x18) != -1) && (iVar5 = iVar4 + 1, *(int *)(param_1 + 0x18) <= iVar4))
    break;
    *(int *)this = local_5c;
    sub_10264050((void *)((int)this + 4),(int)local_50);
    cVar2 = sub_regex_10263310(this,*(wchar_t **)(param_1 + 0xc));
    if (cVar2 == '\0') break;
    iVar1 = *(int *)this;
    cVar2 = sub_regex_10263310(this,*(wchar_t **)(*(int *)(param_1 + 0x1c) + 0xc));
    if (cVar2 != '\0') {
      if (param_2 == '\0') goto LAB_10265a33;
      sub_10263f10(local_34,this);
      local_55 = '\x01';
    }
    bVar6 = local_5c != iVar1;
    iVar4 = iVar5;
    local_5c = iVar1;
  } while (bVar6);
  puVar3 = local_34;
  if (local_55 == '\0') {
    puVar3 = &local_54;
  }
  sub_10263f10(this,puVar3);
LAB_10265a4d:
  sub_10261b30((int)local_34);
LAB_10265a55:
  sub_10261b30((int)&local_54);
  ExceptionList = local_10;
  return local_55;
}


// 0x10265a80  (ghidra: FUN_10265a80)  [gap]
uint8_t __fastcall sub_10265a80(ushort param_1)

{
  char cVar1;
  
  if (param_1 < 0x7b) {
    cVar1 = sub_10254a80((byte)param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


// 0x10265aa0  (ghidra: FUN_10265aa0)  [gap]
void * __fastcall sub_10265aa0(void *param_1)

{
  double in_XMM0_Qa;
  double local_c;
  
  sub_10255070();
  local_c = in_XMM0_Qa * 1000000000.0;
  sub_10266460(param_1,&local_c);
  return param_1;
}


// 0x10265ad0  (ghidra: FUN_10265ad0)  [gap]
void * __fastcall sub_10265ad0(void *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t local_c;
  
  uVar1 = sub_10255060(param_2);
  FUN_10303130((uint)uVar1);
  sub_10266460(param_1,&local_c);
  return param_1;
}


// 0x10265b00  (ghidra: FUN_10265b00)  [gap]
uint64_t * sub_10265b00(uint32_t param_1)

{
  uint64_t *puVar1;
  uint64_t *extraout_EDX;
  
  puVar1 = (uint64_t *)sub_1020fe80(param_1);
  *extraout_EDX = *puVar1;
  *(uint32_t *)(extraout_EDX + 1) = *(uint32_t *)(puVar1 + 1);
  return extraout_EDX;
}


// 0x10265b30  (ghidra: FUN_10265b30)  [gap]
ushort * __fastcall sub_10265b30(ushort *param_1,ushort *param_2,uint *param_3)

{
  if (param_1 == param_2) {
    return param_1;
  }
  do {
    if ((uint)*param_1 == *param_3) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (param_1 != param_2);
  return param_1;
}


// 0x10265b60  (ghidra: FUN_10265b60)  [gap]
short * __fastcall sub_10265b60(short *param_1,short *param_2,short *param_3)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


// 0x10265b80  (ghidra: FUN_10265b80)  [gap]
uint32_t * __fastcall sub_10265b80(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  sub_10210180(param_1);
  iVar1 = thunk_FUN_10218bf0((uint32_t *)&stack0x00000008);
  iVar2 = thunk_FUN_10218bf0((uint32_t *)&stack0x00000004);
  sub_10266480(param_1,iVar2,iVar1);
  return param_1;
}


// 0x10265bc0  (ghidra: FUN_10265bc0)  [gap]
void __fastcall sub_10265bc0(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint64_t *puVar2;
  uint32_t extraout_ECX;
  uint32_t uVar3;
  uint32_t uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  uVar1 = sub_1020fe80(param_2);
  puVar2 = (uint64_t *)sub_1020f1d0(extraout_ECX,uVar1);
  *puVar2 = CONCAT44(uVar4,uVar3);
  return;
}


// 0x10265be0  (ghidra: FUN_10265be0)  [gap]
void __thiscall sub_10265be0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = sub_10211070(param_1,param_2);
  uVar2 = sub_1020fe80(iVar1);
  iVar1 = *(int *)this;
  if ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < uVar2) {
    sub_10265d60(this,uVar2);
    iVar1 = *(int *)this;
  }
  uVar3 = sub_1020fe80(iVar1);
  iVar1 = sub_102126a0(param_1,param_2,uVar3);
  uVar3 = sub_1020fe80(iVar1);
  *(uint32_t *)((int)this + 4) = uVar3;
  return;
}


// 0x10265c40  (ghidra: FUN_10265c40)  [gap]
void __thiscall sub_10265c40(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = sub_10211010(param_1,param_2);
  uVar2 = sub_1020fe80(iVar1);
  iVar1 = *(int *)this;
  if ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < uVar2) {
    sub_10265dc0(this,uVar2);
    iVar1 = *(int *)this;
  }
  uVar3 = sub_1020fe80(iVar1);
  iVar1 = sub_102126a0(param_1,param_2,uVar3);
  uVar3 = sub_1020fe80(iVar1);
  *(uint32_t *)((int)this + 4) = uVar3;
  return;
}


// 0x10265ca0  (ghidra: FUN_10265ca0)  [gap]
void sub_10265ca0(uint32_t param_1,uint32_t param_2,int param_3)

{
  sub_10264ff0(param_1,param_2,param_3);
  return;
}


// 0x10265cc0  (ghidra: FUN_10265cc0)  [gap]
void __fastcall sub_10265cc0(void *param_1)

{
  memset(param_1,0,0x2c);
  return;
}


// 0x10265cd0  (ghidra: FUN_10265cd0)  [gap]
void __fastcall sub_10265cd0(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  return;
}


// 0x10265cf0  (ghidra: FUN_10265cf0)  [gap]
uint32_t * __fastcall sub_10265cf0(void *param_1)

{
  uint32_t *extraout_ECX;
  
  sub_10254ad0(param_1,7,0);
  *extraout_ECX = std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::vftable;
  *(uint16_t *)(extraout_ECX + 9) = 0;
  extraout_ECX[10] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  extraout_ECX[8] = 0;
  return extraout_ECX;
}


// 0x10265d30  (ghidra: FUN_10265d30)  [gap]
uint32_t __fastcall sub_10265d30(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return CONCAT22((short)((uint)*(int *)(param_1 + 8) >> 0x10),
                  *(uint16_t *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 2));
}


// 0x10265d40  (ghidra: FUN_10265d40)  [gap]
uint32_t __fastcall sub_10265d40(void *param_1)

{
  uint32_t *extraout_EDX;
  uint32_t extraout_EDX_00;
  
  sub_10254ad0(param_1,6,0);
  *extraout_EDX = std::_Node_str<wchar_t>::vftable;
  sub_102109e0(extraout_EDX + 5);
  return extraout_EDX_00;
}


// 0x10265d60  (ghidra: FUN_10265d60)  [gap]
void __thiscall sub_10265d60(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = sub_10210d60();
  if (param_1 <= uVar2) {
    uVar2 = sub_10264000(this,param_1);
    pvVar1 = *(void **)this;
    if (pvVar1 != (void *)0x0) {
      sub_1020ffa0(pvVar1,*(int *)((int)this + 8) - (int)pvVar1 >> 3);
      *(uint32_t *)this = 0;
      *(uint32_t *)((int)this + 4) = 0;
      *(uint32_t *)((int)this + 8) = 0;
    }
    std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw(this,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10265dc0  (ghidra: FUN_10265dc0)  [gap]
void __thiscall sub_10265dc0(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = sub_10210ca0();
  if (param_1 <= uVar2) {
    uVar2 = sub_10218c40(this,param_1);
    pvVar1 = *(void **)this;
    if (pvVar1 != (void *)0x0) {
      sub_1020ff20(pvVar1,*(int *)((int)this + 8) - (int)pvVar1 >> 2);
      *(uint32_t *)this = 0;
      *(uint32_t *)((int)this + 4) = 0;
      *(uint32_t *)((int)this + 8) = 0;
    }
    std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw(this,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10265e20  [gap]
/* Library Function - Single Match
    public: virtual void * __thiscall MemMapReadOnly::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall MemMapReadOnly::_scalar_deleting_destructor_(MemMapReadOnly *this,uint param_1)

{
  sub_10265e50((uint32_t *)this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x10265e50  (ghidra: FUN_10265e50)  [gap]
void __fastcall sub_10265e50(uint32_t *param_1)

{
  sub_10262d50((int)(param_1 + 5));
  sub_10254b00(param_1);
  return;
}


// 0x10265e70  (ghidra: FUN_10265e70)  [gap]
int __thiscall sub_10265e70(void *this,int param_1,int param_2)

{
  int iVar1;
  
  *(uint32_t *)((int)this + 0x44) = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    iVar1 = sub_10254a10(*(ushort *)((int)this + 0x48),param_1);
    if (iVar1 == -1) {
      return param_2;
    }
    *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) * param_1 + iVar1;
    sub_10262fb0(this);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return 0;
}


// 0x10265ed0  (ghidra: FUN_10265ed0)  [gap]
void __thiscall sub_10265ed0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = sub_10265e70(this,0x10,param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_regex_10261f40(2);
}


// 0x10265ef0  (ghidra: FUN_10265ef0)  [gap]
bool __fastcall sub_10265ef0(void *param_1)

{
  int iVar1;
  
  iVar1 = sub_10265e70(param_1,8,3);
  return iVar1 != 3;
}


// 0x10265f00  (ghidra: FUN_10265f00)  [gap]
bool __fastcall sub_10265f00(int *param_1)

{
  int iVar1;
  error_type eVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  
  iVar1 = param_1[0x13];
  if (iVar1 != 0x5c) {
    if (iVar1 != 0x5b) {
      if ((iVar1 != 0x5d) && (iVar1 != -1)) {
        param_1[0x11] = (uint)*(ushort *)(param_1 + 0x12);
        sub_10262fb0(param_1);
        return true;
      }
      return false;
    }
    sub_10262fb0(param_1);
    eVar2 = param_1[0x13];
    if (((eVar2 != 0x3a) && (eVar2 != 0x3d)) && (eVar2 != 0x2e)) {
      param_1[0x11] = 0x5b;
      return true;
    }
    sub_10262fb0(param_1);
    sub_102665c0(param_1,eVar2);
    return true;
  }
  sub_10262fb0(param_1);
  if ((param_1[0x14] & 0x200000U) != 0) {
    bVar3 = sub_102666e0(param_1);
    return bVar3;
  }
  if ((param_1[0x14] & 0x10000U) != 0) {
    uVar4 = sub_10266010(param_1,*(ushort *)(param_1 + 0x12));
    if ((char)uVar4 != '\0') goto LAB_10265f58;
  }
  if ((param_1[0x14] & 0x8000U) != 0) {
    uVar5 = sub_10266080(param_1,*(ushort *)(param_1 + 0x12),(uint)*(ushort *)(param_1 + 0x12));
    if ((char)uVar5 != '\0') {
LAB_10265f58:
      sub_10262fb0(param_1);
      return true;
    }
  }
  param_1[0x11] = 0x5c;
  return true;
}


// 0x10265ff0  (ghidra: FUN_10265ff0)  [gap]
uint32_t __fastcall sub_10265ff0(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int *extraout_ECX;
  
  uVar1 = sub_10266760(param_1);
  if ((char)uVar1 != '\0') {
    extraout_ECX[0x11] = (uint)*(ushort *)(extraout_ECX + 0x12);
    uVar2 = sub_10262fb0(extraout_ECX);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


// 0x10266010  (ghidra: FUN_10266010)  [gap]
ushort __thiscall sub_10266010(void *this,ushort param_1)

{
  if (param_1 == 0x66) {
    *(uint32_t *)((int)this + 0x44) = 0xc;
    return 1;
  }
  if (param_1 == 0x6e) {
    *(uint32_t *)((int)this + 0x44) = 10;
    return 1;
  }
  if (param_1 == 0x72) {
    *(uint32_t *)((int)this + 0x44) = 0xd;
    return 1;
  }
  if (param_1 == 0x74) {
    *(uint32_t *)((int)this + 0x44) = 9;
    return 1;
  }
  if (param_1 == 0x76) {
    *(uint32_t *)((int)this + 0x44) = 0xb;
    return 1;
  }
  return param_1 & 0xff00;
}


// 0x10266080  (ghidra: FUN_10266080)  [gap]
uint __thiscall sub_10266080(void *this,short param_2,uint32_t reg_EAX)

{
  if (param_2 == 0x61) {
    *(uint32_t *)((int)this + 0x44) = 7;
    return 1;
  }
  if (param_2 == 0x62) {
    *(uint32_t *)((int)this + 0x44) = 8;
    return 1;
  }
  return CONCAT22((short)((uint)reg_EAX >> 0x10),param_2) & 0xffffff00;
}


// 0x102660c0  (ghidra: FUN_102660c0)  [gap]
void __thiscall sub_102660c0(void *this,wchar_t param_1,wchar_t param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint32_t *puVar4;
  int extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar5;
  uint64_t uVar6;
  
  uVar6 = sub_102549b0(*(uint *)((int)this + 8),0x100);
  if ((int)uVar6 == 0) {
    uVar2 = (uint)(ushort)param_1;
  }
  else {
    uVar2 = sub_10262c30(*(void **)((int)this + 0xc),param_1);
    param_2 = sub_10262c30(*(void **)((int)this + 0xc),param_2);
  }
  uVar5 = (uint)(ushort)param_2;
  uVar2 = uVar2 & 0xffff;
  iVar1 = *(int *)((int)this + 4);
  if (uVar2 <= uVar5) {
    while( true ) {
      uVar3 = client_DrawHoverItem_10224f20((int)this);
      if (uVar3 <= uVar5) break;
      puVar4 = *(uint32_t **)(extraout_EDX + 0x18);
      if (puVar4 == (uint32_t *)0x0) {
        puVar4 = operator_new(0x20);
        puVar4 = sub_10254ac0(puVar4);
        *(uint32_t **)(iVar1 + 0x18) = puVar4;
      }
      sub_102668d0(puVar4,uVar2);
      uVar2 = uVar2 + 1;
      if (uVar5 < uVar2) {
        return;
      }
    }
    if (uVar2 <= uVar5) {
      uVar3 = sub_102668c0(extraout_ECX);
      if (uVar5 - uVar2 < uVar3) {
        do {
          sub_10266320(this,(wchar_t)uVar2);
          uVar2 = uVar2 + 1;
        } while (uVar2 <= uVar5);
        return;
      }
      puVar4 = *(uint32_t **)(extraout_EDX_00 + 0x20);
      if (puVar4 == (uint32_t *)0x0) {
        puVar4 = operator_new(0xc);
        puVar4 = sub_102109e0(puVar4);
        *(uint32_t **)(iVar1 + 0x20) = puVar4;
      }
      sub_102651b0(puVar4,(short)uVar2);
      sub_102651b0(*(void **)(iVar1 + 0x20),param_2);
    }
  }
  return;
}


// 0x102661c0  (ghidra: FUN_102661c0)  [gap]
void __thiscall sub_102661c0(void *this,ushort param_1,char param_2)

{
  ushort *puVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = *(int *)((int)this + 4);
  sub_10266860(this,iVar2,param_1,param_2);
  uVar3 = sub_10237ae0();
  if (0x100 < (ushort)uVar3) {
    puVar1 = (ushort *)(iVar2 + 0x24);
    *puVar1 = *puVar1 | param_1;
  }
  return;
}


// 0x102661f0  (ghidra: FUN_102661f0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall sub_102661f0(void *this,byte param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t extraout_ECX;
  void *this_00;
  uint32_t *local_1c;
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030753d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102401f0(&local_18);
  local_1c = (uint32_t *)(param_1 + 10);
  sub_10266570(extraout_ECX,&local_1c);
  local_8 = 0;
  local_1c = operator_new(0x14);
  sub_10255e50(local_1c);
  puVar1 = sub_10254ad0(this_00,1,0);
  iVar2 = sub_102449e0(&local_18);
  sub_10263290(this,iVar2);
  *(uint32_t **)(iVar2 + 0x14) = puVar1;
  puVar1[4] = iVar2;
  *(uint32_t **)((int)this + 4) = puVar1;
  sub_10244a00(&local_18);
  ExceptionList = local_10;
  return iVar2;
}


// 0x102662a0  (ghidra: FUN_102662a0)  [gap]
void __thiscall sub_102662a0(void *this,int param_1)

{
  sub_10262230(this,param_1);
  *(int *)((int)this + 4) = param_1;
  return;
}


// 0x102662c0  (ghidra: FUN_102662c0)  [gap]
void __thiscall sub_102662c0(void *this,wchar_t param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = sub_102549b0(*(uint *)((int)this + 8),0x100);
  if ((int)uVar3 != 0) {
    param_1 = sub_10262c30(*(void **)((int)this + 0xc),param_1);
  }
  iVar1 = *(int *)((int)this + 4);
  puVar2 = *(uint32_t **)(iVar1 + 0x18);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = operator_new(0x20);
    puVar2 = sub_10254ac0(puVar2);
    *(uint32_t **)(iVar1 + 0x18) = puVar2;
  }
  sub_102668f0(puVar2,param_1);
  return;
}


// 0x10266320  (ghidra: FUN_10266320)  [gap]
void __thiscall sub_10266320(void *this,wchar_t param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = sub_102549b0(*(uint *)((int)this + 8),0x100);
  if ((int)uVar3 != 0) {
    param_1 = sub_10262c30(*(void **)((int)this + 0xc),param_1);
  }
  iVar1 = *(int *)((int)this + 4);
  puVar2 = *(uint32_t **)(iVar1 + 0x1c);
  if (puVar2 == (uint32_t *)0x0) {
    puVar2 = operator_new(0xc);
    puVar2 = sub_102109e0(puVar2);
    *(uint32_t **)(iVar1 + 0x1c) = puVar2;
  }
  sub_102651b0(puVar2,param_1);
  return;
}


// 0x10266380  (ghidra: FUN_10266380)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort __thiscall sub_10266380(void *this,uint32_t param_1,uint32_t param_2,char param_3)

{
  int iVar1;
  uint32_t *puVar2;
  uint uVar3;
  uint8_t **extraout_ECX;
  ushort uVar4;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint8_t **ppuVar5;
  int iVar6;
  uint8_t local_18 [4];
  void *local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  iVar6 = 0;
  local_14 = this;
  iVar1 = sub_1020fae0(0x1037d4f0);
  if (iVar1 != 0) {
    local_10 = sub_1020faf0(&param_2);
    local_c = sub_1020faf0(&local_c);
    ppuVar5 = extraout_ECX;
    do {
      puVar2 = sub_102423f0(local_18,this);
      iVar1 = sub_1020fae0((int)ppuVar5);
      uVar3 = sub_10266910(local_c,local_10,iVar1,iVar1 + *(int *)(&DAT_1037d4f8 + extraout_EDX) * 2
                           ,*puVar2);
      if ((char)uVar3 != '\0') break;
      iVar6 = iVar6 + 1;
      ppuVar5 = &PTR_s_alnum_1037d4f0 + iVar6 * 4;
      iVar1 = sub_1020fae0((int)ppuVar5);
      this = local_14;
    } while (iVar1 != 0);
  }
  iVar1 = sub_1020fae0((int)(&PTR_s_alnum_1037d4f0 + iVar6 * 4));
  uVar3 = extraout_EDX_00;
  if (iVar1 != 0) {
    uVar3 = (uint)*(ushort *)(&UNK_1037d4fc + iVar6 * 0x10);
  }
  uVar4 = (ushort)uVar3;
  if ((param_3 != '\0') && ((uVar3 & 3) != 0)) {
    uVar4 = uVar4 | 3;
  }
  return uVar4;
}


// 0x10266460  (ghidra: FUN_10266460)  [gap]
uint64_t * __thiscall sub_10266460(void *this,uint64_t *param_1)

{
  *(uint64_t *)this = *param_1;
  return this;
}


// 0x10266480  (ghidra: FUN_10266480)  [gap]
void __thiscall sub_10266480(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = sub_10264be0(param_1,param_2);
  uVar2 = sub_1020fe80(iVar1);
  if (uVar2 != 0) {
    sub_102664e0(this,uVar2);
    uVar3 = sub_102669a0(param_1,param_2,*(int *)this);
    *(uint32_t *)((int)this + 4) = uVar3;
    param_2 = 0;
    sub_102664d0(&param_2);
  }
  return;
}


// 0x102664d0  (ghidra: FUN_102664d0)  [gap]
void __fastcall sub_102664d0(uint32_t *param_1)

{
  void *pvVar1;
  uint32_t *puVar2;
  
  puVar2 = (uint32_t *)*param_1;
  if (puVar2 == (uint32_t *)0x0) {
    return;
  }
  pvVar1 = (void *)*puVar2;
  if (pvVar1 != (void *)0x0) {
    client_DrawHoverItem_102253e0(pvVar1,puVar2[2] - (int)pvVar1 >> 1);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  return;
}


// 0x102664e0  (ghidra: FUN_102664e0)  [gap]
void __thiscall sub_102664e0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = sub_10266540();
  if (param_1 <= uVar1) {
    std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw(this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x10266510  [gap]
/* Library Function - Single Match
    private: void __thiscall std::vector<struct CHN *,class std::allocator<struct CHN *>
   >::_Buy_raw(unsigned int)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<CHN*,std::allocator<CHN*>_>::_Buy_raw
          (vector<CHN*,std::allocator<CHN*>_> *this,uint param_1)

{
  int iVar1;
  
  iVar1 = client_DrawHoverItem_102253c0(param_1);
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar1;
  *(uint *)(this + 8) = iVar1 + param_1 * 2;
  return;
}


// 0x10266540  (ghidra: FUN_10266540)  [gap]
uint sub_10266540(void)

{
  uint *puVar1;
  uint local_c;
  uint local_8;
  
  local_8 = sub_1020f1c0();
  local_c = sub_1020f1c0();
  puVar1 = sub_10210430(&local_c,&local_8);
  return *puVar1;
}


// 0x10266570  (ghidra: FUN_10266570)  [gap]
uint32_t __fastcall sub_10266570(uint32_t param_1,uint32_t param_2)

{
  uint32_t *this;
  uint32_t *puVar1;
  
  this = operator_new(0x18);
  sub_10245260(this);
  puVar1 = (uint32_t *)sub_1020fe80(param_2);
  sub_10254c30(this,*puVar1);
  sub_102474a0(param_1);
  return param_1;
}


// 0x102665c0  (ghidra: FUN_102665c0)  [gap]
void __thiscall sub_102665c0(void *this,error_type param_1)

{
  error_type eVar1;
  uint16_t *puVar2;
  error_type eVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  uint64_t uVar7;
  
  eVar3 = param_1;
  if (param_1 == 0x3a) {
    param_1 = 1;
  }
  else if (param_1 == 0x3d) {
    param_1 = 0;
  }
  else {
    bVar6 = param_1 == 0x2e;
    param_1 = 0xe;
    if (bVar6) {
      param_1 = 0;
    }
  }
  uVar5 = 0;
  puVar2 = *(uint16_t **)this;
  eVar1 = *(error_type *)((int)this + 0x4c);
  while ((((eVar1 != 0x3a && (eVar1 != 0x3d)) && (eVar1 != 0x2e)) && (eVar1 != 0xffffffff))) {
    sub_10262fb0(this);
    uVar5 = uVar5 + 1;
    eVar1 = *(error_type *)((int)this + 0x4c);
  }
  if (eVar1 == eVar3) {
    if (eVar3 == 0x3a) {
      uVar7 = sub_102549b0(*(uint *)((int)this + 0x40),0x100);
      uVar4 = sub_10266380(*(void **)((int)this + 0x3c),puVar2,*(uint32_t *)this,(int)uVar7 != 0);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(1);
      }
      sub_102661c0((void *)((int)this + 0x24),uVar4,'\0');
    }
    else if (eVar3 == 0x3d) {
      if (puVar2 == *(uint16_t **)this) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(0);
      }
      sub_102669c0((void *)((int)this + 0x24),puVar2,*(uint16_t **)this,uVar5);
    }
    else if (eVar3 == 0x2e) {
      if (puVar2 == *(uint16_t **)this) {
                    /* WARNING: Subroutine does not return */
        sub_regex_10261f40(0);
      }
      sub_10266ae0((void *)((int)this + 0x24),puVar2,*(uint16_t **)this,uVar5);
    }
    sub_10262fb0(this);
    sub_10264170(this,0x5d,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  sub_regex_10261f40(param_1);
}


// 0x102666e0  (ghidra: FUN_102666e0)  [gap]
bool __fastcall sub_102666e0(int *param_1)

{
  uint reg_EAX;
  bool bVar1;
  uint32_t uVar2;
  
  reg_EAX = param_1[0x14];
  if (((reg_EAX & 0x4000) == 0) || ((short)param_1[0x12] != 0x5c)) {
    if (((reg_EAX & 0x20000) != 0) &&
       (uVar2 = sub_10265310(param_1,'\0',reg_EAX), (char)uVar2 != '\0')) {
      return true;
    }
    bVar1 = sub_102652f0(param_1);
    if (!bVar1) {
      uVar2 = sub_10265480(param_1);
      return (char)uVar2 != '\0';
    }
    if (param_1[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
      sub_regex_10261f40(2);
    }
  }
  else {
    param_1[0x11] = 0x5c;
    sub_10262fb0(param_1);
  }
  return true;
}


// 0x10266760  (ghidra: FUN_10266760)  [gap]
uint __fastcall sub_10266760(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((uVar1 & 0x400000) != 0) {
    switch(*(uint16_t *)(param_1 + 0x48)) {
    case 0x44:
    case 0x53:
    case 0x57:
    case 99:
    case 100:
    case 0x73:
    case 0x77:
      goto switchD_1026677e_caseD_44;
    default:
switchD_1026677e_caseD_45:
      return 1;
    }
  }
  switch(*(uint16_t *)(param_1 + 0x48)) {
  case 0x22:
  case 0x2f:
    return (uint)((byte)(uVar1 >> 0x18) & 1);
  default:
switchD_1026677e_caseD_44:
    return 0;
  case 0x24:
  case 0x2a:
  case 0x2e:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x7c:
    goto switchD_1026677e_caseD_45;
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x3f:
  case 0x7b:
  case 0x7d:
    return (uint)((byte)(uVar1 >> 0x17) & 1);
  }
}


// 0x10266860  (ghidra: FUN_10266860)  [gap]
void __thiscall sub_10266860(void *this,int param_1,short param_2,char param_3)

{
  bool bVar1;
  uint32_t *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    bVar1 = sub_10262be0(*(void **)((int)this + 0xc),(wchar_t)uVar3,param_2);
    if (bVar1 != (bool)param_3) {
      puVar2 = *(uint32_t **)(param_1 + 0x18);
      if (puVar2 == (uint32_t *)0x0) {
        puVar2 = operator_new(0x20);
        puVar2 = sub_10254ac0(puVar2);
        *(uint32_t **)(param_1 + 0x18) = puVar2;
      }
      sub_102668d0(puVar2,uVar3);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x100);
  return;
}


// 0x102668c0  (ghidra: FUN_102668c0)  [gap]
uint32_t __fastcall sub_102668c0(int param_1)

{
  return *(uint32_t *)(param_1 + 0x14);
}


// 0x102668d0  (ghidra: FUN_102668d0)  [gap]
void __thiscall sub_102668d0(void *this,uint param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)this + (param_1 >> 3));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}


// 0x102668f0  (ghidra: FUN_102668f0)  [gap]
void __thiscall sub_102668f0(void *this,ushort param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)this + (uint)(param_1 >> 3));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  return;
}


// 0x10266910  (ghidra: FUN_10266910)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall
sub_10266910(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  uint32_t extraout_EDX_00;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  iVar1 = sub_1020faf0(&local_c);
  sub_1020faf0(&local_10);
  iVar2 = sub_1020faf0(&param_3);
  iVar3 = sub_1020faf0(&param_4);
  uVar4 = iVar3 - iVar2 ^ extraout_EDX - iVar1;
  if ((uVar4 & 0xfffffffe) != 0) {
    return uVar4 & 0xffffff00;
  }
  sub_10266b10(&local_c,param_5);
  uVar4 = sub_10266b20(iVar1,extraout_EDX_00);
  return uVar4;
}


// 0x102669a0  (ghidra: FUN_102669a0)  [gap]
void sub_102669a0(uint32_t param_1,uint32_t param_2,int param_3)

{
  sub_10266bb0(param_1,param_2,param_3);
  return;
}


// 0x102669c0  (ghidra: FUN_102669c0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_102669c0(void *this,uint16_t *param_1,uint16_t *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  uint *puVar5;
  uint uVar6;
  uint32_t local_60 [6];
  uint32_t *local_48;
  uint16_t *local_44;
  uint16_t *local_40;
  int local_3c;
  void *local_38;
  uint32_t local_34 [6];
  uint local_1c;
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030757d;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)((int)this + 4);
  local_44 = param_1;
  local_40 = param_2;
  local_38 = this;
  sub_10266c70(local_34,(int)param_1,(int)param_2);
  local_8 = 0;
  uVar6 = 0;
  local_3c = sub_1020fe80(&local_1c);
  do {
    local_1c = uVar6 & 0xffff;
    puVar3 = sub_10266c70(local_60,local_3c,local_3c + 2);
    cVar2 = sub_10264f70(puVar3,(int)local_34);
    thunk_FUN_102250f0(local_60);
    if (cVar2 != '\0') {
      puVar3 = *(uint32_t **)(iVar1 + 0x18);
      if (puVar3 == (uint32_t *)0x0) {
        local_48 = operator_new(0x20);
        puVar3 = sub_10254ac0(local_48);
        *(uint32_t **)(iVar1 + 0x18) = puVar3;
      }
      sub_102668d0(puVar3,uVar6);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x100);
  uVar4 = sub_10237ae0();
  if (0x100 < (ushort)uVar4) {
    puVar5 = (uint *)sub_1020fe80(iVar1 + 0x28);
    sub_10266c10(local_44,local_40,param_3,puVar5);
  }
  thunk_FUN_102250f0(local_34);
  ExceptionList = local_10;
  return;
}


// 0x10266ae0  (ghidra: FUN_10266ae0)  [gap]
void __thiscall sub_10266ae0(void *this,uint16_t *param_1,uint16_t *param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)sub_1020fe80(*(int *)((int)this + 4) + 0x14);
  sub_10266c10(param_1,param_2,param_3,puVar1);
  return;
}


// 0x10266b10  (ghidra: FUN_10266b10)  [gap]
uint32_t * __thiscall sub_10266b10(void *this,uint32_t param_1)

{
  *(uint32_t *)this = param_1;
  return this;
}


// 0x10266b20  (ghidra: FUN_10266b20)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_10266b20(uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  uint3 extraout_var;
  int iVar5;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  pwVar2 = (wchar_t *)sub_1020faf0(&local_c);
  pwVar3 = (wchar_t *)sub_1020faf0(&local_10);
  iVar4 = sub_1020faf0((uint32_t *)&stack0x00000004);
  if (pwVar2 != pwVar3) {
    iVar5 = iVar4 - (int)pwVar2;
    do {
      bVar1 = sub_10265180(&stack0x00000008,*pwVar2,*(wchar_t *)(iVar5 + (int)pwVar2));
      iVar4 = CONCAT31(extraout_var,bVar1);
      if (!bVar1) {
        return (uint)extraout_var << 8;
      }
      pwVar2 = pwVar2 + 1;
    } while (pwVar2 != pwVar3);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


// 0x10266bb0  (ghidra: FUN_10266bb0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall sub_10266bb0(uint32_t param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  iVar1 = sub_1020faf0(&local_c);
  iVar2 = sub_1020faf0(&local_10);
  uVar3 = sub_1020fe80(param_3);
  sub_102126a0(iVar1,iVar2,uVar3);
  return param_3 + (iVar2 - iVar1 >> 1) * 2;
}


// 0x10266c10  (ghidra: FUN_10266c10)  [gap]
void sub_10266c10(uint16_t *param_1,uint16_t *param_2,uint param_3,uint *param_4)

{
  void *this;
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_4;
  if (puVar2 != (uint *)0x0) {
    do {
      if (*puVar2 <= param_3) break;
      param_4 = puVar2 + 4;
      puVar2 = (uint *)*param_4;
    } while (puVar2 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (param_3 == *puVar2)) goto LAB_10266c59;
  }
  this = operator_new(0x14);
  uVar1 = sub_10266d80(this,param_3);
  *param_4 = uVar1;
  *(uint **)(uVar1 + 0x10) = puVar2;
  puVar2 = (uint *)*param_4;
LAB_10266c59:
  sub_10266da0(puVar2 + 1,param_1,param_2);
  return;
}


// 0x10266c70  (ghidra: FUN_10266c70)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * sub_10266c70(uint32_t *param_1,int param_2,int param_3)

{
  ctype<wchar_t> *this;
  int iVar1;
  void *this_00;
  uint32_t uVar2;
  void *this_01;
  wchar_t *extraout_EDX;
  int extraout_EDX_00;
  uint32_t local_48 [6];
  uint32_t *local_30;
  uint32_t *local_2c;
  uint32_t local_28;
  int local_24 [3];
  uint local_18;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103075d6;
  local_10 = ExceptionList;
  local_18 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  local_28 = 0;
  client_DrawHoverItem_10225070(param_1);
  local_8 = 0;
  local_28 = 1;
  if (param_2 != param_3) {
    sub_1020f420((uint64_t *)local_24);
    sub_10266dd0(this_01,param_2,param_3);
    local_8 = 1;
    this = (ctype<wchar_t> *)sub_1020fae0((int)local_2c);
    sub_10218bf0(local_24);
    iVar1 = sub_10265110(local_24);
    std::ctype<wchar_t>::tolower(this,extraout_EDX,extraout_EDX + iVar1);
    this_00 = (void *)sub_1020faf0(local_2c);
    sub_10218bf0(local_24);
    iVar1 = sub_10265110(local_24);
    uVar2 = sub_10262eb0(this_00,local_48,extraout_EDX_00,extraout_EDX_00 + iVar1 * 2);
    sub_1025f140(param_1,uVar2);
    thunk_FUN_102250f0(local_48);
    thunk_FUN_10265280(local_24);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x10266d80  (ghidra: FUN_10266d80)  [gap]
uint32_t __thiscall sub_10266d80(void *this,uint32_t param_1)

{
  uint32_t extraout_EDX;
  
  *(uint32_t *)this = param_1;
  sub_102109e0((uint32_t *)((int)this + 4));
  return extraout_EDX;
}


// 0x10266da0  (ghidra: FUN_10266da0)  [gap]
void __thiscall sub_10266da0(void *this,uint16_t *param_1,uint16_t *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    sub_102651b0(this,*param_1);
  }
  return;
}


// 0x10266dd0  (ghidra: FUN_10266dd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall sub_10266dd0(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_10 = param_2;
  sub_10210180(this);
  iVar1 = sub_1020faf0(&local_10);
  iVar2 = sub_1020faf0(&local_c);
  sub_10266480(this,iVar2,iVar1);
  return this;
}

