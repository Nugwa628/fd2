/*
 * _unattributed/between_client_Sound_SoundSample_and_functions_D2CommonFunctions_unit26_10259d70.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10259d70 - 0x10262910
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


// 0x10259d70  (ghidra: FUN_10259d70)  [gap]
void sub_10259d70(int *param_1,int *param_2)

{
  if (DAT_104e24c0 != '\0') {
    WARDEN_WardenClient_6fb3afd0(param_1,param_2);
    return;
  }
  return;
}


// 0x10259d90  (ghidra: FUN_10259d90)  [gap]
void sub_10259d90(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *p_D2Client_DAT_6fbcbbfc;
  if ((((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x14), iVar2 != 0)) &&
      (*(char *)(param_2 + 4) == '\0')) &&
     ((iVar3 = *(int *)(iVar2 + 0x254), iVar3 == 0 || (iVar3 == 1)))) {
    *(uint16_t *)(iVar2 + 600 + iVar3 * 2) = *(uint16_t *)(param_2 + 1);
    *(uint32_t *)(*(int *)(iVar1 + 0x14) + 0x25c + iVar3 * 4) = *(uint32_t *)(param_2 + 5);
  }
  sub_102ed200(param_2);
  return;
}


// 0x10259df0  (ghidra: FUN_10259df0)  [gap]
uint sub_10259df0(int *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    uVar1 = UNIT_CUnit_6fb568e0((int *)0x0,param_2,param_3,param_4);
    return uVar1;
  }
  if (((*(int *)*p_D2Client_DAT_6fbcbbfc == 0) && (*param_1 == 1)) && (0x2df < (uint)param_1[1])) {
    if ((param_1[1] != 0x421) || ((param_1[4] != 1 && (param_1[4] != 9)))) {
      iVar2 = D2Common_10871((int)param_1,0x92);
      if (iVar2 == 0) goto LAB_10259e4e;
    }
    return 0;
  }
LAB_10259e4e:
  uVar1 = UNIT_CUnit_6fb568e0(param_1,param_2,param_3,param_4);
  return uVar1;
}


// 0x10259e70  (ghidra: sub_6faf8b20)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_JmpTo_D2Client_sub_6faf8b20_10259e70(void)

{
  int iVar1;
  
  if (p_sub_6faf8b20 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_sub_6faf8b20 = sub_GetDllOffset_102f10f0(0,*(int *)(iVar1 * 4 + 0x103c7bb0));
  }
                    /* WARNING: Could not recover jumptable at 0x10294933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*p_sub_6faf8b20)();
  return;
}


// 0x10259e80  (ghidra: FUN_10259e80)  [gap]
void sub_10259e80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,void *param_7,uint32_t param_8)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  void *this;
  void *this_00;
  void *this_01;
  
  piVar2 = UI_npcmenu_6faf6150();
  uVar3 = D2Common_10331(piVar2);
  uVar3 = D2Common_10826(uVar3);
  if (piVar2[1] == 0x93) {
    if (0x88 < (int)uVar3) {
      if (param_7 != D2Client_loc_6faf8380) {
        return;
      }
      uVar3 = functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"gamble");
      sub_102eef90(this_00,param_1,param_2,uVar3,param_4,param_5,param_6,D2Client_loc_6fafabe0,param_8);
      sub_102eef90(this_01,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  else if (piVar2[1] == 0x16f) {
    pvVar1 = D2Client_loc_6fafa2f0;
    if (*(void **)(p_D2Client_DAT_6fba3ee5 + 4) == D2Client_loc_6faf8810) {
      pvVar1 = D2Client_loc_6faf8810;
    }
    if (param_7 == pvVar1) {
      sub_102eef90(param_7,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar3 = functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NPCMenuHire");
      sub_102eef90(this,param_1,param_2,uVar3,param_4,param_5,param_6,sub_6faf9440,param_8);
      return;
    }
  }
  sub_102eef90(param_7,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// 0x10259fc0  (ghidra: FUN_10259fc0)  [gap]
void sub_10259fc0(uint32_t param_1,int *param_2,uint32_t param_3)

{
  if (((param_2 != (int *)0x0) && (*param_2 == 5)) && ((*(byte *)(param_2 + 0x31) & 2) != 0)) {
    return;
  }
  sub_102ef140(param_1,param_2,param_3);
  return;
}


// 0x10259ff0  (ghidra: FUN_10259ff0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t
sub_10259ff0(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
            ,uint32_t param_6,uint32_t param_7)

{
  void *pvVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306b0d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_2 + 0x18) == 0) {
    sub_1020f990(local_2c,"WARNING|D2CLIENT_DrawTile|Tile was NULL");
    local_8 = 0;
    client_DrawHoverItem_102250a0(local_2c," nWorldX: ");
    pvVar1 = sub_1022fa80(local_44);
    local_8._0_1_ = 1;
    client_Sound_Sound_10233cb0(local_2c,(int)pvVar1);
    local_8._0_1_ = 0;
    thunk_FUN_1020fc60(local_44);
    client_DrawHoverItem_102250a0(local_2c," nWorldY: ");
    pvVar1 = sub_1022fa80(local_44);
    local_8 = CONCAT31(local_8._1_3_,2);
    client_Sound_Sound_10233cb0(local_2c,(int)pvVar1);
    thunk_FUN_1020fc60(local_44);
    uVar3 = thunk_FUN_1020fc60(local_2c);
    uVar2 = (uint32_t)uVar3;
  }
  else {
    uVar2 = sub_102ef220(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  ExceptionList = local_10;
  return uVar2;
}


// 0x1025a0e0  (ghidra: FUN_1025a0e0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1025a0e0(short *param_1,uint32_t param_2)

{
  int iVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint32_t local_64 [6];
  uint8_t local_4c [4];
  uint8_t local_48 [4];
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306b5d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  client_DrawHoverItem_10225040(local_2c,(short *)&DAT_1037748c);
  local_8 = 0;
  client_DrawHoverItem_10225040(local_44,param_1);
  local_8._0_1_ = 1;
  iVar1 = client_DrawHoverItem_10224f20((int)local_44);
  if (iVar1 != 0) {
    pvVar2 = sub_102542b0(local_64);
    local_8._0_1_ = 2;
    client_DrawHoverItem_10225250(local_2c,(int)pvVar2);
    local_8._0_1_ = 1;
    thunk_FUN_102250f0(local_64);
    client_DrawHoverItem_10225220(local_2c,(short *)&DAT_1037c7c4);
    sub_1025f0b0(local_44,local_4c);
    sub_1025f0e0(local_44,local_48);
    sub_10260110(local_2c);
    uVar3 = thunk_FUN_10225280((int)local_2c);
    client_DrawHoverItem_10225040((void *)((ulonglong)uVar3 >> 0x20),(short *)uVar3);
    functions_HelperFunctions_102cf850();
  }
  sub_6fb2d850(param_1,param_2);
  thunk_FUN_102250f0(local_44);
  thunk_FUN_102250f0(local_2c);
  ExceptionList = local_10;
  return;
}


// 0x1025a1e0  (ghidra: FUN_1025a1e0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1025a1e0(void)

{
  uint32_t local_54;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  int local_20;
  uint64_t local_1c;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_1c = 0;
  local_14 = 0;
  if (DAT_104e6db4 == 0) {
    DAT_104e6db4 = sub_102edee0("DATA\\GLOBAL\\ui\\menu\\800helpborder",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6db4;
  D2gfx_10041((uint)&local_54,0,0x100,0xffffffff,5,0);
  local_54 = 1;
  D2gfx_10041((uint)&local_54,0,0x200,0xffffffff,5,0);
  local_54 = 2;
  D2gfx_10041((uint)&local_54,0x42,0x14,0xffffffff,5,0);
  local_54 = 3;
  D2gfx_10041((uint)&local_54,0x24e,0x14,0xffffffff,5,0);
  local_54 = 4;
  D2gfx_10041((uint)&local_54,0x323,0x100,0xffffffff,5,0);
  local_54 = 5;
  D2gfx_10041((uint)&local_54,0x418,0x100,0xffffffff,5,0);
  local_54 = 6;
  D2gfx_10041((uint)&local_54,0x418,0x200,0xffffffff,5,0);
  return;
}


// 0x1025a320  (ghidra: FUN_1025a320)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1025a320(void)

{
  uint8_t local_9c [52];
  int local_68;
  uint32_t local_54;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  int local_20;
  uint64_t local_1c;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_1c = 0;
  local_14 = 0;
  memset(local_9c,0,0x48);
  if (DAT_104e6ddc == 0) {
    DAT_104e6ddc = sub_102edee0("DATA\\GLOBAL\\items\\invkey",0);
  }
  local_68 = DAT_104e6ddc;
  if (DAT_104e6e24 == 0) {
    DAT_104e6e24 = sub_102edee0("DATA\\GLOBAL\\ui\\panel\\invchar6",0);
  }
  local_20 = DAT_104e6e24;
  local_54 = 4;
  *(uint32_t *)(*(int *)(DAT_104e6e24 + 0x28) + 8) = 0x3c;
  D2gfx_10041((uint)&local_54,0x17c,0x96,0xffffffff,5,0);
  local_54 = 5;
  *(uint32_t *)(*(int *)(local_20 + 0x2c) + 8) = 0x3c;
  D2gfx_10041((uint)&local_54,0x27c,0x96,0xffffffff,5,0);
  local_54 = 6;
  D2gfx_10041((uint)&local_54,0x17c,0x146,0xffffffff,5,0);
  local_54 = 7;
  D2gfx_10041((uint)&local_54,0x27c,0x146,0xffffffff,5,0);
  D2gfx_10010(0x17d,0x36,700,0x36,0xe,0xff);
  D2gfx_10010(0x17d,0x36,0x17d,0x3a,0xe,0xff);
  D2gfx_10010(700,0x36,700,0x3a,0xe,0xff);
  D2gfx_10014(0x274,0xab,0x28e,0xc4,0x77,0);
  if (DAT_104e6de8 == 0) {
    DAT_104e6de8 = sub_102edee0("DATA\\GLOBAL\\items\\invrsIst",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6de8;
  D2gfx_10041((uint)&local_54,0x27c,0xbe,0xffffffff,5,0);
  D2gfx_10014(0x21d,0x54,0x236,0x6d,0x77,0);
  if (DAT_104e6db0 == 0) {
    DAT_104e6db0 = sub_102edee0("DATA\\GLOBAL\\items\\invmss",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6db0;
  D2gfx_10041((uint)&local_54,0x21c,0x6f,0xffffffff,5,0);
  if (DAT_104e6e1c == 0) {
    DAT_104e6e1c = sub_102edee0("DATA\\GLOBAL\\ui\\cursor\\ohand",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6e1c;
  D2gfx_10041((uint)&local_54,0x22b,0x66,0xffffffff,5,0);
  if (DAT_104e6e50 == 0) {
    DAT_104e6e50 = sub_102edee0("DATA\\GLOBAL\\items\\invbox",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6e50;
  D2gfx_10041((uint)&local_54,0x18c,0x8b,0xffffffff,5,0);
  if (DAT_104e6dd8 == 0) {
    DAT_104e6dd8 = sub_102edee0("DATA\\GLOBAL\\items\\invch1",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6dd8;
  D2gfx_10041((uint)&local_54,0x18b,0xe4,0xffffffff,5,0);
  D2gfx_10041((uint)&local_54,0x1a7,0xe4,0xffffffff,5,0);
  if (DAT_104e6e18 == 0) {
    DAT_104e6e18 = sub_102edee0("DATA\\GLOBAL\\items\\invch2",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6e18;
  D2gfx_10041((uint)&local_54,0x1a8,0x138,0xffffffff,5,0);
  if (DAT_104e6dc0 == 0) {
    DAT_104e6dc0 = sub_102edee0("DATA\\GLOBAL\\items\\invch3",0);
  }
  local_54 = 0;
  local_20 = DAT_104e6dc0;
  D2gfx_10041((uint)&local_54,0x18b,0x139,0xffffffff,5,0);
  D2gfx_10010(0x18a,0xc6,0x2ac,0xc6,0x9b,0xff);
  D2gfx_10010(0x18a,0xc6,0x18a,0x13a,0x9b,0xff);
  D2gfx_10010(0x2ac,0x13a,0x18a,0x13a,0x9b,0xff);
  D2gfx_10010(0x2ac,0x13a,0x2ac,0xc6,0x9b,0xff);
  if (DAT_104e6de0 == 0) {
    DAT_104e6de0 = sub_102edee0("DATA\\GLOBAL\\items\\invgsva",0);
  }
  local_20 = DAT_104e6de0;
  D2gfx_10041((uint)&local_54,0x20,0x4d,0xffffffff,5,0);
  if (DAT_104e6df8 == 0) {
    DAT_104e6df8 = sub_102edee0("DATA\\GLOBAL\\items\\invgsvb",0);
  }
  local_20 = DAT_104e6df8;
  D2gfx_10041((uint)&local_54,0x32,0x4d,0xffffffff,5,0);
  if (DAT_104e6e34 == 0) {
    DAT_104e6e34 = sub_102edee0("DATA\\GLOBAL\\items\\invgsvc",0);
  }
  local_20 = DAT_104e6e34;
  D2gfx_10041((uint)&local_54,0x45,0x4d,0xffffffff,5,0);
  if (DAT_104e6dc4 == 0) {
    DAT_104e6dc4 = sub_102edee0("DATA\\GLOBAL\\items\\invgsvds",0);
  }
  local_20 = DAT_104e6dc4;
  D2gfx_10041((uint)&local_54,0x25,0x66,0xffffffff,5,0);
  D2gfx_10041((uint)local_9c,0x96,0x66,0xffffffff,5,0);
  if (DAT_104e6e3c == 0) {
    DAT_104e6e3c = sub_102edee0("DATA\\GLOBAL\\items\\invgsves",0);
  }
  local_20 = DAT_104e6e3c;
  D2gfx_10041((uint)&local_54,0xc4,0x66,0xffffffff,5,0);
  if (DAT_104e6e44 == 0) {
    DAT_104e6e44 = sub_102edee0("DATA\\GLOBAL\\items\\invrsEl",0);
  }
  local_20 = DAT_104e6e44;
  D2gfx_10041((uint)&local_54,0x30,0x7d,0xffffffff,5,0);
  if (DAT_104e6e38 == 0) {
    DAT_104e6e38 = sub_102edee0("DATA\\GLOBAL\\items\\invrsLem",0);
  }
  local_20 = DAT_104e6e38;
  D2gfx_10041((uint)&local_54,0x52,0x7d,0xffffffff,5,0);
  D2gfx_10041((uint)local_9c,0x7d,0x7d,0xffffffff,5,0);
  if (DAT_104e6e54 == 0) {
    DAT_104e6e54 = sub_102edee0("DATA\\GLOBAL\\items\\invrsPul",0);
  }
  local_20 = DAT_104e6e54;
  D2gfx_10041((uint)&local_54,0x30,0x96,0xffffffff,5,0);
  if (DAT_104e6e00 == 0) {
    DAT_104e6e00 = sub_102edee0("DATA\\GLOBAL\\items\\invrsCham",0);
  }
  local_20 = DAT_104e6e00;
  D2gfx_10041((uint)&local_54,0x52,0x96,0xffffffff,5,0);
  D2gfx_10041((uint)local_9c,0x7d,0x96,0xffffffff,5,0);
  if (DAT_104e6e2c == 0) {
    DAT_104e6e2c = sub_102edee0("DATA\\GLOBAL\\items\\invjw2",0);
  }
  local_20 = DAT_104e6e2c;
  D2gfx_10041((uint)&local_54,0x3d,0xb2,0xffffffff,5,0);
  D2gfx_10041((uint)local_9c,0x61,0xb2,0xffffffff,5,0);
  if (DAT_104e6e4c == 0) {
    DAT_104e6e4c = sub_102edee0("DATA\\GLOBAL\\items\\invjewf",0);
  }
  local_20 = DAT_104e6e4c;
  D2gfx_10041((uint)&local_54,0xa8,0xb2,0xffffffff,5,0);
  if (DAT_104e6dec == 0) {
    DAT_104e6dec = sub_102edee0("DATA\\GLOBAL\\items\\invlbox",0);
  }
  local_20 = DAT_104e6dec;
  D2gfx_10041((uint)&local_54,0x1e,0xca,0xffffffff,5,0);
  if (DAT_104e6df0 == 0) {
    DAT_104e6df0 = sub_102edee0("DATA\\GLOBAL\\items\\invlpp",0);
  }
  local_20 = DAT_104e6df0;
  D2gfx_10041((uint)&local_54,0x1e,0xe3,0xffffffff,5,0);
  if (DAT_104e6de4 == 0) {
    DAT_104e6de4 = sub_102edee0("DATA\\GLOBAL\\items\\invwss",0);
  }
  local_20 = DAT_104e6de4;
  D2gfx_10041((uint)&local_54,0x1e,0x118,0xffffffff,5,0);
  return;
}


// 0x1025aa30  (ghidra: FUN_1025aa30)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1025aa30(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint8_t local_9c [52];
  int local_68;
  uint8_t local_54 [52];
  int local_20;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  memset(local_9c,0,0x48);
  memset(local_54,0,0x48);
  if (DAT_104e6e5c == 0) {
    DAT_104e6e5c = sub_102edee0("DATA\\GLOBAL\\ui\\menu\\helpwhitebullet",0);
  }
  local_68 = DAT_104e6e5c;
  if (DAT_104e6e30 == 0) {
    DAT_104e6e30 = sub_102edee0("DATA\\GLOBAL\\ui\\menu\\helpyellowbullet",0);
  }
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0x14;
  local_20 = DAT_104e6e30;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpTitle");
  D2Win_10150(pvVar1,0x1b2,iVar2,iVar3,iVar4);
  iVar2 = D2Win_10184(7);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x2d;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts1");
  D2Win_10150(pvVar1,0x2e9,iVar3,iVar4,iVar5);
  D2Win_10184(5);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x46;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts2");
  D2Win_10150(pvVar1,0x2c6,iVar3,iVar4,iVar5);
  D2gfx_10010(0x2c4,0x68,0x23c,0x68,0x20,0xff);
  D2gfx_10041((uint)local_9c,0x237,0x6d,0xffffffff,5,0);
  D2Win_10184(0);
  D2gfx_10041((uint)local_54,0x2c8,0x52,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x55;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts3");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x55;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts4");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0x61,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 100;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts5");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 100;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts6");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0x70,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x73;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts7");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x73;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts8");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0x7f,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x82;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts9");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x82;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts10");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0x8e,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x91;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts11");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x91;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts12");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10010(0x2c4,0xb4,0x295,0xb4,0x20,0xff);
  D2gfx_10041((uint)local_9c,0x290,0xb9,0xffffffff,5,0);
  D2Win_10184(5);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0xaf;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts13");
  D2Win_10150(pvVar1,0x2c6,iVar3,iVar4,iVar5);
  D2Win_10184(0);
  D2gfx_10041((uint)local_54,0x2c8,0xbb,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xbe;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts14");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xbe;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts15");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0xca,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xcd;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts11");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xcd;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpShortcuts16");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2Win_10184(5);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0xeb;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats1");
  D2Win_10150(pvVar1,0x2c6,iVar3,iVar4,iVar5);
  D2Win_10184(0);
  D2gfx_10041((uint)local_54,0x2c8,0xf7,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xfa;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats2");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xfa;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats3");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0x106,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x109;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats4");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x109;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats5");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x2c8,0x115,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x118;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats6");
  D2Win_10150(pvVar1,0x2d5,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0x118;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpStats7");
  D2Win_10150(pvVar1,0x375,iVar3,iVar4,iVar5);
  D2gfx_10010(0x268,0x110,0x268,0x177,0x20,0xff);
  D2gfx_10041((uint)local_9c,0x264,0x110,0xffffffff,5,0);
  D2Win_10184(7);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x18b;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpCharm1");
  D2Win_10150(pvVar1,0x1b3,iVar3,iVar4,iVar5);
  D2Win_10184(8);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x1a4;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpCharm2");
  D2Win_10150(pvVar1,0x18b,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x1b3;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpCharm3");
  D2Win_10150(pvVar1,0x18b,iVar3,iVar4,iVar5);
  D2gfx_10010(0x174,0x7b,0x19c,0x7b,0x20,0xff);
  D2gfx_10041((uint)local_9c,0x19c,0x7f,0xffffffff,5,0);
  D2Win_10184(7);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x2d;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes1");
  D2Win_10150(pvVar1,0x50,iVar3,iVar4,iVar5);
  D2Win_10184(0);
  D2gfx_10041((uint)local_54,0x13,0x43,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x46;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes2");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0x5c,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x5f;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes3");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0x75,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x78;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes4");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0x8e,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x91;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes5");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0xa7,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0xaa;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes6");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0xc0,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0xc3;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes7");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0xd9,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0xdc;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes8");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xeb;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes9");
  D2Win_10150(pvVar1,0x3e,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 4;
  iVar3 = 0xfa;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes10");
  D2Win_10150(pvVar1,0x3e,iVar3,iVar4,iVar5);
  D2gfx_10041((uint)local_54,0x13,0x110,0xffffffff,5,0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x113;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes11");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2Win_10184(8);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x13b;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes12");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x14a;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes13");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x159;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpRecipes14");
  D2Win_10150(pvVar1,0x20,iVar3,iVar4,iVar5);
  D2Win_10184(0);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0x1ea;
  pvVar1 = (void *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"NewHelpChat1");
  D2Win_10150(pvVar1,0xb2,iVar3,iVar4,iVar5);
  D2gfx_10014(0x7f,*p_D2Client_DAT_6fb8bc4c + -0x67,*p_D2Client_DAT_6fb8bc48 + -500,*p_D2Client_DAT_6fb8bc4c + -0x38,0,1);
  D2Win_10150(&DAT_1037ce00,0x82,0x200,0,0);
  D2Win_10184(iVar2);
  return;
}


// 0x1025b2f0  (ghidra: FUN_1025b2f0)  [gap]
void sub_1025b2f0(void)

{
  sub_6fb72790(10,1,0);
  sub_6fb72790(0x13,1,0);
  sub_1025a320();
  sub_1025aa30();
  sub_1025a1e0();
  *p_D2Client_DAT_6fba5204 = 1;
  *p_D2Client_DAT_6fbcc4b0 = 0;
  *p_D2Client_DAT_6fbcc4b4 = 0;
  return;
}


// 0x1025b350  (ghidra: D2Net_10024)  [gap]
uint sub_JmpTo_D2Net_10024_1025b350(ushort param_1,uint param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Net_10024 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Net_10024 = sub_GetDllOffset_102f10f0(5,*(int *)(&DAT_103c6e68 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028cfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Net_10024)();
  return uVar2;
}


// 0x1025b360  (ghidra: FUN_1025b360)  [gap]
void sub_1025b360(char *param_1,uint32_t param_2)

{
  uint8_t local_10;
  int local_f;
  uint32_t local_b;
  
  if ((((*param_1 == '?') && (param_1[1] == '\0')) && (DAT_103e7650 != 0)) && (DAT_103e777c != 0)) {
    local_b = *(uint32_t *)(DAT_103e777c + 0xc);
    local_f = DAT_103e7650;
    local_10 = 0x27;
    sub_102ed200(&local_10);
    DAT_103e7650 = 0;
    return;
  }
  sub_102ef5e0(param_1,param_2);
  return;
}


// 0x1025b3d0  (ghidra: FUN_1025b3d0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_1025b3d0(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint32_t uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  uint32_t *puVar9;
  char *pcVar10;
  uint64_t uVar11;
  uint32_t local_1a8 [6];
  uint local_190;
  uint32_t local_18c [6];
  uint32_t local_174 [6];
  uint32_t local_15c [6];
  uint32_t local_144 [6];
  uint32_t local_12c [6];
  char local_114 [256];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306c0e;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == 0) {
LAB_1025bab3:
    uVar8 = sub_102ef5c0();
    ExceptionList = local_10;
    return uVar8;
  }
  sub_1020f990(local_15c,(char *)(param_1 + 3));
  local_8 = 0;
  sub_10237930(local_174);
  local_8._0_1_ = 1;
  iVar4 = sub_1025f190((int)local_15c);
  pvVar5 = sub_10237880(local_15c,local_18c,0);
  sub_1023e1c0(local_174,pvVar5);
  thunk_FUN_1020fc60(local_18c);
  cVar2 = sub_10247350(local_174,(byte *)".savepath");
  if (cVar2 == '\0') {
    cVar2 = sub_10247350(local_174,(byte *)".savehotkeys");
    if (cVar2 == '\0') {
      cVar2 = sub_10247350(local_174,(byte *)".loadhotkeys");
      if (cVar2 == '\0') {
        cVar2 = sub_10247350(local_174,(byte *)".debugcontroller");
        if (cVar2 != '\0') {
          DAT_104dbb08 = (uint)(DAT_104dbb08 == 0);
          goto LAB_1025ba35;
        }
        cVar2 = sub_10247350(local_174,(byte *)".playsound");
        if (cVar2 == '\0') {
          cVar2 = sub_10247350(local_174,(byte *)".debugsound");
          if (cVar2 != '\0') {
            DAT_103e7638 = DAT_103e7638 == '\0';
            goto LAB_1025ba35;
          }
          cVar2 = sub_10247350(local_174,(byte *)".show-ui");
          if (cVar2 != '\0') {
            DAT_10398028 = (uint)(DAT_10398028 == 0);
            if (DAT_10398028 != 0) {
              DAT_103d9844 = 0;
            }
            goto LAB_1025ba35;
          }
          cVar2 = sub_10247350(local_174,(byte *)".set-cursor");
          if (cVar2 == '\0') {
            cVar2 = sub_10247350(local_174,(byte *)".completedifficulty");
            if (cVar2 != '\0') {
              *(ushort *)(*p_D2Client_DAT_6fbcb980 + 0x1eb) =
                   (*p_D2Client_DAT_6fbcc390 + 1) * 0x500 | *(ushort *)(*p_D2Client_DAT_6fbcb980 + 0x1eb) & 0xe0ff;
            }
            thunk_FUN_1020fc60(local_174);
            local_8 = 0xffffffff;
            thunk_FUN_1020fc60(local_15c);
            goto LAB_1025bab3;
          }
          if (iVar4 == -1) goto LAB_1025ba35;
          sub_102378e0(local_15c);
          sub_1025f190((int)local_15c);
          sub_10237880(local_15c,local_144,0);
          local_8._0_1_ = 10;
          iVar4 = sub_102378a0((int)local_144);
          if (iVar4 == -1) {
            iVar4 = sub_102541d0((int)local_144);
            bVar1 = DAT_103d9844 < 0x28;
            DAT_103d9844 = 0;
            if (bVar1) {
              DAT_103d9844 = iVar4;
            }
          }
          goto LAB_1025ba2a;
        }
        if (iVar4 == -1) goto LAB_1025ba35;
        sub_102378e0(local_15c);
        iVar4 = sub_1025f190((int)local_15c);
        sub_10237880(local_15c,local_12c,0);
        local_8._0_1_ = 6;
        iVar7 = client_DrawHoverItem_10224f20((int)local_12c);
        if ((iVar7 == 0) || (iVar7 = sub_102378a0(extraout_ECX), iVar7 != -1)) goto LAB_1025b593;
        iVar7 = sub_102541d0((int)local_12c);
        if (iVar7 < *p_D2Client_DAT_6fbcc250) {
          pcVar10 = (char *)(iVar7 * 0x92 + *p_D2Client_DAT_6fbcc24c);
          if (((pcVar10 == (char *)0x0) || (pcVar10[0x3e] != '\0')) ||
             (*(int *)(pcVar10 + 0x8e) == 2)) {
            sub_1020f990(local_144,"Cannot play looping sounds or music tracks");
            local_8._0_1_ = 8;
            uVar11 = thunk_FUN_1020fe30((int)local_144);
            sub_10237780(1,(int)uVar11);
            thunk_FUN_1020fc60(local_144);
            puVar9 = local_12c;
          }
          else {
            local_190 = (uint)(byte)pcVar10[0x3c];
            if (iVar4 != -1) {
              sub_102378e0(local_15c);
              sub_1025f190((int)local_15c);
              pvVar5 = sub_10237880(local_15c,local_1a8,0);
              sub_1023e1c0(local_12c,pvVar5);
              thunk_FUN_1020fc60(local_1a8);
              iVar4 = client_DrawHoverItem_10224f20((int)local_12c);
              if ((iVar4 != 0) && (iVar4 = sub_102378a0(extraout_ECX_00), iVar4 == -1)) {
                local_190 = sub_102541d0((int)local_12c);
              }
            }
            sub_1020f990(local_144,pcVar10);
            local_8._0_1_ = 7;
            pvVar5 = sub_1025fb90(local_1a8,"Playing sound: ",(int)local_144);
            sub_1023e1c0(local_144,pvVar5);
            thunk_FUN_1020fc60(local_1a8);
            uVar11 = thunk_FUN_1020fe30((int)local_144);
            sub_10237780(7,(int)uVar11);
            _D2Client_PlaySoundWithCustomVolumeOrPriority_20(0,iVar7,local_190,200,1);
            thunk_FUN_1020fc60(local_144);
            puVar9 = local_12c;
          }
        }
        else {
          sub_1020f990(local_18c,"Sound ID out of bounds.");
          local_8._0_1_ = 9;
          uVar11 = thunk_FUN_1020fe30((int)local_18c);
          sub_10237780(1,(int)uVar11);
          thunk_FUN_1020fc60(local_18c);
          puVar9 = local_12c;
        }
      }
      else {
        sub_1020f990(local_12c,"");
        local_8._0_1_ = 5;
        iVar7 = sub_10229d50();
        if (iVar7 == 0) {
          client_DrawHoverItem_102250e0(local_12c,"Could not load hotkeys, default_pd2.key file was not found");
          uVar11 = thunk_FUN_1020fe30((int)local_12c);
          sub_10237780(1,(int)uVar11);
          client_DrawHoverItem_102250e0(local_12c,
                       "Make sure you\'ve saved your hotkeys with .savehotkeys before trying to load"
                      );
          uVar11 = thunk_FUN_1020fe30((int)local_12c);
          sub_10237780(1,(int)uVar11);
          puVar9 = local_12c;
        }
        else {
          sub_10229aa0();
          sub_10229ff0();
          sub_1022a180(1,iVar4);
          client_DrawHoverItem_102250e0(local_12c,"Hotkeys loaded");
          uVar11 = thunk_FUN_1020fe30((int)local_12c);
          sub_10237780(7,(int)uVar11);
          puVar9 = local_12c;
        }
      }
    }
    else {
      sub_1022a180(1,iVar4);
      sub_1020f990(local_144,"Hotkeys saved");
      local_8._0_1_ = 4;
      uVar11 = thunk_FUN_1020fe30((int)local_144);
      sub_10237780(7,(int)uVar11);
LAB_1025ba2a:
      puVar9 = local_144;
    }
  }
  else {
    uVar6 = Storm_422((uint *)"Diablo II","Save Path",0,local_114,0x400);
    if (uVar6 == 0) {
      sub_10237780(7,"Old path: (Not Found)");
    }
    else {
      sub_1020f990(local_144,local_114);
      local_8._0_1_ = 2;
      pvVar5 = sub_1025fb90(local_18c,"Old path: ",(int)local_144);
      sub_1023e1c0(local_144,pvVar5);
      thunk_FUN_1020fc60(local_18c);
      uVar11 = thunk_FUN_1020fe30((int)local_144);
      sub_10237780(7,(int)uVar11);
      local_8._0_1_ = 1;
      thunk_FUN_1020fc60(local_144);
    }
    sub_1020f9c0(local_12c,0x104e2488);
    local_8._0_1_ = 3;
    bVar3 = sub_10260150(local_12c);
    if ((bVar3 != 0) && (uVar6 != 0)) {
      pvVar5 = sub_1025fb90(local_18c,"New Path: ",(int)local_12c);
      sub_1023e1c0(local_12c,pvVar5);
      thunk_FUN_1020fc60(local_18c);
      uVar11 = thunk_FUN_1020fe30((int)local_12c);
      sub_10237780(8,(int)uVar11);
    }
LAB_1025b593:
    puVar9 = local_12c;
  }
  thunk_FUN_1020fc60(puVar9);
LAB_1025ba35:
  thunk_FUN_1020fc60(local_174);
  uVar11 = thunk_FUN_1020fc60(local_15c);
  ExceptionList = local_10;
  return (int)uVar11;
}


// 0x1025bae0  (ghidra: FUN_1025bae0)  [gap]
void __fastcall sub_1025bae0(uint32_t param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 != 0) && (*(char *)(param_3 + 1) == '\x02')) {
    iVar1 = sub_102ecd20(*(uint *)(param_3 + 2) & 0x7f,param_2);
    if ((iVar1 != 0) && ((*(int *)(iVar1 + 4) == 0x26c || (*(int *)(iVar1 + 4) == 0x270)))) {
      *p_D2Client_DAT_6fbc3ac6 = *(uint32_t *)(param_3 + 2);
      *p_D2Client_DAT_6fbc3af4 = *(uint32_t *)(iVar1 + 4);
      DAT_103c39cc = *(uint16_t *)(param_3 + 10);
      return;
    }
  }
  sub_102eff30();
  return;
}


// 0x1025bb70  (ghidra: FUN_1025bb70)  [gap]
void sub_1025bb70(char *param_1,uint param_2)

{
  Storm_578(param_1,param_2,"PD2 LIVE");
  return;
}


// 0x1025bb80  (ghidra: FUN_1025bb80)  [gap]
void __fastcall sub_Wraps_D2Client_SKILLS_Skills_1025bb80(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  puVar1 = (uint *)D2Common_10511((int)param_1);
  if (puVar1 == (uint *)0x0) {
    return;
  }
  uVar2 = D2Common_10494_10277e30(param_1,0x12);
  if (uVar2 != 0) {
    return;
  }
  uVar2 = D2Common_10601(puVar1,"..\\Source\\D2Client\\SKILLS\\Skills.cpp",0x93c);
  iVar3 = functions_HelperFunctions_102ce5a0(uVar2);
  uVar4 = D2Common_10397((int)puVar1);
  if ((uVar4 & 2) != 0) goto switchD_1025bbe8_caseD_6c;
  if ((int)uVar2 < 0x19d) {
    if (uVar2 != 0x19c) {
      switch(uVar2) {
      case 0x6b:
        goto switchD_1025bbe8_caseD_6b;
      default:
        goto switchD_1025bbe8_caseD_6c;
      case 0x84:
      case 0x8f:
        break;
      case 0x97:
switchD_1025bbe8_caseD_97:
        sub_102efac0(extraout_ECX,extraout_EDX);
        goto switchD_1025bbe8_caseD_6c;
      }
    }
  }
  else {
    if (uVar2 == 0x19f) {
switchD_1025bbe8_caseD_6b:
      sub_102efaa0(extraout_ECX,extraout_EDX);
      goto switchD_1025bbe8_caseD_6c;
    }
    if (uVar2 == 0x1a9) goto switchD_1025bbe8_caseD_97;
    if (uVar2 != 0x1b8) goto switchD_1025bbe8_caseD_6c;
  }
  sub_102efae0();
switchD_1025bbe8_caseD_6c:
  if ((iVar3 != 0) && (*(short *)(iVar3 + 0xf4) == 0x72)) {
    D2Common_10137((int)puVar1,0x101);
    D2Common_10243((int)puVar1,(uint)*(ushort *)(param_1[0xb] + 2));
    D2Common_10554((int)puVar1,(uint)*(ushort *)(param_1[0xb] + 6));
    sub_102f7170(param_1,uVar2,0);
  }
  return;
}


// 0x1025bcb0  (ghidra: FUN_1025bcb0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_Hook_sub_6fb4fb00_1025bcb0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  uint8_t local_88 [128];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((*p_D2Client_DAT_6fbbb210 == 0) && ((*p_D2Client_DAT_6fbbb214 == 1 || (*p_D2Client_DAT_6fbbb214 == 2)))) {
    iVar1 = sub_102ecd20(*p_D2Client_DAT_6fbbb21c & 0x7f,param_2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0x26d)) {
      iVar1 = *p_D2Client_DAT_6fbcbc10;
      if (DAT_104e6dfc == 0) {
        DAT_104e6dfc = sub_102edee0("DATA\\GLOBAL\\ui\\menu\\desecratepanel",0);
      }
      *p_D2Client_DAT_6fbcbc10 = DAT_104e6dfc;
      sub_6fb4f460();
      *p_D2Client_DAT_6fbcbc10 = iVar1;
      iVar1 = D2Win_10184(1);
      sub_10260160(local_88,L"Place a corrupted amulet");
      D2Win_10150(local_88,0x46,0x30,4,0);
      sub_10260160(local_88,L"into the blood altar");
      D2Win_10150(local_88,0x56,0x40,4,0);
      D2Win_10184(iVar1);
      return;
    }
  }
  sub_6fb4f460();
  return;
}


// 0x1025bde0  (ghidra: FUN_1025bde0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall sub_1025bde0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint32_t local_8c;
  char local_88 [128];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  builtin_strncpy(local_88,"DATA\\GLOBAL\\items\\",0x13);
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)((int)&local_8c + 3);
  do {
    pcVar4 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = param_3;
  for (uVar3 = (uint)((int)pcVar2 - (int)param_3) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint32_t *)pcVar5 = *(uint32_t *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = (int)pcVar2 - (int)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  local_8c = param_1;
  if (param_2 == 0) {
    param_2 = sub_102edee0(local_88,0);
  }
  *(int *)(local_8c + 0x34) = param_2;
  *(uint32_t *)(local_8c + 0xc) = 0;
  *(uint32_t *)(local_8c + 8) = 0;
  return param_2;
}


// 0x1025be90  (ghidra: FUN_1025be90)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_Wraps_D2Client_ENGINE_Gfx_1025be90(int *param_1,uint param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint32_t *puVar6;
  uint uVar7;
  uint uVar8;
  int *extraout_ECX;
  int *unused_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  uint reg_EDX;
  void *this;
  uint32_t uVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  ulonglong uVar13;
  uint8_t auStack_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  int *piStack_dc;
  int *local_d8;
  uint8_t auStack_d4 [4];
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint32_t uStack_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint64_t uStack_80;
  uint8_t auStack_74 [4];
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  int iStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  int iStack_38;
  uint32_t uStack_34;
  ulonglong uStack_30;
  uint8_t auStack_19 [5];
  uint local_14;
  
  local_14 = DAT_1039800c ^ (uint)auStack_e8;
  local_d8 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 4) {
    return 0;
  }
  iVar3 = D2Common_11088_10275940(param_1);
  if ((iVar3 == 4) && (iVar3 = D2Common_10973((int)param_1,0xe,0), 99 < iVar3)) {
    if (iVar3 < 500) {
      uVar4 = 1;
    }
    else {
      uVar4 = (4999 < iVar3) + 2;
    }
  }
  else {
    uVar4 = 0;
  }
  uStack_30 = (ulonglong)uVar4;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_6c = 1;
  sub_1025c2d0(0xffffffff,param_1,&uStack_70,0);
  uVar9 = 0xffffffff;
  uStack_e0 = 0xffffffff;
  piVar5 = extraout_ECX;
  if (iStack_60 != 4) goto LAB_1025c140;
  uVar4 = D2Common_10744((int)param_1,0xd2);
  if (((uVar4 != 0) && (iVar3 = D2Common_10695(param_1[1]), iVar3 != 0)) &&
     (uVar12 = functions_D2NewFunctions_102ce500((int *)(iVar3 + 0x80),(int *)&DAT_1037d0ac), uStack_e0 = uVar9,
     (int)uVar12 != 0)) {
    uVar9 = 2;
    uStack_e0 = uVar9;
  }
  uVar4 = D2Common_10744((int)param_1,0xc);
  if (((uVar4 != 0) || (uVar4 = D2Common_10744((int)param_1,0xc9), uVar4 != 0)) &&
     (iVar3 = D2Common_10973((int)param_1,0xce,0), 0 < iVar3)) {
    uVar4 = D2Common_10744((int)param_1,0xc9);
    if (uVar4 == 0) {
      cVar2 = *(char *)(param_1[5] + 0x49);
      if (cVar2 == '\0') {
LAB_1025c04f:
        DAT_104e6e58 = sub_1025bde0((int)&uStack_70,DAT_104e6e58,"invamu1d");
      }
      else if (cVar2 == '\x01') {
        DAT_104e6dcc = sub_1025bde0((int)&uStack_70,DAT_104e6dcc,"invamu2d");
      }
      else {
        if (cVar2 != '\x02') goto LAB_1025c04f;
        DAT_104e6e28 = sub_1025bde0((int)&uStack_70,DAT_104e6e28,"invamu3d");
      }
    }
    else {
      DAT_104e6dd4 = sub_1025bde0((int)&uStack_70,DAT_104e6dd4,"invamud");
    }
  }
  uVar4 = D2Common_10744((int)param_1,0xdd);
  if ((uVar4 != 0) && (iVar3 = functions_D2CommonFunctions_Hook_D2Common_10244_10268ed0((int)param_1), uStack_e0 = uVar9, iVar3 == -1)) {
    uStack_e0 = 1;
  }
  iVar3 = D2Common_10973((int)param_1,0x10e,0);
  piVar5 = unused_ECX;
  if ((0 < iVar3) &&
     (uVar13 = D2Common_10106((uint)unused_ECX,reg_EDX,param_1), piVar5 = extraout_ECX_00,
     (int)uVar13 == 7)) {
    sub_1025e010(&piStack_dc,(uint *)(param_1[5] + 0x28));
    piVar5 = (int *)sub_1025e030(auStack_d4);
    bVar1 = sub_1023d8f0(this,piVar5);
    piVar5 = extraout_ECX_01;
    if (bVar1) {
      puVar6 = (uint32_t *)sub_1025dfd0((uint *)(param_1[5] + 0x28));
      uStack_d0 = *puVar6;
      uStack_cc = puVar6[1];
      uStack_c8 = puVar6[2];
      uStack_c4 = puVar6[3];
      uStack_c0 = puVar6[4];
      uStack_bc = puVar6[5];
      uStack_b8 = puVar6[6];
      uStack_b4 = puVar6[7];
      uStack_b0 = puVar6[8];
      uStack_ac = puVar6[9];
      uStack_a8 = puVar6[10];
      uStack_a4 = puVar6[0xb];
      uStack_a0 = puVar6[0xc];
      uStack_9c = puVar6[0xd];
      uStack_98 = puVar6[0xe];
      uStack_94 = puVar6[0xf];
      uStack_90 = puVar6[0x10];
      uStack_8c = puVar6[0x11];
      uStack_88 = puVar6[0x12];
      uStack_84 = puVar6[0x13];
      uStack_80._4_4_ = (int *)((ulonglong)*(uint64_t *)(puVar6 + 0x14) >> 0x20);
      iVar3 = *uStack_80._4_4_;
      uStack_80 = *(uint64_t *)(puVar6 + 0x14);
      iVar3 = sub_1025bde0((int)&uStack_70,iVar3,(char *)&uStack_d0);
      piVar5 = extraout_ECX_02;
      if (iVar3 != 0) {
        *uStack_80._4_4_ = iVar3;
        piVar5 = uStack_80._4_4_;
      }
    }
  }
LAB_1025c140:
  uVar4 = D2CMP_10005(piVar5,(int)&uStack_70,0);
  iVar3 = iStack_38;
  if (uVar4 != 0) {
    uStack_e0 = iStack_38;
    uVar4 = D2CMP_10000(iStack_38);
    iVar3 = sub_102f03e0(iVar3,param_2,uVar4 + param_3,0);
    if (iVar3 != 0) {
      auStack_19[0] = 0;
      uVar4 = functions_D2CommonFunctions_Hook_ENGINE_Gfx_6fb1b5a0_10267ab0(*(uint32_t *)(param_1[5] + 0x70),param_1,auStack_19,1);
      uVar10 = 5;
      uVar7 = D2Common_10202(piStack_dc,0x400000,0xac2,"..\\Source\\D2Client\\ENGINE\\Gfx.cpp");
      if (uVar7 != 0) {
        uVar10 = 1;
      }
      uVar8 = D2CMP_10000(uStack_e0);
      uVar7 = uStack_e4 & 0xf;
      if (uStack_e4 == 0xffffffff) {
        uVar7 = uVar10;
      }
      D2gfx_10041((uint)auStack_74,param_2,uVar8 + param_3,0xffffffff,uVar7,uVar4);
      uStack_e4 = D2CMP_10000(uStack_e0);
      uStack_e0 = D2CMP_10060(uStack_e0);
      ENGINE_Gfx_6fb1aee0(piStack_dc,0xff,0,((int)uStack_e0 >> 1) + param_2,
                          ((int)uStack_e4 >> 1) + param_3,0);
      if (((*(char *)(piStack_dc[5] + 0x45) == '\x04') && (DAT_103e7670 != 0)) &&
         (cVar2 = sub_1025d380(param_3), cVar2 == '\0')) {
        iVar11 = param_3 + uStack_e4;
        iVar3 = uStack_e0 + param_2;
        D2gfx_10014(param_2,param_3,iVar3,iVar11,0,0);
        D2gfx_10014(param_2,param_3,iVar3,iVar11,0,0);
        D2gfx_10014(param_2,param_3,iVar3,iVar11,0,0);
      }
      return 1;
    }
  }
  return 0;
}


// 0x1025c2d0  (ghidra: FUN_1025c2d0)  [gap]
void sub_1025c2d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  DAT_103e7640 = param_2;
  sub_102f03a0(param_1,param_2,param_3,param_4);
  return;
}


// 0x1025c2f0  (ghidra: FUN_1025c2f0)  [gap]
void sub_1025c2f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  DAT_103e7640 = param_2;
  sub_102f0830(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x1025c310  (ghidra: FUN_1025c310)  [gap]
uint32_t __fastcall sub_1025c310(int *param_1,int *reg_EAX)

{
  int iVar1;
  int *piVar2;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  if ((param_1 != (int *)0x0) && ((iVar1 = *param_1, iVar1 == 3 || (iVar1 == 1)))) {
    piVar2 = (int *)*p_D2Client_DAT_6fbcbbfc;
    reg_EAX = p_D2Client_DAT_6fbcbbfc;
    if (((iVar1 != 3) || (reg_EAX = (int *)sub_102ee000(), param_1 = reg_EAX, reg_EAX != (int *)0x0)
        ) && ((*param_1 == 1 &&
              (reg_EAX = (int *)sub_6fad16a0_102ac310(param_1[3]), param_1 = piVar2,
              reg_EAX != (int *)piVar2[3])))) {
      reg_EAX = (int *)sub_102ecd20(extraout_ECX,extraout_EDX);
      param_1 = reg_EAX;
    }
    if ((((piVar2 != (int *)0x0) && (param_1 != (int *)0x0)) && (*param_1 == 0)) &&
       (piVar2 != param_1)) {
      return CONCAT31((int3)((uint)reg_EAX >> 8),1);
    }
  }
  return (uint)reg_EAX & 0xffffff00;
}


// 0x1025c380  (ghidra: FUN_1025c380)  [gap]
void sub_1025c380(uint32_t reg_EAX,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  uint32_t uVar1;
  
  if (DAT_104e24c6 != '\0') {
    uVar1 = sub_1025c310(DAT_103e7640,reg_EAX);
    if ((char)uVar1 != '\0') {
      param_6 = 0;
    }
    D2gfx_10041(param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  D2gfx_10041(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x1025c3c0  (ghidra: FUN_1025c3c0)  [gap]
void sub_1025c3c0(int *param_1,uint32_t reg_EAX)

{
  uint32_t uVar1;
  
  if (DAT_104e24c6 != '\0') {
    uVar1 = sub_1025c310(param_1,reg_EAX);
    if ((char)uVar1 != '\0') {
      return;
    }
  }
  sub_102f0b50();
  return;
}


// 0x1025c3f0  (ghidra: FUN_1025c3f0)  [gap]
void sub_1025c3f0(int param_1,int param_2,int param_3)

{
  byte bStack00000010;
  uint32_t _bStack00000010;   /* not traced by Ghidra: value with no visible source */
  
  if ((DAT_104e24c8 != '\0') && (DAT_103d9867 == '\0')) {
    sub_10237380(param_1,param_2,param_3,_bStack00000010);
    return;
  }
  sub_6facbf20(param_1,param_2,param_3,bStack00000010);
  return;
}


