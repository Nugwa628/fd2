/*
 * _unattributed/between_client_DrawHoverItem_and_functions_D2ClientFunctions_after_unit07.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x1022b450 - 0x1022da00
 * Functions     : 35
 * Attribution   : gap=35
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x1022b450  (ghidra: FUN_1022b450)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_1022b450(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  
  if ((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_103e7778 == 0)) {
    uStack_6 = (uint16_t)((uint)param_1 >> 0x10);
    if (DAT_104dbf3c == 10) {
      local_8 = CONCAT11(DAT_103e7648 + '\x01',0x55);
    }
    else {
      local_8 = 0xb55;
    }
    DAT_103e7648 = DAT_104dbf3c;
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b4a0  (ghidra: FUN_1022b4a0)  [gap]
void __fastcall sub_1022b4a0(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 0)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x155);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b4e0  (ghidra: FUN_1022b4e0)  [gap]
void __fastcall sub_1022b4e0(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 1)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x255);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b520  (ghidra: FUN_1022b520)  [gap]
void __fastcall sub_1022b520(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 2)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x355);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b560  (ghidra: FUN_1022b560)  [gap]
void __fastcall sub_1022b560(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 3)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x455);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b5a0  (ghidra: FUN_1022b5a0)  [gap]
void __fastcall sub_1022b5a0(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 4)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x555);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b5e0  (ghidra: FUN_1022b5e0)  [gap]
void __fastcall sub_1022b5e0(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 5)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x655);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b620  (ghidra: FUN_1022b620)  [gap]
void __fastcall sub_1022b620(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 6)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x755);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b660  (ghidra: FUN_1022b660)  [gap]
void __fastcall sub_1022b660(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 7)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x855);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b6a0  (ghidra: FUN_1022b6a0)  [gap]
void __fastcall sub_1022b6a0(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 8)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0x955);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b6e0  (ghidra: FUN_1022b6e0)  [gap]
void __fastcall sub_1022b6e0(uint32_t param_1)

{
  uint16_t local_8;
  uint16_t uStack_6;
  uint32_t _local_8;   /* not traced by Ghidra: value with no visible source */
  
  if (((*p_D2Client_DAT_6fbcbc34 == 0xc) && (DAT_104dbf3c != 9)) && (DAT_103e7778 == 0)) {
    _local_8 = CONCAT22((short)((uint)param_1 >> 0x10),0xa55);
    sub_102ed200(&local_8);
  }
  return;
}


// 0x1022b720  (ghidra: FUN_1022b720)  [gap]
void __fastcall sub_1022b720(wchar_t *param_1,wchar_t *param_2)

{
  wcsstr(param_1,param_2);
  return;
}


// 0x1022b730  (ghidra: FUN_1022b730)  [gap]
void sub_1022b730(void)

{
  int iVar1;
  
  if (DAT_103d98dc != 0) {
    iVar1 = *(int *)(DAT_103d98dc + 4);
    if (DAT_104e2514 == 1) {
      iVar1 = 1;
    }
    else if (DAT_104e2514 == 2) {
      iVar1 = 2;
    }
    if ((DAT_10398168 == -1) || (DAT_10398168 != iVar1)) {
      if (DAT_103d98c0 == 0) {
        DAT_103d98c0 = sub_102edee0("DATA\\GLOBAL\\ui\\PANEL\\controllermenu",0);
      }
      if (DAT_103d98b8 == 0) {
        DAT_103d98b8 = sub_102edee0("DATA\\GLOBAL\\ui\\CONTROLS\\controllercrosshair",0);
      }
      DAT_10398168 = iVar1;
      if (iVar1 == 1) {
        DAT_103d98d8 = sub_102edee0("DATA\\GLOBAL\\ui\\CONTROLS\\Controls_Xbox_20",0);
        DAT_103d98d0 = sub_102edee0("DATA\\GLOBAL\\ui\\CONTROLS\\Controls_Xbox_10",0);
      }
      else if ((iVar1 == 2) || (iVar1 == 3)) {
        DAT_103d98d8 = sub_102edee0("DATA\\GLOBAL\\ui\\CONTROLS\\Controls_Dualshock_20",0);
        DAT_103d98d0 = sub_102edee0("DATA\\GLOBAL\\ui\\CONTROLS\\Controls_Dualshock_10",0);
        return;
      }
    }
  }
  return;
}


// 0x1022b800  (ghidra: FUN_1022b800)  [gap]
bool __fastcall sub_1022b800(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = sub_1022b720(param_1,L"IG_");
  return iVar1 != 0;
}


// 0x1022b810  (ghidra: FUN_1022b810)  [gap]
uint32_t __cdecl sub_1022b810(int param_1,int param_2,uint reg_EAX)

{
  if ((param_1 == 0x54c) && ((param_2 == 0x5c4 || (reg_EAX = param_2, param_2 == 0x9cc)))) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return reg_EAX & 0xffffff00;
}


// 0x1022b840  (ghidra: FUN_1022b840)  [gap]
uint32_t __cdecl sub_1022b840(int param_1,int param_2,uint reg_EAX)

{
  if ((param_1 == 0x54c) && ((param_2 == 0xce6 || (reg_EAX = param_2, param_2 == 0xdf2)))) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return reg_EAX & 0xffffff00;
}


// 0x1022b870  (ghidra: FUN_1022b870)  [gap]
uint32_t __fastcall sub_1022b870(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) == 2)) {
    return 1;
  }
  return 0;
}


// 0x1022b890  (ghidra: FUN_1022b890)  [gap]
uint32_t __fastcall sub_1022b890(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) == 1)) {
    return 1;
  }
  return 0;
}


// 0x1022b8b0  (ghidra: FUN_1022b8b0)  [gap]
uint32_t __fastcall sub_1022b8b0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) == 3)) {
    return 1;
  }
  return 0;
}


// 0x1022b8d0  (ghidra: FUN_1022b8d0)  [gap]
uint __fastcall sub_1022b8d0(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10377a70 + ((uint)bVar1 ^ uVar2 & 0xff) * 4);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return ~uVar2;
}


