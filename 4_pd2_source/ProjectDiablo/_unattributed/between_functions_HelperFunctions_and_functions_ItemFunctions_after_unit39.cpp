/*
 * _unattributed/between_functions_HelperFunctions_and_functions_ItemFunctions_after_unit39.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102d40a0 - 0x102d47d0
 * Functions     : 13
 * Attribution   : gap=13
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x102d40a0  (ghidra: FUN_102d40a0)  [gap]
uint32_t __fastcall sub_102d40a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint64_t uVar5;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 0x1c4) == 0)) {
    piVar2 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      uVar5 = D2Common_10464(piVar1);
      piVar2 = (int *)uVar5;
      if (*(char *)(piVar1[5] + 0x45) == '\x05') {
        iVar3 = sub_102d4010(*(uint *)(piVar1[0xb] + 0xc),*(uint *)(piVar1[0xb] + 0x10));
        piVar4 = sub_102d3f60(iVar3);
        *(char *)(piVar1[5] + 0x44) = (char)iVar3;
        *(int *)(piVar1[0xb] + 0xc) = *(int *)(piVar1[0xb] + 0xc) - *piVar4;
        *(int *)(piVar1[0xb] + 0x10) = *(int *)(piVar1[0xb] + 0x10) - piVar4[1];
        FUN_1030207a(piVar4);
      }
    }
    *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1c4) = 1;
    return 1;
  }
  return 0;
}


// 0x102d4150  (ghidra: FUN_102d4150)  [gap]
uint32_t __fastcall sub_102d4150(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint64_t uVar3;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 0x1c4) != 0)) {
    piVar1 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
    while (piVar1 != (int *)0x0) {
      if (*(char *)(piVar1[5] + 0x45) == '\x05') {
        piVar2 = sub_102d3f60((uint)*(byte *)(piVar1[5] + 0x44));
        *(uint8_t *)(piVar1[5] + 0x44) = 0;
        *(int *)(piVar1[0xb] + 0xc) = *(int *)(piVar1[0xb] + 0xc) + *piVar2;
        *(int *)(piVar1[0xb] + 0x10) = *(int *)(piVar1[0xb] + 0x10) + piVar2[1];
      }
      uVar3 = D2Common_10464(piVar1);
      piVar1 = (int *)uVar3;
    }
    *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1c4) = 0;
    return 1;
  }
  return 0;
}


// 0x102d41d0  (ghidra: FUN_102d41d0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_102d41d0(int param_1)

{
  int *piVar1;
  uint8_t uVar2;
  int *piVar3;
  uint32_t extraout_ECX;
  uint64_t uVar4;
  uint8_t local_28;
  int local_27;
  uint16_t local_23;
  uint8_t local_21;
  uint8_t local_20;
  uint8_t local_1f;
  uint8_t local_1e;
  uint64_t local_1c;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1031508d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 0x9c) != 0)) {
    sub_1020f410(&local_1c);
    sub_1020f960(extraout_ECX);
    local_8 = 0;
    piVar3 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
    uVar2 = 1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      uVar4 = D2Common_10464(piVar1);
      piVar3 = (int *)uVar4;
      if (*(char *)(piVar1[5] + 0x45) == '\x05') {
        local_27 = piVar1[3];
        local_28 = 0x2f;
        local_23 = 0x505;
        local_21 = *(uint8_t *)(piVar1[0xb] + 0xc);
        local_20 = *(uint8_t *)(piVar1[0xb] + 0x10);
        local_1e = 0;
        local_1f = uVar2;
        sub_102ecd00(*(uint32_t *)(*(int *)(param_1 + 0x14) + 0x9c),&local_28,0xb);
        uVar2 = 0;
      }
    }
    thunk_FUN_1020f8e0(&local_1c);
  }
  ExceptionList = local_10;
  return;
}


// 0x102d42d0  (ghidra: FUN_102d42d0)  [gap]
uint sub_102d42d0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 4)) &&
     ((cVar1 = *(char *)(param_1[5] + 0x45), cVar1 == '\0' ||
      ((cVar1 == '\x02' || (cVar1 == '\x03')))))) {
    uVar3 = D2Common_10695(param_1[1]);
    iVar2 = (int)uVar3;
    if ((iVar2 != 0) &&
       ((2 < *(uint *)(iVar2 + 0x94) &&
        ((*(int *)(iVar2 + 0x80) == 0x20646972 || (*(int *)(iVar2 + 0x80) == 0x20707472)))))) {
      return (uint)*(ushort *)(iVar2 + 0xfa);
    }
    uVar3 = D2Common_10744((int)param_1,0x12);
    uVar4 = D2Common_10744((int)param_1,0x16);
    if (((int)uVar3 != 0) || ((int)uVar4 != 0)) {
      iVar2 = functions_HelperFunctions_102ce700(param_1);
      if (iVar2 != 0) {
        if ((int)uVar3 != 0) {
          return *(uint *)(iVar2 + 0xc);
        }
        if ((int)uVar4 != 0) {
          return *(uint *)(iVar2 + 8);
        }
      }
    }
  }
  return 0xffffffff;
}


// 0x102d4390  (ghidra: FUN_102d4390)  [gap]
char __fastcall sub_102d4390(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x14), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + 0x45);
    if ((cVar1 == '\0') || ((cVar1 == '\x01' || (cVar1 == -1)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    cVar1 = *(char *)(iVar2 + 0x44);
    if (((cVar1 == '\0') || (cVar1 == '\f')) || (cVar1 == '\v')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar3) && (bVar4)) {
      return cVar1;
    }
  }
  return '\0';
}


// 0x102d43e0  (ghidra: FUN_102d43e0)  [gap]
uint32_t sub_102d43e0(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  
  piVar1 = (int *)D2Common_10460(*(int **)(param_1 + 0x60));
  do {
    if (piVar1 == (int *)0x0) {
      uVar3 = sub_102ee6b0(param_1,param_2);
      return uVar3;
    }
    if ((*(char *)(piVar1[5] + 0x45) == '\0') || (*(char *)(piVar1[5] + 0x45) == '\x03')) {
      uVar4 = D2Common_10695(piVar1[1]);
      iVar2 = (int)uVar4;
      if (((iVar2 != 0) &&
          (((*(char *)(iVar2 + 0x80) == 'r' && (*(char *)(iVar2 + 0x81) == 'k')) &&
           (*(char *)(iVar2 + 0x82) == 'e')))) && (*(char *)(iVar2 + 0x83) == 'y')) {
        return 1;
      }
    }
    uVar4 = D2Common_10464(piVar1);
    piVar1 = (int *)uVar4;
  } while( true );
}


// 0x102d4470  (ghidra: FUN_102d4470)  [gap]
int sub_102d4470(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = sub_102d3c20(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x1b4));
    if (iVar1 != 0) {
      sub_102d40a0(param_1);
    }
  }
  iVar1 = sub_102ee8d0();
  if (((iVar1 == 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = sub_102d4150(param_1);
    if (iVar2 != 0) {
      sub_102d3d10(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x1b4),1);
    }
  }
  return iVar1;
}


// 0x102d44e0  (ghidra: FUN_102d44e0)  [gap]
uint32_t sub_102d44e0(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar1 = sub_102ee8f0();
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = sub_102d4150(param_1);
    iVar2 = sub_102d3d10(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x1b4),(uint)(iVar2 != 0));
    uVar1 = 0;
    if (iVar2 != 0) {
      D2Common_10201((int *)param_1,1);
      uVar3 = sub_6fcaea80(param_2,(int *)param_1,7,*(int *)(param_2 + 0xa8) + 2,0x102d4460,0,0);
      uVar1 = (uint32_t)uVar3;
    }
  }
  return uVar1;
}


// 0x102d4560  (ghidra: FUN_102d4560)  [gap]
void sub_102d4560(int param_1,uint32_t param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = sub_102d4150(param_1);
    if (iVar1 != 0) {
      sub_102d3d10(param_1,*(int *)(*(int *)(param_1 + 0x14) + 0x1b4),1);
    }
  }
  sub_102ee920(param_1,param_2);
  return;
}


// 0x102d45a0  (ghidra: FUN_102d45a0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_102d45a0(int param_1,int *reg_ECX,int reg_EDX)

{
  int *piVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint32_t *extraout_ECX;
  uint32_t *extraout_ECX_00;
  uint32_t *extraout_EDX;
  uint32_t *puVar4;
  uint64_t uVar5;
  int *local_24;
  uint64_t local_20;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103150cd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = (int *)D2Common_10460((int *)reg_ECX[0x18]);
  sub_1020f420(&local_20);
  sub_1020f7c0(extraout_ECX);
  local_8 = 0;
  ITEMS_ItemMode_6fcf29f0(reg_ECX);
  while (local_24 != (int *)0x0) {
    uVar5 = D2Common_10744((int)local_24,0xdd);
    if ((int)uVar5 != 0) {
      sub_10218990(&local_20,&local_24);
    }
    uVar5 = D2Common_10464(local_24);
    local_24 = (int *)uVar5;
  }
  puVar2 = (uint32_t *)sub_1020fae0((int)&local_20);
  puVar3 = (uint32_t *)sub_1020faf0(extraout_ECX_00);
  puVar4 = extraout_EDX;
  if (puVar3 != extraout_EDX) {
    do {
      piVar1 = (int *)*puVar3;
      if ((((piVar1 != (int *)0x0) && (piVar1[5] != 0)) && (piVar1[0xb] != 0)) &&
         (*(char *)(piVar1[5] + 0x45) == '\0')) {
        D2Common_10977(piVar1,1,1);
        D2Common_10977(piVar1,0x4000,param_1);
        D2Common_10050((int *)reg_ECX[0x18],piVar1);
        puVar4 = puVar2;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar4);
  }
  ITEMS_ItemMode_6fcf51a0(reg_EDX,reg_ECX,1);
  D2Common_10158(reg_ECX);
  thunk_FUN_1020fb40((uint32_t *)&local_20);
  ExceptionList = local_10;
  return;
}


// 0x102d46c0  (ghidra: FUN_102d46c0)  [gap]
int __fastcall
sub_102d46c0(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7)

{
  bool bVar1;
  uint32_t extraout_var;
  int iVar2;
  uint64_t uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = D2Common_10331((int *)param_2);
    if ((int)uVar3 != 0) {
      uVar3 = D2Common_10826((int)uVar3);
      iVar2 = (int)uVar3;
      bVar1 = functions_HelperFunctions_102ce900();
      if ((((CONCAT31(extraout_var,bVar1) == 0) && (iVar2 != 0xad)) && (iVar2 != 0xa6)) &&
         ((iVar2 != 0x9d && (iVar2 != 0x9f)))) {
        iVar2 = sub_6fccf450(param_1,(int *)param_2,param_3,param_4,param_5,param_6,param_7);
        return iVar2;
      }
      functions_D2NewFunctions_102bf800(param_2,0x13,0);
      return 0;
    }
  }
  return 0;
}


// 0x102d4750  (ghidra: FUN_102d4750)  [gap]
uint32_t __fastcall
sub_102d4750(int param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  iVar2 = functions_HelperFunctions_102ceae0(param_2);
  if (iVar2 == 0) {
    uVar3 = D2Common_10802((int *)param_3);
    if (uVar3 == 0x70707670) {
      return 0;
    }
  }
  else {
    uVar4 = D2Common_10695(*(uint *)(param_3 + 4));
    if ((int)uVar4 != 0) {
      sVar1 = *(short *)((int)uVar4 + 0x98);
      if (sVar1 == 100) {
        return 0;
      }
      if ((sVar1 == 0x6a) && (uVar4 = D2Common_10494_10277e30((int *)param_2,0x1e), (int)uVar4 != 0)
         ) {
        return 0;
      }
    }
  }
  uVar3 = sub_6fccedc0(param_1,(int *)param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar3;
}


// 0x102d47d0  (ghidra: FUN_102d47d0)  [gap]
uint __fastcall
sub_102d47d0(int param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7)

{
  int iVar1;
  uint uVar2;
  int *extraout_EDX;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar1 = functions_HelperFunctions_102ceae0(param_2);
    if (iVar1 == 0) {
      uVar2 = sub_6fcce6d0(param_1,extraout_EDX,param_3,param_4,param_5,param_6,param_7);
      return uVar2;
    }
  }
  return 0;
}