// 0x1025c4a0  (ghidra: FUN_1025c4a0)  [gap]
void sub_1025c4a0(int *param_1)

{
  sub_6fb70d30(param_1);
  if (DAT_103d9867 != '\0') {
    sub_10218860(param_1);
  }
  return;
}


// 0x1025c4c0  (ghidra: FUN_1025c4c0)  [gap]
void __fastcall sub_1025c4c0(uint32_t param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint local_8;
  
  if (((0 < DAT_103d9844) && ((*p_D2Client_DAT_6fbcb864 == 1 || (*p_D2Client_DAT_6fbcb864 == 5)))) &&
     (((int *)*p_D2Client_DAT_6fbcb834 == (int *)0x0 || (*(int *)*p_D2Client_DAT_6fbcb834 != 4)))) {
    switch(DAT_103d9844 % 10) {
    case 1:
      uVar2 = 10;
      break;
    case 2:
      uVar2 = 0xb;
      break;
    case 3:
      uVar2 = 0xc;
      break;
    case 4:
      uVar2 = 0x7d;
      break;
    case 5:
      uVar2 = 0x91;
      break;
    case 6:
      uVar2 = 0x9b;
      break;
    case 7:
      uVar2 = 0x1c;
      break;
    case 8:
      uVar2 = 0x20;
      break;
    default:
      uVar2 = 0;
    }
    local_8 = 8;
    if (((9 < DAT_103d9844) && (DAT_103d9844 < 0x14)) || (DAT_103d9844 - 0x1eU < 10)) {
      local_8 = 1;
    }
    iVar1 = 1;
    if (0x13 < DAT_103d9844) {
      iVar1 = 3;
    }
    D2gfx_10014(*p_D2Client_DAT_6fbcb828 - iVar1,*p_D2Client_DAT_6fbcb824 - iVar1,*p_D2Client_DAT_6fbcb828 + iVar1,
                *p_D2Client_DAT_6fbcb824 + iVar1,uVar2,local_8);
    return;
  }
  if ((*p_D2Client_DAT_6fbcbbfc != 0) && (DAT_103d9867 != '\0')) {
    sub_10215760();
    return;
  }
  sub_10213480('\0',param_2 & 0xffffff00,p_D2Client_DAT_6fbcbbfc);
  sub_6fac6a90();
  return;
}