// 0x1022b900  (ghidra: FUN_1022b900)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_1022b900(int param_1,DWORD param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  BOOL BVar12;
  uint32_t uVar13;
  float fVar14;
  uint32_t uVar15;
  DWORD local_10;
  DWORD local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((param_3 != 0x223) && (param_3 != 0x40)) {
    return;
  }
  iVar9 = 2;
  if (param_3 != 0x223) {
    iVar9 = 0;
  }
  bVar1 = *(byte *)(iVar9 + 3 + param_2);
  bVar2 = *(byte *)(iVar9 + 1 + param_2);
  bVar3 = *(byte *)(iVar9 + 2 + param_2);
  bVar4 = *(byte *)(iVar9 + 4 + param_2);
  bVar5 = *(byte *)(iVar9 + 8 + param_2);
  bVar6 = *(byte *)(iVar9 + 9 + param_2);
  bVar7 = *(byte *)(iVar9 + 5 + param_2);
  bVar8 = bVar7 & 0xf;
  *(float *)(param_1 + 0xc) = (float)(bVar7 >> 4 & 1);
  *(float *)(param_1 + 0x10) = (float)(*(byte *)(iVar9 + 5 + param_2) >> 5 & 1);
  *(float *)(param_1 + 0x14) = (float)(*(byte *)(iVar9 + 5 + param_2) >> 6 & 1);
  *(float *)(param_1 + 0x18) = (float)(*(byte *)(iVar9 + 5 + param_2) >> 7);
  *(float *)(param_1 + 0x1c) = (float)(*(byte *)(iVar9 + 6 + param_2) & 1);
  *(float *)(param_1 + 0x20) = (float)(*(byte *)(iVar9 + 6 + param_2) >> 1 & 1);
  *(float *)(param_1 + 0x30) = (float)(*(byte *)(iVar9 + 6 + param_2) >> 4 & 1);
  *(float *)(param_1 + 0x2c) = (float)(*(byte *)(iVar9 + 6 + param_2) >> 5 & 1);
  *(float *)(param_1 + 0x24) = (float)(*(byte *)(iVar9 + 6 + param_2) >> 6 & 1);
  *(float *)(param_1 + 0x28) = (float)(*(byte *)(iVar9 + 6 + param_2) >> 7);
  *(float *)(param_1 + 0x34) = (float)(*(byte *)(iVar9 + 7 + param_2) & 1);
  *(float *)(param_1 + 0x38) = (float)(*(byte *)(iVar9 + 7 + param_2) >> 1 & 1);
  fVar14 = (float)bVar2 / 255.0;
  fVar14 = (fVar14 + fVar14) - 1.0;
  *(float *)(param_1 + 0x40) = fVar14;
  *(float *)(param_1 + 0x3c) = -fVar14;
  fVar14 = (float)bVar3 / 255.0;
  fVar14 = (fVar14 + fVar14) - 1.0;
  *(float *)(param_1 + 0x48) = fVar14;
  *(float *)(param_1 + 0x44) = -fVar14;
  fVar14 = (float)bVar1 / 255.0;
  fVar14 = (fVar14 + fVar14) - 1.0;
  *(float *)(param_1 + 0x50) = fVar14;
  *(float *)(param_1 + 0x4c) = -fVar14;
  fVar14 = (float)bVar4 / 255.0;
  fVar14 = (fVar14 + fVar14) - 1.0;
  *(float *)(param_1 + 0x58) = fVar14;
  uVar15 = 0;
  *(float *)(param_1 + 0x54) = -fVar14;
  if ((float)bVar5 / 255.0 < 0.3) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x3f800000;
  }
  *(uint32_t *)(param_1 + 0x5c) = uVar13;
  if ((float)bVar6 / 255.0 < 0.3) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x3f800000;
  }
  *(uint32_t *)(param_1 + 0x60) = uVar13;
  if (((bVar8 == 0) || (bVar8 == 1)) || (bVar8 == 7)) {
    *(uint32_t *)(param_1 + 0x6c) = 0x3f800000;
    if (bVar8 != 1) goto LAB_1022bc05;
LAB_1022bc16:
    *(uint32_t *)(param_1 + 0x68) = 0x3f800000;
    if (bVar8 != 3) goto LAB_1022bc21;
LAB_1022bc32:
    *(uint32_t *)(param_1 + 0x70) = 0x3f800000;
    if (bVar8 != 5) goto LAB_1022bc3d;
  }
  else {
    *(uint32_t *)(param_1 + 0x6c) = 0;
LAB_1022bc05:
    if ((bVar8 == 2) || (bVar8 == 3)) goto LAB_1022bc16;
    *(uint32_t *)(param_1 + 0x68) = 0;
LAB_1022bc21:
    if ((bVar8 == 4) || (bVar8 == 5)) goto LAB_1022bc32;
    *(uint32_t *)(param_1 + 0x70) = 0;
LAB_1022bc3d:
    if ((bVar8 != 6) && (bVar8 != 7)) goto LAB_1022bc48;
  }
  uVar15 = 0x3f800000;
LAB_1022bc48:
  iVar10 = 0;
  *(uint32_t *)(param_1 + 100) = uVar15;
  *(uint32_t *)(param_1 + 4) = 2;
  if (param_3 == 0x40) {
    local_10 = 0x20;
    *(byte *)(param_1 + 0x5c0) = 5;
    *(uint8_t *)(param_1 + 0x5c1) = 0xff;
  }
  else {
    local_10 = 0;
    if (param_3 == 0x223) {
      local_10 = 0x4e;
      iVar10 = 1;
      *(uint16_t *)(param_1 + 0x5c0) = 0x11a2;
      *(uint8_t *)(param_1 + 0x5c2) = 0xc0;
      *(uint8_t *)(param_1 + 0x5c4) = 0xff;
    }
  }
  iVar10 = param_1 + iVar10;
  *(uint32_t *)(param_1 + 0x554) = 0x3e99999a;
  *(char *)(iVar9 + 0x5c4 + iVar10) = (char)(int)(*(float *)(param_1 + 0x54c) * 255.0);
  *(char *)(iVar9 + 0x5c5 + iVar10) = (char)(int)(*(float *)(param_1 + 0x550) * 255.0);
  *(char *)(iVar9 + 0x5c6 + iVar10) = (char)(int)(*(float *)(param_1 + 0x554) * 255.0);
  *(char *)(iVar9 + 0x5c7 + iVar10) = (char)(int)(*(float *)(param_1 + 0x558) * 255.0);
  *(char *)(iVar9 + 0x5c8 + iVar10) = (char)(int)(*(float *)(param_1 + 0x55c) * 255.0);
  local_c = param_2;
  if (param_3 == 0x223) {
    uVar11 = sub_1022b8d0((byte *)(param_1 + 0x5c0),0x4b);
    *(uint *)(param_1 + 0x60b) = uVar11;
  }
  BVar12 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x620),(LPOVERLAPPED)(param_1 + 0x624),&local_c
                               ,0);
  if ((BVar12 != 0) && (*(HANDLE *)(param_1 + 0x620) != (HANDLE)0xffffffff)) {
    WriteFile(*(HANDLE *)(param_1 + 0x620),(LPCVOID)(iVar10 + 0x5c0),local_10,(LPDWORD)0x0,
              (LPOVERLAPPED)(param_1 + 0x624));
  }
  return;
}


// 0x1022bd90  (ghidra: FUN_1022bd90)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
sub_1022bd90(void *this,int param_1,float param_2,float param_3,float param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,
            uint32_t param_10,uint32_t param_11,float param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  longlong lVar7;
  uint local_3c;
  float afStack_34 [4];
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  float fStack_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  afStack_34[3] = (float)param_5;
  uStack_24 = param_6;
  uStack_20 = param_7;
  uStack_1c = param_8;
  afStack_34[0] = param_2;
  afStack_34[1] = param_3;
  afStack_34[2] = param_4;
  local_18 = param_9;
  uStack_14 = param_10;
  uStack_10 = param_11;
  fStack_c = param_12;
  if (param_1 == 2) {
    fVar5 = (float10)roundf(param_3 * 8.0);
    fVar6 = (float10)roundf(afStack_34[0] * 8.0);
    *(uint8_t *)this = 0x25;
    *(ushort *)((int)this + 1) =
         (ushort)(1 << ((byte)(int)fVar5 & 0x1f)) | (ushort)(1 << ((int)fVar6 & 0x1fU));
    roundf(afStack_34[2] * 7.0);
    lVar7 = FUN_10303180();
    *(char *)((int)this + 3) = (char)lVar7;
    return;
  }
  if (param_1 == 1) {
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
    local_3c = 0;
    uVar3 = 0;
    do {
      if (0.0 < afStack_34[uVar4]) {
        uVar1 = uVar1 | 1 << (uVar4 & 0x1f) & 0xffffU;
        fVar5 = (float10)roundf(afStack_34[uVar4] * 7.0);
        uVar2 = local_3c | ((int)fVar5 & 0xffU) << ((byte)uVar3 & 0x1f);
        local_3c = uVar2;
      }
      uVar3 = uVar3 + 3;
      uVar4 = uVar4 + 1;
    } while (uVar3 < 0x1e);
    *(uint8_t *)this = 0x21;
    *(short *)((int)this + 1) = (short)uVar1;
    *(uint *)((int)this + 3) = uVar2;
    return;
  }
  if (param_1 == 3) {
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
    local_3c = 0;
    uVar3 = 0;
    do {
      if (0.0 < afStack_34[uVar4]) {
        uVar1 = uVar1 | 1 << (uVar4 & 0x1f) & 0xffffU;
        fVar5 = (float10)roundf(afStack_34[uVar4] * 7.0);
        uVar2 = local_3c | ((int)fVar5 & 0xffU) << ((byte)uVar3 & 0x1f);
        local_3c = uVar2;
      }
      uVar3 = uVar3 + 3;
      uVar4 = uVar4 + 1;
    } while (uVar3 < 0x1e);
    *(short *)((int)this + 1) = (short)uVar1;
    *(uint8_t *)this = 0x26;
    *(uint *)((int)this + 3) = uVar2;
    *(char *)((int)this + 9) = (char)(int)(fStack_c * 255.0);
  }
  return;
}