// 0x1025c610  (ghidra: FUN_1025c610)  [gap]
longlong __fastcall sub_1025c610(uint32_t *param_1,int param_2,uint param_3,uint32_t param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  bool bVar5;
  uint64_t uVar6;
  
  uVar3 = param_2;
  if (param_1 == (uint32_t *)0x0) goto switchD_1025c630_default;
  switch(*param_1) {
  case 0:
    if ((param_1[4] == 0x11) || (param_1[4] == 0)) {
      bVar5 = (param_3 & 0x40) == 0;
    }
    else {
      if ((param_3 & 1) == 0) goto switchD_1025c630_default;
      uVar4 = D2Common_10666(param_1,(int *)param_2);
      uVar3 = extraout_EDX;
      if (uVar4 == 0) goto LAB_1025c794;
      bVar5 = (param_3 & 0x100) == 0;
      uVar3 = extraout_EDX;
    }
    goto LAB_1025c78e;
  case 1:
    iVar2 = sub_102f0910();
    if ((iVar2 == 0) && (uVar3 = D2Common_10666(param_1,(int *)param_2), uVar3 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar4 = sub_6fad16a0(param_1[3]);
    iVar2 = functions_HelperFunctions_102ce660(param_1[1]);
    uVar3 = extraout_EDX_00;
    if (iVar2 == 0) goto switchD_1025c630_default;
    uVar1 = *(uint *)(iVar2 + 0xc);
    uVar6 = functions_HelperFunctions_102ce690((uint)*(ushort *)(iVar2 + 0x18));
    uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar2 = (int)uVar6;
    if ((iVar2 != 0) &&
       (((1 < *(byte *)(iVar2 + 0x10b) && (param_1[4] == (uint)*(byte *)(iVar2 + 0x10b))) ||
        ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)))) goto switchD_1025c630_default;
    if ((param_1[4] == 0xc) || (param_1[4] == 0)) {
      if ((param_3 & 0x80) == 0) goto switchD_1025c630_default;
      uVar6 = sub_102f08f0(param_4,param_2,param_1);
      uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
      bVar5 = (int)uVar6 == 0;
    }
    else if ((uVar1 & 0x300) == 0x300) {
      bVar5 = (param_3 & 0x400) == 0;
    }
    else {
      if ((param_3 & 2) == 0) {
        if ((uVar4 == *(uint *)(param_2 + 0xc)) && ((param_3 & 0x200) != 0)) goto LAB_1025c794;
        if ((param_3 & 0x100) == 0) goto switchD_1025c630_default;
        bVar5 = !bVar5;
        goto LAB_1025c78e;
      }
      if ((((param_3 & 0x100) == 0) && (bVar5)) ||
         (((param_3 & 0x200) == 0 && (uVar4 != 0xffffffff)))) goto switchD_1025c630_default;
      bVar5 = (*(byte *)(param_1 + 0x31) & 4) == 0;
    }
    break;
  case 2:
    if (((param_3 & 0x10) == 0) || ((int *)param_1[5] == (int *)0x0)) goto switchD_1025c630_default;
    bVar5 = *(char *)(param_1[4] + 0xc4 + *(int *)param_1[5]) == '\0';
    break;
  case 3:
    bVar5 = (param_3 & 8) == 0;
    break;
  case 4:
    bVar5 = (param_3 & 4) == 0;
    break;
  case 5:
    bVar5 = (param_3 & 0x20) == 0;
LAB_1025c78e:
    if (bVar5) goto switchD_1025c630_default;
    goto LAB_1025c794;
  default:
    goto switchD_1025c630_default;
  }
  if (bVar5) {
switchD_1025c630_default:
    return (ulonglong)uVar3 << 0x20;
  }
LAB_1025c794:
  return CONCAT44(uVar3,1);
}


// 0x1025c7c0  (ghidra: FUN_1025c7c0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __thiscall
sub_1025c7c0(void *this,uint32_t param_1,uint32_t param_2,uint param_3,uint32_t param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint32_t extraout_EDX;
  uint32_t uVar10;
  int *piVar11;
  uint uVar12;
  uint64_t uVar13;
  int local_24;
  int local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((this != (void *)0x0) && (puVar6 = (uint *)D2Common_10331(this), puVar6 != (uint *)0x0)) {
    uVar7 = sub_6fab1630(this);
    uVar8 = sub_6fab1660(this);
    piVar11 = (int *)0x0;
    local_24 = 0x7fffffff;
    local_14 = (int *)0x0;
    local_c = 0;
    local_10 = 0;
    D2Common_10383(puVar6,&local_10,&local_c);
    if (local_c != 0) {
      local_18 = 0;
      uVar10 = extraout_EDX;
      if (0 < (int)local_c) {
        do {
          iVar1 = *(int *)(local_10 + local_18 * 4);
          uVar13 = sub_102f08d0(local_18,uVar10);
          uVar10 = (uint32_t)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 != 0) {
            piVar2 = *(int **)(iVar1 + 0x74);
            iVar1 = local_24;
            piVar5 = local_14;
            for (; local_24 = iVar1, local_14 = piVar5, piVar2 != (int *)0x0;
                piVar2 = (int *)piVar2[0x3a]) {
              if (piVar2 != this) {
                iVar3 = piVar2[0xb];
                if (iVar3 == 0) {
                  uVar12 = 0;
                  uVar9 = 0;
                }
                else {
                  iVar4 = *piVar2;
                  if (((iVar4 == 2) || (iVar4 == 4)) || (iVar4 == 5)) {
                    uVar12 = *(uint *)(iVar3 + 0xc);
                    uVar9 = *(uint *)(iVar3 + 0x10);
                  }
                  else {
                    uVar12 = D2Common_10867(iVar3);
                    uVar9 = D2Common_10750(piVar2[0xb]);
                  }
                }
                uVar13 = functions_HelperFunctions_102cfaf0(uVar7,uVar8,uVar12,uVar9);
                uVar10 = (uint32_t)((ulonglong)uVar13 >> 0x20);
                local_24 = (int)uVar13;
                if (local_24 < 0x1a) {
                  uVar13 = sub_1025c610(piVar2,(int)this,param_3,param_4);
                  uVar10 = (uint32_t)((ulonglong)uVar13 >> 0x20);
                  if (((int)uVar13 != 0) && (piVar11 = piVar2, local_14 = piVar2, local_24 < iVar1))
                  goto LAB_1025c8de;
                }
                piVar11 = piVar5;
                local_24 = iVar1;
                local_14 = piVar5;
              }
LAB_1025c8de:
              iVar1 = local_24;
              piVar5 = local_14;
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < (int)local_c);
      }
      return piVar11;
    }
  }
  return (int *)0x0;
}


// 0x1025c930  (ghidra: FUN_1025c930)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __fastcall
sub_1025c930(int *param_1,int param_2,int param_3,int param_4,uint param_5,uint32_t param_6)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int extraout_EDX;
  int iVar10;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar11;
  int *piVar12;
  double in_XMM0_Qa;
  double dVar13;
  double dVar14;
  double dVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  int local_30;
  int local_2c;
  int *local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((((param_1 != (int *)0x0) && (param_4 != 0)) &&
      (puVar3 = (uint *)D2Common_10331(param_1), puVar3 != (uint *)0x0)) &&
     ((param_3 != 0 && (param_2 != 0)))) {
    uVar4 = sub_6fab1630(param_1);
    uVar5 = sub_6fab1660(param_1);
    iVar11 = param_2 - uVar4;
    iVar6 = uVar5 - param_3;
    sub_10218a80(iVar6 * iVar6 + iVar11 * iVar11);
    piVar12 = (int *)0x0;
    local_18 = (int *)0x0;
    local_c = 0;
    local_10 = 0;
    local_2c = 0x7fffffff;
    D2Common_10383(puVar3,&local_10,&local_c);
    if (local_c != 0) {
      local_30 = 0;
      iVar10 = extraout_EDX;
      if (0 < (int)local_c) {
        do {
          iVar9 = *(int *)(local_10 + local_30 * 4);
          uVar18 = sub_102f08d0(local_30,iVar10);
          iVar10 = (int)((ulonglong)uVar18 >> 0x20);
          if ((int)uVar18 != 0) {
            for (piVar1 = *(int **)(iVar9 + 0x74); piVar1 != (int *)0x0;
                piVar1 = (int *)piVar1[0x3a]) {
              if (((piVar1 != param_1) && (iVar9 = piVar1[0xb], iVar9 != 0)) &&
                 (iVar2 = *piVar1, iVar2 != 3)) {
                if (((iVar2 == 2) || (iVar2 == 4)) || (iVar2 == 5)) {
                  uVar7 = *(uint *)(iVar9 + 0xc);
                  uVar8 = *(uint *)(iVar9 + 0x10);
                }
                else {
                  uVar7 = D2Common_10867(iVar9);
                  uVar8 = D2Common_10750(piVar1[0xb]);
                }
                uVar18 = functions_HelperFunctions_102cfaf0(param_2,param_3,uVar7,uVar8);
                iVar10 = (int)((ulonglong)uVar18 >> 0x20);
                dVar13 = (double)(int)uVar18;
                piVar12 = local_18;
                if (dVar13 <= (double)(param_4 * param_4)) {
                  uVar18 = sub_1025c610(piVar1,(int)param_1,param_5,param_6);
                  iVar10 = (int)((ulonglong)uVar18 >> 0x20);
                  if ((int)uVar18 != 0) {
                    dVar14 = (double)(int)(uVar7 - uVar4);
                    dVar15 = (double)(int)(uVar5 - uVar8);
                    if ((int)in_XMM0_Qa != 0) {
                      uVar16 = 0;
                      uVar17 = 0;
                      if (dVar14 != 0.0) {
                        sub_10218a60();
                        iVar9 = sub_10260180(iVar11);
                        iVar10 = extraout_EDX_00;
                        if (extraout_EDX_00 != iVar9) goto LAB_1025cb00;
                      }
                      if (dVar15 != (double)CONCAT44(uVar17,uVar16)) {
                        sub_10218a60();
                        iVar9 = sub_10260180(iVar6);
                        iVar10 = extraout_EDX_01;
                        if (extraout_EDX_01 != iVar9) goto LAB_1025cb00;
                      }
                      dVar13 = (double)iVar6 * dVar15 + (double)iVar11 * dVar14;
                      sub_10212e20();
                      dVar13 = dVar13 / (double)(int)in_XMM0_Qa;
                      iVar10 = extraout_EDX_02;
                    }
                    if (dVar13 < (double)local_2c) {
                      local_2c = (int)dVar13;
                      piVar12 = piVar1;
                      local_18 = piVar1;
                    }
                  }
                }
              }
LAB_1025cb00:
            }
          }
          local_30 = local_30 + 1;
        } while (local_30 < (int)local_c);
      }
      return piVar12;
    }
  }
  return (int *)0x0;
}


// 0x1025cbd0  (ghidra: FUN_1025cbd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_Hook_sub_6fb739e0_1025cbd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  void *pvVar5;
  uint32_t *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint32_t local_cc [6];
  uint32_t local_b4 [2];
  int local_ac [10];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint32_t local_74 [6];
  uint32_t local_5c [6];
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306d17;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_1021c0a0();
  psVar4 = (short *)D2Lang_10003(0xf9a);
  client_DrawHoverItem_10225040(local_74,psVar4);
  local_8 = 0;
  iVar7 = 0;
  local_ac[0] = 0xa4;
  local_ac[1] = 0xe2;
  local_ac[2] = 0x138;
  local_ac[3] = 0x176;
  local_84 = *p_D2Client_DAT_6fbcb828;
  iVar1 = *p_D2Client_DAT_6fbcb824;
  local_7c = *p_D2Client_DAT_6fbcbbfc;
  do {
    local_78 = 0;
    switch(iVar7) {
    case 0:
      local_78 = 0;
      break;
    case 1:
      local_78 = 2;
      break;
    case 2:
      local_78 = 3;
      break;
    case 3:
      local_78 = 1;
    }
    iVar2 = local_ac[iVar7];
    local_80 = D2Common_10910(local_7c,4,0);
    iVar3 = local_78;
    iVar8 = local_7c;
    if ((((0 < local_80) && (local_84 - 0x156U < 0x17)) && (iVar1 <= iVar2)) &&
       (iVar2 + -0x16 <= iVar1)) {
      local_78 = D2Common_10910(local_7c,local_78,0);
      iVar7 = D2Common_10587(iVar8,iVar3,0);
      iVar1 = local_78;
      iVar8 = local_78 - iVar7;
      client_DrawHoverItem_10225070(local_2c);
      local_8._0_1_ = 1;
      client_DrawHoverItem_10225480(local_5c,(int)local_74,(short *)&DAT_10377868);
      local_8._0_1_ = 2;
      client_DrawHoverItem_10225480(local_44,(int)local_74,(short *)&DAT_10377868);
      local_8._0_1_ = 3;
      bVar9 = iVar8 < 0;
      if (iVar1 == iVar7 || bVar9) {
        if (bVar9) {
          psVar4 = (short *)&DAT_1037d100;
          goto LAB_1025cd4d;
        }
      }
      else {
        psVar4 = (short *)&DAT_1037d0d8;
LAB_1025cd4d:
        pvVar5 = client_DrawHoverItem_10225480(local_b4,(int)local_74,psVar4);
        sub_1025f140(local_44,pvVar5);
        thunk_FUN_102250f0(local_b4);
      }
      psVar4 = (short *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"HotkeyAssignStatsCtrl");
      pvVar5 = client_DrawHoverItem_10225480(local_b4,(int)local_5c,psVar4);
      local_8._0_1_ = 4;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      local_8._0_1_ = 3;
      thunk_FUN_102250f0(local_b4);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037d0f4);
      pvVar5 = sub_102542b0(local_ac + 4);
      local_8._0_1_ = 5;
      pvVar5 = sub_10260190(local_cc,(int)local_44,pvVar5);
      local_8._0_1_ = 6;
      pvVar5 = sub_102601c0(local_b4,pvVar5,(int)local_5c);
      local_8._0_1_ = 7;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      thunk_FUN_102250f0(local_b4);
      thunk_FUN_102250f0(local_cc);
      local_8._0_1_ = 3;
      thunk_FUN_102250f0(local_ac + 4);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037d0fc);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037772c);
      psVar4 = (short *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"HotkeyAssignStatsShift");
      pvVar5 = client_DrawHoverItem_10225480(local_ac + 4,(int)local_5c,psVar4);
      local_8._0_1_ = 8;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      local_8._0_1_ = 3;
      thunk_FUN_102250f0(local_ac + 4);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037d0f4);
      pvVar5 = sub_102542b0(local_b4);
      local_8._0_1_ = 9;
      pvVar5 = sub_10260190(local_cc,(int)local_44,pvVar5);
      local_8._0_1_ = 10;
      pvVar5 = sub_102601c0(local_ac + 4,pvVar5,(int)local_5c);
      local_8._0_1_ = 0xb;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      thunk_FUN_102250f0(local_ac + 4);
      thunk_FUN_102250f0(local_cc);
      local_8 = CONCAT31(local_8._1_3_,3);
      thunk_FUN_102250f0(local_b4);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037d0fc);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037772c);
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = iVar2 - 0x1e;
      uVar10 = thunk_FUN_10225280((int)local_2c);
      D2Win_10085((void *)uVar10,0x160,uVar11,uVar12,uVar13);
      thunk_FUN_102250f0(local_44);
      puVar6 = local_5c;
LAB_1025d123:
      thunk_FUN_102250f0(puVar6);
      thunk_FUN_102250f0(local_2c);
      break;
    }
    if (((local_84 - 0x12aU < 0x17) && (iVar1 <= iVar2)) && (iVar2 + -0x16 <= iVar1)) {
      local_80 = D2Common_10910(local_7c,local_78,0);
      iVar7 = D2Common_10587(iVar8,iVar3,0);
      iVar1 = local_80;
      iVar8 = local_80 - iVar7;
      client_DrawHoverItem_10225070(local_2c);
      local_8._0_1_ = 0xc;
      client_DrawHoverItem_10225480(local_44,(int)local_74,(short *)&DAT_10377868);
      local_8._0_1_ = 0xd;
      client_DrawHoverItem_10225480(local_5c,(int)local_74,(short *)&DAT_10377868);
      local_8._0_1_ = 0xe;
      bVar9 = iVar8 < 0;
      if (iVar1 == iVar7 || bVar9) {
        if (bVar9) {
          psVar4 = (short *)&DAT_1037d100;
          goto LAB_1025cfba;
        }
      }
      else {
        psVar4 = (short *)&DAT_1037d0d8;
LAB_1025cfba:
        pvVar5 = client_DrawHoverItem_10225480(local_ac + 4,(int)local_74,psVar4);
        sub_1025f140(local_5c,pvVar5);
        thunk_FUN_102250f0(local_ac + 4);
      }
      psVar4 = (short *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"HelpTextStatHoverItem");
      pvVar5 = client_DrawHoverItem_10225480(local_ac + 4,(int)local_44,psVar4);
      local_8._0_1_ = 0xf;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      local_8._0_1_ = 0xe;
      thunk_FUN_102250f0(local_ac + 4);
      pvVar5 = sub_102542b0(local_b4);
      local_8._0_1_ = 0x10;
      pvVar5 = sub_10260190(local_cc,(int)local_5c,pvVar5);
      local_8._0_1_ = 0x11;
      pvVar5 = sub_102601c0(local_ac + 4,pvVar5,(int)local_44);
      local_8._0_1_ = 0x12;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      thunk_FUN_102250f0(local_ac + 4);
      thunk_FUN_102250f0(local_cc);
      local_8._0_1_ = 0xe;
      thunk_FUN_102250f0(local_b4);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037772c);
      psVar4 = (short *)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"HelpTextStatHoverBase");
      pvVar5 = client_DrawHoverItem_10225480(local_ac + 4,(int)local_44,psVar4);
      local_8._0_1_ = 0x13;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      local_8._0_1_ = 0xe;
      thunk_FUN_102250f0(local_ac + 4);
      pvVar5 = sub_102542b0(local_ac + 4);
      local_8._0_1_ = 0x14;
      client_DrawHoverItem_10225020(local_2c,(int)pvVar5);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      thunk_FUN_102250f0(local_ac + 4);
      client_DrawHoverItem_10225010(local_2c,(short *)&DAT_1037772c);
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = iVar2 - 0x1e;
      uVar10 = thunk_FUN_10225280((int)local_2c);
      D2Win_10085((void *)uVar10,0x134,uVar11,uVar12,uVar13);
      thunk_FUN_102250f0(local_5c);
      puVar6 = local_44;
      goto LAB_1025d123;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  thunk_FUN_102250f0(local_74);
  ExceptionList = local_10;
  return;
}


// 0x1025d170  (ghidra: FUN_1025d170)  [gap]
void sub_1025d170(void)

{
  if (DAT_103d9867 == '\0') {
    sub_102f08a0();
    return;
  }
  return;
}


// 0x1025d190  (ghidra: FUN_1025d190)  [gap]
bool __fastcall sub_1025d190(int param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)D2Common_10511(param_1);
  if (puVar2 == (uint *)0x0) {
    return true;
  }
  uVar3 = D2Common_10858(puVar2);
  if (uVar3 != 0) {
    if (*(char *)(uVar3 + 0x10) != '\x12') {
      return true;
    }
    bVar1 = *(byte *)(uVar3 + 0x16);
    if ((bVar1 != 0) && (bVar1 != 0xff)) {
      return (int)(uint)bVar1 <= *(int *)(param_1 + 0x38) >> 8;
    }
  }
  return false;
}


// 0x1025d1e0  (ghidra: FUN_1025d1e0)  [gap]
uint __fastcall sub_1025d1e0(int param_1)

{
  bool bVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  uint64_t uVar5;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306d61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_104e8f8c) &&
     (FUN_103023e9(&DAT_104e8f8c), DAT_104e8f8c == -1)) {
    local_8 = 0;
    client_DrawHoverItem_10225040(&DAT_104e8f90,L".^$*+?()[]{}|\\");
    _atexit((_func_4879 *)&LAB_1031b570);
    FUN_1030239f(&DAT_104e8f8c);
  }
  bVar1 = false;
  uVar5 = thunk_FUN_10225280(param_1);
  psVar2 = (short *)uVar5;
  psVar3 = (short *)sub_1025f0a0(param_1);
  psVar4 = psVar3;
  do {
    if (psVar2 == psVar3) {
      ExceptionList = local_10;
      return (uint)psVar4 & 0xffffff00;
    }
    if (bVar1) {
      bVar1 = false;
    }
    else if (*psVar2 == 0x5c) {
      bVar1 = true;
    }
    else {
      psVar4 = (short *)sub_1025ef20(0x104e8f90);
      if (psVar4 != (short *)0xffffffff) {
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)psVar4 >> 8),1);
      }
    }
    psVar2 = psVar2 + 1;
  } while( true );
}


// 0x1025d2e0  (ghidra: FUN_1025d2e0)  [gap]
void sub_1025d2e0(void)

{
  uint32_t *extraout_ECX;
  uint uStack_5c;
  uint32_t local_44 [6];
  int local_2c [5];
  uint local_18;
  uint8_t *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10306d95;
  local_10 = ExceptionList;
  uStack_5c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = (uint8_t *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = uStack_5c;
  sub_10255e50(local_2c);
  sub_1025eb00(extraout_ECX);
  local_8._0_1_ = 1;
  client_DrawHoverItem_10225040(local_44,&DAT_103e7670);
  local_8 = CONCAT31(local_8._1_3_,2);
  sub_1025d1e0((int)local_44);
  thunk_FUN_102250f0(local_44);
  sub_1025eae0(local_2c);
  sub_1025d361();
  return;
}


// 0x1025d359  [gap]
uint8_t * Catch_1025d359(void)

{
  return &DAT_1025d35f;
}


// 0x1025d361  (ghidra: FUN_1025d361)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_1025d361(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


// 0x1025d380  (ghidra: FUN_1025d380)  [gap]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

uint8_t sub_1025d380(uint32_t reg_EDI)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  wchar_t wVar4;
  wint_t wVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  wchar_t *pwVar10;
  void *this;
  void *this_00;
  uint8_t local_1950 [4];
  wchar_t *local_194c;
  uint8_t local_1945;
  void *local_1944;
  uint64_t local_1940;
  uint64_t local_1938;
  uint64_t local_1930;
  uint64_t local_1928;
  uint64_t local_1920;
  wchar_t local_1918 [1024];
  uint32_t local_1118;
  wchar_t local_918 [512];
  wchar_t local_518 [256];
  wchar_t local_318 [256];
  uint32_t local_118;
  uint local_14;
  uint8_t  stack0xfffffff0;   /* not traced by Ghidra: address of a stack slot */
  
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffff0;
  local_1945 = 0;
  if ((DAT_104e6e10 == 0) && (DAT_103c64dc != 0)) {
    cVar2 = sub_1025d2e0();
    if (cVar2 == '\0') {
      DAT_103c64dc = 0;
    }
    else {
      sub_1025ebc0(&DAT_104e16c4);
      sub_1025eac0();
      DAT_104e6e10 = 1;
    }
  }
  sub_1025eba0(&DAT_104e16c4,&local_194c,(uint *)&local_1944);
  piVar6 = (int *)sub_102280a0(&DAT_104e16c4,local_1950);
  bVar3 = sub_1023d8f0(this,piVar6);
  if (bVar3) {
    return 0;
  }
  sub_1025eba0(&DAT_104e1664,local_1950,(uint *)&local_1944);
  piVar6 = (int *)sub_102280a0(&DAT_104e1664,&local_194c);
  bVar3 = sub_10228020(this_00,piVar6);
  if (!bVar3) {
    return 1;
  }
  memset(&local_118,0,0x100);
  memset(&local_1118,0,0x800);
  memset(local_318,0,0x200);
  memset(local_1918,0,0x800);
  memset(local_918,0,0x400);
  memset(local_518,0,0x200);
  client_DrawHoverItem_10224a40(0xab,(int)local_1944,&local_1118,0x400,1,0,0x40,1,reg_EDI);
  UI_inv_6fb414f0(local_1944,(int)&local_118,0x80);
  iVar7 = D2Common_10695(*(uint *)((int)local_1944 + 4));
  if (iVar7 != 0) {
    client_DrawHoverItem_1021fb00(iVar7,(int)local_1918,(int)local_1944);
  }
  uVar8 = D2Common_10744((int)local_1944,0x2d);
  if (uVar8 != 0) {
    client_DrawHoverItem_1021cbd0(local_1944,(int)local_318);
  }
  uVar8 = D2Common_10744((int)local_1944,0x35);
  if (uVar8 != 0) {
    client_DrawHoverItem_1021e690((int)local_1944,local_918);
  }
  iVar7 = 0;
  if ((short)local_1118 != 0) {
    local_194c = (wchar_t *)&local_1118;
    local_1118 = local_1118 & 0xffff;
    do {
      wVar4 = towlower((wint_t)local_1118);
      iVar7 = iVar7 + 1;
      *local_194c = wVar4;
      local_194c = (wchar_t *)((int)&local_1118 + iVar7 * 2);
      local_1118 = (uint)(ushort)*local_194c;
    } while (*local_194c != L'\0');
  }
  iVar7 = 0;
  if ((short)local_118 != 0) {
    local_194c = (wchar_t *)&local_118;
    local_118 = local_118 & 0xffff;
    do {
      wVar4 = towlower((wint_t)local_118);
      iVar7 = iVar7 + 1;
      *local_194c = wVar4;
      local_194c = (wchar_t *)((int)&local_118 + iVar7 * 2);
      local_118 = (uint)(ushort)*local_194c;
    } while (*local_194c != L'\0');
  }
  if (local_1918[0] != L'\0') {
    local_194c = local_1918;
    iVar7 = 0;
    do {
      wVar4 = towlower(local_1918[0]);
      *local_194c = wVar4;
      local_194c = local_1918 + iVar7 + 1;
      local_1918[0] = *local_194c;
      iVar7 = iVar7 + 1;
    } while (local_1918[0] != L'\0');
  }
  if (local_318[0] != L'\0') {
    local_194c = local_318;
    iVar7 = 0;
    do {
      wVar4 = towlower(local_318[0]);
      *local_194c = wVar4;
      local_194c = local_318 + iVar7 + 1;
      local_318[0] = *local_194c;
      iVar7 = iVar7 + 1;
    } while (local_318[0] != L'\0');
  }
  if (local_918[0] != L'\0') {
    local_194c = local_918;
    iVar7 = 0;
    do {
      wVar4 = towlower(local_918[0]);
      *local_194c = wVar4;
      local_194c = local_918 + iVar7 + 1;
      local_918[0] = *local_194c;
      iVar7 = iVar7 + 1;
    } while (local_918[0] != L'\0');
  }
  iVar7 = 0;
  if (DAT_103e7670 != L'\0') {
    local_194c = (wchar_t *)0x0;
    wVar4 = DAT_103e7670;
    do {
      wVar5 = towlower(wVar4);
      iVar7 = iVar7 + 1;
      *(wint_t *)((int)local_518 + (int)local_194c) = wVar5;
      local_194c = (wchar_t *)(iVar7 * 2);
      wVar4 = local_194c[0x81f3b38];
    } while (wVar4 != L'\0');
  }
  if ((DAT_103c64dc == 0) || (DAT_104e6e10 == 0)) {
    iVar7 = sub_1022b720((wchar_t *)&local_1118,local_518);
    if (iVar7 != 0) goto LAB_1025da4c;
    iVar7 = sub_1022b720((wchar_t *)&local_118,local_518);
    if (iVar7 != 0) goto LAB_1025da4c;
    iVar7 = sub_1022b720(local_1918,local_518);
    if (iVar7 != 0) goto LAB_1025da4c;
    iVar7 = sub_1022b720(local_318,local_518);
    if (iVar7 != 0) goto LAB_1025da4c;
    iVar7 = sub_1022b720(local_918,local_518);
    bVar3 = iVar7 == 0;
  }
  else {
    sub_1020f410(&local_1928);
    psVar9 = (short *)&local_1118;
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    sub_1020f550(&local_1928,&local_1118,(int)psVar9 - ((int)&local_1118 + 2) >> 1);
    sub_1020f410(&local_1930);
    psVar9 = (short *)&local_118;
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar1 != 0);
    sub_1020f550(&local_1930,&local_118,(int)psVar9 - ((int)&local_118 + 2) >> 1);
    sub_1020f410(&local_1938);
    pwVar10 = local_1918;
    do {
      wVar4 = *pwVar10;
      pwVar10 = pwVar10 + 1;
    } while (wVar4 != L'\0');
    sub_1020f550(&local_1938,local_1918,(int)pwVar10 - (int)(local_1918 + 1) >> 1);
    sub_1020f410(&local_1940);
    pwVar10 = local_318;
    do {
      wVar4 = *pwVar10;
      pwVar10 = pwVar10 + 1;
    } while (wVar4 != L'\0');
    sub_1020f550(&local_1940,local_318,(int)pwVar10 - (int)(local_318 + 1) >> 1);
    sub_1020f410(&local_1920);
    pwVar10 = local_918;
    do {
      wVar4 = *pwVar10;
      pwVar10 = pwVar10 + 1;
    } while (wVar4 != L'\0');
    sub_1020f550(&local_1920,local_918,(int)pwVar10 - (int)(local_918 + 1) >> 1);
    sub_1025f1c0(&local_1928,local_1950);
    sub_1025f1e0(&local_1928,&local_194c);
    cVar2 = sub_102601f0();
    if (cVar2 != '\0') goto LAB_1025da4c;
    sub_1025f1c0(&local_1930,local_1950);
    sub_1025f1e0(&local_1930,&local_194c);
    cVar2 = sub_102601f0();
    if (cVar2 != '\0') goto LAB_1025da4c;
    sub_1025f1c0(&local_1938,local_1950);
    sub_1025f1e0(&local_1938,&local_194c);
    cVar2 = sub_102601f0();
    if (cVar2 != '\0') goto LAB_1025da4c;
    sub_1025f1c0(&local_1940,local_1950);
    sub_1025f1e0(&local_1940,&local_194c);
    cVar2 = sub_102601f0();
    if (cVar2 != '\0') goto LAB_1025da4c;
    sub_1025f1c0(&local_1920,local_1950);
    sub_1025f1e0(&local_1920,&local_194c);
    cVar2 = sub_102601f0();
    bVar3 = cVar2 == '\0';
  }
  if (bVar3) {
    sub_10260230(&DAT_104e16c4,&local_1920,(uint)&local_1944);
    return local_1945;
  }
LAB_1025da4c:
  local_1945 = 1;
  sub_10260230(&DAT_104e1664,&local_1920,(uint)&local_1944);
  return local_1945;
}


// 0x1025daa0  (ghidra: FUN_1025daa0)  [gap]
void sub_1025daa0(void)

{
  DAT_103e7778 = 0;
  DAT_103e7770 = 0;
  sub_1025ebc0(&DAT_104e1664);
  sub_1025ebc0(&DAT_104e16c4);
  DAT_104e6e10 = 0;
  DAT_103c64dc = 1;
  sub_1021cb90(&DAT_103e7670,&DAT_1037748c);
  return;
}


// 0x1025daf0  (ghidra: FUN_1025daf0)  [gap]
void sub_1025daf0(void)

{
  sub_1025ebc0(&DAT_104e1664);
  DAT_104e6e10 = 0;
  DAT_103c64dc = 1;
  return;
}


// 0x1025db10  (ghidra: FUN_1025db10)  [gap]
void sub_1025db10(void)

{
  sub_1025ebc0(&DAT_104e16c4);
  DAT_104e6e10 = 0;
  DAT_103c64dc = 1;
  return;
}


// 0x1025db30  (ghidra: FUN_1025db30)  [gap]
int __fastcall sub_1025db30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != -1) {
    for (iVar1 = *p_D2Client_DAT_6fbcbc14; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x80)) {
      if (*(int *)(iVar1 + 0x10) == param_1) {
        return iVar1;
      }
      for (piVar2 = *(int **)(iVar1 + 0x38); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 == param_1) {
          return iVar1;
        }
      }
    }
  }
  return 0;
}