// 0x1022bf90  (ghidra: FUN_1022bf90)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_1022bf90(int param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  uint8_t uVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  int local_24;
  int local_20;
  int local_1c;
  DWORD local_18;
  int local_14;
  DWORD local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (*param_2 == '1') {
    if ((param_3 != 0x4e) && (param_3 != 0x223)) {
      return;
    }
    iVar10 = 10;
    bVar3 = true;
    local_14 = 0xb;
    local_18 = 0xc;
    local_1c = 4;
    iVar9 = 8;
    local_20 = 5;
    iVar6 = 3;
    local_24 = 6;
    local_c = 7;
  }
  else {
    if (*param_2 != '\x01') {
      return;
    }
    if (param_3 != 0x40) {
      return;
    }
    iVar10 = 8;
    bVar3 = false;
    local_14 = 9;
    local_18 = 10;
    local_1c = 2;
    iVar9 = 6;
    local_20 = 3;
    iVar6 = 1;
    local_24 = 4;
    local_c = 5;
  }
  uVar12 = 0x3f800000;
  *(float *)(param_1 + 0x3c) =
       -(((float)(byte)param_2[iVar6] / 255.0 + (float)(byte)param_2[iVar6] / 255.0) - 1.0);
  *(float *)(param_1 + 0x40) =
       ((float)(byte)param_2[iVar6] / 255.0 + (float)(byte)param_2[iVar6] / 255.0) - 1.0;
  *(float *)(param_1 + 0x44) =
       -(((float)(byte)param_2[local_1c] / 255.0 + (float)(byte)param_2[local_1c] / 255.0) - 1.0);
  *(float *)(param_1 + 0x48) =
       ((float)(byte)param_2[local_1c] / 255.0 + (float)(byte)param_2[local_1c] / 255.0) - 1.0;
  *(float *)(param_1 + 0x4c) =
       -(((float)(byte)param_2[local_20] / 255.0 + (float)(byte)param_2[local_20] / 255.0) - 1.0);
  *(float *)(param_1 + 0x50) =
       ((float)(byte)param_2[local_20] / 255.0 + (float)(byte)param_2[local_20] / 255.0) - 1.0;
  *(float *)(param_1 + 0x54) =
       -(((float)(byte)param_2[local_24] / 255.0 + (float)(byte)param_2[local_24] / 255.0) - 1.0);
  *(float *)(param_1 + 0x58) =
       ((float)(byte)param_2[local_24] / 255.0 + (float)(byte)param_2[local_24] / 255.0) - 1.0;
  if ((float)(byte)param_2[local_c] / 255.0 < 0.3) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x3f800000;
  }
  *(uint32_t *)(param_1 + 0x5c) = uVar11;
  if ((float)(byte)param_2[iVar9] / 255.0 < 0.3) {
    uVar12 = 0;
  }
  *(uint32_t *)(param_1 + 0x60) = uVar12;
  bVar2 = param_2[iVar10];
  bVar4 = bVar2 & 0xf;
  if (((bVar4 == 5) || (bVar4 == 6)) || (bVar4 == 7)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  *(float *)(param_1 + 100) = (float)iVar9;
  if (((bVar4 == 1) || (bVar4 == 2)) || (bVar4 == 3)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  *(float *)(param_1 + 0x68) = (float)iVar9;
  if (((bVar4 == 7) || ((bVar2 & 0xf) == 0)) || (bVar4 == 1)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  *(float *)(param_1 + 0x6c) = (float)iVar9;
  if (((bVar4 == 3) || (bVar4 == 4)) || (bVar4 == 5)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  *(float *)(param_1 + 0x70) = (float)iVar9;
  *(float *)(param_1 + 0xc) = (float)(param_2[iVar10] & 0x10);
  *(float *)(param_1 + 0x10) = (float)(param_2[iVar10] & 0x20);
  *(float *)(param_1 + 0x14) = (float)(param_2[iVar10] & 0x40);
  *(float *)(param_1 + 0x18) = (float)(param_2[iVar10] & 0x80);
  *(float *)(param_1 + 0x1c) = (float)(param_2[local_14] & 1);
  *(float *)(param_1 + 0x20) = (float)(param_2[local_14] & 2);
  *(float *)(param_1 + 0x30) = (float)(param_2[local_14] & 0x10);
  *(float *)(param_1 + 0x2c) = (float)(param_2[local_14] & 0x20);
  *(float *)(param_1 + 0x24) = (float)(param_2[local_14] & 0x40);
  *(float *)(param_1 + 0x28) = (float)(param_2[local_14] & 0x80);
  *(float *)(param_1 + 0x34) = (float)(param_2[local_18] & 1);
  *(float *)(param_1 + 0x38) = (float)(param_2[local_18] & 2);
  bVar2 = param_2[local_18];
  *(uint32_t *)(param_1 + 4) = 3;
  *(float *)(param_1 + 0x74) = (float)(bVar2 & 4);
  memset((void *)(param_1 + 0x5c1),0,0x5f);
  if (bVar3) {
    local_18 = 0x4e;
    uVar5 = 0xa2;
    *(uint16_t *)(param_1 + 0x5c1) = 0x231;
    iVar9 = 3;
    local_14 = 0x5c1;
  }
  else {
    local_18 = 0x30;
    uVar5 = 2;
    local_14 = 0x5c0;
    iVar9 = 1;
  }
  *(uint8_t *)(param_1 + 0x5c0) = uVar5;
  pbVar1 = (byte *)(param_1 + 0x5c0 + iVar9);
  *pbVar1 = *pbVar1 | 0xf;
  pbVar1 = (byte *)(param_1 + 0x5c1 + iVar9);
  *pbVar1 = *pbVar1 | 4;
  pbVar1 = (byte *)(param_1 + 0x5e6 + iVar9);
  *pbVar1 = *pbVar1 | 4;
  *(char *)(param_1 + 0x5c2 + iVar9) = (char)(int)(*(float *)(param_1 + 0x54c) * 255.0);
  *(char *)(param_1 + 0x5c3 + iVar9) = (char)(int)(*(float *)(param_1 + 0x550) * 255.0);
  sub_1022bd90((void *)(param_1 + 0x5ca + iVar9),*(int *)(param_1 + 0x590),
               *(float *)(param_1 + 0x594),*(float *)(param_1 + 0x598),*(float *)(param_1 + 0x59c),
               *(uint32_t *)(param_1 + 0x5a0),*(uint32_t *)(param_1 + 0x5a4),
               *(uint32_t *)(param_1 + 0x5a8),*(uint32_t *)(param_1 + 0x5ac),
               *(uint32_t *)(param_1 + 0x5b0),*(uint32_t *)(param_1 + 0x5b4),
               *(uint32_t *)(param_1 + 0x5b8),*(float *)(param_1 + 0x5bc));
  sub_1022bd90((void *)(param_1 + 0x5d5 + iVar9),*(int *)(param_1 + 0x560),
               *(float *)(param_1 + 0x564),*(float *)(param_1 + 0x568),*(float *)(param_1 + 0x56c),
               *(uint32_t *)(param_1 + 0x570),*(uint32_t *)(param_1 + 0x574),
               *(uint32_t *)(param_1 + 0x578),*(uint32_t *)(param_1 + 0x57c),
               *(uint32_t *)(param_1 + 0x580),*(uint32_t *)(param_1 + 0x584),
               *(uint32_t *)(param_1 + 0x588),*(float *)(param_1 + 0x58c));
  *(uint32_t *)(param_1 + 0x554) = 0x3e99999a;
  *(uint8_t *)(param_1 + 0x5ec + iVar9) = 0x4c;
  *(char *)(param_1 + 0x5ed + iVar9) = (char)(int)(*(float *)(param_1 + 0x558) * 255.0);
  *(char *)(param_1 + 0x5ee + iVar9) = (char)(int)(*(float *)(param_1 + 0x55c) * 255.0);
  if (bVar3) {
    uVar7 = sub_1022b8d0((byte *)(param_1 + 0x5c0),0x4a);
    *(uint *)(param_1 + 0x60a) = uVar7;
  }
  BVar8 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x620),(LPOVERLAPPED)(param_1 + 0x624),&local_c,
                              0);
  if ((BVar8 != 0) && (*(HANDLE *)(param_1 + 0x620) != (HANDLE)0xffffffff)) {
    WriteFile(*(HANDLE *)(param_1 + 0x620),(LPCVOID)(local_14 + param_1),local_18,(LPDWORD)0x0,
              (LPOVERLAPPED)(param_1 + 0x624));
  }
  return;
}


// 0x1022c510  (ghidra: FUN_1022c510)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall sub_1022c510(uint *param_1,HRAWINPUT param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  UINT UVar3;
  UINT UVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  char *extraout_ECX;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint extraout_EDX;
  uint32_t *puVar11;
  char *pcVar12;
  uint32_t *puVar13;
  uint local_38;
  uint local_30;
  uint8_t local_2c [8];
  int local_24;
  int iStack_20;
  HRAWINPUT local_c;
  uint local_8;
  uint8_t  stack0xffffffac;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_38 = 4;
  if (4 < *param_1) {
    iVar9 = 0x18f0;
    do {
      puVar11 = (uint32_t *)(param_1[1] + 0xc + iVar9);
      puVar13 = (uint32_t *)(param_1[1] + 0x10c + iVar9);
      local_38 = local_38 + 1;
      iVar9 = iVar9 + 0x63c;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
    } while (local_38 < *param_1);
  }
  local_30 = 0;
  local_c = param_2;
  GetRawInputData(param_2,0x10000003,(LPVOID)0x0,&local_30,0x10);
  if (DAT_103d98cc == (LPVOID)0x0) {
    DAT_103d98cc = malloc(local_30);
    DAT_103d98c8 = local_30;
  }
  else if (local_30 != DAT_103d98c8) {
    DAT_103d98cc = realloc(DAT_103d98cc,local_30);
    DAT_103d98c8 = local_30;
  }
  UVar3 = GetRawInputData(local_c,0x10000003,DAT_103d98cc,&local_30,0x10);
  uVar5 = 0;
  if (UVar3 != 0) {
    local_c = (HRAWINPUT)0x20;
    UVar3 = GetRawInputDeviceInfoW
                      (*(HANDLE *)((int)DAT_103d98cc + 8),0x2000000b,local_2c,(PUINT)&local_c);
    GetRawInputDeviceInfoW(*(HANDLE *)((int)DAT_103d98cc + 8),0x20000005,(LPVOID)0x0,&local_30);
    if (DAT_103d98c4 == (LPVOID)0x0) {
      DAT_103d98c4 = malloc(local_30);
      DAT_103d98bc = local_30;
    }
    else if (local_30 != DAT_103d98bc) {
      DAT_103d98c4 = realloc(DAT_103d98c4,local_30);
      DAT_103d98bc = local_30;
    }
    UVar4 = GetRawInputDeviceInfoW
                      (*(HANDLE *)((int)DAT_103d98cc + 8),0x20000005,DAT_103d98c4,&local_30);
    pvVar2 = DAT_103d98cc;
    uVar5 = CONCAT31((int3)(UVar4 >> 8),UVar4 != 0);
    if ((UVar3 != 0) && (UVar4 != 0)) {
      uVar1 = *param_1;
      uVar10 = 4;
      if (4 < uVar1) {
        pcVar12 = (char *)(param_1[1] + 0x18f0);
        uVar5 = *(uint *)((int)DAT_103d98cc + 8);
        pcVar8 = DAT_103d98dc;
        iVar9 = local_24;
        iVar7 = iStack_20;
        do {
          if ((uVar5 == *(uint *)(pcVar12 + 8)) &&
             (((pcVar8 == (char *)0x0 || (*pcVar8 == '\0')) || (pcVar8 == pcVar12)))) {
            uVar6 = sub_1022b810(iVar9,iVar7,&stack0xffffffac);
            if ((char)uVar6 != '\0') {
              uVar6 = sub_1022b900((int)pcVar12,(int)pvVar2 + 0x18,*(int *)((int)pvVar2 + 0x10));
              DAT_103d98dc = pcVar12;
              return CONCAT31((int3)((uint)uVar6 >> 8),1);
            }
            uVar6 = sub_1022b840(iVar9,iVar7,&stack0xffffffac);
            if ((char)uVar6 != '\0') {
              uVar6 = sub_1022bf90((int)pcVar12,(char *)((int)pvVar2 + 0x18),
                                   *(int *)((int)pvVar2 + 0x10));
              DAT_103d98dc = pcVar12;
              return CONCAT31((int3)((uint)uVar6 >> 8),1);
            }
            uVar5 = *(uint *)((int)pvVar2 + 8);
            pcVar8 = extraout_ECX;
            uVar10 = extraout_EDX;
          }
          uVar10 = uVar10 + 1;
          pcVar12 = pcVar12 + 0x63c;
        } while (uVar10 < uVar1);
      }
    }
  }
  return uVar5 & 0xffffff00;
}


// 0x1022c770  (ghidra: FUN_1022c770)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_1022c770(uint *param_1,HANDLE param_2)

{
  wchar_t wVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  void *pvVar8;
  HANDLE pvVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  wchar_t *pwVar13;
  uint32_t *puVar14;
  uint32_t *puVar15;
  uint32_t local_e50 [399];
  HANDLE local_814;
  uint *local_810;
  uint local_80c;
  wchar_t local_808 [1024];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_814 = param_2;
  local_810 = param_1;
  memset(local_808,0,0x800);
  local_80c = 0x400;
  GetRawInputDeviceInfoW(param_2,0x20000007,local_808,&local_80c);
  bVar5 = sub_1022b800(local_808);
  if (!bVar5) {
    uVar2 = *param_1;
    uVar12 = 4;
    bVar5 = uVar2 == 4;
    if (4 < uVar2) {
      pwVar13 = (wchar_t *)(param_1[1] + 0x1b3c);
      do {
        pwVar10 = local_808;
        pwVar6 = pwVar13;
        do {
          wVar1 = *pwVar10;
          bVar5 = (ushort)wVar1 < (ushort)*pwVar6;
          if (wVar1 != *pwVar6) {
LAB_1022c82e:
            uVar7 = -(uint)bVar5 | 1;
            goto LAB_1022c833;
          }
          if (wVar1 == L'\0') break;
          wVar1 = pwVar10[1];
          bVar5 = (ushort)wVar1 < (ushort)pwVar6[1];
          if (wVar1 != pwVar6[1]) goto LAB_1022c82e;
          pwVar10 = pwVar10 + 2;
          pwVar6 = pwVar6 + 2;
        } while (wVar1 != L'\0');
        uVar7 = 0;
LAB_1022c833:
        if (uVar7 == 0) break;
        uVar12 = uVar12 + 1;
        pwVar13 = pwVar13 + 0x31e;
      } while (uVar12 < uVar2);
      bVar5 = uVar12 == uVar2;
      param_1 = local_810;
    }
    if (bVar5) {
      *param_1 = uVar2 + 1;
      lVar3 = (ulonglong)(uVar2 + 1) * 0x63c;
      pvVar8 = realloc((void *)param_1[1],
                       -(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
      local_810[1] = (uint)pvVar8;
      memset(local_e50,0,0x63c);
      puVar14 = local_e50;
      puVar15 = (uint32_t *)(uVar12 * 0x63c + (int)pvVar8);
      for (iVar11 = 399; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
    }
    puVar4 = local_810;
    iVar11 = local_810[1] + uVar12 * 0x63c;
    *(HANDLE *)(iVar11 + 8) = local_814;
    sub_1022da00((wchar_t *)(iVar11 + 0x24c),local_808);
    pvVar9 = CreateFileW(local_808,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x40000000,(HANDLE)0x0)
    ;
    *(HANDLE *)(iVar11 + 0x620) = pvVar9;
    HidD_GetProductString(pvVar9,iVar11 + 0x34c,0x80);
    HidD_GetManufacturerString(*(uint32_t *)(iVar11 + 0x620),iVar11 + 0x44c,0x80);
    *(uint8_t *)(uVar12 * 0x63c + puVar4[1]) = 1;
  }
  return;
}


// 0x1022c940  (ghidra: FUN_1022c940)  [gap]
void __fastcall sub_1022c940(uint *param_1,int param_2)

{
  uint uVar1;
  HANDLE hObject;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 4;
  if (4 < *param_1) {
    iVar3 = 0x18f0;
    do {
      if ((param_2 == *(int *)(iVar3 + 8 + param_1[1])) &&
         (bVar2 = sub_1022b800((wchar_t *)(param_1[1] + 0x24c + iVar3)), !bVar2)) {
        uVar1 = param_1[1];
        *(uint8_t *)(uVar1 + iVar3) = 0;
        hObject = *(HANDLE *)(uVar1 + 0x620 + iVar3);
        if (hObject != (HANDLE)0xffffffff) {
          CloseHandle(hObject);
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x63c;
    } while (uVar4 < *param_1);
  }
  return;
}


// 0x1022c9b0  (ghidra: FUN_1022c9b0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_1022c9b0(uint *param_1,HANDLE param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint8_t local_1c [16];
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_3 == 1) {
    sub_1022c770(param_1,param_2);
  }
  else if (param_3 == 2) {
    sub_1022c940(param_1,(int)param_2);
  }
  iVar2 = 0;
  uVar3 = 0;
  do {
    iVar1 = XInputGetState(iVar2,local_1c);
    iVar2 = iVar2 + 1;
    *(bool *)(uVar3 + param_1[1]) = iVar1 == 0;
    *(int *)(param_1[1] + 0x638 + uVar3) = iVar1;
    uVar3 = uVar3 + 0x63c;
  } while (uVar3 < 0x18f0);
  return;
}


// 0x1022ca30  (ghidra: FUN_1022ca30)  [gap]
void __fastcall sub_1022ca30(HWND param_1,UINT param_2,WPARAM param_3,HRAWINPUT param_4)

{
  char cVar1;
  uint *puVar2;
  uint32_t uVar3;
  uint *puVar4;
  
  if (DAT_104e24ca != '\0') {
    puVar2 = GetPropA(param_1,"userData");
    if (DAT_10398446 != '\0') {
      if (((((param_2 == 0x200) || (param_2 == 0x240)) || (param_2 == 0x119)) &&
          ((0x27 < DAT_103d98d4 || (DAT_103d98d4 = DAT_103d98d4 + 1, 0x27 < DAT_103d98d4)))) &&
         (DAT_103d9867 == '\x01')) {
        DAT_103d9867 = '\0';
        sub_10256150();
      }
      if (((param_2 == 0x201) || (param_2 == 0x204)) && (DAT_103d9867 == '\x01')) {
        if (DAT_103d5ee3 == '\0') {
          DAT_103d9867 = '\0';
          sub_10256150();
        }
        else {
          DAT_103d5ee3 = '\0';
        }
      }
      if (param_2 == 0xff) {
        if (puVar2 != (uint *)0x0) {
          uVar3 = sub_1022c510(puVar2,param_4);
          if ((char)uVar3 != '\0') {
            cVar1 = sub_1022d020();
            if (cVar1 == '\0') {
              DAT_103d9866 = 0;
            }
            else {
              DAT_103d98d4 = 0;
              DAT_103d9866 = 1;
              if (DAT_103d9867 == '\0') {
                DAT_103d9867 = '\x01';
                sub_10256150();
              }
            }
          }
        }
        goto LAB_1022cb52;
      }
    }
    if (param_2 == 0xfe) {
      puVar4 = &DAT_103d98ac;
      if (puVar2 != (uint *)0x0) {
        puVar4 = puVar2;
      }
      sub_1022c9b0(puVar4,param_4,param_3);
    }
  }
LAB_1022cb52:
  DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
  return;
}


// 0x1022cb70  (ghidra: FUN_1022cb70)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall sub_1022cb70(HWND param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint8_t local_30 [16];
  RAWINPUTDEVICE local_20;
  uint32_t local_14;
  uint32_t local_10;
  HWND local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  DAT_103d98ac = 0;
  local_20.usUsagePage = 1;
  local_20.usUsage = 5;
  local_20.dwFlags = 0x2100;
  local_14 = 0x40001;
  local_10 = 0x2100;
  DAT_103d98b4 = param_1;
  local_20.hwndTarget = param_1;
  local_c = param_1;
  RegisterRawInputDevices(&local_20,2,0xc);
  DAT_103d98ac = CONCAT44(DAT_103d98b0,4);
  pvVar1 = calloc(4,0x63c);
  iVar4 = 0;
  uVar3 = 0;
  DAT_103d98b0 = (int)pvVar1;
  do {
    *(uint32_t *)(uVar3 + 4 + DAT_103d98b0) = 1;
    iVar2 = XInputGetState(iVar4,local_30);
    iVar4 = iVar4 + 1;
    *(bool *)(uVar3 + DAT_103d98b0) = iVar2 == 0;
    *(int *)(uVar3 + 0x638 + DAT_103d98b0) = iVar2;
    uVar3 = uVar3 + 0x63c;
  } while (uVar3 < 0x18f0);
  return;
}


// 0x1022cc60  (ghidra: FUN_1022cc60)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint sub_1022cc60(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  uint uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint16_t local_1c;
  uint16_t local_1a;
  uint8_t local_18 [4];
  uint local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uVar2 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((3 < DAT_103d98ac) && (DAT_103d98b0 != 0)) {
    puVar5 = (uint32_t *)(DAT_103d98b0 + 0xc);
    puVar6 = (uint32_t *)(DAT_103d98b0 + 0x10c);
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (uint32_t *)(DAT_103d98b0 + 0x648);
    puVar6 = (uint32_t *)(DAT_103d98b0 + 0x748);
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (uint32_t *)(DAT_103d98b0 + 0xc84);
    puVar6 = (uint32_t *)(DAT_103d98b0 + 0xd84);
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (uint32_t *)(DAT_103d98b0 + 0x12c0);
    puVar6 = (uint32_t *)(DAT_103d98b0 + 0x13c0);
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_8 = uVar2;
    SetPropA(DAT_103d98b4,"userData",&DAT_103d98ac);
    iVar3 = 0;
    uVar7 = 0;
    pcVar4 = DAT_103d98dc;
    do {
      pcVar1 = (char *)(uVar7 + DAT_103d98b0);
      uVar2 = DAT_103d98b0;
      if ((*(char *)(uVar7 + DAT_103d98b0) != '\0') &&
         (((pcVar4 == (char *)0x0 || (*pcVar4 == '\0')) || (pcVar4 == pcVar1)))) {
        uVar2 = XInputGetState(iVar3,local_18);
        pcVar4 = DAT_103d98dc;
        if (uVar2 == 0) {
          uVar9 = 0x3f800000;
          if ((local_14 & 0x1000) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0xc) = uVar8;
          if ((local_14 & 0x2000) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x10) = uVar8;
          if ((local_14 & 0x4000) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x14) = uVar8;
          if ((local_14 & 0x8000) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x18) = uVar8;
          if ((local_14 & 4) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x1c) = uVar8;
          if ((local_14 & 8) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x20) = uVar8;
          if ((local_14 & 1) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x24) = uVar8;
          if ((local_14 & 2) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x28) = uVar8;
          if ((local_14 & 0x100) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x2c) = uVar8;
          if ((local_14 & 0x200) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x30) = uVar8;
          if ((local_14 & 0x40) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x34) = uVar8;
          if ((char)local_14 < '\0') {
            uVar8 = 0x3f800000;
          }
          else {
            uVar8 = 0;
          }
          *(uint32_t *)(pcVar1 + 0x38) = uVar8;
          if ((local_14 & 0x20) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x3c) = uVar8;
          if ((local_14 & 0x10) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x40) = uVar8;
          if ((float)(local_14 >> 0x10 & 0xff) / 255.0 < 0.3) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0x3f800000;
          }
          *(uint32_t *)(pcVar1 + 0x44) = uVar8;
          if ((float)(local_14 >> 0x18) / 255.0 < 0.3) {
            uVar9 = 0;
          }
          *(uint32_t *)(pcVar1 + 0x48) = uVar9;
          *(float *)(pcVar1 + 0x4c) = (float)-(int)local_10 / 32767.0;
          *(float *)(pcVar1 + 0x50) = (float)(int)local_10 / 32767.0;
          *(float *)(pcVar1 + 0x54) = (float)(int)local_e / 32767.0;
          *(float *)(pcVar1 + 0x58) = (float)-(int)local_e / 32767.0;
          *(float *)(pcVar1 + 0x5c) = (float)-(int)local_c / 32767.0;
          *(float *)(pcVar1 + 0x60) = (float)(int)local_c / 32767.0;
          *(float *)(pcVar1 + 100) = (float)(int)local_a / 32767.0;
          *(float *)(pcVar1 + 0x68) = (float)-(int)local_a / 32767.0;
          local_1c = (uint16_t)(int)(*(float *)(pcVar1 + 0x54c) * 65535.0);
          local_1a = (uint16_t)(int)(*(float *)(pcVar1 + 0x550) * 65535.0);
          uVar9 = XInputSetState(iVar3,&local_1c);
          if ((DAT_103d98dc != (char *)0x0) && (*DAT_103d98dc != '\0')) {
LAB_1022d002:
            return CONCAT31((int3)((uint)uVar9 >> 8),1);
          }
          if (((((short)local_14 != 0) || ((local_10 != 0 || (local_e != 0)))) || (local_c != 0)) ||
             (pcVar4 = DAT_103d98dc, local_a != 0)) {
            DAT_103d98dc = pcVar1;
            *pcVar1 = '\x01';
            goto LAB_1022d002;
          }
        }
        else {
          *pcVar1 = '\0';
        }
        *(uint *)(pcVar1 + 0x638) = uVar2;
      }
      uVar7 = uVar7 + 0x63c;
      iVar3 = iVar3 + 1;
    } while (uVar7 < 0x18f0);
  }
  return uVar2 & 0xffffff00;
}