// 0x1025db70  (ghidra: FUN_1025db70)  [gap]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_1025db70(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  uint extraout_ECX;
  uint64_t uVar9;
  uint8_t local_c;
  int local_b;
  
  if (*p_D2Client_DAT_6fbcc2f8 != 0) {
    return;
  }
  if ((*p_D2Client_DAT_6fbc3a68 != 0) && (piVar4 = sub_6fb2c5c0(), piVar4 == param_1)) {
    if (param_1 != (int *)0x0) {
      *p_D2Client_DAT_6fbc3afb = param_1[3];
      *p_D2Client_DAT_6fbc3afa = 1;
      return;
    }
    *p_D2Client_DAT_6fbc3afa = 0;
    return;
  }
  bVar2 = false;
  *p_D2Client_DAT_6fbc3afa = 0;
  if (param_1 == (int *)0x0) {
    if (*p_D2Client_DAT_6fbcc2f4 != 0) {
LAB_1025dd0f:
      if ((*p_D2Client_DAT_6fbc964c == 5) &&
         (piVar4 = (int *)UNIT_CUnit_6fb55b40(*p_D2Client_DAT_6fbc9638,5), piVar4 != (int *)0x0)) {
        uVar5 = D2Common_10331(piVar4);
        D2Common_10742(uVar5,piVar4[1]);
        *(uint *)*p_D2Client_DAT_6fbcc3c4 = *(uint *)*p_D2Client_DAT_6fbcc3c4 | 1;
      }
    }
    bVar2 = false;
    if (param_1 == (int *)0x0) {
      *p_D2Client_DAT_6fbcc2f4 = 0;
      return;
    }
  }
  else {
    uVar5 = UNIT_CUnit_6fb568e0(param_1,0,0,0);
    if (uVar5 == 0) {
      Fog_10024("","D2CLIENT_UpdateMouseOverUnit_INTERCEPT",0x1590);
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
    if (*p_D2Client_DAT_6fbcc2f4 != 0) {
      if ((*param_1 != *p_D2Client_DAT_6fbc964c) || (param_1[3] != *p_D2Client_DAT_6fbc9638)) goto LAB_1025dd0f;
      bVar2 = true;
    }
  }
  piVar3 = p_D2Client_DAT_6fbcc2f4;
  piVar4 = p_D2Client_DAT_6fbc964c;
  *p_D2Client_DAT_6fbc964c = *param_1;
  *p_D2Client_DAT_6fbc9638 = param_1[3];
  *piVar3 = 1;
  iVar6 = *piVar4;
  if (iVar6 != 1) {
    if (iVar6 != 2) {
      if (iVar6 != 5) {
        return;
      }
      if (bVar2) {
        return;
      }
      uVar5 = D2Common_10331(param_1);
      D2Common_10880(uVar5,param_1[1]);
      *(uint *)*p_D2Client_DAT_6fbcc3c4 = *(uint *)*p_D2Client_DAT_6fbcc3c4 | 1;
      return;
    }
    uVar5 = D2Common_11020(param_1);
    if (uVar5 == 0) {
      return;
    }
    if (param_1[4] == 4) {
      return;
    }
    DVar8 = GetTickCount();
    if (DVar8 - param_1[0x35] < 0x1f5) {
      return;
    }
    local_c = 0x3d;
    local_b = *p_D2Client_DAT_6fbc9638;
    param_1[0x35] = DVar8;
    sub_102ed200(&local_c);
    return;
  }
  if (bVar2) {
    return;
  }
  uVar5 = param_1[1];
  iVar6 = functions_HelperFunctions_102ce660(uVar5);
  uVar9 = functions_HelperFunctions_102ce690(extraout_ECX);
  iVar7 = (int)uVar9;
  if (iVar6 == 0) {
    return;
  }
  if (iVar7 == 0) {
    return;
  }
  if ((*(uint *)(iVar6 + 0xc) & 0x100) != 0) {
    return;
  }
  if (*(char *)(iVar6 + 0x4c) == '\x01') {
    return;
  }
  if ((*(uint *)(iVar7 + 4) & 0x200) == 0) {
    return;
  }
  *p_D2Client_DAT_6fba2188 = uVar5;
  iVar6 = param_1[5];
  if (iVar6 != 0) {
    bVar1 = *(byte *)(iVar6 + 0x16) >> 1;
    DAT_104dbae8 = *(byte *)(iVar6 + 0x16) >> 3 & 1;
    DAT_104dbb0c = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      wcsncpy(&DAT_103e7790,*(wchar_t **)(iVar6 + 0x2c),0x7f);
      DAT_103e788e = 0;
      goto LAB_1025dd6d;
    }
  }
  DAT_103e7790 = 0;
LAB_1025dd6d:
  if ((*(uint *)(iVar7 + 4) & 0x20000) != 0) {
    return;
  }
  *p_D2Client_DAT_6fba218c = uVar5;
  return;
}


// 0x1025de10  (ghidra: FUN_1025de10)  [gap]
void sub_1025de10(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = Fog_10022();
  if (uVar1 == 0) {
    Fog_10024("","D2CLIENT_AllocCacheMemory_INTERCEPT",0x30);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  if (*(uint *)(uVar1 + 0xc) < 0x167d000) {
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  *p_D2Client_DAT_6fbcc278 = 0x5000000;
  if (param_2 != 0) {
    D2CMP_10054(param_1,0xc00000);
  }
  D2CMP_10068(param_1,250000000,0x4e2000,0x5000000);
  sub_102f0bb0();
  return;
}


// 0x1025de90  (ghidra: FUN_1025de90)  [gap]
uint __fastcall sub_1025de90(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  iVar1 = *p_D2Client_DAT_6fbcbbfc;
  uVar2 = (ulonglong)*(uint *)(iVar1 + 0x20) * 0x6ac690c5 + (ulonglong)*(uint *)(iVar1 + 0x24);
  *(ulonglong *)(iVar1 + 0x20) = uVar2;
  if ((param_1 & param_1 - 1) != 0) {
    return (uint)((uVar2 & 0xffffffff) % (ulonglong)param_1);
  }
  return param_1 - 1 & (uint)uVar2;
}


// 0x1025dee0  (ghidra: FUN_1025dee0)  [gap]
void sub_Hook_sub_6faf4b50_1025dee0(void)

{
  *(ushort *)(*p_D2Client_DAT_6fbcb980 + 0x1eb) =
       (*p_D2Client_DAT_6fbcc390 + 1) * 0x500 | *(ushort *)(*p_D2Client_DAT_6fbcb980 + 0x1eb) & 0xe0ff;
  return;
}


// 0x1025df20  (ghidra: FUN_1025df20)  [gap]
uint32_t sub_1025df20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = D2Common_10195(param_1,2);
  if (uVar2 != 0) {
    return 1;
  }
  piVar1 = (int *)*p_D2Client_DAT_6fbcbbfc;
  if (piVar1 != (int *)0x0) {
    uVar2 = D2Common_10494_10277e30(piVar1,0x36);
    iVar3 = D2Common_10973((int)piVar1,6,0);
    if ((iVar3 < 1) && (uVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}


// 0x1025df70  (ghidra: FUN_1025df70)  [gap]
uint sub_1025df70(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = D2Common_10494_10277e30(param_1,param_2);
  if ((param_2 == 0x36) && (uVar1 != 0)) {
    iVar2 = D2Common_10973((int)param_1,6,0);
    uVar1 = (uint)(iVar2 < 1);
  }
  return uVar1;
}


// 0x1025dfb0  (ghidra: FUN_1025dfb0)  [gap]
int * __fastcall sub_1025dfb0(int *param_1)

{
  sub_10212530(param_1);
  return param_1;
}


// 0x1025dfc0  (ghidra: FUN_1025dfc0)  [gap]
void __fastcall sub_1025dfc0(int *param_1)

{
  int iVar1;
  
  iVar1 = sub_1025f2f0(param_1);
  thunk_FUN_1020fe80(iVar1);
  return;
}


// 0x1025dfd0  (ghidra: FUN_1025dfd0)  [gap]
int sub_1025dfd0(uint *param_1)

{
  int *reg_EAX;
  uint32_t uVar1;
  int extraout_EDX;
  int local_10 [2];
  int local_8;
  
  reg_EAX = sub_10253c30(local_10,param_1);
  uVar1 = sub_102128b0(local_8,param_1,reg_EAX);
  if ((char)uVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map<K, T> key");
  }
  return extraout_EDX + 0x14;
}


// 0x1025e010  (ghidra: FUN_1025e010)  [gap]
uint32_t sub_1025e010(void *param_1,uint *param_2)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  uVar1 = sub_10260270(param_2);
  sub_10218cd0(param_1,uVar1);
  return extraout_ECX;
}


// 0x1025e030  (ghidra: FUN_1025e030)  [gap]
uint32_t sub_1025e030(void *param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  puVar1 = (uint32_t *)thunk_FUN_10253cc0();
  sub_10218cd0(param_1,*puVar1);
  return extraout_ECX;
}


// 0x1025e050  (ghidra: FUN_1025e050)  [gap]
uint32_t sub_1025e050(void *param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  puVar1 = (uint32_t *)thunk_FUN_10253cc0();
  sub_10218cd0(param_1,*(uint32_t *)*puVar1);
  return extraout_ECX;
}


// 0x1025e070  (ghidra: FUN_1025e070)  [gap]
int * sub_1025e070(int *param_1)

{
  int *extraout_EDX;
  
  sub_102401f0(param_1);
  *param_1 = *extraout_EDX;
  sub_1025f300(param_1);
  return param_1;
}


// 0x1025e0a0  (ghidra: FUN_1025e0a0)  [gap]
int __fastcall sub_1025e0a0(int *param_1)

{
  return (param_1[1] - *param_1 >> 3) * -0x55555555;
}


// 0x1025e0b0  (ghidra: FUN_1025e0b0)  [gap]
void __thiscall sub_1025e0b0(void *this,uint32_t param_1)

{
  sub_1025e0c0(this,param_1);
  return;
}


// 0x1025e0c0  (ghidra: FUN_1025e0c0)  [gap]
void __thiscall sub_1025e0c0(void *this,uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 4);
  uVar2 = sub_1020fe80(param_1);
  if (iVar1 != *(int *)((int)this_00 + 8)) {
    sub_1025e0f0(this_00,uVar2);
    return;
  }
  sub_102602e0(this_00,iVar1,uVar2);
  return;
}


// 0x1025e0f0  (ghidra: FUN_1025e0f0)  [gap]
void __thiscall sub_1025e0f0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(*(uint32_t *)((int)this + 4));
  sub_102602b0(uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


// 0x1025e120  [gap]
void __fastcall thunk_FUN_1025f310(int *param_1)

{
  if (*param_1 != 0) {
    sub_1025fa50(*param_1,param_1[1]);
    sub_1020fef0((void *)*param_1,(param_1[2] - *param_1 >> 3) * -0x55555555);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x1025e130  (ghidra: FUN_1025e130)  [gap]
void * __thiscall sub_1025e130(void *this,uint32_t param_1)

{
  void *pvVar1;
  uint32_t *extraout_ECX;
  
  pvVar1 = (void *)sub_1020fe80(param_1);
  if (this != pvVar1) {
    sub_1025f350(this,extraout_ECX);
  }
  return this;
}


// 0x1025e160  (ghidra: FUN_1025e160)  [gap]
void __thiscall sub_1025e160(void *this,locale *param_1)

{
  _Facet_base *p_Var1;
  
  p_Var1 = sub_1025fc00(param_1);
  sub_1025f3e0(this,(codecvt_base *)p_Var1);
  return;
}


// 0x1025e180  (ghidra: FUN_1025e180)  [gap]
uint32_t __fastcall sub_1025e180(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  if (param_1[0x13] != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    uVar3 = sub_10237ae0();
    local_8 = (*pcVar1)(uVar3 & 0xffff);
    local_8 = local_8 & 0xffff;
    local_c = uVar3 & 0xffff;
    bVar2 = sub_10237b20((short *)&local_c,(short *)&local_8);
    if (!bVar2) {
      iVar4 = fflush((FILE *)param_1[0x13]);
      if (iVar4 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


// 0x1025e1f0  (ghidra: FUN_1025e1f0)  [gap]
void * __thiscall sub_1025e1f0(void *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 == (char *)0x0) && (param_2 == 0 && param_3 == 0)) {
    iVar1 = 4;
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    iVar1 = setvbuf(*(FILE **)((int)this + 0x4c),param_1,iVar1,param_2 * 2);
    if (iVar1 == 0) {
      sub_1025f520(this,*(uint32_t *)((int)this + 0x4c),1);
      return this;
    }
  }
  return (void *)0x0;
}


// 0x1025e250  (ghidra: FUN_1025e250)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall sub_1025e250(void *this,void *param_1)

{
  uint32_t uVar1;
  bool bVar2;
  int iVar3;
  uint32_t *puVar4;
  uint32_t local_20 [2];
  uint64_t local_18;
  uint local_c;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)local_20;
  local_18 = sub_10237950((uint *)&stack0x00000008);
  if (*(int *)((int)this + 0x4c) != 0) {
    bVar2 = sub_1025f420(this);
    if (bVar2) {
      iVar3 = fsetpos(*(FILE **)((int)this + 0x4c),&local_18);
      if (iVar3 == 0) {
        puVar4 = (uint32_t *)sub_1023ff60(&stack0x00000008,local_20);
        uVar1 = *puVar4;
        *(uint32_t *)((int)this + 0x44) = puVar4[1];
        *(uint32_t *)((int)this + 0x40) = uVar1;
        sub_1025f3b0(this);
        sub_1023ff80(param_1,*(uint32_t *)((int)this + 0x40),*(uint32_t *)((int)this + 0x44),
                     (uint32_t)local_18,local_18._4_4_);
        return param_1;
      }
    }
  }
  sub_10237960(param_1,0xffffffff,0xffffffff);
  return param_1;
}


// 0x1025e310  (ghidra: FUN_1025e310)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __thiscall
sub_1025e310(void *this,void *param_2,uint param_3,int param_4,int param_5,int reg_EDI)

{
  wchar_t *pwVar1;
  int iVar2;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  uint32_t uVar3;
  bool bVar4;
  void *local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)&local_1c;
  local_1c = param_2;
  pwVar1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(this);
  if (((pwVar1 == (wchar_t *)((int)this + 0x3c)) && (param_5 == 1)) &&
     (*(int *)((int)this + 0x38) == 0)) {
    bVar4 = 1 < param_3;
    param_3 = param_3 - 2;
    param_4 = param_4 + -1 + (uint)bVar4;
  }
  if ((((*(int *)((int)this + 0x4c) == 0) || (bVar4 = sub_1025f420(this), !bVar4)) ||
      (((param_3 != 0 || param_4 != 0 || (param_5 != 1)) &&
       (iVar2 = _fseeki64(*(FILE **)((int)this + 0x4c),CONCAT44(param_5,param_4),reg_EDI),
       iVar2 != 0)))) ||
     (iVar2 = fgetpos(*(FILE **)((int)this + 0x4c),(fpos_t *)&local_18), iVar2 != 0)) {
    sub_10237960(local_1c,0xffffffff,0xffffffff);
    uVar3 = extraout_ECX_00;
  }
  else {
    sub_1025f3b0(this);
    sub_1023ff80(local_1c,*(uint32_t *)((int)this + 0x40),*(uint32_t *)((int)this + 0x44),
                 local_18,local_14);
    uVar3 = extraout_ECX;
  }
  return uVar3;
}


// 0x1025e3f0  (ghidra: FUN_1025e3f0)  [gap]
__int64 __thiscall sub_1025e3f0(void *this,wchar_t *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t unaff_EBP;
  __int64 _Var1;
  
  _Var1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsputn
                    (this,param_1,CONCAT44(unaff_EBP,param_3));
  return _Var1;
}


// 0x1025e410  (ghidra: FUN_1025e410)  [gap]
__int64 __thiscall sub_1025e410(void *this,wchar_t *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t unaff_EBP;
  __int64 _Var1;
  
  _Var1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::xsgetn
                    (this,param_1,CONCAT44(unaff_EBP,param_3));
  return _Var1;
}


// 0x1025e430  (ghidra: FUN_1025e430)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall sub_1025e430(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  uint16_t uVar1;
  ushort uVar2;
  short sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint16_t extraout_var;
  uint uVar6;
  uint32_t uVar7;
  int iVar8;
  char *extraout_EDX;
  int extraout_EDX_00;
  uint64_t uVar9;
  wchar_t *local_38;
  char *local_34;
  uint32_t local_30 [6];
  wchar_t local_18;
  wchar_t local_16;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306dcd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pwVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(param_1);
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr(param_1);
    pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(param_1);
    if (pwVar5 < pwVar4) {
      pwVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Gninc(param_1);
      uVar1 = sub_10237b40(pwVar4);
      ExceptionList = local_10;
      return CONCAT22(extraout_var,uVar1);
    }
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar6 = sub_10237ae0();
  }
  else {
    sub_1025f3b0(param_1);
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar7 = sub_10255ce0((wint_t *)&local_34,*(FILE **)(param_1 + 0x4c));
      if ((char)uVar7 == '\0') {
        uVar6 = sub_10237ae0();
        uVar6 = uVar6 & 0xffff;
      }
      else {
        uVar2 = sub_10237b40((uint16_t *)&local_34);
        uVar6 = (uint)uVar2;
      }
    }
    else {
      sub_10237930(local_30);
      local_8 = 0;
      iVar8 = fgetc(*(FILE **)(param_1 + 0x4c));
      if (iVar8 != -1) {
LAB_1025e505:
        sub_1023fff0(local_30,iVar8);
        thunk_FUN_1020fe30((int)local_30);
        iVar8 = client_DrawHoverItem_10224f20((int)local_30);
        iVar8 = std::codecvt<wchar_t,char,_Mbstatet>::in
                          (*(codecvt<wchar_t,char,_Mbstatet> **)(param_1 + 0x38),
                           (_Mbstatet *)(param_1 + 0x40),extraout_EDX,extraout_EDX + iVar8,&local_34
                           ,&local_18,&local_16,&local_38);
        if ((iVar8 == 0) || (iVar8 == 1)) {
          thunk_FUN_1020fe30((int)local_30);
          if (local_38 == &local_18) goto code_r0x1025e55a;
          iVar8 = client_DrawHoverItem_10224f20((int)local_30);
          for (iVar8 = iVar8 + (extraout_EDX_00 - (int)local_34); 0 < iVar8; iVar8 = iVar8 + -1) {
            ungetc((int)local_34[iVar8 + -1],*(FILE **)(param_1 + 0x4c));
          }
          sVar3 = sub_10237b40(&local_18);
        }
        else if (iVar8 == 3) {
          uVar9 = thunk_FUN_1020fe30((int)local_30);
          sVar3 = (short)*(char *)uVar9;
        }
        else {
          uVar7 = sub_10237ae0();
          sVar3 = (short)uVar7;
        }
        goto LAB_1025e581;
      }
LAB_1025e576:
      uVar7 = sub_10237ae0();
      sVar3 = (short)uVar7;
LAB_1025e581:
      uVar9 = thunk_FUN_1020fc60(local_30);
      uVar6 = CONCAT22((short)((ulonglong)uVar9 >> 0x10),sVar3);
    }
  }
  ExceptionList = local_10;
  return uVar6;
code_r0x1025e55a:
  sub_102378e0(local_30);
  iVar8 = fgetc(*(FILE **)(param_1 + 0x4c));
  if (iVar8 == -1) goto LAB_1025e576;
  goto LAB_1025e505;
}


// 0x1025e610  (ghidra: FUN_1025e610)  [gap]
ushort __fastcall sub_1025e610(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  bool bVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint local_c;
  uint local_8;
  
  pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(param_1);
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr(param_1);
    pwVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(param_1);
    if (pwVar4 < pwVar3) {
      pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(param_1);
      uVar2 = sub_10237b40(pwVar3);
      return uVar2;
    }
  }
  uVar2 = (**(code **)(*(int *)param_1 + 0x1c))();
  local_8 = (uint)uVar2;
  local_c = sub_10237ae0();
  local_c = local_c & 0xffff;
  bVar1 = sub_10237b20((short *)&local_c,(short *)&local_8);
  if (!bVar1) {
    (**(code **)(*(int *)param_1 + 0x10))((uint)uVar2);
  }
  return uVar2;
}


// 0x1025e690  (ghidra: FUN_1025e690)  [gap]
uint __thiscall sub_1025e690(void *this,ushort param_1)

{
  FILE *pFVar1;
  bool bVar2;
  ushort uVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint16_t extraout_var;
  uint32_t uVar8;
  void *local_8;
  
  local_8 = this;
  pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(this);
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback(this);
    pwVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(this);
    if (pwVar5 < pwVar6) {
      uVar7 = sub_10237ae0();
      local_8 = (void *)(uVar7 & 0xffff);
      bVar2 = sub_10237b20((short *)&local_8,(short *)&param_1);
      if (bVar2) {
LAB_1025e702:
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Gndec(this);
        uVar3 = sub_10237af0(&param_1);
        return CONCAT22(extraout_var,uVar3);
      }
      pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(this);
      uVar3 = sub_10237b40(pwVar5 + -1);
      local_8 = (void *)(uint)uVar3;
      bVar2 = sub_10237b20((short *)&local_8,(short *)&param_1);
      if (bVar2) goto LAB_1025e702;
    }
  }
  pFVar1 = *(FILE **)((int)this + 0x4c);
  if (pFVar1 == (FILE *)0x0) {
LAB_1025e7ac:
    uVar7 = sub_10237ae0();
    return uVar7;
  }
  uVar7 = sub_10237ae0();
  local_8 = (void *)(uVar7 & 0xffff);
  bVar2 = sub_10237b20((short *)&local_8,(short *)&param_1);
  if (bVar2) goto LAB_1025e7ac;
  if (*(int *)((int)this + 0x38) == 0) {
    uVar3 = sub_10237b40(&param_1);
    local_8 = (void *)(uint)uVar3;
    uVar8 = sub_10255d30((wint_t *)&local_8,pFVar1);
    if ((char)uVar8 != '\0') goto LAB_1025e793;
  }
  pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::gptr(this);
  if (pwVar5 == (wchar_t *)((int)this + 0x3c)) {
    return CONCAT22((short)((uint)pwVar5 >> 0x10),(short)uVar7);
  }
  wVar4 = sub_10237b40(&param_1);
  *(wchar_t *)((int)this + 0x3c) = wVar4;
  uVar8 = sub_1025f370(this);
LAB_1025e793:
  return CONCAT22((short)((uint)uVar8 >> 0x10),param_1);
}


// 0x1025e7c0  (ghidra: FUN_1025e7c0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall sub_1025e7c0(void *this,ushort param_1)

{
  codecvt<wchar_t,char,_Mbstatet> *this_00;
  bool bVar1;
  ushort uVar2;
  wchar_t wVar3;
  uint uVar4;
  uint16_t extraout_var;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint16_t extraout_var_00;
  int iVar7;
  char *pcVar8;
  wchar_t *local_34;
  char *local_30;
  uint32_t local_2c;
  char local_28 [32];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar4 = sub_10237ae0();
  pcVar8 = (char *)(uVar4 & 0xffff);
  local_30 = pcVar8;
  bVar1 = sub_10237b20((short *)&local_30,(short *)&param_1);
  if (bVar1) {
    uVar2 = sub_10237af0(&param_1);
    return CONCAT22(extraout_var,uVar2);
  }
  pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr(this);
  pwVar6 = (wchar_t *)0x0;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar5 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::epptr(this);
    pwVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::pptr(this);
    if (pwVar6 < pwVar5) {
      pwVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Pninc(this);
      wVar3 = sub_10237b40(&param_1);
      *pwVar6 = wVar3;
      return CONCAT22(extraout_var_00,param_1);
    }
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    sub_1025f3b0(this);
    this_00 = *(codecvt<wchar_t,char,_Mbstatet> **)((int)this + 0x38);
    wVar3 = sub_10237b40(&param_1);
    if (this_00 == (codecvt<wchar_t,char,_Mbstatet> *)0x0) {
      bVar1 = sub_10255d10(wVar3,*(FILE **)((int)this + 0x4c));
      if (bVar1) {
        return (uint)param_1;
      }
      return (uint)pcVar8;
    }
    local_2c = (uint)(ushort)wVar3;
    iVar7 = std::codecvt<wchar_t,char,_Mbstatet>::out
                      (this_00,(_Mbstatet *)((int)this + 0x40),(wchar_t *)&local_2c,
                       (wchar_t *)((int)&local_2c + 2),&local_34,local_28,(char *)&local_8,&local_30
                      );
    if ((iVar7 == 0) || (iVar7 == 1)) {
      pwVar5 = (wchar_t *)(local_30 + -(int)local_28);
      if ((pwVar5 == (wchar_t *)0x0) ||
         (pwVar6 = (wchar_t *)fwrite(local_28,1,(size_t)pwVar5,*(FILE **)((int)this + 0x4c)),
         pwVar5 == pwVar6)) {
        *(uint8_t *)((int)this + 0x3e) = 1;
        pwVar6 = (wchar_t *)CONCAT22((short)((uint)&local_2c >> 0x10),param_1);
        if (local_34 != (wchar_t *)&local_2c) {
          return (uint)pwVar6;
        }
      }
    }
    else {
      pwVar6 = (wchar_t *)(iVar7 + -3);
      if (pwVar6 == (wchar_t *)0x0) {
        bVar1 = sub_10255d10((wchar_t)local_2c,*(FILE **)((int)this + 0x4c));
        if (bVar1) {
          return (uint)param_1;
        }
        return (uint)pcVar8;
      }
    }
  }
  return CONCAT22((short)((uint)pwVar6 >> 0x10),(short)uVar4);
}


// 0x1025e960  (ghidra: FUN_1025e960)  [gap]
void __fastcall sub_1025e960(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103047e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(uint8_t ***)param_1 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if (*(int *)(param_1 + 0x4c) != 0) {
    sub_1025f3b0(param_1);
  }
  if (param_1[0x48] != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)0x0) {
    sub_1025f560(param_1);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(param_1);
  ExceptionList = local_10;
  return;
}


// 0x1025e9c0  (ghidra: FUN_1025e9c0)  [gap]
void __fastcall sub_1025e9c0(int param_1)

{
  int iVar1;
  
  *(uint8_t ***)(*(int *)(*(int *)(param_1 + -0x70) + 4) + -0x70 + param_1) =
       std::basic_ifstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  iVar1 = *(int *)(*(int *)(param_1 + -0x70) + 4);
  *(int *)(iVar1 + -0x74 + param_1) = iVar1 + -0x70;
  sub_1025e960((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + -0x60));
                    /* WARNING: Could not recover jumptable at 0x1025e9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_istream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_istream<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + -0x58));
  return;
}


// 0x1025e9f0  (ghidra: FUN_1025e9f0)  [gap]
basic_istream<wchar_t,std::char_traits<wchar_t>_> * __fastcall
sub_1025e9f0(basic_istream<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  uint32_t extraout_ECX;
  bool bVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306e39;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(uint8_t **)param_1 = &DAT_1037c058;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 0x70));
  local_8 = 0;
  bVar2 = false;
  pbVar1 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)sub_1020fe80(param_1 + 0x10);
  std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::
  basic_istream<wchar_t,std::char_traits<wchar_t>_>(param_1,pbVar1,bVar2);
  local_8 = 1;
  *(uint8_t ***)(param_1 + *(int *)(*(int *)param_1 + 4)) =
       std::basic_ifstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(param_1 + *(int *)(*(int *)param_1 + 4) + -4) = *(int *)(*(int *)param_1 + 4) + -0x70;
  sub_1025f660((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 0x10));
  local_8 = CONCAT31(local_8._1_3_,2);
  pbVar1 = sub_1025f5b0(param_1 + 0x10,extraout_ECX,1);
  if (pbVar1 == (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (param_1 + *(int *)(*(int *)param_1 + 4)),2,false);
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x1025eac0  (ghidra: FUN_1025eac0)  [gap]
void sub_1025eac0(void)

{
  int iVar1;
  void *this;
  
  iVar1 = sub_1025f780();
  sub_1025f6f0(this,this,iVar1);
  return;
}


// 0x1025eae0  (ghidra: FUN_1025eae0)  [gap]
void __fastcall sub_1025eae0(int *param_1)

{
  sub_1025f6c0(param_1);
  thunk_FUN_1025f2e0((int)(param_1 + 1));
  return;
}


// 0x1025eb00  (ghidra: FUN_1025eb00)  [gap]
uint32_t * __fastcall sub_1025eb00(uint32_t *param_1)

{
  int iVar1;
  uint32_t extraout_ECX;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306e70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  sub_1025f290(param_1 + 1);
  local_8 = 0;
  iVar1 = sub_1025f780();
  sub_10260420(param_1,extraout_ECX,(int)(&DAT_103e7670 + iVar1));
  ExceptionList = local_10;
  return param_1;
}


// 0x1025eb70  (ghidra: FUN_1025eb70)  [gap]
uint32_t * sub_1025eb70(void)

{
  DAT_104e17bc = 0;
  sub_1025f290((uint32_t *)&DAT_104e17c0);
  return &DAT_104e17bc;
}


// 0x1025eba0  (ghidra: FUN_1025eba0)  [gap]
uint32_t __thiscall sub_1025eba0(void *this,void *param_1,uint *param_2)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  uVar1 = sub_102604a0(this,param_2);
  sub_10218cd0(param_1,uVar1);
  return extraout_ECX;
}


// 0x1025ebc0  (ghidra: FUN_1025ebc0)  [gap]
void __fastcall sub_1025ebc0(uint32_t param_1)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uint32_t extraout_ECX;
  uint32_t *puVar4;
  
  piVar2 = (int *)thunk_FUN_1020fe80(param_1);
  iVar1 = *piVar2;
  puVar4 = *(uint32_t **)(iVar1 + 4);
  uVar3 = thunk_FUN_1020fe80(extraout_ECX);
  sub_102110a0(uVar3,puVar4);
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  piVar2[1] = 0;
  return;
}


// 0x1025ebf0  (ghidra: FUN_1025ebf0)  [gap]
int sub_1025ebf0(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)sub_1020fe80(&DAT_104e6dc8);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  return iVar1;
}


// 0x1025ec10  (ghidra: FUN_1025ec10)  [gap]
int __fastcall sub_1025ec10(uint32_t param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)sub_1020fe80(param_1);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return iVar1;
}


// 0x1025ec30  (ghidra: FUN_1025ec30)  [gap]
int sub_1025ec30(int param_1)

{
  return DAT_104e1694 + param_1 * 4;
}


// 0x1025ec50  (ghidra: FUN_1025ec50)  [gap]
int sub_1025ec50(void)

{
  return DAT_104e1698 - DAT_104e1694 >> 2;
}


// 0x1025ec60  (ghidra: FUN_1025ec60)  [gap]
uint32_t sub_1025ec60(void)

{
  return DAT_104e1698;
}


// 0x1025ec70  (ghidra: FUN_1025ec70)  [gap]
uint32_t sub_1025ec70(void)

{
  return DAT_104e1694;
}


// 0x1025ec80  (ghidra: FUN_1025ec80)  [gap]
uint32_t sub_1025ec80(void *param_1)

{
  uint32_t extraout_ECX;
  
  sub_10218cd0(param_1,DAT_104e1694);
  return extraout_ECX;
}


// 0x1025eca0  (ghidra: FUN_1025eca0)  [gap]
void sub_1025eca0(void)

{
  DAT_104e1698 = DAT_104e1694;
  return;
}


// 0x1025ecb0  (ghidra: FUN_1025ecb0)  [gap]
uint32_t sub_1025ecb0(void *param_1,int param_2)

{
  uint32_t extraout_ECX;
  
  sub_1024ebd0(param_2 + 4,DAT_104e1698,param_2);
  DAT_104e1698 = DAT_104e1698 + -4;
  sub_10218cd0(param_1,param_2);
  return extraout_ECX;
}


// 0x1025ece0  (ghidra: FUN_1025ece0)  [gap]
void sub_1025ece0(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1025ed00(uVar1);
  return;
}


// 0x1025ed00  (ghidra: FUN_1025ed00)  [gap]
void sub_1025ed00(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  if (DAT_104e1698 != DAT_104e169c) {
    sub_1025ed30(uVar1);
    return;
  }
  sub_102604e0(DAT_104e1698,uVar1);
  return;
}


// 0x1025ed30  (ghidra: FUN_1025ed30)  [gap]
void sub_1025ed30(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_1020fe80(DAT_104e1698);
  sub_10212910(uVar1);
  DAT_104e1698 = DAT_104e1698 + 4;
  return;
}


// 0x1025ed70  (ghidra: FUN_1025ed70)  [gap]
uint32_t * sub_1025ed70(void)

{
  sub_102605a0();
  return &DAT_104e1694;
}


// 0x1025ed90  (ghidra: FUN_1025ed90)  [gap]
void __thiscall sub_1025ed90(void *this,uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = *(uint32_t *)((int)this + 4);
  *param_1 = *(uint32_t *)this;
  param_1[1] = uVar1;
  return;
}


// 0x1025edb0  (ghidra: FUN_1025edb0)  [gap]
void sub_1025edb0(int param_1,int param_2)

{
  sub_1025fbf0(param_1,param_2 - param_1 >> 1);
  return;
}


// 0x1025edd0  (ghidra: FUN_1025edd0)  [gap]
uint32_t * __thiscall
sub_1025edd0(void *this,uint32_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int extraout_ECX;
  uint uVar1;
  uint extraout_EDX;
  uint uVar2;
  uint64_t uVar3;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306eae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  client_DrawHoverItem_10225070(param_1);
  local_8 = 0;
  uVar1 = (int)param_3 - (int)param_2 >> 1;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      sub_1025efb0(param_1,uVar1);
      sub_1025f090((int)param_1);
      client_DrawHoverItem_10224f20((int)param_1);
      uVar3 = sub_1025f090(extraout_ECX);
      sub_102548d0((wchar_t *)uVar3,(wchar_t *)((ulonglong)uVar3 >> 0x20),param_2,param_3,
                   (_Collvec *)((int)this + 8));
      uVar1 = client_DrawHoverItem_10224f20((int)param_1);
      uVar2 = extraout_EDX;
      if (extraout_EDX <= uVar1) break;
      uVar1 = extraout_EDX;
    } while (extraout_EDX != 0);
  }
  sub_1025efb0(param_1,uVar2);
  ExceptionList = local_10;
  return param_1;
}


// 0x1025eea0  (ghidra: FUN_1025eea0)  [gap]
uint __thiscall
sub_1025eea0(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  int iVar1;
  
  iVar1 = sub_102548b0(param_1,param_2,param_3,param_4,(_Collvec *)((int)this + 8));
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (uint)(iVar1 != 0);
}


// 0x1025eee0  (ghidra: FUN_1025eee0)  [gap]
void __fastcall sub_1025eee0(facet *param_1)

{
  *(uint8_t ***)param_1 = std::collate<wchar_t>::vftable;
  free(*(void **)(param_1 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x1025eef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::locale::facet::~facet(param_1);
  return;
}


// 0x1025ef00  (ghidra: FUN_1025ef00)  [gap]
void * __thiscall sub_1025ef00(void *this,void *param_1,uint param_2)

{
  sub_1025f980(param_1,this,param_2);
  return param_1;
}


// 0x1025ef20  (ghidra: FUN_1025ef20)  [gap]
void __fastcall sub_1025ef20(int param_1)

{
  uint64_t uVar1;
  
  uVar1 = client_DrawHoverItem_10225280(param_1);
  sub_102606a0((short *)uVar1,*(int *)((int)((ulonglong)uVar1 >> 0x20) + 0x10));
  return;
}


// 0x1025ef40  (ghidra: FUN_1025ef40)  [gap]
void __thiscall sub_1025ef40(void *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint32_t *extraout_ECX;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 <= param_1) && (*(uint *)((int)this + 0x14) != param_1)) {
    if (*(uint *)((int)this + 0x14) < param_1) {
      sub_102606d0(this,param_1 - uVar1);
      *(uint *)((int)this + 0x10) = uVar1;
      return;
    }
    if (param_1 < 8) {
      bVar2 = client_DrawHoverItem_10225270((int)this);
      if (bVar2) {
        sub_1025f7c0(extraout_ECX);
      }
    }
  }
  return;
}


// 0x1025ef90  (ghidra: FUN_1025ef90)  [gap]
void sub_1025ef90(void *param_1,void *param_2,int param_3)

{
  client_DrawHoverItem_102253a0(param_1,param_2,param_3 + 1);
  return;
}


// 0x1025efb0  (ghidra: FUN_1025efb0)  [gap]
void __thiscall sub_1025efb0(void *this,uint param_1)

{
  uint uVar1;
  void *this_00;
  
  uVar1 = client_DrawHoverItem_10224f20((int)this);
  if (param_1 <= uVar1) {
    sub_1025f790(this_00,param_1);
    return;
  }
  sub_1025f800(this_00,param_1 - uVar1);
  return;
}


// 0x1025efe0  (ghidra: FUN_1025efe0)  [gap]
void __thiscall sub_1025efe0(void *this,uint32_t param_1)

{
  int extraout_ECX;
  uint64_t uVar1;
  void *local_8;
  
  if (*(uint *)((int)this + 0x10) < *(uint *)((int)this + 0x14)) {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) + 1;
    local_8 = this;
    uVar1 = client_DrawHoverItem_10225280((int)this);
    client_DrawHoverItem_10225350((uint16_t *)((int)uVar1 + (int)((ulonglong)uVar1 >> 0x20) * 2),
                 (uint16_t *)&param_1);
    local_8 = (void *)0x0;
    client_DrawHoverItem_10225350((uint16_t *)(extraout_ECX + 2),(uint16_t *)&local_8);
    return;
  }
  local_8 = (void *)((uint)this & 0xffffff00);
  sub_10260790(this);
  return;
}


// 0x1025f030  (ghidra: FUN_1025f030)  [gap]
void sub_1025f030(void *param_1,void *param_2,int param_3)

{
  int extraout_ECX;
  uint32_t local_8;
  uint8_t  stack0x00000010;   /* not traced by Ghidra: address of a stack slot */
  
  client_DrawHoverItem_102253a0(param_1,param_2,param_3);
  client_DrawHoverItem_10225350((uint16_t *)((int)param_1 + param_3 * 2),(uint16_t *)&stack0x00000010);
  local_8 = 0;
  client_DrawHoverItem_10225350((uint16_t *)(extraout_ECX + 2),(uint16_t *)&local_8);
  return;
}


// 0x1025f070  (ghidra: FUN_1025f070)  [gap]
uint32_t __thiscall sub_1025f070(void *this,void *param_1)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = client_DrawHoverItem_10225280((int)this);
  sub_1020f550(param_1,(int)uVar1,*(uint32_t *)((int)((ulonglong)uVar1 >> 0x20) + 0x10));
  return extraout_ECX;
}


// 0x1025f090  (ghidra: FUN_1025f090)  [gap]
uint64_t __fastcall sub_1025f090(int param_1)

{
  uint64_t uVar1;
  
  uVar1 = client_DrawHoverItem_10225280(param_1);
  return uVar1;
}


// 0x1025f0a0  (ghidra: FUN_1025f0a0)  [gap]
int __fastcall sub_1025f0a0(int param_1)

{
  uint64_t uVar1;
  
  uVar1 = client_DrawHoverItem_10225280(param_1);
  return (int)uVar1 + *(int *)((int)((ulonglong)uVar1 >> 0x20) + 0x10) * 2;
}


// 0x1025f0b0  (ghidra: FUN_1025f0b0)  [gap]
uint32_t __thiscall sub_1025f0b0(void *this,void *param_1)

{
  int iVar1;
  uint32_t extraout_ECX;
  int extraout_EDX;
  uint64_t uVar2;
  
  uVar2 = client_DrawHoverItem_10225280((int)this);
  iVar1 = sub_1020fe80((int)uVar2);
  sub_10218cd0(param_1,iVar1 + *(int *)(extraout_EDX + 0x10) * 2);
  return extraout_ECX;
}


// 0x1025f0e0  (ghidra: FUN_1025f0e0)  [gap]
uint64_t __thiscall sub_1025f0e0(void *this,void *param_1)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  uint64_t uVar2;
  
  uVar2 = client_DrawHoverItem_10225280((int)this);
  uVar1 = sub_1020fe80((int)uVar2);
  uVar2 = sub_10218cd0(param_1,uVar1);
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),extraout_ECX);
}


// 0x1025f100  (ghidra: FUN_1025f100)  [gap]
void * __fastcall sub_1025f100(void *param_1)

{
  sub_10231d20(param_1,0);
  sub_1025f790(param_1,0);
  return param_1;
}


// 0x1025f120  (ghidra: FUN_1025f120)  [gap]
void * __thiscall sub_1025f120(void *this,uint32_t param_1)

{
  sub_1025efe0(this,param_1);
  return this;
}


// 0x1025f140  (ghidra: FUN_1025f140)  [gap]
void * __thiscall sub_1025f140(void *this,uint32_t param_1)

{
  void *pvVar1;
  uint16_t *extraout_ECX;
  
  pvVar1 = (void *)sub_1020fe80(param_1);
  if (this != pvVar1) {
    sub_1025f960(this,extraout_ECX);
  }
  return this;
}


// 0x1025f170  (ghidra: FUN_1025f170)  [gap]
uint32_t * __thiscall sub_1025f170(void *this,uint param_1)

{
  void *this_00;
  
  sub_10210440(this);
  sub_1025f8c0(this_00,param_1);
  return this;
}


// 0x1025f190  (ghidra: FUN_1025f190)  [gap]
void __fastcall sub_1025f190(int param_1)

{
  uint64_t uVar1;
  
  uVar1 = sub_1020fe30(param_1);
  sub_10242690((int)uVar1,*(uint *)((int)((ulonglong)uVar1 >> 0x20) + 0x10),0);
  return;
}


// 0x1025f1b0  (ghidra: FUN_1025f1b0)  [gap]
bool __fastcall sub_1025f1b0(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}


// 0x1025f1c0  (ghidra: FUN_1025f1c0)  [gap]
uint32_t __thiscall sub_1025f1c0(void *this,void *param_1)

{
  uint32_t extraout_ECX;
  
  sub_102423f0(param_1,*(int *)this + *(int *)((int)this + 4) * 2);
  return extraout_ECX;
}


// 0x1025f1e0  (ghidra: FUN_1025f1e0)  [gap]
uint32_t __thiscall sub_1025f1e0(void *this,void *param_1)

{
  uint32_t extraout_ECX;
  
  sub_102423f0(param_1,*(uint32_t *)this);
  return extraout_ECX;
}


// 0x1025f200  (ghidra: FUN_1025f200)  [gap]
uint32_t * __thiscall sub_1025f200(void *this,char *param_1)

{
  int iVar1;
  
  *(char **)this = param_1;
  iVar1 = sub_1020fe50(param_1);
  *(int *)((int)this + 4) = iVar1;
  return this;
}


// 0x1025f220  (ghidra: FUN_1025f220)  [gap]
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __thiscall
sub_1025f220(void *this,byte param_1)

{
  sub_1025e960(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1025f250  (ghidra: FUN_1025f250)  [gap]
void * __thiscall sub_1025f250(void *this,byte param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((int)this + -0x70);
  sub_10256130((int)pvVar1);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(pvVar1);
  }
  return pvVar1;
}


// 0x1025f280  [gap]
void __fastcall thunk_FUN_1025f2e0(int param_1)

{
  sub_10238470(param_1 + 8);
  return;
}


// 0x1025f290  (ghidra: FUN_1025f290)  [gap]
uint32_t * __fastcall sub_1025f290(uint32_t *param_1)

{
  sub_1025f720(param_1);
  return param_1;
}


// 0x1025f2b0  (ghidra: FUN_1025f2b0)  [gap]
facet * __thiscall sub_1025f2b0(void *this,byte param_1)

{
  sub_1025eee0(this);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(this);
  }
  return this;
}


// 0x1025f2e0  (ghidra: FUN_1025f2e0)  [gap]
void __fastcall sub_1025f2e0(int param_1)

{
  sub_10238470(param_1 + 8);
  return;
}


// 0x1025f2f0  (ghidra: FUN_1025f2f0)  [gap]
int __fastcall sub_1025f2f0(int *param_1)

{
  return *param_1 + 0x10;
}


// 0x1025f300  (ghidra: FUN_1025f300)  [gap]
uint32_t __fastcall sub_1025f300(int *param_1)

{
  uint32_t extraout_ECX;
  
  thunk_FUN_1025faf0(param_1);
  return extraout_ECX;
}


// 0x1025f310  (ghidra: FUN_1025f310)  [gap]
void __fastcall sub_1025f310(int *param_1)

{
  if (*param_1 != 0) {
    sub_1025fa50(*param_1,param_1[1]);
    sub_1020fef0((void *)*param_1,(param_1[2] - *param_1 >> 3) * -0x55555555);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x1025f350  (ghidra: FUN_1025f350)  [gap]
void __thiscall sub_1025f350(void *this,uint32_t *param_1)

{
  sub_1025f310(this);
  Take_contents(this,param_1);
  return;
}


// 0x1025f370  (ghidra: FUN_1025f370)  [gap]
void __fastcall sub_1025f370(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar2;
  wchar_t *pwVar3;
  
  pbVar1 = param_1 + 0x3c;
  pbVar2 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
           std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback(param_1);
  if (pbVar2 != pbVar1) {
    pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback(param_1);
    *(wchar_t **)(param_1 + 0x50) = pwVar3;
    pwVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::egptr(param_1);
    *(wchar_t **)(param_1 + 0x54) = pwVar3;
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (param_1,(wchar_t *)pbVar1,(wchar_t *)pbVar1,(wchar_t *)(param_1 + 0x3e));
  return;
}


// 0x1025f3b0  (ghidra: FUN_1025f3b0)  [gap]
void __fastcall sub_1025f3b0(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  
  pbVar1 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
           std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::eback(param_1);
  if (pbVar1 == param_1 + 0x3c) {
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
              (param_1,*(wchar_t **)(param_1 + 0x50),*(wchar_t **)(param_1 + 0x50),
               *(wchar_t **)(param_1 + 0x54));
  }
  return;
}


// 0x1025f3e0  (ghidra: FUN_1025f3e0)  [gap]
void __thiscall sub_1025f3e0(void *this,codecvt_base *param_1)

{
  bool bVar1;
  uint32_t uVar2;
  
  bVar1 = std::codecvt_base::always_noconv(param_1);
  if (bVar1) {
    *(uint32_t *)((int)this + 0x38) = 0;
    return;
  }
  uVar2 = sub_1020fe80(param_1);
  *(uint32_t *)((int)this + 0x38) = uVar2;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init(this);
  return;
}


// 0x1025f420  (ghidra: FUN_1025f420)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __fastcall sub_1025f420(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t _Count;
  uint local_34;
  uint local_30;
  char *local_2c;
  char local_28 [32];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((param_1[0xe] == 0) || (*(char *)((int)param_1 + 0x3e) == '\0')) {
    return true;
  }
  pcVar1 = *(code **)(*param_1 + 0xc);
  uVar3 = sub_10237ae0();
  local_30 = (*pcVar1)(uVar3 & 0xffff);
  local_30 = local_30 & 0xffff;
  local_34 = uVar3 & 0xffff;
  bVar2 = sub_10237b20((short *)&local_34,(short *)&local_30);
  if (bVar2) {
    return false;
  }
  iVar4 = std::codecvt<wchar_t,char,_Mbstatet>::unshift
                    ((codecvt<wchar_t,char,_Mbstatet> *)param_1[0xe],(_Mbstatet *)(param_1 + 0x10),
                     local_28,(char *)&local_8,&local_2c);
  if (iVar4 == 0) {
    *(uint8_t *)((int)param_1 + 0x3e) = 0;
  }
  else if (iVar4 != 1) {
    if (iVar4 != 3) {
      return false;
    }
    *(uint8_t *)((int)param_1 + 0x3e) = 0;
    return true;
  }
  _Count = (int)local_2c - (int)local_28;
  if ((_Count != 0) && (sVar5 = fwrite(local_28,1,_Count,(FILE *)param_1[0x13]), _Count != sVar5)) {
    return false;
  }
  return *(char *)((int)param_1 + 0x3e) == '\0';
}


// 0x1025f520  (ghidra: FUN_1025f520)  [gap]
void __thiscall sub_1025f520(void *this,uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  *(uint8_t *)((int)this + 0x3e) = 0;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::_Init(this);
  uVar2 = DAT_104e6f5c;
  uVar1 = DAT_104e6f58;
  *(uint32_t *)((int)this + 0x4c) = param_1;
  *(uint32_t *)((int)this + 0x40) = uVar1;
  *(uint32_t *)((int)this + 0x44) = uVar2;
  *(uint32_t *)((int)this + 0x38) = 0;
  return;
}


// 0x1025f560  (ghidra: FUN_1025f560)  [gap]
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __fastcall
sub_1025f560(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  bool bVar1;
  int iVar2;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar3;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    sub_1025f3b0(param_1);
    bVar1 = sub_1025f420((int *)param_1);
    pbVar3 = param_1;
    if (!bVar1) {
      pbVar3 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
    }
    iVar2 = fclose(*(FILE **)(param_1 + 0x4c));
    if (iVar2 == 0) goto LAB_1025f591;
  }
  pbVar3 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
LAB_1025f591:
  sub_1025f520(param_1,0,2);
  return pbVar3;
}


// 0x1025f5b0  (ghidra: FUN_1025f5b0)  [gap]
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __thiscall
sub_1025f5b0(void *this,uint32_t param_1,int param_2)

{
  _iobuf *p_Var1;
  locale *plVar2;
  _Facet_base *p_Var3;
  uint8_t local_1c [12];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306edd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x4c) == 0) {
    p_Var1 = std::_Fiopen(L"pd2logs/pd2_chat.log",param_2,0x40);
    if (p_Var1 != (_iobuf *)0x0) {
      sub_1025f520(this,p_Var1,1);
      plVar2 = (locale *)std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::getloc(this);
      local_8 = 0;
      p_Var3 = sub_1025fc00(plVar2);
      sub_1025f3e0(this,(codecvt_base *)p_Var3);
      sub_10238470((int)local_1c);
      ExceptionList = local_10;
      return this;
    }
  }
  ExceptionList = local_10;
  return (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
}


// 0x1025f660  (ghidra: FUN_1025f660)  [gap]
basic_streambuf<wchar_t,std::char_traits<wchar_t>_> * __fastcall
sub_1025f660(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306f0e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(param_1);
  local_8 = 0;
  *(uint8_t ***)param_1 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  sub_1025f520(param_1,0,0);
  ExceptionList = local_10;
  return param_1;
}


// 0x1025f6c0  (ghidra: FUN_1025f6c0)  [gap]
void __fastcall sub_1025f6c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x20);
    iVar2 = *piVar1 + -1;
    *piVar1 = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      sub_10254b40((uint32_t *)*param_1,(uint32_t *)0x0);
    }
  }
  *param_1 = 0;
  return;
}


// 0x1025f6f0  (ghidra: FUN_1025f6f0)  [gap]
uint32_t * __thiscall sub_1025f6f0(void *this,uint32_t param_1,int param_2)

{
  sub_10260420(&DAT_104e17bc,this,(int)(&DAT_103e7670 + param_2));
  return &DAT_104e17bc;
}


// 0x1025f720  (ghidra: FUN_1025f720)  [gap]
uint32_t * __fastcall sub_1025f720(uint32_t *param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306f40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_102548f0((int)(param_1 + 2));
  local_8 = 0;
  sub_1025fa70(param_1);
  ExceptionList = local_10;
  return param_1;
}


// 0x1025f780  (ghidra: FUN_1025f780)  [gap]
void sub_1025f780(void)

{
  client_DrawHoverItem_10225360(&DAT_103e7670);
  return;
}


// 0x1025f790  (ghidra: FUN_1025f790)  [gap]
void __thiscall sub_1025f790(void *this,int param_1)

{
  uint64_t uVar1;
  uint32_t local_8;
  
  local_8 = 0;
  uVar1 = client_DrawHoverItem_10225280((int)this);
  *(int *)((int)this + 0x10) = param_1;
  client_DrawHoverItem_10225350((uint16_t *)((int)uVar1 + param_1 * 2),(uint16_t *)&local_8);
  return;
}


// 0x1025f7c0  (ghidra: FUN_1025f7c0)  [gap]
void __fastcall sub_1025f7c0(uint32_t *param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar1 = (void *)*param_1;
  iVar2 = param_1[4] + 1;
  pvVar3 = (void *)sub_1020fe80(pvVar1);
  client_DrawHoverItem_102253a0(param_1,pvVar3,iVar2);
  client_DrawHoverItem_102253e0(pvVar1,param_1[5] + 1);
  param_1[5] = 7;
  return;
}


// 0x1025f800  (ghidra: FUN_1025f800)  [gap]
uint32_t * __thiscall sub_1025f800(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  
  uVar3 = param_1;
  iVar2 = *(int *)((int)this + 0x10);
  if (param_1 <= (uint)(*(int *)((int)this + 0x14) - iVar2)) {
    iVar1 = iVar2 + param_1;
    *(int *)((int)this + 0x10) = iVar1;
    uVar5 = client_DrawHoverItem_10225280((int)this);
    sub_1025fae0((void *)((int)uVar5 + iVar2 * 2),(uint)((ulonglong)uVar5 >> 0x20));
    param_1 = 0;
    client_DrawHoverItem_10225350((uint16_t *)((int)uVar5 + iVar1 * 2),(uint16_t *)&param_1);
    return this;
  }
  param_1 = param_1 & 0xffffff00;
  puVar4 = sub_10260850(this,uVar3,param_1,uVar3);
  return puVar4;
}


// 0x1025f870  (ghidra: FUN_1025f870)  [gap]
void sub_1025f870(void *param_1,void *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_3;
  client_DrawHoverItem_102253a0(param_1,param_2,param_3);
  uVar2 = param_4;
  sub_1025fae0((void *)((int)param_1 + iVar1 * 2),param_4);
  param_3 = 0;
  client_DrawHoverItem_10225350((uint16_t *)((int)param_1 + (iVar1 + uVar2) * 2),(uint16_t *)&param_3);
  return;
}


// 0x1025f8c0  (ghidra: FUN_1025f8c0)  [gap]
void __thiscall sub_1025f8c0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  void *pvVar5;
  uint64_t uVar6;
  int iVar7;
  uint local_8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar6 = client_DrawHoverItem_10225280(param_1);
  pvVar3 = (void *)uVar6;
  if (uVar1 < 8) {
    client_DrawHoverItem_102253a0(this,pvVar3,8);
    *(uint *)((int)this + 0x10) = uVar1;
    *(uint32_t *)((int)this + 0x14) = 7;
    return;
  }
  param_1 = client_DrawHoverItem_10224ec0();
  local_8 = uVar1 | 7;
  puVar4 = sub_10210430(&local_8,&param_1);
  uVar2 = *puVar4;
  param_1 = client_DrawHoverItem_102253c0(uVar2 + 1);
  sub_10210750(this,&param_1);
  iVar7 = uVar1 + 1;
  pvVar5 = (void *)sub_1020fe80(param_1);
  client_DrawHoverItem_102253a0(pvVar5,pvVar3,iVar7);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)((int)this + 0x14) = uVar2;
  return;
}


// 0x1025f960  (ghidra: FUN_1025f960)  [gap]
void __thiscall sub_1025f960(void *this,uint16_t *param_1)

{
  client_DrawHoverItem_102250f0(this);
  sub_10237990(param_1);
  return;
}


// 0x1025f980  (ghidra: FUN_1025f980)  [gap]
uint32_t * __thiscall sub_1025f980(void *this,void *param_1,uint param_2)

{
  uint16_t *extraout_ECX;
  void *this_00;
  
  sub_10210440(this);
  client_DrawHoverItem_10225130(extraout_ECX);
  sub_1025faa0(this_00,param_1,param_2);
  return this;
}