// 0x1022d020  (ghidra: FUN_1022d020)  [gap]
uint8_t sub_1022d020(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float *pfVar3;
  uint8_t extraout_DL;
  uint8_t uVar4;
  uint8_t extraout_DL_00;
  uint8_t extraout_DL_01;
  uint uVar5;
  float in_XMM0_Da;
  int local_14;
  
  iVar1 = DAT_103d98dc;
  if (DAT_103d98dc == 0) {
    return 0;
  }
  sub_10214350(DAT_103d98dc);
  iVar2 = sub_1022b870(extraout_ECX);
  if (iVar2 == 0) {
    iVar2 = sub_1022b8b0(extraout_ECX_00);
    if (iVar2 == 0) {
      iVar2 = sub_1022b890(extraout_ECX_01);
      uVar4 = extraout_DL_01;
      if (iVar2 != 0) {
        pfVar3 = (float *)(iVar1 + 0xc);
        uVar5 = 0xfffffff0;
        local_14 = 0x40;
        do {
          if (uVar5 < 8) {
            if ((in_XMM0_Da <= *pfVar3) || (*pfVar3 <= -in_XMM0_Da)) {
              uVar4 = 1;
              goto LAB_1022d1ab;
            }
          }
          else {
LAB_1022d1ab:
            if ((pfVar3[0x40] != *pfVar3) &&
               (*(uint8_t *)(iVar1 + 0x21c + uVar5) = 1, *pfVar3 != 0.0)) {
              uVar4 = 1;
            }
          }
          pfVar3 = pfVar3 + 1;
          uVar5 = uVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      return uVar4;
    }
    pfVar3 = (float *)(iVar1 + 0xc);
    uVar5 = 0xfffffff4;
    local_14 = 0x40;
    uVar4 = extraout_DL_00;
    do {
      if (uVar5 < 8) {
        if ((in_XMM0_Da <= *pfVar3) || (*pfVar3 <= -in_XMM0_Da)) {
          uVar4 = 1;
          goto LAB_1022d121;
        }
      }
      else {
LAB_1022d121:
        if ((pfVar3[0x40] != *pfVar3) &&
           (*(uint8_t *)(uVar5 + 0x218 + iVar1) = 1, *pfVar3 != 0.0)) {
          uVar4 = 1;
        }
      }
      pfVar3 = pfVar3 + 1;
      uVar5 = uVar5 + 1;
      local_14 = local_14 + -1;
      if (local_14 == 0) {
        return uVar4;
      }
    } while( true );
  }
  pfVar3 = (float *)(iVar1 + 0xc);
  uVar5 = 0xfffffff4;
  local_14 = 0x40;
  uVar4 = extraout_DL;
  do {
    if (uVar5 < 8) {
      if ((in_XMM0_Da <= *pfVar3) || (*pfVar3 <= -in_XMM0_Da)) {
        uVar4 = 1;
        goto LAB_1022d09b;
      }
    }
    else {
LAB_1022d09b:
      if ((pfVar3[0x40] != *pfVar3) && (*(uint8_t *)(iVar1 + 0x218 + uVar5) = 1, *pfVar3 != 0.0))
      {
        uVar4 = 1;
      }
    }
    pfVar3 = pfVar3 + 1;
    uVar5 = uVar5 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      return uVar4;
    }
  } while( true );
}


// 0x1022d200  (ghidra: FUN_1022d200)  [gap]
void sub_1022d200(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_103d98ac != 0) {
    iVar2 = 0;
    do {
      uVar1 = 0;
      do {
        *(uint8_t *)(DAT_103d98b0 + iVar2 + 0x20c + uVar1) = 0;
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x40);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x63c;
    } while (uVar3 < DAT_103d98ac);
  }
  return;
}


// 0x1022d250  (ghidra: FUN_1022d250)  [gap]
void sub_1022d250(void)

{
  DAT_103d98d8 = 0;
  DAT_103d98d0 = 0;
  DAT_103d98c0 = 0;
  DAT_10398168 = 0xffffffff;
  return;
}


// 0x1022d280  (ghidra: FUN_1022d280)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1022d280(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  wchar_t *pwVar5;
  int local_510;
  uint8_t local_50c [256];
  uint8_t local_40c [256];
  uint8_t local_30c [256];
  uint8_t local_20c [256];
  uint8_t local_10c [260];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((DAT_103d98dc == (char *)0x0) || (*DAT_103d98dc == '\0')) {
    uVar3 = 0;
    iVar1 = 0x6e;
    if (DAT_103d98ac != 0) {
      local_510 = 0;
      do {
        iVar4 = DAT_103d98b0 + local_510;
        sub_1021cb90(local_50c,L"%d: %d %d %s");
        D2Win_10150(local_50c,0x10,iVar1,0,0);
        iVar2 = sub_1022b890(iVar4);
        if (iVar2 == 0) {
          iVar2 = sub_1022b870(iVar4);
          if (iVar2 != 0) {
            pwVar5 = L"PS4/Dualshock";
LAB_1022d81e:
            sub_1021cb90(local_10c,pwVar5);
            sub_1021cb90(local_20c,L"%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f");
            sub_1021cb90(local_30c,L"%.2f %.2f %.2f %.2f");
            goto LAB_1022d947;
          }
          iVar2 = sub_1022b8b0(iVar4);
          if (iVar2 != 0) {
            pwVar5 = L"PS5/Dualsense";
            goto LAB_1022d81e;
          }
        }
        else {
          sub_1021cb90(local_10c,L"Xbox/XInput");
          sub_1021cb90(local_20c,L"%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f");
          sub_1021cb90(local_30c,L"%.2f %.2f %.2f %.2f");
LAB_1022d947:
          sub_1021cb90(local_40c,L"%.2f %.2f");
        }
        D2Win_10150(local_10c,0x10,iVar1 + 0x10,0,0);
        D2Win_10150(local_20c,0x10,iVar1 + 0x20,0,0);
        D2Win_10150(local_30c,0x10,iVar1 + 0x30,0,0);
        D2Win_10150(local_40c,0x10,iVar1 + 0x40,0,0);
        uVar3 = uVar3 + 1;
        local_510 = local_510 + 0x63c;
        iVar1 = iVar1 + 0x50;
      } while (uVar3 < DAT_103d98ac);
    }
    return;
  }
  uVar3 = 0;
  if (DAT_103d98ac != 0) {
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_103d98ac);
  }
  iVar1 = sub_1022b890((int)DAT_103d98dc);
  if (iVar1 == 0) {
    iVar1 = sub_1022b870(extraout_ECX);
    if (iVar1 == 0) {
      iVar1 = sub_1022b8b0(extraout_ECX_00);
      if (iVar1 == 0) goto LAB_1022d5a3;
      pwVar5 = L"PS5/Dualsense: %i";
    }
    else {
      pwVar5 = L"PS4/Dualshock: %i";
    }
    sub_1021cb90(local_10c,pwVar5);
    sub_1021cb90(local_20c,L"%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f");
    sub_1021cb90(local_30c,L"%.2f %.2f %.2f %.2f");
  }
  else {
    sub_1021cb90(local_10c,L"Xbox/XInput: %i");
    sub_1021cb90(local_20c,L"%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f");
    sub_1021cb90(local_30c,L"%.2f %.2f %.2f %.2f");
  }
  sub_1021cb90(local_40c,L"%.2f %.2f");
LAB_1022d5a3:
  D2Win_10150(local_10c,0x10,0x5e,0,0);
  D2Win_10150(local_20c,0x10,0x6e,0,0);
  D2Win_10150(local_30c,0x10,0x7e,0,0);
  D2Win_10150(local_40c,0x10,0x8e,0,0);
  sub_1021cb90(local_50c,L"X:%d, Y:%d");
  D2Win_10150(local_50c,0x10,0xae,0,0);
  return;
}


// 0x1022da00  (ghidra: FUN_1022da00)  [gap]
void __fastcall sub_1022da00(wchar_t *param_1,wchar_t *param_2)

{
  wcscpy_s(param_1,0x80,param_2);
  return;
}