// 0x1025f9b0  (ghidra: FUN_1025f9b0)  [gap]
uint32_t __fastcall sub_1025f9b0(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar2 = *param_1;
  if (uVar1 <= uVar2) {
    bVar4 = uVar2 < uVar1;
    bVar5 = uVar2 == uVar1;
    puVar3 = param_2;
    do {
      if (!bVar4 && !bVar5) {
        return 1;
      }
      if (param_3 == 1) {
        return 0;
      }
      uVar1 = *(ushort *)((int)param_1 + (2 - (int)param_2) + (int)puVar3);
      puVar3 = puVar3 + 1;
      param_3 = param_3 + -1;
      bVar4 = uVar1 < *puVar3;
      bVar5 = uVar1 == *puVar3;
    } while (!bVar4);
  }
  return 0xffffffff;
}


// 0x1025fa10  [gap]
int * __fastcall thunk_FUN_1025faf0(int *param_1)

{
  *param_1 = *param_1 + -0x1e0;
  return param_1;
}


// 0x1025fa20  [gap]
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall std::_Vector_val<struct std::_Simple_types<unsigned int>
   >::_Take_contents(class std::_Vector_val<struct std::_Simple_types<unsigned int> > &)
    public: void __thiscall std::_Vector_val<struct std::_Simple_types<struct CHN *>
   >::_Take_contents(class std::_Vector_val<struct std::_Simple_types<struct CHN *> > &)
   
   Library: Visual Studio 2019 Release */

void __thiscall Take_contents(void *this,uint32_t *param_1)

{
  *(uint32_t *)this = *param_1;
  *(uint32_t *)((int)this + 4) = param_1[1];
  *(uint32_t *)((int)this + 8) = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// 0x1025fa50  (ghidra: FUN_1025fa50)  [gap]
void sub_1025fa50(int param_1,int param_2)

{
  sub_10260910(param_1,param_2);
  return;
}


// 0x1025fa70  (ghidra: FUN_1025fa70)  [gap]
void __fastcall sub_1025fa70(uint32_t *param_1)

{
  _Facet_base *p_Var1;
  uint32_t uVar2;
  
  p_Var1 = sub_10260940((locale *)(param_1 + 2));
  uVar2 = sub_1020fe80(p_Var1);
  *param_1 = uVar2;
  p_Var1 = sub_102605b0((locale *)(param_1 + 2));
  uVar2 = sub_1020fe80(p_Var1);
  param_1[1] = uVar2;
  return;
}


// 0x1025faa0  (ghidra: FUN_1025faa0)  [gap]
void __thiscall sub_1025faa0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint64_t uVar2;
  
  sub_10231d20(param_1,param_2);
  uVar1 = sub_10237b90(param_1,param_2);
  uVar2 = client_DrawHoverItem_10225280((int)param_1);
  client_DrawHoverItem_10225190(this,(void *)((int)uVar2 + param_2 * 2),uVar1);
  return;
}


// 0x1025fae0  (ghidra: FUN_1025fae0)  [gap]
void __fastcall sub_1025fae0(void *param_1,uint param_2)

{
  sub_10254170(param_1,param_2);
  return;
}


// 0x1025faf0  (ghidra: FUN_1025faf0)  [gap]
int * __fastcall sub_1025faf0(int *param_1)

{
  *param_1 = *param_1 + -0x1e0;
  return param_1;
}


// 0x1025fb00  (ghidra: FUN_1025fb00)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall sub_1025fb00(void *param_1)

{
  short *psVar1;
  short *psVar2;
  uint extraout_EDX;
  uint8_t local_34 [44];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  psVar1 = (short *)sub_1025fb60((int)local_34);
  if ((int)extraout_EDX < 0) {
    psVar2 = sub_10260fb0(psVar1,-extraout_EDX);
    psVar2 = psVar2 + -1;
    *psVar2 = 0x2d;
  }
  else {
    psVar2 = sub_10260fb0(psVar1,extraout_EDX);
  }
  sub_10260fe0(param_1,psVar2,psVar1);
  return param_1;
}


// 0x1025fb60  (ghidra: FUN_1025fb60)  [gap]
int __fastcall sub_1025fb60(int param_1)

{
  return param_1 + 0x2a;
}


// 0x1025fb70  (ghidra: FUN_1025fb70)  [gap]
uint8_t ** sub_1025fb70(void)

{
  return &PTR_vftable_103d2fcc;
}


// 0x1025fb80  (ghidra: FUN_1025fb80)  [gap]
uint8_t ** sub_1025fb80(void)

{
  return &PTR_vftable_103d2fd4;
}


// 0x1025fb90  (ghidra: FUN_1025fb90)  [gap]
void * __fastcall sub_1025fb90(void *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint32_t extraout_ECX;
  uint64_t uVar4;
  
  iVar1 = sub_1020fe50(param_2);
  uVar2 = sub_1020fe80(iVar1);
  iVar1 = client_DrawHoverItem_10224f20(param_3);
  uVar3 = sub_1020ffe0();
  if (uVar2 <= uVar3 - iVar1) {
    uVar4 = thunk_FUN_1020fe30(param_3);
    sub_10260da0(param_1,iVar1,extraout_ECX,param_2,uVar2,(void *)uVar4,
                 (size_t)((ulonglong)uVar4 >> 0x20));
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_1020f3f0();
}


// 0x1025fbf0  (ghidra: FUN_1025fbf0)  [gap]
void __fastcall sub_1025fbf0(uint32_t param_1,int param_2)

{
  sub_10254190(param_1,param_1,param_2 * 2);
  return;
}


// 0x1025fc00  (ghidra: FUN_1025fc00)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Facet_base * __fastcall sub_1025fc00(locale *param_1)

{
  uint uVar1;
  _Facet_base *p_Var2;
  uint32_t extraout_ECX;
  uint32_t *extraout_ECX_00;
  _Facet_base *local_20;
  _Lockit local_1c [4];
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103059c6;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_1c,0);
  local_8 = 0;
  local_20 = DAT_104e6f54;
  uVar1 = std::locale::id::operator_unsigned_int((id *)id_exref);
  p_Var2 = (_Facet_base *)sub_10238490(param_1,uVar1);
  if ((p_Var2 == (_Facet_base *)0x0) && (p_Var2 = local_20, local_20 == (_Facet_base *)0x0)) {
    uVar1 = std::codecvt<wchar_t,char,_Mbstatet>::_Getcat((facet **)&local_20,param_1);
    p_Var2 = local_20;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      sub_102383c0();
    }
    sub_102401f0(&local_18);
    sub_102474a0(extraout_ECX);
    local_8 = CONCAT31(local_8._1_3_,1);
    std::_Facet_Register(p_Var2);
    (**(code **)(*(int *)p_Var2 + 4))();
    p_Var2 = local_20;
    DAT_104e6f54 = local_20;
    sub_102449e0(&local_18);
    sub_10244a00(extraout_ECX_00);
  }
  std::_Lockit::~_Lockit(local_1c);
  ExceptionList = local_10;
  return p_Var2;
}


// 0x1025fcf0  (ghidra: FUN_1025fcf0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_1025fcf0(uint32_t param_1,uint32_t param_2)

{
  short *psVar1;
  uint16_t uVar2;
  short *psVar3;
  short *extraout_EDX;
  short *local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  local_14 = (short *)sub_1020faf0(&local_c);
  psVar3 = (short *)sub_1020faf0(&local_10);
  psVar1 = extraout_EDX;
  while ((psVar1 != psVar3 && (uVar2 = sub_10255160(*psVar1), (char)uVar2 == '\0'))) {
    psVar1 = psVar1 + 1;
    local_14 = psVar1;
  }
  sub_10248040(&local_c,&local_14);
  return local_c;
}


// 0x1025fd60  (ghidra: FUN_1025fd60)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall sub_1025fd60(uint32_t param_1,uint32_t param_2)

{
  short *psVar1;
  uint16_t uVar2;
  short *psVar3;
  short *extraout_EDX;
  short *local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  local_14 = (short *)sub_1020faf0(&local_c);
  psVar3 = (short *)sub_1020faf0(&local_10);
  psVar1 = extraout_EDX;
  while ((psVar1 != psVar3 && (uVar2 = sub_10255160(*psVar1), (char)uVar2 != '\0'))) {
    psVar1 = psVar1 + 1;
    local_14 = psVar1;
  }
  sub_10248040(&local_c,&local_14);
  return local_c;
}


// 0x1025fdd0  (ghidra: FUN_1025fdd0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __fastcall sub_1025fdd0(uint32_t *param_1,UINT param_2)

{
  bool bVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int extraout_ECX;
  uint32_t *extraout_ECX_00;
  uint32_t *extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  uint64_t uVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306f7e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10260e80(param_1);
  local_8 = 0;
  bVar1 = sub_1025f1b0((int)&stack0x00000008);
  if (!bVar1) {
    uVar2 = sub_1020fae0(extraout_ECX);
    if (0x7fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      sub_102546a0();
    }
    pWVar3 = (LPCWSTR)sub_1020faf0(extraout_ECX_00);
    uVar4 = FUN_10301910(param_2,pWVar3,extraout_EDX,(LPSTR)0x0,0);
    uVar2 = sub_102551c0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    sub_1023e0f0(param_1,uVar2,0);
    uVar4 = thunk_FUN_1020fe30((int)param_1);
    sub_1020fae0((int)&stack0x00000008);
    pWVar3 = (LPCWSTR)sub_1020faf0(extraout_ECX_01);
    uVar4 = FUN_10301910(param_2,pWVar3,extraout_EDX_00,(LPSTR)uVar4,uVar2);
    sub_102551c0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  }
  ExceptionList = local_10;
  return param_1;
}


// 0x1025fec0  (ghidra: FUN_1025fec0)  [gap]
void __thiscall sub_1025fec0(void *this,uint32_t *param_1)

{
  sub_10261040(this,param_1);
  return;
}


// 0x1025fee0  (ghidra: FUN_1025fee0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_1025fee0(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  int extraout_EDX;
  void *extraout_EDX_00;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_10 = param_2;
  sub_1020faf0(&local_c);
  iVar1 = sub_1020faf0(&local_10);
  uVar2 = sub_1020fe80(iVar1 - extraout_EDX >> 1);
  client_DrawHoverItem_10224f40(this,extraout_EDX_00,uVar2);
  return;
}


// 0x1025ff40  (ghidra: FUN_1025ff40)  [gap]
uint32_t * __fastcall sub_1025ff40(uint32_t *param_1)

{
  sub_102610a0(param_1);
  return param_1;
}


// 0x1025ff70  (ghidra: FUN_1025ff70)  [gap]
void __fastcall sub_1025ff70(int *param_1,void *param_2)

{
  int *piVar1;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::widen
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*param_1 + 4) + (int)param_1),'\n');
  piVar1 = (int *)sub_1020fe80(param_1);
  sub_10261100(piVar1,param_2);
  return;
}


// 0x1025ffb0  (ghidra: FUN_1025ffb0)  [gap]
uint32_t * __fastcall sub_1025ffb0(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  sub_10210180(param_1);
  iVar1 = thunk_FUN_10218bf0((uint32_t *)&stack0x00000008);
  iVar2 = thunk_FUN_10218bf0((uint32_t *)&stack0x00000004);
  sub_102612a0(param_1,iVar2,iVar1);
  return param_1;
}


// 0x1025fff0  (ghidra: FUN_1025fff0)  [gap]
void __cdecl sub_1025fff0(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_1021b820(param_1,8,param_2,&stack0x0000000c);
  return;
}


// 0x10260010  (ghidra: FUN_10260010)  [gap]
int * __thiscall sub_10260010(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)this = iVar1;
  *(int *)((int)this + 4) = iVar1 >> 0x1f;
  return this;
}


// 0x10260030  (ghidra: FUN_10260030)  [gap]
uint64_t __fastcall sub_10260030(uint64_t *param_1)

{
  uint32_t *puVar1;
  uint64_t uVar2;
  uint32_t local_c [2];
  
  puVar1 = sub_10260050(local_c,param_1);
  uVar2 = sub_102613f0(puVar1);
  return uVar2;
}


// 0x10260050  (ghidra: FUN_10260050)  [gap]
uint32_t * __fastcall sub_10260050(uint32_t *param_1,uint64_t *param_2)

{
  char cVar1;
  void *pvVar2;
  uint local_14 [4];
  
  local_14[0] = 0;
  local_14[1] = 0;
  sub_10254f70(local_14 + 2);
  *param_1 = local_14[2];
  param_1[1] = local_14[3];
  cVar1 = sub_10261330((uint32_t *)param_2,local_14);
  if (cVar1 != '\0') {
    local_14[2] = 0xffffffff;
    local_14[3] = 0x7fffffff;
    pvVar2 = sub_10261340(local_14,local_14 + 2,param_2);
    cVar1 = sub_10261380(param_1,pvVar2);
    if (cVar1 != '\0') {
      sub_102613c0(local_14,param_2);
      sub_10260ba0(param_1,local_14);
      return param_1;
    }
    *param_1 = 0xffffffff;
    param_1[1] = 0x7fffffff;
  }
  return param_1;
}


// 0x102600f0  (ghidra: FUN_102600f0)  [gap]
void * __thiscall sub_102600f0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_10261470(this,uVar1);
  return this;
}


// 0x10260110  (ghidra: FUN_10260110)  [gap]
void __fastcall sub_10260110(void *param_1)

{
  uint uVar1;
  void *extraout_EDX;
  uint64_t uVar2;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  thunk_FUN_10218bf0((uint32_t *)&stack0x00000004);
  uVar2 = thunk_FUN_10218bf0((uint32_t *)&stack0x00000008);
  uVar1 = sub_1020fe80((int)uVar2 - (int)((ulonglong)uVar2 >> 0x20) >> 1);
  client_DrawHoverItem_10224f40(param_1,extraout_EDX,uVar1);
  return;
}


// 0x10260150  (ghidra: FUN_10260150)  [gap]
byte __fastcall sub_10260150(void *param_1)

{
  byte bVar1;
  
  bVar1 = sub_10247350(param_1,&DAT_10367500);
  return bVar1 ^ 1;
}


// 0x10260160  (ghidra: FUN_10260160)  [gap]
void __cdecl sub_10260160(uint32_t param_1,uint32_t param_2)

{
  uint8_t  stack0x0000000c;   /* not traced by Ghidra: address of a stack slot */

  sub_1021b820(param_1,0x40,param_2,&stack0x0000000c);
  return;
}


// 0x10260180  (ghidra: FUN_10260180)  [gap]
int __fastcall sub_10260180(int param_1)

{
  return (uint)(0 < param_1) + (param_1 >> 0x1f);
}


// 0x10260190  (ghidra: FUN_10260190)  [gap]
void * __fastcall sub_10260190(void *param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  uint16_t *puVar2;
  
  uVar1 = sub_10260d80(param_3,param_1,param_2);
  puVar2 = (uint16_t *)sub_1020fe80(uVar1);
  sub_10237860(param_1,puVar2);
  return param_1;
}


// 0x102601c0  (ghidra: FUN_102601c0)  [gap]
void * __fastcall sub_102601c0(void *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  uint16_t *puVar2;
  
  uVar1 = client_DrawHoverItem_10225250(param_2,param_3);
  puVar2 = (uint16_t *)sub_1020fe80(uVar1);
  sub_10237860(param_1,puVar2);
  return param_1;
}


// 0x102601f0  (ghidra: FUN_102601f0)  [gap]
void sub_102601f0(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint32_t in_stack_ffffffe4;
  uint32_t in_stack_ffffffe8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  pwVar1 = (wchar_t *)thunk_FUN_1020faf0((uint32_t *)&stack0x00000008);
  pwVar2 = (wchar_t *)thunk_FUN_1020faf0((uint32_t *)&stack0x00000004);
  uVar3 = sub_102549c0(0,0x10);
  sub_10261520(pwVar2,pwVar1,in_stack_ffffffe4,in_stack_ffffffe8,uVar3);
  return;
}


// 0x10260230  (ghidra: FUN_10260230)  [gap]
uint32_t __thiscall sub_10260230(void *this,uint32_t param_1,uint param_2)

{
  uint64_t uVar1;
  uint8_t *puVar2;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_102616b0(this,&local_c,param_2);
  puVar2 = local_8;
  uVar1 = sub_10218cd0(&param_2,local_c);
  sub_10228210((int)uVar1,puVar2);
  return param_1;
}


// 0x10260270  (ghidra: FUN_10260270)  [gap]
uint32_t sub_10260270(uint *param_1)

{
  int *reg_EAX;
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_EDX;
  int local_10 [2];
  int local_8;
  
  reg_EAX = sub_10253c30(local_10,param_1);
  uVar1 = sub_102128b0(local_8,param_1,reg_EAX);
  if ((char)uVar1 != '\0') {
    return extraout_EDX;
  }
  puVar2 = (uint32_t *)thunk_FUN_10253cc0();
  return *puVar2;
}


// 0x102602b0  (ghidra: FUN_102602b0)  [gap]
void __cdecl sub_102602b0(uint32_t param_1)

{
  uint uVar1;
  uint32_t uVar2;
  void *this;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  uVar1 = sub_1020fe80(param_1);
  uVar2 = sub_1020fe80(extraout_EDX);
  this = (void *)sub_1020f1d0(extraout_ECX,uVar2);
  sub_1025f170(this,uVar1);
  return;
}


// 0x102602e0  (ghidra: FUN_102602e0)  [gap]
int __thiscall sub_102602e0(void *this,int param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint32_t extraout_EDX;
  int iVar4;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306fb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)this;
  iVar4 = (*(int *)((int)this + 4) - *(int *)this >> 3) * -0x55555555;
  uVar2 = sub_10210c40();
  if (iVar4 - uVar2 != 0) {
    uVar2 = sub_10237fd0(this,iVar4 + 1);
    iVar3 = sub_10210e10(uVar2);
    local_8 = 0;
    iVar1 = iVar3 + ((param_1 - iVar1) / 0x18) * 0x18;
    sub_1020fe80(param_2);
    sub_1020fe80(iVar1);
    sub_102602b0(extraout_EDX);
    if (param_1 == *(int *)((int)this + 4)) {
      sub_10260a90(this,*(uint32_t *)this,*(int *)((int)this + 4),iVar3);
    }
    else {
      sub_10260ab0(this,*(uint32_t *)this,param_1,iVar3);
      sub_10260ab0(this,param_1,*(uint32_t *)((int)this + 4),iVar1 + 0x18);
    }
    sub_10260a40(this,iVar3,iVar4 + 1,uVar2);
    ExceptionList = local_10;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x102603e8  [gap]
void Catch_All_102603e8(void)

{
  int unaff_EBP;
  
  sub_1025fa50(*(int *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x14));
  sub_1020fef0(*(void **)(unaff_EBP + -0x20),*(int *)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


// 0x10260420  (ghidra: FUN_10260420)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10260420(void *this,uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t extraout_ECX;
  int local_6c [22];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10306fdd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_10260a30(local_6c);
  sub_10261780(local_6c,(int)this + 4,extraout_ECX,param_2);
  local_8 = 0;
  iVar1 = sub_102618b0(local_6c);
  sub_10260ad0(this,iVar1);
  sub_10260a20((int)local_6c);
  ExceptionList = local_10;
  return;
}


// 0x102604a0  (ghidra: FUN_102604a0)  [gap]
uint32_t __thiscall sub_102604a0(void *this,uint *param_1)

{
  int *reg_EAX;
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_EDX;
  int local_10 [2];
  int local_8;
  
  reg_EAX = sub_10212850(this,local_10,param_1);
  uVar1 = sub_102128b0(local_8,param_1,reg_EAX);
  if ((char)uVar1 != '\0') {
    return extraout_EDX;
  }
  puVar2 = (uint32_t *)thunk_FUN_1020fe80(this);
  return *puVar2;
}


// 0x102604e0  (ghidra: FUN_102604e0)  [gap]
int sub_102604e0(int param_1,uint32_t param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  
  iVar1 = DAT_104e1694;
  uVar5 = DAT_104e1698 - DAT_104e1694 >> 2;
  uVar2 = sub_10210ca0();
  if (uVar5 != uVar2) {
    uVar5 = uVar5 + 1;
    uVar2 = sub_10260b70(uVar5);
    iVar3 = sub_10210e40(uVar2);
    iVar1 = iVar3 + (param_1 - iVar1 >> 2) * 4;
    uVar4 = sub_1020fe80(param_2);
    sub_1020fe80(iVar1);
    sub_10212910(uVar4);
    if (param_1 == DAT_104e1698) {
      sub_10218c70(DAT_104e1694,DAT_104e1698,iVar3);
    }
    else {
      sub_10211020(DAT_104e1694,param_1,iVar3);
      sub_10211020(param_1,DAT_104e1698,iVar1 + 4);
    }
    sub_10260b20(iVar3,uVar5,uVar2);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_10210bb0();
}


// 0x102605a0  (ghidra: FUN_102605a0)  [gap]
uint32_t * sub_102605a0(void)

{
  sub_10260af0();
  return &DAT_104e1694;
}


// 0x102605b0  (ghidra: FUN_102605b0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Facet_base * __cdecl sub_102605b0(locale *param_1)

{
  uint uVar1;
  _Facet_base *p_Var2;
  uint32_t extraout_ECX;
  uint32_t *extraout_ECX_00;
  _Facet_base *local_20;
  _Lockit local_1c [4];
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103059c6;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_1c,0);
  local_8 = 0;
  local_20 = DAT_104e6f4c;
  uVar1 = std::locale::id::operator_unsigned_int((id *)id_exref);
  p_Var2 = (_Facet_base *)sub_10238490(param_1,uVar1);
  if ((p_Var2 == (_Facet_base *)0x0) && (p_Var2 = local_20, local_20 == (_Facet_base *)0x0)) {
    uVar1 = std::ctype<wchar_t>::_Getcat((facet **)&local_20,param_1);
    p_Var2 = local_20;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      sub_102383c0();
    }
    sub_102401f0(&local_18);
    sub_102474a0(extraout_ECX);
    local_8 = CONCAT31(local_8._1_3_,1);
    std::_Facet_Register(p_Var2);
    (**(code **)(*(int *)p_Var2 + 4))();
    p_Var2 = local_20;
    DAT_104e6f4c = local_20;
    sub_102449e0(&local_18);
    sub_10244a00(extraout_ECX_00);
  }
  std::_Lockit::~_Lockit(local_1c);
  ExceptionList = local_10;
  return p_Var2;
}


// 0x102606a0  (ghidra: FUN_102606a0)  [gap]
int __fastcall sub_102606a0(short *param_1,int param_2)

{
  short *psVar1;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  if (param_2 != 0) {
    psVar1 = sub_10260ea0(param_1,param_2,(short *)&stack0x00000008);
    if (psVar1 != (short *)0x0) {
      return (int)psVar1 - (int)param_1 >> 1;
    }
  }
  return -1;
}


// 0x102606d0  (ghidra: FUN_102606d0)  [gap]
uint32_t * __thiscall sub_102606d0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  int iVar5;
  uint32_t local_c;
  int local_8;
  
  iVar5 = *(int *)((int)this + 0x10);
  local_8 = iVar5;
  uVar1 = client_DrawHoverItem_10224ec0();
  if (uVar1 - iVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = client_DrawHoverItem_10225710(this,iVar5 + param_1);
  local_c = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = iVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_c);
  if (7 < uVar1) {
    pvVar3 = *(void **)this;
    iVar5 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_1025ef90(extraout_EDX,pvVar4,iVar5);
    client_DrawHoverItem_102253e0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_c;
    return this;
  }
  sub_1025ef90(pvVar3,this,local_8);
  sub_10210750(this,&local_c);
  return this;
}


// 0x10260790  (ghidra: FUN_10260790)  [gap]
uint32_t * __fastcall sub_10260790(uint32_t *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  uint uVar5;
  uint32_t local_c;
  uint local_8;
  
  uVar5 = param_1[4];
  local_8 = uVar5;
  uVar1 = client_DrawHoverItem_10224ec0();
  if (uVar1 == uVar5) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = param_1[5];
  uVar2 = client_DrawHoverItem_10225710(param_1,uVar5 + 1);
  local_c = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  param_1[4] = uVar5 + 1;
  param_1[5] = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_c);
  if (7 < uVar1) {
    pvVar3 = (void *)*param_1;
    uVar5 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_1025f030(extraout_EDX,pvVar4,uVar5);
    client_DrawHoverItem_102253e0(pvVar3,uVar1 + 1);
    *param_1 = local_c;
    return param_1;
  }
  sub_1025f030(pvVar3,param_1,local_8);
  sub_10210750(param_1,&local_c);
  return param_1;
}


// 0x10260850  (ghidra: FUN_10260850)  [gap]
uint32_t * __thiscall sub_10260850(void *this,uint param_1,uint32_t param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *extraout_EDX;
  int iVar5;
  uint32_t local_c;
  int local_8;
  
  iVar5 = *(int *)((int)this + 0x10);
  local_8 = iVar5;
  uVar1 = client_DrawHoverItem_10224ec0();
  if (uVar1 - iVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = client_DrawHoverItem_10225710(this,iVar5 + param_1);
  local_c = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = iVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_c);
  if (7 < uVar1) {
    pvVar3 = *(void **)this;
    iVar5 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_1025f870(extraout_EDX,pvVar4,iVar5,param_3);
    client_DrawHoverItem_102253e0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_c;
    return this;
  }
  sub_1025f870(pvVar3,this,local_8,param_3);
  sub_10210750(this,&local_c);
  return this;
}


// 0x10260910  (ghidra: FUN_10260910)  [gap]
void __fastcall sub_10260910(int param_1,int param_2)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    puVar1 = (uint32_t *)sub_1020fe80(param_1);
    sub_10261960(extraout_ECX,puVar1);
  }
  return;
}


// 0x10260940  (ghidra: FUN_10260940)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Facet_base * __fastcall sub_10260940(void *param_1)

{
  _Facet_base *p_Var1;
  uint uVar2;
  _Facet_base *p_Var3;
  int iVar4;
  uint32_t extraout_ECX;
  uint32_t *extraout_ECX_00;
  _Facet_base *local_20;
  _Lockit local_1c [4];
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307026;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_1c,0);
  p_Var1 = DAT_104e6f50;
  local_8 = 0;
  local_20 = DAT_104e6f50;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  p_Var3 = (_Facet_base *)sub_10238490(param_1,uVar2);
  if ((p_Var3 == (_Facet_base *)0x0) && (p_Var3 = p_Var1, p_Var1 == (_Facet_base *)0x0)) {
    iVar4 = sub_10260bc0((int *)&local_20,param_1);
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      sub_102383c0();
    }
    sub_102401f0(&local_18);
    p_Var3 = local_20;
    sub_102474a0(extraout_ECX);
    local_8 = CONCAT31(local_8._1_3_,1);
    std::_Facet_Register(p_Var3);
    (**(code **)(*(int *)p_Var3 + 4))();
    DAT_104e6f50 = p_Var3;
    sub_102449e0(&local_18);
    sub_10244a00(extraout_ECX_00);
  }
  std::_Lockit::~_Lockit(local_1c);
  ExceptionList = local_10;
  return p_Var3;
}


// 0x10260a20  (ghidra: FUN_10260a20)  [gap]
void __fastcall sub_10260a20(int param_1)

{
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 0x14));
  return;
}


// 0x10260a30  (ghidra: FUN_10260a30)  [gap]
void __fastcall sub_10260a30(void *param_1)

{
  memset(param_1,0,0x54);
  return;
}


// 0x10260a40  (ghidra: FUN_10260a40)  [gap]
void __thiscall sub_10260a40(void *this,int param_1,int param_2,int param_3)

{
  if (*(int *)this != 0) {
    sub_1025fa50(*(int *)this,*(int *)((int)this + 4));
    sub_1020fef0(*(void **)this,(*(int *)((int)this + 8) - (int)*(void **)this >> 3) * -0x55555555);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 0x18;
  *(int *)((int)this + 8) = param_1 + param_3 * 0x18;
  return;
}


// 0x10260a90  (ghidra: FUN_10260a90)  [gap]
void __thiscall sub_10260a90(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_10260ed0(this,param_1,param_2,param_3);
  return;
}


// 0x10260ab0  (ghidra: FUN_10260ab0)  [gap]
void __thiscall sub_10260ab0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_10261970(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10260ad0  (ghidra: FUN_10260ad0)  [gap]
void __thiscall sub_10260ad0(void *this,int param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    UNLOCK();
  }
  sub_1025f6c0(this);
  *(int *)this = param_1;
  return;
}


// 0x10260af0  (ghidra: FUN_10260af0)  [gap]
uint32_t * sub_10260af0(void)

{
  DAT_104e1694 = 0;
  DAT_104e1698 = 0;
  DAT_104e169c = 0;
  return &DAT_104e1694;
}


// 0x10260b20  (ghidra: FUN_10260b20)  [gap]
void sub_10260b20(int param_1,int param_2,int param_3)

{
  if (DAT_104e1694 != (void *)0x0) {
    sub_1020ff20(DAT_104e1694,DAT_104e169c - (int)DAT_104e1694 >> 2);
  }
  DAT_104e1694 = (void *)param_1;
  DAT_104e1698 = param_1 + param_2 * 4;
  DAT_104e169c = param_1 + param_3 * 4;
  return;
}


// 0x10260b70  (ghidra: FUN_10260b70)  [gap]
uint sub_10260b70(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = sub_10260ef0();
  uVar2 = sub_10210ca0();
  if (uVar1 <= uVar2 - (uVar1 >> 1)) {
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 < param_1) {
      uVar2 = param_1;
    }
  }
  return uVar2;
}


// 0x10260ba0  (ghidra: FUN_10260ba0)  [gap]
uint32_t __thiscall sub_10260ba0(void *this,uint *param_1)

{
  uint32_t extraout_ECX;
  
  sub_10260f00(this,param_1);
  return extraout_ECX;
}


// 0x10260bc0  (ghidra: FUN_10260bc0)  [gap]
uint32_t __fastcall sub_10260bc0(int *param_1,void *param_2)

{
  void *this;
  void *pvVar1;
  _Locinfo *p_Var2;
  facet *pfVar3;
  uint64_t uVar4;
  _Locinfo local_64 [52];
  uint32_t local_30 [6];
  void *local_18;
  uint32_t local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307097;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    this = operator_new(0x10);
    local_8 = 0;
    local_18 = this;
    pvVar1 = sub_10254940(param_2,local_30);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    uVar4 = thunk_FUN_1020fe30((int)pvVar1);
    p_Var2 = (_Locinfo *)std::_Locinfo::_Locinfo(local_64,(char *)uVar4);
    local_8 = 2;
    local_14 = 3;
    pfVar3 = sub_10260f20(this,p_Var2);
    *param_1 = (int)pfVar3;
    std::_Locinfo::~_Locinfo(local_64);
    thunk_FUN_1020fc60(local_30);
  }
  ExceptionList = local_10;
  return 1;
}


// 0x10260c80  (ghidra: FUN_10260c80)  [gap]
uint32_t * __thiscall sub_10260c80(void *this,uint32_t param_1,uint32_t *param_2,uint param_3)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  uint uVar3;
  uint64_t uVar4;
  
  uVar3 = param_3;
  sub_10231d20(this,0);
  iVar1 = *(int *)((int)this + 0x10);
  if ((uint)(*(int *)((int)this + 0x14) - iVar1) < param_3) {
    param_3 = param_3 & 0xffffff00;
    puVar2 = sub_102619f0(this,uVar3,param_3,extraout_ECX,param_2,uVar3);
    return puVar2;
  }
  *(uint *)((int)this + 0x10) = iVar1 + param_3;
  uVar4 = client_DrawHoverItem_10225280((int)this);
  puVar2 = (uint32_t *)uVar4;
  if ((puVar2 < (uint32_t *)((int)param_2 + param_3 * 2)) &&
     (param_2 <= (uint32_t *)((int)puVar2 + iVar1 * 2))) {
    if (param_2 < puVar2) {
      uVar3 = (int)puVar2 - (int)param_2 >> 1;
    }
    else {
      uVar3 = 0;
    }
  }
  client_DrawHoverItem_10225380((void *)((int)puVar2 + param_3 * 2),puVar2,iVar1 + 1);
  client_DrawHoverItem_102253a0(puVar2,param_2,uVar3);
  client_DrawHoverItem_102253a0((void *)((int)puVar2 + uVar3 * 2),(void *)((int)param_2 + (uVar3 + param_3) * 2),
               param_3 - uVar3);
  return this;
}


// 0x10260d40  (ghidra: FUN_10260d40)  [gap]
void sub_10260d40(void *param_1,void *param_2,int param_3,uint32_t param_4,void *param_5,
                 int param_6)

{
  client_DrawHoverItem_102253a0(param_1,param_2,0);
  client_DrawHoverItem_102253a0(param_1,param_5,param_6);
  client_DrawHoverItem_102253a0((void *)((int)param_1 + param_6 * 2),param_2,param_3 + 1);
  return;
}


// 0x10260d80  (ghidra: FUN_10260d80)  [gap]
void __thiscall sub_10260d80(void *this,uint32_t param_1,int param_2)

{
  uint32_t extraout_ECX;
  uint64_t uVar1;
  
  uVar1 = client_DrawHoverItem_10225280(param_2);
  sub_10260c80(this,extraout_ECX,(uint32_t *)uVar1,(uint)((ulonglong)uVar1 >> 0x20));
  return;
}


// 0x10260da0  (ghidra: FUN_10260da0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall
sub_10260da0(void *this,uint32_t param_1,uint32_t param_2,void *param_3,size_t param_4,
            void *param_5,size_t param_6)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  uint32_t local_18;
  void *local_14;
  uint8_t local_d;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = param_5;
  sub_10210440(this);
  uVar3 = 0xf;
  local_c = param_6 + param_4;
  pvVar2 = this;
  if (0xf < local_c) {
    uVar3 = sub_1020ffe0();
    puVar1 = sub_1020ff10(&local_c,(uint *)&DAT_1037d5f0);
    uVar3 = sub_10210d90(*puVar1,0xf,uVar3);
    local_18 = sub_10210080(-(uint)(0xfffffffe < uVar3) | uVar3 + 1);
    pvVar2 = (void *)sub_1020fe80(local_18);
    sub_10210750(this,&local_18);
  }
  *(uint *)((int)this + 0x10) = local_c;
  *(uint *)((int)this + 0x14) = uVar3;
  sub_1020fe60(pvVar2,param_3,param_4);
  sub_1020fe60((void *)(param_4 + (int)pvVar2),local_14,param_6);
  local_d = 0;
  sub_10210050((uint8_t *)(local_c + (int)pvVar2),&local_d);
  return this;
}


// 0x10260e80  (ghidra: FUN_10260e80)  [gap]
uint32_t __fastcall sub_10260e80(uint32_t *param_1)

{
  uint8_t *extraout_ECX;
  uint32_t extraout_ECX_00;
  
  sub_10210440(param_1);
  sub_1020fca0(extraout_ECX);
  return extraout_ECX_00;
}


// 0x10260ea0  (ghidra: FUN_10260ea0)  [gap]
short * __fastcall sub_10260ea0(short *param_1,int param_2,short *param_3)

{
  short sVar1;
  
  if (param_2 != 0) {
    sVar1 = *param_1;
    while( true ) {
      if (sVar1 == *param_3) {
        return param_1;
      }
      if (param_2 == 1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      sVar1 = *param_1;
    }
  }
  return (short *)0x0;
}


// 0x10260ed0  (ghidra: FUN_10260ed0)  [gap]
void __thiscall sub_10260ed0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_10261970(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10260ef0  (ghidra: FUN_10260ef0)  [gap]
int sub_10260ef0(void)

{
  return DAT_104e169c - DAT_104e1694 >> 2;
}


// 0x10260f00  (ghidra: FUN_10260f00)  [gap]
uint * __thiscall sub_10260f00(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this + uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1] + (uint)CARRY4(uVar1,uVar2);
  return this;
}


// 0x10260f20  (ghidra: FUN_10260f20)  [gap]
facet * __thiscall sub_10260f20(void *this,_Locinfo *param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103070ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::locale::facet::facet(this,0);
  local_8 = 0;
  *(uint8_t ***)this = std::collate<wchar_t>::vftable;
  sub_10260f80(this,param_1);
  ExceptionList = local_10;
  return this;
}


// 0x10260f80  (ghidra: FUN_10260f80)  [gap]
void __thiscall sub_10260f80(void *this,_Locinfo *param_1)

{
  uint32_t uVar1;
  _Collvec _Var2;
  
  _Var2 = std::_Locinfo::_Getcoll(param_1);
  uVar1 = ((uint32_t *)_Var2._Page)[1];
  *(uint32_t *)((int)this + 8) = *(uint32_t *)_Var2._Page;
  *(uint32_t *)((int)this + 0xc) = uVar1;
  return;
}


// 0x10260fb0  (ghidra: FUN_10260fb0)  [gap]
short * __fastcall sub_10260fb0(short *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    param_1 = param_1 + -1;
    uVar1 = param_2 / 10;
    *param_1 = (short)param_2 + (short)uVar1 * -10 + 0x30;
    param_2 = uVar1;
  } while (uVar1 != 0);
  return param_1;
}


// 0x10260fe0  (ghidra: FUN_10260fe0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t * __thiscall sub_10260fe0(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint16_t *extraout_ECX;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  local_10 = param_2;
  sub_10210440(this);
  client_DrawHoverItem_10225130(extraout_ECX);
  iVar1 = sub_1020faf0(&local_10);
  iVar2 = sub_1020faf0(&local_c);
  sub_10261e30(this,iVar2,iVar1);
  return this;
}


// 0x10261040  (ghidra: FUN_10261040)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10261040(void *this,uint32_t *param_1)

{
  uint32_t uVar1;
  uint uVar2;
  void *pvVar3;
  uint32_t local_14;
  uint32_t local_10;
  uint local_c;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = *param_1;
  local_10 = param_1[1];
  uVar1 = sub_1020fae0((int)&local_14);
  uVar2 = sub_1020fe80(uVar1);
  pvVar3 = (void *)sub_1020faf0(&local_14);
  client_DrawHoverItem_102252a0(this,pvVar3,uVar2);
  return;
}


// 0x102610a0  (ghidra: FUN_102610a0)  [gap]
uint32_t * __fastcall sub_102610a0(uint32_t *param_1)

{
  uint8_t local_10 [4];
  uint32_t *local_c;
  
  local_c = param_1;
  sub_102610d0(local_10);
  sub_102622d0(param_1);
  return param_1;
}


// 0x102610d0  (ghidra: FUN_102610d0)  [gap]
uint32_t __fastcall sub_102610d0(uint32_t param_1)

{
  char *pcVar1;
  void *this;
  
  pcVar1 = sub_102610f0();
  sub_1025f200(this,pcVar1);
  return param_1;
}


// 0x102610f0  (ghidra: FUN_102610f0)  [gap]
char * sub_102610f0(void)

{
  return "pd2logs";
}


// 0x10261100  (ghidra: FUN_10261100)  [gap]
int * __fastcall sub_10261100(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar4;
  int *piVar5;
  uint uVar6;
  uint extraout_EDX;
  uint uStack_50;
  int local_3c [2];
  uint32_t local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  void *local_24;
  uint local_20;
  uint8_t local_19;
  uint8_t *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103070fd;
  local_10 = ExceptionList;
  uStack_50 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = (uint8_t *)&uStack_50;
  ExceptionList = &local_10;
  local_34 = 0;
  local_19 = 0;
  local_28 = param_1;
  local_24 = param_2;
  sub_10261d00(local_3c,param_1);
  local_8 = 0;
  cVar1 = sub_10237e70((int)local_3c);
  if (cVar1 == '\0') {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (*(int *)(*param_1 + 4) + (int)param_1),2,false);
    thunk_FUN_102380c0(local_3c);
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  sub_1025f100(local_24);
  uVar3 = sub_10237b40((uint16_t *)&stack0x00000004);
  local_30 = (uint)uVar3;
  pbVar4 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (*(int *)(*param_1 + 4) + (int)param_1));
  uVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sgetc(pbVar4);
  while( true ) {
    local_20 = (uint)uVar3;
    local_2c = sub_10237ae0();
    local_2c = local_2c & 0xffff;
    bVar2 = sub_10237b20((short *)&local_2c,(short *)&local_20);
    if (bVar2) {
      piVar5 = (int *)sub_10261261(param_1,1);
      return piVar5;
    }
    bVar2 = sub_10237b20((short *)&local_20,(short *)&local_30);
    if (bVar2) break;
    client_DrawHoverItem_10224ec0();
    uVar6 = client_DrawHoverItem_10224f20((int)local_24);
    if (extraout_EDX <= uVar6) {
      piVar5 = (int *)sub_10261261(param_1,2);
      return piVar5;
    }
    uVar3 = sub_10237b40((uint16_t *)&local_20);
    sub_1025f120(local_24,(uint)uVar3);
    local_19 = 1;
    pbVar4 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                       ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                        (*(int *)(*param_1 + 4) + (int)param_1));
    uVar3 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::snextc(pbVar4);
  }
  local_19 = 1;
  pbVar4 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (*(int *)(*param_1 + 4) + (int)param_1));
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sbumpc(pbVar4);
  piVar5 = (int *)sub_10261261(param_1,0);
  return piVar5;
}


// 0x1026123e  [gap]
uint8_t * Catch_All_1026123e(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + (int)*(int **)(unaff_EBP + -0x24)),4,
             true);
  return &DAT_10261258;
}


// 0x10261261  (ghidra: FUN_10261261)  [gap]
int * sub_10261261(int *reg_ESI,uint reg_EDI)

{
  char unaff_BL;
  int unaff_EBP;
  
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (unaff_BL == '\0') {
    reg_EDI = reg_EDI | 2;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*reg_ESI + 4) + (int)reg_ESI),reg_EDI,false);
  thunk_FUN_102380c0((int *)(unaff_EBP + -0x38));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return reg_ESI;
}


// 0x102612a0  (ghidra: FUN_102612a0)  [gap]
void __thiscall sub_102612a0(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  void *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030712d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  iVar1 = sub_10210fe0(param_1,param_2);
  uVar2 = sub_1020fe80(iVar1);
  if (uVar2 != 0) {
    sub_10210a40(this,uVar2);
    local_8 = 0;
    local_14 = this;
    uVar3 = sub_10262300(this,param_1,param_2,*(uint32_t *)this);
    *(uint32_t *)((int)this + 4) = uVar3;
    local_14 = (void *)0x0;
    sub_10261cf0(&local_14);
  }
  ExceptionList = local_10;
  return;
}


// 0x10261330  (ghidra: FUN_10261330)  [gap]
void __fastcall sub_10261330(uint32_t *param_1,uint32_t *param_2)

{
  sub_10262320(param_2,param_1);
  return;
}


// 0x10261340  (ghidra: FUN_10261340)  [gap]
void * __fastcall sub_10261340(void *param_1,void *param_2,uint64_t *param_3)

{
  uint32_t *puVar1;
  uint8_t local_18 [8];
  uint32_t local_10 [3];
  
  puVar1 = (uint32_t *)sub_1025ed90(param_2,local_10);
  puVar1 = sub_10262370(local_18,puVar1,param_3);
  sub_10255040(param_1,puVar1);
  return param_1;
}


// 0x10261380  (ghidra: FUN_10261380)  [gap]
void __fastcall sub_10261380(void *param_1,void *param_2)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint32_t local_14 [2];
  uint32_t local_c [2];
  
  puVar1 = (uint32_t *)sub_1025ed90(param_2,local_c);
  puVar2 = (uint32_t *)sub_1025ed90(param_1,local_14);
  sub_10262320(puVar2,puVar1);
  return;
}


// 0x102613c0  (ghidra: FUN_102613c0)  [gap]
uint64_t * __thiscall sub_102613c0(void *this,uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint8_t local_10 [12];
  
  puVar1 = sub_102623d0(local_10,param_1);
  uVar2 = sub_10255060(puVar1);
  *(uint64_t *)this = uVar2;
  return this;
}


// 0x102613f0  (ghidra: FUN_102613f0)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall sub_102613f0(void *param_1)

{
  char cVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint8_t local_2c [8];
  uint8_t local_24 [8];
  uint64_t local_1c [2];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10254f70(local_24);
  uVar2 = sub_10262410(param_1,local_24);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    puVar3 = sub_10262420(local_2c,param_1,local_24);
    sub_10262460(local_1c,puVar3);
    _Thrd_sleep(local_1c);
    sub_10254f70(local_24);
    uVar2 = sub_10262410(param_1,local_24);
    cVar1 = (char)uVar2;
  }
  return;
}


// 0x10261470  (ghidra: FUN_10261470)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall sub_10261470(void *this,uint32_t param_1)

{
  code *pcVar1;
  uint32_t uVar2;
  void *_ArgList;
  uintptr_t uVar3;
  uint32_t *extraout_ECX;
  uint _InitFlag;
  uint *_ThrdAddr;
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030715d;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102401f0(&local_18);
  uVar2 = sub_1020fe80(param_1);
  sub_10262510(&local_18,uVar2);
  local_8 = 0;
  _InitFlag = 0;
  _ThrdAddr = (uint *)((int)this + 4);
  _ArgList = (void *)sub_1020faf0(&local_18);
  uVar3 = _beginthreadex((void *)0x0,0,sub_10262550,_ArgList,_InitFlag,_ThrdAddr);
  *(uintptr_t *)this = uVar3;
  if (uVar3 != 0) {
    sub_10261cc0(&local_18);
    sub_10261ce0(extraout_ECX);
    ExceptionList = local_10;
    return;
  }
  *(uint *)((int)this + 4) = 0;
  std::_Throw_Cpp_error(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// 0x10261520  (ghidra: FUN_10261520)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __fastcall
sub_10261520(wchar_t *param_1,wchar_t *param_2,uint32_t param_3,uint32_t param_4,uint param_5)

{
  bool bVar1;
  uint8_t uVar2;
  char cVar3;
  uint32_t uVar4;
  uint8_t *puVar5;
  wchar_t *pwVar6;
  int extraout_ECX;
  uint32_t extraout_EDX;
  uint64_t uVar7;
  wchar_t *local_98;
  uint32_t local_94 [32];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103071a0;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar1 = sub_10261d80();
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar7 = sub_102549b0(param_5,0x4000);
    local_98 = param_1;
    if (((int)uVar7 != 0) && (param_1 != param_2)) {
      local_98 = param_1 + 1;
    }
    sub_10261b00(local_94);
    uVar4 = sub_10261da0();
    sub_10261db0();
    sub_10261d90();
    puVar5 = sub_10261d70();
    sub_10261bc0(local_94,local_98,param_2,puVar5,extraout_ECX,extraout_EDX,uVar4,param_5);
    local_8 = 0;
    bVar1 = sub_102628b0(local_94);
    if (bVar1) {
LAB_102615e2:
      uVar2 = 1;
    }
    else if ((local_98 != param_2) && (uVar7 = sub_102549b0(param_5,0x40), (int)uVar7 == 0)) {
      sub_10261bb0((int)local_94);
      sub_10261b90();
      for (pwVar6 = sub_102625e0(local_94,local_98 + 1,param_2,(wchar_t *)0x0); pwVar6 != param_2;
          pwVar6 = sub_102625e0(local_94,pwVar6 + 1,param_2,(wchar_t *)0x0)) {
        cVar3 = sub_10262910(local_94,pwVar6);
        if (cVar3 != '\0') goto LAB_102615e2;
      }
      cVar3 = sub_10262910(local_94,param_2);
      if (cVar3 != '\0') {
        uVar2 = 1;
      }
    }
    sub_10261ae0((int)local_94);
  }
  ExceptionList = local_10;
  return uVar2;
}


// 0x102616b0  (ghidra: FUN_102616b0)  [gap]
uint32_t __thiscall sub_102616b0(void *this,uint32_t param_1,uint param_2)

{
  uint64_t uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  int *local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  uint8_t local_10 [8];
  int *local_8;
  
  local_8 = (int *)thunk_FUN_1020fe80(this);
  uVar2 = param_2;
  puVar3 = (uint *)sub_1020fe80(param_2);
  piVar4 = sub_10212850(this,&local_14,puVar3);
  uVar1 = *(uint64_t *)piVar4;
  local_18 = piVar4[2];
  uVar5 = sub_102128b0(local_18,puVar3,piVar4);
  if ((char)uVar5 != '\0') {
    param_2 = param_2 & 0xffffff;
    sub_10228210(&local_18,(int)&param_2 + 3);
    return param_1;
  }
  sub_10211710(this);
  uVar5 = sub_1020fe80(uVar2);
  piVar4 = local_8;
  iVar9 = *local_8;
  uVar6 = thunk_FUN_1020fe80(this);
  pvVar7 = sub_102120e0(local_10,uVar6,iVar9,uVar5);
  piVar8 = (int *)sub_10211530((int)pvVar7);
  thunk_FUN_10211770((int)local_10);
  iStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  local_20 = (int *)uVar1;
  local_8 = sub_10211590(piVar4,local_20,iStack_1c,piVar8);
  param_2 = CONCAT13(1,(uint32_t)param_2);
  sub_10228210(&local_8,(int)&param_2 + 3);
  return param_1;
}


// 0x10261780  (ghidra: FUN_10261780)  [gap]
int * __thiscall sub_10261780(void *this,int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103071e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(uint16_t **)this = &DAT_103e7670;
  *(uint16_t **)((int)this + 4) = &DAT_103e7670;
  *(int *)((int)this + 8) = param_3;
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint32_t *)((int)this + 0x10) = 0;
  sub_10261dd0((void *)((int)this + 0x14));
  local_8 = 0;
  sub_10262190((void *)((int)this + 0x24),param_1);
  *(int *)((int)this + 0x3c) = param_1;
  *(uint32_t *)((int)this + 0x40) = 1;
  uVar2 = sub_102549b0(1,0x3f);
  iVar1 = (int)uVar2;
  if ((iVar1 == 1) || (iVar1 == 0)) {
    *(uint32_t *)((int)this + 0x50) = 0x8775dfb;
  }
  else if (iVar1 == 2) {
    *(uint32_t *)((int)this + 0x50) = 0x6e000300;
    sub_10262200((int *)((int)this + 0x24));
  }
  else if (iVar1 == 4) {
    *(uint32_t *)((int)this + 0x50) = 0x7080001b;
    sub_10262200((int *)((int)this + 0x24));
  }
  else if (iVar1 == 8) {
    *(uint32_t *)((int)this + 0x50) = 0x7181a01b;
    sub_10262200((int *)((int)this + 0x24));
  }
  else if (iVar1 == 0x10) {
    *(uint32_t *)((int)this + 0x50) = 0x6e080304;
    sub_10262200((int *)((int)this + 0x24));
  }
  else if (iVar1 == 0x20) {
    *(uint32_t *)((int)this + 0x50) = 0x7088001f;
    sub_10262200((int *)((int)this + 0x24));
  }
  else {
    *(uint32_t *)((int)this + 0x50) = 0;
  }
  sub_10261f50(this);
  ExceptionList = local_10;
  return this;
}


// 0x102618b0  (ghidra: FUN_102618b0)  [gap]
int __fastcall sub_102618b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030720d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  local_14 = (int *)sub_1020fe80(param_1 + 9);
  local_8 = 0;
  iVar1 = sub_10262290(param_1 + 9,0);
  sub_10262100(param_1);
  if (*param_1 == param_1[2]) {
    sub_10262230(param_1 + 9,iVar1);
    iVar1 = sub_102622c0(param_1 + 9);
    *(int *)(iVar1 + 0x14) = param_1[0x10];
    iVar2 = sub_10261d60((int)param_1);
    *(int *)(iVar1 + 0x1c) = iVar2;
    sub_10254e60(iVar1,0,0);
    local_14 = (int *)0x0;
    sub_10261b70(&local_14);
    ExceptionList = local_10;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  sub_regex_10261f40(0xe);
}


// 0x10261960  (ghidra: FUN_10261960)  [gap]
void __fastcall sub_10261960(uint32_t param_1,uint32_t *param_2)

{
  sub_10261b20(param_2);
  return;
}


// 0x10261970  (ghidra: FUN_10261970)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall
sub_10261970(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  void *this;
  int *extraout_ECX;
  uint32_t local_1c;
  uint32_t local_18;
  uint64_t local_14;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_18 = param_2;
  iVar1 = sub_1020faf0(&local_18);
  sub_1020f420(&local_14);
  sub_10212360(this,param_3,param_4);
  for (iVar2 = sub_1020faf0(&local_1c); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    uVar3 = sub_1020fe80(iVar2);
    sub_10262930(&local_14,uVar3);
  }
  uVar3 = sub_10212340((uint32_t *)&local_14);
  sub_10261b60(extraout_ECX);
  return uVar3;
}


// 0x102619f0  (ghidra: FUN_102619f0)  [gap]
uint32_t * __thiscall
sub_102619f0(void *this,uint param_1,uint32_t param_2,uint32_t param_3,void *param_4,int param_5
            )

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint32_t extraout_ECX;
  void *extraout_EDX;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  uint32_t local_10;
  int local_c;
  void *local_8;
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */
  
  local_8 = param_4;
  iVar5 = *(int *)((int)this + 0x10);
  local_c = iVar5;
  uVar1 = client_DrawHoverItem_10224ec0();
  if (uVar1 - iVar5 < param_1) {
                    /* WARNING: Subroutine does not return */
    sub_stl_1020f3f0();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = client_DrawHoverItem_10225710(this,iVar5 + param_1);
  local_10 = client_DrawHoverItem_102253c0(-(uint)(0xfffffffe < uVar2) | uVar2 + 1);
  *(uint *)((int)this + 0x10) = iVar5 + param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  pvVar3 = (void *)sub_1020fe80(local_10);
  if (7 < uVar1) {
    pvVar3 = *(void **)this;
    iVar5 = local_c;
    uVar6 = extraout_ECX;
    pvVar7 = local_8;
    pvVar4 = (void *)sub_1020fe80(pvVar3);
    sub_10260d40(extraout_EDX,pvVar4,iVar5,uVar6,pvVar7,param_5);
    client_DrawHoverItem_102253e0(pvVar3,uVar1 + 1);
    *(uint32_t *)this = local_10;
    return this;
  }
  sub_10260d40(pvVar3,this,local_c,extraout_ECX,local_8,param_5);
  sub_10210750(this,&local_10);
  return this;
}


// 0x10261ab0  (ghidra: FUN_10261ab0)  [gap]
uint32_t __fastcall
sub_10261ab0(ushort *param_1,int param_2,ushort *param_3,int param_4,uint reg_EAX)

{
  if (param_2 == param_4) {
    reg_EAX = sub_1025f9b0(param_1,param_3,param_2);
    if (reg_EAX == 0) {
      return 1;
    }
  }
  return reg_EAX & 0xffffff00;
}


// 0x10261ad0  [gap]
void __fastcall thunk_FUN_102380c0(int *param_1)

{
  uint uVar1;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar2;
  void *pvStack_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10304830;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  pbVar2 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (*(int *)(*(int *)*param_1 + 4) + *param_1));
  if (pbVar2 != (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    (**(code **)(*(int *)pbVar2 + 8))(uVar1);
  }
  ExceptionList = pvStack_10;
  return;
}


// 0x10261ae0  (ghidra: FUN_10261ae0)  [gap]
void __fastcall sub_10261ae0(int param_1)

{
  thunk_FUN_10261e60((uint32_t *)(param_1 + 0x40));
  sub_10261b30(param_1 + 0x20);
  sub_10261b30(param_1);
  return;
}


// 0x10261b00  (ghidra: FUN_10261b00)  [gap]
void __fastcall sub_10261b00(void *param_1)

{
  memset(param_1,0,0x80);
  return;
}


// 0x10261b20  (ghidra: FUN_10261b20)  [gap]
uint32_t * __fastcall sub_10261b20(uint32_t *param_1)

{
  thunk_FUN_102250f0(param_1);
  return param_1;
}


// 0x10261b30  (ghidra: FUN_10261b30)  [gap]
void __fastcall sub_10261b30(int param_1)

{
  thunk_FUN_10261e60((uint32_t *)(param_1 + 0x14));
  sub_10261b50(param_1);
  return;
}


// 0x10261b50  (ghidra: FUN_10261b50)  [gap]
void __fastcall sub_10261b50(int param_1)

{
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 4));
  return;
}


// 0x10261b60  (ghidra: FUN_10261b60)  [gap]
void __fastcall sub_10261b60(int *param_1)

{
  sub_10260910(*param_1,param_1[1]);
  return;
}


// 0x10261b70  (ghidra: FUN_10261b70)  [gap]
void __fastcall sub_10261b70(uint32_t *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)*param_1;
  if (puVar1 == (uint32_t *)0x0) {
    return;
  }
  sub_10254b40((uint32_t *)*puVar1,(uint32_t *)0x0);
  *puVar1 = 0;
  return;
}


// 0x10261b80  [gap]
void __fastcall thunk_FUN_10261e60(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    sub_1020ffa0(pvVar1,param_1[2] - (int)pvVar1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10261b90  (ghidra: FUN_10261b90)  [gap]
void sub_10261b90(void)

{
  uint uVar1;
  int extraout_ECX;
  
  uVar1 = sub_10254a00();
  sub_102549d0((uint *)(extraout_ECX + 0x60),uVar1);
  return;
}


// 0x10261bb0  (ghidra: FUN_10261bb0)  [gap]
void __fastcall sub_10261bb0(int param_1)

{
  sub_102549e0((uint *)(param_1 + 0x60));
  return;
}


// 0x10261bc0  (ghidra: FUN_10261bc0)  [gap]
int __thiscall
sub_10261bc0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,int param_4,
            uint32_t param_5,uint32_t param_6,uint param_7)

{
  uint8_t uVar1;
  uint64_t uVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307253;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10261c90((int)this);
  local_8 = 0;
  sub_10261c90((int)this + 0x20);
  sub_1020f7c0((uint32_t *)((int)this + 0x40));
  local_8 = CONCAT31(local_8._1_3_,2);
  *(uint32_t *)((int)this + 0x50) = param_2;
  *(uint32_t *)((int)this + 0x54) = param_1;
  *(uint32_t *)((int)this + 0x5c) = param_6;
  *(uint32_t *)((int)this + 0x68) = param_5;
  *(int *)((int)this + 0x58) = param_4;
  *(uint *)((int)this + 0x60) = param_7;
  *(uint8_t *)((int)this + 100) = 0;
  uVar2 = sub_102549b0(*(uint *)(param_4 + 8),8);
  if ((int)uVar2 != 0) {
    uVar2 = sub_102549b0(param_7,0x10);
    if ((int)uVar2 == 0) {
      uVar1 = 1;
      goto LAB_10261c5f;
    }
  }
  uVar1 = 0;
LAB_10261c5f:
  *(uint8_t *)((int)this + 0x6c) = uVar1;
  *(uint32_t *)((int)this + 0x70) = param_3;
  sub_10261eb0((void *)((int)this + 0x40),*(uint *)(param_4 + 0x18));
  ExceptionList = local_10;
  return (int)this;
}


// 0x10261c90  (ghidra: FUN_10261c90)  [gap]
int __fastcall sub_10261c90(int param_1)

{
  sub_10261cb0(param_1);
  sub_1020f7c0((uint32_t *)(param_1 + 0x14));
  return param_1;
}


// 0x10261cb0  (ghidra: FUN_10261cb0)  [gap]
uint32_t __fastcall sub_10261cb0(int param_1)

{
  uint64_t uVar1;
  
  uVar1 = sub_10245b80((uint32_t *)(param_1 + 4));
  return (int)((ulonglong)uVar1 >> 0x20);
}


// 0x10261cc0  (ghidra: FUN_10261cc0)  [gap]
void __fastcall sub_10261cc0(uint32_t *param_1)

{
  uint32_t local_8;
  
  local_8 = 0;
  sub_10211940(param_1,&local_8);
  return;
}


// 0x10261ce0  (ghidra: FUN_10261ce0)  [gap]
void __fastcall sub_10261ce0(uint32_t *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    sub_10261e90((void *)*param_1);
  }
  return;
}


// 0x10261cf0  (ghidra: FUN_10261cf0)  [gap]
void __fastcall sub_10261cf0(uint32_t *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 0) {
    sub_1025fa50(*piVar1,piVar1[1]);
    sub_1020fef0((void *)*piVar1,(piVar1[2] - *piVar1 >> 3) * -0x55555555);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}


// 0x10261d00  (ghidra: FUN_10261d00)  [gap]
uint32_t * __thiscall sub_10261d00(void *this,int *param_1)

{
  bool bVar1;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030727d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_10238110(this,param_1);
  local_8 = 0;
  bVar1 = std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::_Ipfx
                    (*(basic_istream<wchar_t,std::char_traits<wchar_t>_> **)this,true);
  *(bool *)((int)this + 4) = bVar1;
  ExceptionList = local_10;
  return this;
}


// 0x10261d60  (ghidra: FUN_10261d60)  [gap]
int __fastcall sub_10261d60(int param_1)

{
  return *(int *)(param_1 + 0xc) + 1;
}


// 0x10261d70  (ghidra: FUN_10261d70)  [gap]
uint8_t * sub_10261d70(void)

{
  return &DAT_104e17c0;
}


// 0x10261d80  (ghidra: FUN_10261d80)  [gap]
bool sub_10261d80(void)

{
  return DAT_104e17bc == 0;
}


// 0x10261d90  (ghidra: FUN_10261d90)  [gap]
uint32_t sub_10261d90(void)

{
  return DAT_104e17bc;
}


// 0x10261da0  (ghidra: FUN_10261da0)  [gap]
uint32_t sub_10261da0(void)

{
  if (DAT_104e17bc != 0) {
    return *(uint32_t *)(DAT_104e17bc + 0x14);
  }
  return 0;
}


// 0x10261db0  (ghidra: FUN_10261db0)  [gap]
int sub_10261db0(void)

{
  if (DAT_104e17bc != 0) {
    return *(int *)(DAT_104e17bc + 0x1c) + -1;
  }
  return 0;
}


// 0x10261dd0  (ghidra: FUN_10261dd0)  [gap]
void * __fastcall sub_10261dd0(void *param_1)

{
  char local_11;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103072ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = '\0';
  sub_10261ed0(param_1,param_1,&local_11);
  local_8 = 0;
  sub_1024b540(param_1,0);
  ExceptionList = local_10;
  return param_1;
}


// 0x10261e30  (ghidra: FUN_10261e30)  [gap]
void __thiscall sub_10261e30(void *this,int param_1,int param_2)

{
  uint uVar1;
  void *extraout_EDX;
  
  if (param_1 != param_2) {
    uVar1 = sub_1020fe80(param_2 - param_1 >> 1);
    client_DrawHoverItem_10225190(this,extraout_EDX,uVar1);
  }
  return;
}


// 0x10261e60  (ghidra: FUN_10261e60)  [gap]
void __fastcall sub_10261e60(uint32_t *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    sub_1020ffa0(pvVar1,param_1[2] - (int)pvVar1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// 0x10261e90  (ghidra: FUN_10261e90)  [gap]
void sub_10261e90(void *param_1)

{
  FUN_1030207a(param_1);
  return;
}


// 0x10261eb0  (ghidra: FUN_10261eb0)  [gap]
void __thiscall sub_10261eb0(void *this,uint param_1)

{
  sub_10262960(this,param_1);
  return;
}


// 0x10261ed0  (ghidra: FUN_10261ed0)  [gap]
void * __thiscall sub_10261ed0(void *this,uint32_t param_1,char *param_2)

{
  uint uVar1;
  char **ppcVar2;
  
  param_2 = (char *)-(uint)(*param_2 != '\0');
  ppcVar2 = &param_2;
  uVar1 = sub_10247210(0);
  sub_10261f10(this,uVar1,(int *)ppcVar2);
  *(uint32_t *)((int)this + 0xc) = 0;
  return this;
}


// 0x10261f10  (ghidra: FUN_10261f10)  [gap]
uint32_t * __thiscall sub_10261f10(void *this,uint param_1,int *param_2)

{
  void *this_00;
  
  sub_10210180(this);
  sub_102629c0(this_00,param_1,param_2);
  return this;
}


// 0x10261f40  (ghidra: FUN_10261f40)  [gap]
void sub_regex_10261f40(error_type param_1)

{
  code *pcVar1;
  
  std::_Xregex_error(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// 0x10261f50  (ghidra: FUN_10261f50)  [gap]
void __fastcall sub_10261f50(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint32_t uVar5;
  bool bVar6;
  
  if ((ushort *)*param_1 == (ushort *)param_1[2]) {
    uVar2 = 0xffff;
    *(uint16_t *)(param_1 + 0x12) = 0xffff;
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)*param_1;
    *(ushort *)(param_1 + 0x12) = uVar1;
    pcVar3 = strchr("()$^.*+?[]|\\-{},:=!\n\r\b",(uint)uVar1);
    uVar2 = (uint)*(ushort *)(param_1 + 0x12);
    uVar4 = uVar2;
    if (pcVar3 == (char *)0x0) {
      uVar4 = 0;
    }
  }
  param_1[0x13] = uVar4;
  switch(uVar2) {
  case 10:
    if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
      return;
    }
    if (param_1[4] != 0) {
      return;
    }
    param_1[0x13] = 0x7c;
    return;
  default:
    goto switchD_10261faa_caseD_b;
  case 0x24:
    if ((param_1[0x14] & 0x2000000U) == 0) {
      return;
    }
    if ((short *)(*param_1 + 2) == (short *)param_1[2]) {
      return;
    }
    if (*(short *)(*param_1 + 2) == 10) {
      return;
    }
    param_1[0x13] = 0;
    return;
  case 0x28:
  case 0x29:
    bVar6 = (*(byte *)(param_1 + 0x14) & 8) == 0;
    break;
  case 0x2a:
    if ((param_1[0x14] & 0x4000000U) == 0) {
      return;
    }
    uVar5 = sub_10263180((int)(param_1 + 9));
    if ((char)uVar5 == '\0') {
      return;
    }
    param_1[0x13] = 0;
    return;
  case 0x2b:
  case 0x3f:
    bVar6 = (*(byte *)(param_1 + 0x14) & 1) == 0;
    break;
  case 0x5c:
    uVar4 = sub_10262f70(param_1);
    if ((char)uVar4 == '\0') {
      return;
    }
    uVar1 = *(ushort *)(*param_1 + 2);
    *(ushort *)(param_1 + 0x12) = uVar1;
    param_1[0x13] = (uint)uVar1;
    return;
  case 0x5e:
    if ((param_1[0x14] & 0x2000000U) == 0) {
      return;
    }
    uVar5 = sub_10263180((int)(param_1 + 9));
    bVar6 = (char)uVar5 == '\0';
    break;
  case 0x7b:
  case 0x7d:
    bVar6 = (*(byte *)(param_1 + 0x14) & 0x10) == 0;
    break;
  case 0x7c:
    bVar6 = (*(byte *)(param_1 + 0x14) & 2) == 0;
  }
  if (bVar6) {
    param_1[0x13] = 0;
  }
switchD_10261faa_caseD_b:
  return;
}


// 0x10262100  (ghidra: FUN_10262100)  [gap]
void __fastcall sub_10262100(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint32_t *puVar4;
  
  iVar1 = sub_1020fae0((int)(param_1 + 9));
  uVar2 = sub_10262fe0(param_1);
  if ((char)uVar2 == '\0') {
    if (param_1[0x13] != 0x7c) {
      return;
    }
    iVar3 = sub_102631b0(param_1 + 9);
    sub_10262230(param_1 + 9,iVar3);
  }
  puVar4 = sub_102631c0(param_1 + 9,iVar1);
  iVar3 = param_1[0x13];
  while (iVar3 == 0x7c) {
    sub_10262fb0(param_1);
    uVar2 = sub_10262fe0(param_1);
    if ((char)uVar2 == '\0') {
      iVar3 = sub_102631b0(param_1 + 9);
      sub_10262230(param_1 + 9,iVar3);
    }
    sub_10263220(param_1 + 9,iVar1,(int)puVar4);
    iVar3 = param_1[0x13];
  }
  return;
}


// 0x10262190  (ghidra: FUN_10262190)  [gap]
uint32_t * __thiscall sub_10262190(void *this,uint32_t param_1)

{
  uint32_t *puVar1;
  void *extraout_ECX;
  uint32_t uVar2;
  uint64_t uVar3;
  
  puVar1 = operator_new(0x24);
  sub_10262a00(puVar1);
  puVar1 = sub_10254b70(extraout_ECX);
  *(uint32_t **)this = puVar1;
  *(uint32_t **)((int)this + 4) = puVar1;
  *(uint32_t *)((int)this + 8) = 1;
  *(uint32_t *)((int)this + 0xc) = param_1;
  uVar3 = sub_102549b0(1,0x800);
  uVar2 = 0x100;
  if ((int)uVar3 != 0) {
    uVar2 = 0;
  }
  *(uint32_t *)((int)this + 0x10) = uVar2;
  uVar2 = 4;
  if ((int)uVar3 != 0) {
    uVar2 = 0;
  }
  *(uint32_t *)((int)this + 0x14) = uVar2;
  return this;
}


// 0x10262200  (ghidra: FUN_10262200)  [gap]
void __fastcall sub_10262200(int *param_1)

{
  sub_10254aa0((uint *)(*param_1 + 8),8);
  return;
}


// 0x10262230  (ghidra: FUN_10262230)  [gap]
void __thiscall sub_10262230(void *this,int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  void *this_00;
  uint32_t uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 8) {
    uVar3 = 9;
  }
  else if ((iVar1 == 10) || (uVar3 = 0xe, iVar1 == 0xb)) {
    uVar3 = 0xc;
  }
  puVar2 = operator_new(0x18);
  sub_10245260(puVar2);
  puVar2 = sub_10254be0(this_00,uVar3,this_00,param_1);
  sub_10263290(this,(int)puVar2);
  return;
}


// 0x10262290  (ghidra: FUN_10262290)  [gap]
void __thiscall sub_10262290(void *this,uint32_t param_1)

{
  uint32_t *puVar1;
  void *this_00;
  
  puVar1 = operator_new(0x18);
  sub_10245260(puVar1);
  puVar1 = sub_10254ca0(this_00,param_1);
  sub_10263290(this,(int)puVar1);
  return;
}


// 0x102622c0  (ghidra: FUN_102622c0)  [gap]
uint32_t __fastcall sub_102622c0(uint32_t *param_1)

{
  sub_102632d0(param_1,0x15);
  return *param_1;
}


// 0x102622d0  (ghidra: FUN_102622d0)  [gap]
uint32_t * __fastcall sub_102622d0(uint32_t *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_103018be();
  sub_102551e0(param_1,uVar1);
  return param_1;
}


// 0x10262300  (ghidra: FUN_10262300)  [gap]
void __thiscall sub_10262300(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = thunk_FUN_1020fe80(this);
  sub_102637d0(param_1,param_2,param_3,uVar1);
  return;
}


// 0x10262320  (ghidra: FUN_10262320)  [gap]
/* WARNING: Removing unreachable block (ram,0x10262358) */

uint32_t __fastcall sub_10262320(uint32_t *param_1,uint32_t *param_2)

{
  uint3 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint32_t local_8;
  
  local_14 = *param_1;
  local_10 = param_1[1];
  local_8 = param_2[1];
  local_c = *param_2;
  lVar2 = sub_10255060((uint64_t *)&local_c);
  lVar3 = sub_10255060((uint64_t *)&local_14);
  uVar1 = (uint3)((ulonglong)lVar3 >> 8);
  if (lVar2 <= lVar3) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}


// 0x10262370  (ghidra: FUN_10262370)  [gap]
void * __fastcall sub_10262370(void *param_1,uint32_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint8_t local_18 [8];
  uint64_t local_10;
  
  local_10._0_4_ = *param_2;
  local_10._4_4_ = param_2[1];
  puVar1 = sub_102613c0(local_18,param_3);
  lVar2 = sub_10255060(puVar1);
  local_10 = sub_10255060(&local_10);
  local_10 = local_10 - lVar2;
  sub_10255040(param_1,(uint32_t *)&local_10);
  return param_1;
}


// 0x102623d0  (ghidra: FUN_102623d0)  [gap]
void * __fastcall sub_102623d0(void *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong local_c;
  
  uVar1 = sub_10255060(param_2);
  local_c = __allmul((uint)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000000,0);
  sub_10255040(param_1,(uint32_t *)&local_c);
  return param_1;
}


// 0x10262410  (ghidra: FUN_10262410)  [gap]
uint __fastcall sub_10262410(void *param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = sub_10261380(param_2,param_1);
  return uVar1 ^ 1;
}


// 0x10262420  (ghidra: FUN_10262420)  [gap]
void * __fastcall sub_10262420(void *param_1,void *param_2,void *param_3)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint32_t local_18 [2];
  uint32_t local_10 [3];
  
  puVar1 = (uint32_t *)sub_1025ed90(param_3,local_10);
  puVar2 = (uint32_t *)sub_1025ed90(param_2,local_18);
  sub_10263870(param_1,puVar2,puVar1);
  return param_1;
}


// 0x10262460  (ghidra: FUN_10262460)  [gap]
bool __fastcall sub_10262460(uint64_t *param_1,uint64_t *param_2)

{
  bool bVar1;
  void *this;
  uint64_t *puVar2;
  uint *puVar3;
  uint64_t *extraout_ECX;
  uint64_t *extraout_ECX_00;
  uint64_t *extraout_ECX_01;
  uint64_t uVar4;
  uint32_t local_2c [2];
  uint8_t local_24 [8];
  uint local_1c [2];
  uint64_t local_14;
  uint8_t local_c [8];
  
  local_14._0_4_ = 0xad160000;
  local_14._4_4_ = 0x311cd;
  local_1c[0] = 0;
  local_1c[1] = 0x412a5e00;
  this = sub_10254f40(local_24);
  puVar2 = (uint64_t *)sub_1025ed90(this,local_2c);
  sub_102638d0(local_c,puVar2);
  bVar1 = sub_10263900(local_1c,param_2);
  if (bVar1) {
    puVar3 = (uint *)&local_14;
  }
  else {
    puVar3 = sub_10263940(local_2c,param_2);
  }
  sub_10260f00(local_c,puVar3);
  sub_10262f00(&local_14,extraout_ECX);
  uVar4 = sub_10255060(&local_14);
  *param_1 = uVar4;
  sub_10262f40(local_1c,extraout_ECX_00);
  sub_10262a90(local_c,local_1c);
  uVar4 = sub_10255060(extraout_ECX_01);
  *(int *)(param_1 + 1) = (int)uVar4;
  return bVar1;
}


// 0x10262510  (ghidra: FUN_10262510)  [gap]
uint32_t __fastcall sub_10262510(uint32_t param_1,uint32_t param_2)

{
  void *this;
  uint32_t uVar1;
  
  this = operator_new(0xc);
  uVar1 = sub_1020fe80(param_2);
  sub_10263970(this,uVar1);
  sub_10263990(param_1);
  return param_1;
}


// 0x10262550  (ghidra: FUN_10262550)  [gap]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t sub_10262550(void)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  uint32_t local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t uStack_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_103072d0;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sub_102401f0(&local_18);
  sub_10263990(extraout_ECX);
  uVar1 = sub_1020faf0(&local_18);
  uVar1 = sub_1020fe80(uVar1);
  puVar2 = (uint32_t *)sub_1020fe80(uVar1);
  thunk_FUN_10259bb0(puVar2);
  _Cnd_do_broadcast_at_thread_exit();
  sub_10261ce0(&local_18);
  ExceptionList = local_10;
  return 0;
}


// 0x102625e0  (ghidra: FUN_102625e0)  [gap]
wchar_t * __thiscall sub_102625e0(void *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  short *psVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint32_t uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  uint32_t extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  uint32_t extraout_EDX;
  wchar_t *extraout_EDX_00;
  uint32_t extraout_EDX_01;
  ushort uVar14;
  wchar_t *pwVar15;
  uint64_t uVar16;
  
  pwVar13 = param_2;
  pwVar6 = param_1;
  if (param_3 == (wchar_t *)0x0) {
    param_3 = *(wchar_t **)((int)this + 0x58);
  }
  if (param_1 != param_2) {
    while (param_3 != (wchar_t *)0x0) {
      pwVar15 = param_3;
      switch(*(uint32_t *)(param_3 + 2)) {
      default:
        goto switchD_10262618_caseD_0;
      case 1:
      case 8:
      case 9:
      case 0xd:
      case 0xe:
      case 0x14:
        param_3 = *(wchar_t **)(param_3 + 6);
        break;
      case 2:
        psVar5 = (short *)sub_102639c0((int)param_1);
        if (*psVar5 == 10) {
          return pwVar6;
        }
        param_3 = (wchar_t *)0xa;
        pwVar6 = (wchar_t *)sub_102639d0(extraout_ECX,extraout_EDX,(uint *)&param_3);
        if (pwVar6 == param_2) {
          return pwVar6;
        }
        return pwVar6 + 1;
      case 3:
        param_3 = (wchar_t *)0xa;
        pwVar6 = (wchar_t *)sub_102639d0(param_1,param_2,(uint *)&param_3);
        return pwVar6;
      case 6:
        param_1 = param_3 + 10;
        do {
          sub_10262a70((int)param_1);
          pwVar15 = (wchar_t *)sub_10262a70(extraout_ECX_00);
          param_3 = pwVar6 + 1;
          pwVar15 = (wchar_t *)
                    sub_10263a30(pwVar6,param_3,pwVar15,extraout_EDX_00,
                                 *(uint32_t *)((int)this + 0x70),*(uint *)((int)this + 0x5c));
          if (pwVar15 != pwVar6) {
            return pwVar6;
          }
          pwVar6 = param_3;
        } while (param_3 != pwVar13);
        return param_3;
      case 7:
        pwVar6 = param_3;
        pwVar13 = param_1;
        goto LAB_102626d5;
      case 0xc:
      case 0x15:
        param_3 = (wchar_t *)0x0;
        break;
      case 0x10:
        goto switchD_10262618_caseD_10;
      }
    }
  }
switchD_10262618_caseD_0:
  return param_1;
LAB_102626d5:
  wVar1 = *pwVar13;
  pwVar15 = (wchar_t *)(uint)(ushort)wVar1;
  param_1 = pwVar15;
  uVar16 = sub_102549b0(*(uint *)((int)this + 0x5c),0x100);
  if ((int)uVar16 != 0) {
    uVar7 = sub_10262c30(*(void **)((int)this + 0x70),wVar1);
    pwVar15 = (wchar_t *)(uVar7 & 0xffff);
    param_1 = pwVar15;
  }
  if ((*(uint **)(pwVar6 + 10) == (uint *)0x0) ||
     (pwVar8 = sub_10263ad0(pwVar13,pwVar13 + 1,*(uint **)(pwVar6 + 10)), pwVar8 == pwVar13)) {
    iVar10 = *(int *)(pwVar6 + 0x10);
    uVar14 = (ushort)pwVar15;
    if (iVar10 != 0) {
      uVar16 = sub_102549b0(*(uint *)((int)this + 0x5c),0x800);
      pwVar8 = pwVar15;
      if ((int)uVar16 != 0) {
        uVar4 = sub_10262c50(*(void **)((int)this + 0x70),uVar14);
        pwVar8 = (wchar_t *)(uint)uVar4;
      }
      uVar7 = sub_10263b70((uint)pwVar8,iVar10);
      if ((char)uVar7 != '\0') {
        param_1 = (wchar_t *)CONCAT13(1,param_1._0_3_);
        goto LAB_10262817;
      }
    }
    if (uVar14 < 0x100) {
      if (*(void **)(pwVar6 + 0xc) != (void *)0x0) {
        uVar9 = sub_10263bc0(*(void **)(pwVar6 + 0xc),uVar14);
        cVar3 = (char)uVar9;
LAB_1026280b:
        param_1 = (wchar_t *)CONCAT13(1,param_1._0_3_);
        if (cVar3 != '\0') goto LAB_10262817;
      }
    }
    else {
      if (*(int *)(pwVar6 + 0xe) != 0) {
        sub_1020fae0(*(int *)(pwVar6 + 0xe));
        sub_10262a70(extraout_ECX_01);
        uVar9 = sub_10262a70(extraout_ECX_02);
        iVar10 = sub_1020fae0(extraout_ECX_03);
        iVar11 = sub_10262a70(extraout_ECX_04);
        iVar12 = sub_10263bf0(uVar9,extraout_EDX_01,(short *)&param_1);
        pwVar6 = param_3;
        pwVar15 = param_1;
        if (iVar12 != iVar11 + iVar10 * 2) {
          param_1 = (wchar_t *)CONCAT13(1,param_1._0_3_);
          goto LAB_10262817;
        }
      }
      if ((pwVar6[0x12] != L'\0') &&
         (bVar2 = sub_10262be0(*(void **)((int)this + 0x70),(wchar_t)pwVar15,pwVar6[0x12]), bVar2))
      {
        param_1 = (wchar_t *)CONCAT13(1,param_1._0_3_);
        goto LAB_10262817;
      }
      if (*(int **)(pwVar6 + 0x14) != (int *)0x0) {
        cVar3 = sub_10263c50(pwVar15,*(int **)(pwVar6 + 0x14),*(void **)((int)this + 0x70));
        goto LAB_1026280b;
      }
    }
    param_1 = (wchar_t *)((uint)param_1 & 0xffffff);
  }
  else {
    param_1 = (wchar_t *)CONCAT13(1,param_1._0_3_);
  }
LAB_10262817:
  uVar16 = sub_102549b0(*(uint *)(pwVar6 + 4),1);
  if ((bool)param_1._3_1_ != ((int)uVar16 != 0)) {
    return pwVar13;
  }
  pwVar13 = pwVar13 + 1;
  if (pwVar13 == param_2) {
    return pwVar13;
  }
  goto LAB_102626d5;
switchD_10262618_caseD_10:
  do {
    if (pwVar15 == (wchar_t *)0x0) {
      return pwVar13;
    }
    pwVar13 = sub_102625e0(this,pwVar6,pwVar13,*(wchar_t **)(pwVar15 + 6));
    pwVar15 = *(wchar_t **)(pwVar15 + 0xc);
  } while (pwVar6 != pwVar13);
  return pwVar13;
}


// 0x102628b0  (ghidra: FUN_102628b0)  [gap]
bool __fastcall sub_102628b0(uint32_t *param_1)

{
  char cVar1;
  uint uVar2;
  
  param_1[0x13] = param_1[0x15];
  *param_1 = param_1[0x15];
  uVar2 = func_0x102637c0(param_1);
  sub_10262b20(param_1 + 1,uVar2);
  uVar2 = func_0x102637c0();
  sub_10261eb0(param_1 + 5,uVar2);
  *(uint16_t *)(param_1 + 0x19) = 0;
  *(uint8_t *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 10000000;
  param_1[0x1f] = 1000;
  cVar1 = func_0x10263310(param_1[0x16]);
  return cVar1 != '\0';
}


// 0x10262910  (ghidra: FUN_10262910)  [gap]
void __thiscall sub_10262910(void *this,uint32_t param_1)

{
  *(uint32_t *)((int)this + 0x54) = param_1;
  sub_102628b0(this);
  return;
}

