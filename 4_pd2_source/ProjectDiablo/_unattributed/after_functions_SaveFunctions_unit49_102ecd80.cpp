/*
 * _unattributed/after_functions_SaveFunctions_unit49_102ecd80.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x102ecd80 - 0x102ef3a0
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


// 0x102ecd80  (ghidra: FUN_102ecd80)  [gap]
void __fastcall
sub_102ecd80(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  (*sub_6fd12380)(param_3,param_4,param_5,param_6,param_2,param_1);
  return;
}


// 0x102ecdb0  (ghidra: FUN_102ecdb0)  [gap]
void sub_102ecdb0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd129b0)(param_2,param_3);
  return;
}


// 0x102ecdd0  (ghidra: FUN_102ecdd0)  [gap]
void sub_102ecdd0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd11b10)(param_2,param_3);
  return;
}


// 0x102ecdf0  (ghidra: FUN_102ecdf0)  [gap]
void __fastcall sub_102ecdf0(uint32_t param_1)

{
  (*sub_6fc21180)(param_1);
  return;
}


// 0x102ece10  (ghidra: FUN_102ece10)  [gap]
void sub_102ece10(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd120c0)(param_3);
  return;
}


// 0x102ece30  (ghidra: FUN_102ece30)  [gap]
void sub_102ece30(uint32_t param_1)

{
  (*sub_6fd00a60)(param_1);
  return;
}


// 0x102ece40  (ghidra: FUN_102ece40)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_Ai_AiThink4_6fccc410_102ece40(int *reg_ESI,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  functions_D2NewFunctions_102c0f60(reg_ESI,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ece70  (ghidra: FUN_102ece70)  [gap]
void sub_102ece70(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fc3e140)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ecea0  (ghidra: FUN_102ecea0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_GAME_Game_6fc4c830_102ecea0(int reg_EBX,int reg_ESI,uint32_t param_3,uint32_t param_4)

{
  functions_D2NewFunctions_102c0f80(reg_EBX,reg_ESI,param_3,param_4);
  return;
}


// 0x102ecec0  (ghidra: FUN_102ecec0)  [gap]
void sub_102ecec0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fc74320)(param_3,param_4);
  return;
}


// 0x102ecee0  (ghidra: FUN_102ecee0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_GAME_Game_6fc4d500_102ecee0(int reg_EAX,int param_2)

{
  functions_SaveFunctions_102ea970(reg_EAX,param_2);
  return;
}


// 0x102ecef0  (ghidra: FUN_102ecef0)  [gap]
void __thiscall sub_Hook_sub_6fc74320_102ecef0(uint *param_1,int param_2,int *param_3,uint32_t param_4)

{
  functions_SaveFunctions_102eb040(param_1,param_2,param_3,param_4);
  return;
}


// 0x102ecf10  (ghidra: FUN_102ecf10)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Game_10006_102ecf10(int reg_ESI,int reg_EDI)

{
  functions_SaveFunctions_102ead30(reg_EDI,reg_ESI);
  return;
}


// 0x102ecf20  (ghidra: FUN_102ecf20)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc761a0_102ecf20(int reg_ESI)

{
  functions_SaveFunctions_102eada0(reg_ESI);
  return;
}


// 0x102ecf30  (ghidra: FUN_102ecf30)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6faf3920_102ecf30(int reg_ESI)

{
  functions_SaveFunctions_Wraps_D2Client_GAME_SCmd_102eb1c0(reg_ESI);
  return;
}


// 0x102ecf40  (ghidra: FUN_102ecf40)  [gap]
void sub_102ecf40(uint32_t param_1,uint32_t param_2)

{
  (*D2Client_loc_6fac4d30)(param_2);
  return;
}


// 0x102ecf60  (ghidra: FUN_102ecf60)  [gap]
void __thiscall
sub_102ecf60(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  (*D2Game_loc_6fce00c0)(param_2,param_3,param_4,param_5,this);
  return;
}


// 0x102ecf80  (ghidra: FUN_102ecf80)  [gap]
void __thiscall
sub_Hook_sub_6fcef810_102ecf80(uint32_t param_1,int param_2,uint32_t param_3,void *param_4,uint32_t param_5)

{
  functions_D2NewFunctions_102c9b70(param_1,param_2,param_3,param_4,param_5);
  return;
}


// 0x102ecfa0  (ghidra: FUN_102ecfa0)  [gap]
void __thiscall
sub_102ecfa0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*D2Game_loc_6fceece0)(param_3,param_4,this);
  return;
}


// 0x102ecfc0  (ghidra: FUN_102ecfc0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fd0b090_102ecfc0(int *reg_EBX)

{
  functions_D2NewFunctions_102c1060(reg_EBX);
  return;
}


// 0x102ecfd0  (ghidra: FUN_102ecfd0)  [gap]
void sub_102ecfd0(void)

{
  (*ITEMS_ItemMode_6fcf24b0)();
  return;
}


// 0x102ecfe0  (ghidra: FUN_102ecfe0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_ITEMS_ItemMode_6fcf9470_102ecfe0(uint reg_EAX,int reg_ESI)

{
  int iVar1;
  int *unaff_EBP;
  
  iVar1 = functions_D2NewFunctions_102c10e0(reg_EAX,reg_ESI,unaff_EBP);
  if (iVar1 != 0) {
    return;
  }
  return;
}


// 0x102ed000  (ghidra: FUN_102ed000)  [gap]
void sub_102ed000(void)

{
  (*UNIT_SUnitEvent_6fc570e0)();
  return;
}


// 0x102ed020  (ghidra: FUN_102ed020)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_SKILLS_SkillNec_6fc6f970_102ed020(int *reg_EAX,uint reg_ESI,uint32_t reg_EDI,uint32_t reg_EDX)

{
  functions_D2NewFunctions_102c1120(reg_EAX,reg_EDI,reg_EDX,reg_ESI);
  return;
}


// 0x102ed030  (ghidra: FUN_102ed030)  [gap]
void sub_102ed030(void)

{
  (*sub_6fc2e5d0)(0);
  return;
}


// 0x102ed040  (ghidra: FUN_102ed040)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfc0b0_102ed040(int *reg_EAX,uint32_t reg_EDI)

{
  sub_1026d1d0(reg_EAX,reg_EDI);
  return;
}


// 0x102ed050  (ghidra: FUN_102ed050)  [gap]
void __thiscall sub_102ed050(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fcb1b70)(param_3,this);
  return;
}


// 0x102ed070  (ghidra: FUN_102ed070)  [gap]
void __fastcall sub_102ed070(uint32_t param_1)

{
  (*sub_6fd007a0)(param_1);
  return;
}


// 0x102ed090  (ghidra: FUN_102ed090)  [gap]
void sub_102ed090(void)

{
  (*UNIT_SUnitDmg_6fcfaa90)();
  return;
}


// 0x102ed0b0  (ghidra: FUN_102ed0b0)  [gap]
void sub_102ed0b0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fcb22a0)(param_2);
  return;
}


// 0x102ed0d0  (ghidra: FUN_102ed0d0)  [gap]
void sub_102ed0d0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fcb1e30)(param_2);
  return;
}


// 0x102ed0f0  (ghidra: FUN_102ed0f0)  [gap]
void sub_102ed0f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*sub_6fcb2360)(param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102ed120  (ghidra: FUN_102ed120)  [gap]
void sub_102ed120(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*UI_SkillDesc_6fadf0a0)(param_1,param_2,param_3,param_4);
  return;
}


// 0x102ed140  (ghidra: FUN_102ed140)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UI_SkillDesc_6fae2f30_102ed140(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,int param_6,uint32_t param_7,int *param_8,uint32_t param_9,
                 int param_10,int param_11,int *param_12,uint32_t param_13,int param_14,
                 uint8_t *reg_ESI,int reg_EDI)

{
  int *unaff_EBP;
  
  sub_102f91b0(unaff_EBP,param_8,param_6,param_11,param_14,param_12,reg_EDI + param_10,reg_ESI);
  return;
}


// 0x102ed170  (ghidra: FUN_102ed170)  [gap]
void sub_102ed170(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*UNIT_SUnitMsg_6fc9a190)(param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ed1a0  (ghidra: FUN_102ed1a0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_SKILLS_Skills_6fb52950_102ed1a0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
                 uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12,
                 uint32_t param_13,uint32_t param_14,int reg_EAX,uint32_t reg_ESI)

{
  int unaff_EBP;
  
  functions_D2NewFunctions_102c5880(param_13,param_14,reg_ESI,reg_EAX,unaff_EBP,param_5);
  return;
}


// 0x102ed1c0  (ghidra: FUN_102ed1c0)  [gap]
/* WARNING: Unknown calling convention */

uint64_t sub_Hook_sub_6fcb2bb0_102ed1c0(uint32_t reg_EAX,uint32_t reg_EDX,uint32_t reg_EBX)

{
  uint32_t unaff_EBP;
  
  sub_1026eab0(reg_EBX,reg_EDX,reg_EAX,unaff_EBP);
  return CONCAT44(reg_EDX,reg_EAX);
}


// 0x102ed1e0  (ghidra: FUN_102ed1e0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UI_SkillDesc_6fae0340_102ed1e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
                 uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12,
                 int reg_EAX,uint32_t reg_ESI)

{
  uint unaff_EBP;
  
  sub_102f9260(reg_ESI,unaff_EBP,param_12,reg_EAX);
  return;
}


// 0x102ed200  (ghidra: FUN_102ed200)  [gap]
void __fastcall sub_102ed200(uint32_t param_1)

{
  (*sub_6fac43e0)(param_1);
  return;
}


// 0x102ed210  (ghidra: FUN_102ed210)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc34bf0_102ed210(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,int reg_EAX,int reg_EBX)

{
  short unaff_DI;
  
  functions_D2NewFunctions_102c5b30(reg_EBX,reg_EAX,unaff_DI,(short)param_6);
  return;
}


// 0x102ed220  (ghidra: FUN_102ed220)  [gap]
void sub_102ed220(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fd7f100)(param_2);
  return;
}


// 0x102ed240  (ghidra: FUN_102ed240)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc95e10_102ed240(int *reg_ESI,int param_2)

{
  functions_D2NewFunctions_102ccc30(reg_ESI,param_2);
  return;
}


// 0x102ed250  (ghidra: FUN_102ed250)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcc35d0_102ed250(int *reg_ESI,int param_2,int param_3)

{
  functions_D2NewFunctions_102cd0b0(reg_ESI,param_2,param_3);
  return;
}


// 0x102ed270  (ghidra: FUN_102ed270)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc33de0_102ed270(int *reg_EBX,int param_2,uint32_t param_3,int param_4,uint32_t reg_ECX,
                 uint32_t reg_EDX)

{
  functions_D2NewFunctions_102c5df0(reg_EBX,param_2,param_3,param_4,reg_ECX,reg_EDX);
  return;
}


// 0x102ed290  (ghidra: FUN_102ed290)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc33de0_102ed290(int reg_EAX,int *reg_EBX,uint32_t param_3,uint32_t reg_ECX,uint32_t reg_EDX)

{
  functions_D2NewFunctions_102c5dd0(reg_EAX,reg_EBX,param_3,reg_ECX,reg_EDX);
  return;
}


// 0x102ed2a0  (ghidra: FUN_102ed2a0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfd450_102ed2a0(uint32_t reg_EAX,int *reg_EDI,uint32_t param_3,int param_4,uint32_t param_5,
                 int param_6,uint32_t param_7)

{
  sub_1026ed30(reg_EAX,reg_EDI,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ed2c0  (ghidra: FUN_102ed2c0)  [gap]
void sub_102ed2c0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*UNIT_SUnitDmg_6fcfbed0)(param_1,param_2,param_3);
  return;
}


// 0x102ed2e0  (ghidra: FUN_102ed2e0)  [gap]
void sub_102ed2e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*UNIT_SUnitDmg_6fcfe0c0)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed300  (ghidra: FUN_102ed300)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcba7c0_102ed300(int *reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  sub_1026ea40(reg_EAX,param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed320  (ghidra: FUN_102ed320)  [gap]
void sub_102ed320(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*UNIT_SUnitDmg_6fcfcf20)(param_2,param_3,param_4);
  return;
}


// 0x102ed340  (ghidra: FUN_102ed340)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc5ae10_102ed340(int *reg_EAX,uint32_t param_2,int *param_3,byte *param_4)

{
  sub_1026edd0(reg_EAX,param_2,param_3,param_4);
  return;
}


// 0x102ed360  (ghidra: FUN_102ed360)  [gap]
void sub_102ed360(void)

{
  (*sub_6fc5aff0)();
  return;
}


// 0x102ed380  (ghidra: FUN_102ed380)  [gap]
void sub_Hook_sub_6fc5da60_102ed380(void)

{
  thunk_FUN_102ed360();
  return;
}


// 0x102ed390  (ghidra: FUN_102ed390)  [gap]
void sub_102ed390(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fcb8a70)(param_1,param_2,param_3);
  return;
}


// 0x102ed3b0  (ghidra: FUN_102ed3b0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_Missile_6fb61420_102ed3b0(uint32_t reg_EBX,int reg_ESI,int reg_EDI)

{
  sub_1026efe0(reg_ESI,reg_EBX,reg_EDI);
  return;
}


// 0x102ed3c0  (ghidra: FUN_102ed3c0)  [gap]
void sub_102ed3c0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fc31070)(param_2,param_3,param_4);
  return;
}


// 0x102ed3e0  (ghidra: FUN_102ed3e0)  [gap]
void sub_102ed3e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*UNIT_SUnitEvent_6fc57030)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed400  (ghidra: FUN_102ed400)  [gap]
void sub_102ed400(uint32_t param_1)

{
  (*sub_6fd00460)(param_1);
  return;
}


// 0x102ed420  (ghidra: FUN_102ed420)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfe6d0_102ed420(int *reg_ESI,uint32_t param_2)

{
  functions_D2NewFunctions_102c6220(reg_ESI,param_2);
  return;
}


// 0x102ed430  (ghidra: FUN_102ed430)  [gap]
void sub_102ed430(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fd0b090)(param_2);
  return;
}


// 0x102ed450  (ghidra: FUN_102ed450)  [gap]
void sub_102ed450(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  (*sub_6fd975e0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// 0x102ed480  (ghidra: FUN_102ed480)  [gap]
void sub_102ed480(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*Stats_StatsEx_6fd88940)(param_1,param_2,param_3,param_4);
  return;
}


// 0x102ed4a0  (ghidra: FUN_102ed4a0)  [gap]
void sub_102ed4a0(void)

{
  (*Stats_StatsEx_6fd882b0)();
  return;
}


// 0x102ed4c0  (ghidra: FUN_102ed4c0)  [gap]
void __thiscall sub_102ed4c0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*Stats_StatsEx_6fd88cd0)(param_3,this);
  return;
}


// 0x102ed4e0  (ghidra: FUN_102ed4e0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_GAME_Clients_6fc6b500_102ed4e0(int *reg_EAX,uint32_t param_2,uint param_3,uint32_t param_4,uint32_t param_5
                 ,uint32_t param_6,int param_7)

{
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */

  functions_D2NewFunctions_102c63c0(reg_EAX,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ed510  (ghidra: FUN_102ed510)  [gap]
void sub_102ed510(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*SKILLS_Skills_6fcc19a0)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ed540  (ghidra: FUN_102ed540)  [gap]
void sub_102ed540(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*SKILLS_Skills_6fcbfd00)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed560  (ghidra: FUN_102ed560)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_SKILLS_Skills_6fcc0830_102ed560(uint32_t reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  functions_D2NewFunctions_102c66a0(reg_EAX,param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed580  (ghidra: FUN_102ed580)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfcf20_102ed580(int *reg_EBX,uint32_t reg_ECX,int *reg_EDX)

{
  sub_1026f370(reg_EBX,reg_ECX,reg_EDX);
  return;
}


// 0x102ed5a0  (ghidra: FUN_102ed5a0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfe0c0_102ed5a0(int *reg_EAX,int *reg_EDI,int param_3)

{
  sub_1026f190(reg_EAX,reg_EDI,param_3);
  return;
}


// 0x102ed5b0  (ghidra: FUN_102ed5b0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc8d0f0_102ed5b0(int reg_EDI)

{
  functions_D2NewFunctions_102c5ac0(reg_EDI);
  return;
}


// 0x102ed5c0  (ghidra: FUN_102ed5c0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fd110f0_102ed5c0(int *reg_EDI,uint32_t param_2)

{
  functions_D2CommonFunctions_10267970(param_2,reg_EDI);
  return;
}


// 0x102ed5d0  (ghidra: FUN_102ed5d0)  [gap]
void sub_102ed5d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*PLAYER_PlayerPets_6fcb7420)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed5f0  (ghidra: FUN_102ed5f0)  [gap]
void __fastcall sub_102ed5f0(uint32_t param_1)

{
  (*UI_automap_6fb11490)(param_1);
  return;
}


// 0x102ed610  (ghidra: FUN_102ed610)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UI_automap_6fb119e0_102ed610(int reg_EAX,void *reg_ECX)

{
  sub_10258b20(reg_ECX,reg_EAX);
  return;
}


// 0x102ed620  (ghidra: FUN_102ed620)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfc0b0_102ed620(int *reg_EAX,uint32_t reg_EDI,int param_3,int *reg_ECX)

{
  sub_1026f410(reg_EAX,reg_ECX,param_3,reg_EDI);
  return;
}


// 0x102ed630  (ghidra: FUN_102ed630)  [gap]
void sub_102ed630(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fcbe170)(param_3,param_4);
  return;
}


// 0x102ed650  (ghidra: FUN_102ed650)  [gap]
void sub_102ed650(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*GAME_Game_6fc4d090)(param_2,param_3);
  return;
}


// 0x102ed670  (ghidra: FUN_102ed670)  [gap]
void sub_Hook_GAME_Game_6fc4d140_102ed670(void)

{
  func_0x1026c690();
  return;
}


// 0x102ed6b0  (ghidra: FUN_102ed6b0)  [gap]
void sub_Hook_D2Game_10003_102ed6b0(void)

{
  func_0x1026c6a0();
  return;
}


// 0x102ed6e0  (ghidra: FUN_102ed6e0)  [gap]
void sub_Hook_D2Game_10006_102ed6e0(void)

{
  func_0x1026c6b0();
  return;
}


// 0x102ed6f0  (ghidra: FUN_102ed6f0)  [gap]
void sub_102ed6f0(void)

{
  (*SKILLS_Skills_6fcbe370)();
  return;
}


// 0x102ed700  (ghidra: FUN_102ed700)  [gap]
uint32_t sub_102ed700(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*PLAYER_PlrModes_6fc98610)();
  return param_3;
}


// 0x102ed720  (ghidra: FUN_102ed720)  [gap]
void __fastcall sub_102ed720(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fc21560)(param_2);
  return;
}


// 0x102ed740  (ghidra: FUN_102ed740)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcbcd90_102ed740(int *reg_EAX,uint32_t reg_EBX,uint32_t reg_ESI,int param_4,void *reg_ECX)

{
  sub_102ba0c0(reg_ECX,reg_EAX,reg_ECX,param_4,reg_EBX,reg_ESI);
  return;
}


// 0x102ed750  (ghidra: FUN_102ed750)  [gap]
void __thiscall sub_102ed750(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fcbcb30)(param_3,this);
  return;
}


// 0x102ed770  (ghidra: FUN_102ed770)  [gap]
void sub_102ed770(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*sub_6fd12d80)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed790  (ghidra: FUN_102ed790)  [gap]
void sub_102ed790(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*Ai_AiGeneral_6fc40cf0)(param_3);
  return;
}


// 0x102ed7b0  (ghidra: FUN_102ed7b0)  [gap]
void sub_102ed7b0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fc67880)(param_3);
  return;
}


// 0x102ed7d0  (ghidra: FUN_102ed7d0)  [gap]
void sub_102ed7d0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fc43ae0)(param_2);
  return;
}


// 0x102ed7f0  (ghidra: FUN_102ed7f0)  [gap]
uint64_t sub_102ed7f0(uint32_t param_1,uint32_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = (*sub_6fc42920)(param_2);
  return uVar1;
}


// 0x102ed810  (ghidra: FUN_102ed810)  [gap]
void __fastcall sub_102ed810(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fc448a0)();
  return;
}


// 0x102ed840  (ghidra: FUN_102ed840)  [gap]
void __fastcall sub_Hook_D2Common_10459_102ed840(uint param_1)

{
  functions_D2CommonFunctions_10267a80(param_1);
  return;
}


// 0x102ed850  (ghidra: FUN_102ed850)  [gap]
void sub_Hook_sub_6fb6dca0_102ed850(int param_1)

{
  sub_102e43a0(param_1);
  return;
}


// 0x102ed860  (ghidra: FUN_102ed860)  [gap]
void __fastcall sub_Hook_sub_6fb28fc0_102ed860(uint16_t param_1)

{
  uint8_t in_AL;
  
  sub_102e4480(param_1,in_AL);
  return;
}


// 0x102ed870  (ghidra: FUN_102ed870)  [gap]
void sub_102ed870(void)

{
  (*D2Game_loc_6fceb610)();
  return;
}


// 0x102ed890  (ghidra: FUN_102ed890)  [gap]
void sub_102ed890(void)

{
  (*GAME_SCmd_6fcad5f0)();
  return;
}


// 0x102ed8c0  (ghidra: FUN_102ed8c0)  [gap]
void sub_102ed8c0(void)

{
  (*D2Game_loc_6fc21740)();
  return;
}


// 0x102ed8d0  (ghidra: FUN_102ed8d0)  [gap]
void __fastcall sub_102ed8d0(uint32_t param_1)

{
  (*SKILLS_Skills_6fcbfae0)(param_1);
  return;
}


// 0x102ed8f0  (ghidra: FUN_102ed8f0)  [gap]
void sub_102ed8f0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*ITEMS_ItemMode_6fcf6c80)(param_2,param_3);
  return;
}


// 0x102ed910  (ghidra: FUN_102ed910)  [gap]
void sub_102ed910(void)

{
  (*sub_6fc21480)();
  return;
}


// 0x102ed930  (ghidra: FUN_102ed930)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfd450_102ed930(uint8_t *reg_EBX)

{
  int unaff_EBP;
  
  sub_1026f8c0(unaff_EBP,reg_EBX);
  return;
}


// 0x102ed940  (ghidra: FUN_102ed940)  [gap]
void sub_102ed940(void)

{
  (*UNIT_SUnitDmg_6fcffdc0)();
  return;
}


// 0x102ed960  (ghidra: FUN_102ed960)  [gap]
void sub_102ed960(void)

{
  (*sub_6fdcc270)();
  return;
}


// 0x102ed970  (ghidra: FUN_102ed970)  [gap]
void sub_102ed970(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*DRLG_Outdoors_6fd92ce0)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ed9b0  (ghidra: FUN_102ed9b0)  [gap]
void sub_102ed9b0(void)

{
  (*PLAYER_PlayerPets_6fcb6570)();
  return;
}


// 0x102ed9d0  (ghidra: FUN_102ed9d0)  [gap]
void __fastcall sub_102ed9d0(uint32_t param_1,uint32_t param_2)

{
  (*Ai_AiThink4_6fcc3d60)(param_2,param_1);
  return;
}


// 0x102ed9f0  (ghidra: FUN_102ed9f0)  [gap]
void sub_102ed9f0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*D2Game_loc_6fcc3d00)(param_3);
  return;
}


// 0x102eda10  (ghidra: FUN_102eda10)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_Ai_AiThink4_6fccb360_102eda10(uint32_t reg_ESI,int param_2,int *param_3,uint *param_4,uint32_t param_5,
                 uint32_t param_6,uint32_t param_7)

{
  uint32_t in_stack_00000474;
  
  sub_102ba660(param_2,param_3,param_4,param_5,param_6,param_7,reg_ESI,in_stack_00000474);
  return;
}


// 0x102eda40  (ghidra: FUN_102eda40)  [gap]
void sub_102eda40(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fc3cae0)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102eda70  (ghidra: FUN_102eda70)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcb2bb0_102eda70(uint32_t reg_EAX,uint32_t param_2,uint *param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  sub_1026ead0(param_2,param_3,param_4,param_5,param_6,reg_EAX);
  return;
}


// 0x102eda90  (ghidra: FUN_102eda90)  [gap]
void sub_102eda90(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*SKILLS_Skills_6fcbf210)(param_3,param_4);
  return;
}


// 0x102edab0  (ghidra: FUN_102edab0)  [gap]
void sub_102edab0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*SKILLS_Skills_6fcbf1a0)(param_3,param_4);
  return;
}


// 0x102edad0  (ghidra: FUN_102edad0)  [gap]
void sub_102edad0(void)

{
  (*ITEMS_ItemMode_6fcfa540)();
  return;
}


// 0x102edae0  (ghidra: FUN_102edae0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_SKILLS_Skills_6fcc10b0_102edae0(uint *reg_EAX,int *reg_EDI,int param_3)

{
  sub_1026fcf0(reg_EAX,reg_EDI,param_3);
  return;
}


// 0x102edb00  (ghidra: FUN_102edb00)  [gap]
void sub_102edb00(void)

{
  (*sub_6fc46a30)();
  return;
}


// 0x102edb10  (ghidra: FUN_102edb10)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc48be0_102edb10(int reg_ESI,int param_2,uint32_t *param_3)

{
  functions_D2NewFunctions_102bed80(reg_ESI,param_2,param_3);
  return;
}


// 0x102edb30  (ghidra: FUN_102edb30)  [gap]
/* WARNING: Unknown calling convention */

uint64_t sub_Hook_sub_6fc4e8b0_102edb30(int reg_EAX,uint32_t reg_EDX)

{
  functions_D2NewFunctions_102c7d70(reg_EAX);
  return CONCAT44(reg_EDX,reg_EAX);
}


// 0x102edb70  (ghidra: FUN_102edb70)  [gap]
void sub_102edb70(uint32_t param_1,uint32_t param_2)

{
  (*UNIT_SUnitInactive_6fc3f600)(param_2);
  return;
}


// 0x102edb90  (ghidra: FUN_102edb90)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitInactive_6fc404e0_102edb90(int *reg_EAX,int param_2)

{
  functions_D2NewFunctions_102c7e40(reg_EAX,param_2);
  return;
}


// 0x102edba0  (ghidra: FUN_102edba0)  [gap]
void sub_102edba0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*UNIT_SUnitInactive_6fc3ef50)(param_2,param_3);
  return;
}


// 0x102edbc0  (ghidra: FUN_102edbc0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitInactive_6fc3f600_102edbc0(int reg_EDI,uint32_t param_2,int param_3)

{
  functions_D2NewFunctions_102c7ea0(reg_EDI,param_2,param_3);
  return;
}


// 0x102edbe0  (ghidra: FUN_102edbe0)  [gap]
void sub_102edbe0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*UNIT_SUnitInactive_6fc3f2d0)(param_2,param_3);
  return;
}


// 0x102edc00  (ghidra: FUN_102edc00)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitInactive_6fc3fb90_102edc00(int *reg_EDI,int param_2,int param_3)

{
  functions_D2NewFunctions_102c7f10(reg_EDI,param_2,param_3);
  return;
}


// 0x102edc20  (ghidra: FUN_102edc20)  [gap]
void sub_102edc20(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd122c0)(param_3);
  return;
}


// 0x102edc40  (ghidra: FUN_102edc40)  [gap]
void sub_102edc40(void)

{
  (*sub_6fc21420)();
  return;
}


// 0x102edc50  (ghidra: FUN_102edc50)  [gap]
void sub_102edc50(void)

{
  (*UNIT_SUnitDmg_6fcff780)();
  return;
}


// 0x102edc60  (ghidra: FUN_102edc60)  [gap]
void sub_102edc60(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*SKILLS_Skills_6fcc1d10)(param_3,param_4);
  return;
}


// 0x102edc80  (ghidra: FUN_102edc80)  [gap]
void __thiscall
sub_102edc80(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  (*SKILLS_Skills_6fcbf3b0)(param_3,param_4,param_5,this);
  return;
}


// 0x102edca0  (ghidra: FUN_102edca0)  [gap]
void __thiscall sub_102edca0(void *this)

{
  (*sub_6fcae900)();
  return;
}


// 0x102edcc0  (ghidra: FUN_102edcc0)  [gap]
void __thiscall
sub_102edcc0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  (*sub_6fcc3120)(param_3,param_4,param_5,param_6,this);
  return;
}


// 0x102edcf0  (ghidra: FUN_102edcf0)  [gap]
void __thiscall
sub_102edcf0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fd0fb80)(param_3,param_4,param_5,param_6,param_7,this);
  return;
}


// 0x102edd20  (ghidra: FUN_102edd20)  [gap]
void sub_102edd20(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*Stats_StatsEx_6fd88a80)(param_3);
  return;
}


// 0x102edd40  (ghidra: FUN_102edd40)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Common_10973_102edd40(int reg_EBX,int reg_EDI,uint32_t param_3)

{
  functions_D2CommonFunctions_102670a0(reg_EBX,reg_EDI,param_3);
  return;
}


// 0x102edd50  (ghidra: FUN_102edd50)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fdbabe0_102edd50(int reg_EBX,int reg_EDI,uint32_t param_3)

{
  functions_D2CommonFunctions_10267270(reg_EBX,reg_EDI,param_3);
  return;
}


// 0x102edd60  (ghidra: FUN_102edd60)  [gap]
void sub_102edd60(uint32_t param_1,uint32_t param_2)

{
  (*PATH_Path_6fd823e0)(param_2);
  return;
}


// 0x102eddb0  (ghidra: FUN_102eddb0)  [gap]
void sub_102eddb0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*sub_6fc4e830)(param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102edde0  (ghidra: FUN_102edde0)  [gap]
void sub_102edde0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*INVENTORY_Inventory_6fd718a0)(param_3,param_4,param_5,param_6);
  return;
}


// 0x102ede10  (ghidra: FUN_102ede10)  [gap]
void sub_102ede10(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*INVENTORY_Inventory_6fd6e1b0)(param_3);
  return;
}


// 0x102ede30  (ghidra: FUN_102ede30)  [gap]
void sub_102ede30(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*GAME_SCmd_6fcab010)(param_3,param_4,param_5,param_6);
  return;
}


// 0x102ede60  (ghidra: FUN_102ede60)  [gap]
void sub_102ede60(uint32_t param_1,uint32_t param_2)

{
  (*SKILLS_Skills_6fcc1280)(param_2);
  return;
}


// 0x102ede80  (ghidra: FUN_102ede80)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcdffa0_102ede80(uint32_t reg_EAX,uint32_t param_2)

{
  functions_D2NewFunctions_102c98a0(reg_EAX,param_2);
  return;
}


// 0x102edea0  (ghidra: FUN_102edea0)  [gap]
void sub_102edea0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*ITEMS_ItemMode_6fcf6bc0)(param_3);
  return;
}


// 0x102edec0  (ghidra: FUN_102edec0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_ITEMS_ItemMode_6fcf43e0_102edec0(int *reg_ESI)

{
  sub_102d42d0(reg_ESI);
  return;
}


// 0x102eded0  (ghidra: FUN_102eded0)  [gap]
void __fastcall sub_Hook_sub_6faf2c70_102eded0(byte param_1)

{
  functions_D2CommonFunctions_10267c50(param_1);
  return;
}


// 0x102edee0  (ghidra: FUN_102edee0)  [gap]
void sub_102edee0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fadb420)(param_2);
  return;
}


// 0x102edf00  (ghidra: FUN_102edf00)  [gap]
uint64_t sub_102edf00(void)

{
  uint64_t uVar1;
  
  uVar1 = (*D2Client_loc_6fb6e400)();
  return uVar1;
}


// 0x102edf10  (ghidra: FUN_102edf10)  [gap]
void sub_102edf10(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*D2Game_loc_6fcdf810)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102edf30  (ghidra: FUN_102edf30)  [gap]
void sub_102edf30(void)

{
  (*UNIT_sunitproxy_6fcaf5c0)();
  return;
}


// 0x102edf50  (ghidra: FUN_102edf50)  [gap]
void __fastcall sub_102edf50(uint32_t param_1)

{
  (*D2Game_loc_6fcaf620)(param_1);
  return;
}


// 0x102edf70  (ghidra: FUN_102edf70)  [gap]
void sub_102edf70(void)

{
  (*UI_npcmenu_6faf60a0)();
  return;
}


// 0x102edf80  (ghidra: FUN_102edf80)  [gap]
void sub_102edf80(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fcb1340)(param_2);
  return;
}


// 0x102edfa0  (ghidra: FUN_102edfa0)  [gap]
void sub_102edfa0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6faf0550)(param_2);
  return;
}


// 0x102edfc0  (ghidra: FUN_102edfc0)  [gap]
void sub_102edfc0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fcb1240)(param_3);
  return;
}


// 0x102edfe0  (ghidra: FUN_102edfe0)  [gap]
void sub_102edfe0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd02480)(param_2,param_3);
  return;
}


// 0x102ee000  (ghidra: FUN_102ee000)  [gap]
void sub_102ee000(void)

{
  (*UNIT_CUnit_6fb560d0)();
  return;
}


// 0x102ee010  (ghidra: FUN_102ee010)  [gap]
void sub_102ee010(void)

{
  (*sub_6fccf5f0)();
  return;
}


// 0x102ee020  (ghidra: FUN_102ee020)  [gap]
void __fastcall sub_102ee020(uint32_t param_1,uint32_t param_2)

{
  (*UNIT_SUnitDmg_6fcfba40)();
  return;
}


// 0x102ee040  (ghidra: FUN_102ee040)  [gap]
/* WARNING: Unknown calling convention */

int sub_Hook_UNIT_SUnitDmg_6fcfe0c0_102ee040(int reg_EAX,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
                uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,
                uint32_t param_10,int param_11,void *reg_ECX,uint32_t reg_EDX)

{
  sub_102700f0(reg_ECX,reg_EAX,reg_ECX,reg_EDX,param_2,param_11);
  return reg_EAX;
}


// 0x102ee060  (ghidra: FUN_102ee060)  [gap]
void __thiscall sub_102ee060(void *this)

{
  (*sub_6fc2e990)();
  return;
}


// 0x102ee090  (ghidra: FUN_102ee090)  [gap]
void sub_102ee090(void)

{
  (*PLAYER_PlrMsg_6fcece20)();
  return;
}


// 0x102ee0b0  (ghidra: FUN_102ee0b0)  [gap]
void __thiscall sub_102ee0b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*D2Game_loc_6fcecf70)(param_3,this);
  return;
}


// 0x102ee0d0  (ghidra: FUN_102ee0d0)  [gap]
void __thiscall sub_102ee0d0(void *this,uint32_t param_1,uint32_t param_2)

{
  (*PLAYER_PlrTrade_6fc90d60)(param_2,this);
  return;
}


// 0x102ee0f0  (ghidra: FUN_102ee0f0)  [gap]
void sub_102ee0f0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*D2Game_loc_6fcf4230)(param_3,param_4,param_5);
  return;
}


// 0x102ee110  (ghidra: FUN_102ee110)  [gap]
void __fastcall sub_102ee110(uint32_t param_1,uint32_t param_2)

{
  (*ITEMS_ItemMode_6fcf4e80)();
  return;
}


// 0x102ee140  (ghidra: FUN_102ee140)  [gap]
void __fastcall sub_102ee140(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fac49a0)();
  return;
}


// 0x102ee160  (ghidra: FUN_102ee160)  [gap]
void sub_102ee160(void)

{
  (*sub_6fb096a0)();
  return;
}


// 0x102ee170  (ghidra: FUN_102ee170)  [gap]
void sub_102ee170(void)

{
  (*sub_6fadb360)();
  return;
}


// 0x102ee180  (ghidra: FUN_102ee180)  [gap]
void sub_102ee180(void)

{
  (*sub_6fb4d850)();
  return;
}


// 0x102ee190  (ghidra: FUN_102ee190)  [gap]
void sub_102ee190(void)

{
  (*UNIT_SUnitDmg_6fd00310)();
  return;
}


// 0x102ee1b0  (ghidra: FUN_102ee1b0)  [gap]
void sub_102ee1b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*PLAYER_PlrSave2_6fd0c470)(param_2,param_3,param_4);
  return;
}


// 0x102ee1d0  (ghidra: FUN_102ee1d0)  [gap]
void __thiscall sub_102ee1d0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0b7b0)(param_2,param_3,this);
  return;
}


// 0x102ee1f0  (ghidra: FUN_102ee1f0)  [gap]
void __thiscall sub_102ee1f0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0b700)(param_2,param_3,this);
  return;
}


// 0x102ee210  (ghidra: FUN_102ee210)  [gap]
void __thiscall sub_102ee210(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0b610)(param_2,param_3,this);
  return;
}


// 0x102ee230  (ghidra: FUN_102ee230)  [gap]
void sub_102ee230(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fd0bc40)(param_3,param_4);
  return;
}


// 0x102ee250  (ghidra: FUN_102ee250)  [gap]
void __fastcall sub_102ee250(uint32_t param_1,uint32_t param_2)

{
  (*PLAYER_PlrSave2_6fd0c0e0)();
  return;
}


// 0x102ee280  (ghidra: FUN_102ee280)  [gap]
void sub_102ee280(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*PLAYER_PlrSave2_6fd0c1e0)(param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102ee2b0  (ghidra: FUN_102ee2b0)  [gap]
void sub_102ee2b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*PLAYER_PlrSave2_6fd0c020)(param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102ee2e0  (ghidra: FUN_102ee2e0)  [gap]
void sub_102ee2e0(void)

{
  (*sub_6fb04e10)();
  return;
}


// 0x102ee310  (ghidra: FUN_102ee310)  [gap]
void sub_102ee310(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fb046e0)(param_3,param_4);
  return;
}


// 0x102ee330  (ghidra: FUN_102ee330)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fb04ac0_102ee330(uint32_t reg_EAX,uint32_t reg_EDI,int param_3,int param_4)

{
  sub_102590a0(reg_EAX,reg_EDI,param_3,param_4);
  return;
}


// 0x102ee350  (ghidra: FUN_102ee350)  [gap]
void sub_102ee350(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fcb5d50)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ee380  (ghidra: FUN_102ee380)  [gap]
void __thiscall sub_102ee380(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*Ai_AiGeneral_6fc41290)(param_3,this);
  return;
}


// 0x102ee3a0  (ghidra: FUN_102ee3a0)  [gap]
void __thiscall
sub_102ee3a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fc66b20)(param_3,param_4,this);
  return;
}


// 0x102ee3c0  (ghidra: FUN_102ee3c0)  [gap]
void sub_102ee3c0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*sub_6fd12120)(param_3,param_4,param_5,param_6);
  return;
}


// 0x102ee3f0  (ghidra: FUN_102ee3f0)  [gap]
void sub_102ee3f0(void)

{
  (*UNIT_CUnit_6fb59a20)();
  return;
}


// 0x102ee420  (ghidra: FUN_102ee420)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fb02f10_102ee420(uint32_t reg_EAX,uint32_t reg_ESI,uint32_t param_3,uint32_t reg_ECX)

{
  sub_10259220(reg_EAX,reg_ECX,reg_ESI,param_3);
  return;
}


// 0x102ee440  (ghidra: FUN_102ee440)  [gap]
void sub_102ee440(void)

{
  (*PATH_Path_6fd876f0)();
  return;
}


// 0x102ee460  (ghidra: FUN_102ee460)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Common_11074_102ee460(int reg_ESI,uint32_t reg_EDI,int reg_ECX)

{
  functions_D2CommonFunctions_102687b0(reg_ECX,reg_EDI,reg_ESI);
  return;
}


// 0x102ee470  (ghidra: FUN_102ee470)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_SKILLS_SkillBar_6fc48290_102ee470(int reg_EAX,int *reg_EBX,int *param_3,int reg_ECX)

{
  functions_D2NewFunctions_102bee20(reg_EAX,reg_EBX,reg_ECX,param_3);
  return;
}


// 0x102ee490  (ghidra: FUN_102ee490)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_SKILLS_SkillsBar_6fb77370_102ee490(int reg_EBX,int *reg_EDI,int *param_3)

{
  functions_D2NewFunctions_102beed0(reg_EBX,reg_EDI,param_3);
  return;
}


// 0x102ee4c0  (ghidra: FUN_102ee4c0)  [gap]
void sub_102ee4c0(void)

{
  (*GAME_Clients_6fc6b500)();
  return;
}


// 0x102ee4f0  (ghidra: FUN_102ee4f0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_GAME_Game_6fc4e360_102ee4f0(uint32_t reg_EAX,int reg_EBX,int *reg_ESI,uint32_t reg_EDI,int param_5,
                 void *param_6)

{
  functions_D2NewFunctions_102c86a0(reg_EAX,reg_EBX,reg_EDI,reg_ESI,param_5,param_6);
  return;
}


// 0x102ee510  (ghidra: FUN_102ee510)  [gap]
void sub_102ee510(void)

{
  (*GAME_Game_6fc4bf90)();
  return;
}


// 0x102ee530  (ghidra: FUN_102ee530)  [gap]
uint64_t __fastcall sub_102ee530(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t in_stack_00000010;
  
  uVar1 = (*sub_6fc56470)();
  return CONCAT44(in_stack_00000010,uVar1);
}


// 0x102ee560  (ghidra: FUN_102ee560)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_Quests_a5q5_6fc7f3f0_102ee560(uint32_t reg_EAX,int param_2,int param_3,int param_4,int reg_ECX,
                 uint32_t reg_EDX)

{
  functions_D2NewFunctions_102c8830(reg_EAX,reg_ECX,reg_EDX,param_2,param_3,param_4);
  return;
}


// 0x102ee580  (ghidra: FUN_102ee580)  [gap]
void __fastcall sub_Hook_Quests_a3q3_6fd09600_102ee580(uint32_t param_1,uint32_t param_2)

{
  functions_D2NewFunctions_102c89a0(param_1,param_2);
  return;
}


// 0x102ee5a0  (ghidra: FUN_102ee5a0)  [gap]
void sub_102ee5a0(void)

{
  (*GAME_Targets_6fd0fe40)();
  return;
}


// 0x102ee5e0  (ghidra: FUN_102ee5e0)  [gap]
void sub_Hook_sub_6fcefbc0_102ee5e0(int param_1)

{
  int unaff_EBP;
  
  functions_D2CommonFunctions_10267ce0(unaff_EBP,param_1);
  return;
}


// 0x102ee600  (ghidra: FUN_102ee600)  [gap]
void sub_Hook_sub_6fc631c0_102ee600(int param_1)

{
  functions_D2CommonFunctions_10267d40(param_1);
  return;
}


// 0x102ee610  (ghidra: FUN_102ee610)  [gap]
void __fastcall sub_Hook_sub_6faf9440_102ee610(uint32_t param_1)

{
  functions_D2CommonFunctions_10268850(param_1);
  return;
}


// 0x102ee620  (ghidra: FUN_102ee620)  [gap]
void sub_102ee620(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fc3c8a0)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ee650  (ghidra: FUN_102ee650)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc3db40_102ee650(uint32_t reg_EAX,uint32_t param_2,int param_3,uint32_t param_4,int param_5,
                 uint32_t param_6,int param_7)

{
  sub_102ba8f0(reg_EAX,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ee680  (ghidra: FUN_102ee680)  [gap]
void __fastcall sub_102ee680(uint32_t param_1)

{
  (*sub_6fd00570)(param_1);
  return;
}


// 0x102ee6b0  (ghidra: FUN_102ee6b0)  [gap]
void sub_102ee6b0(uint32_t param_1,uint32_t param_2)

{
  (*ITEMS_ItemMode_6fcf4140)(param_2);
  return;
}


// 0x102ee6e0  (ghidra: FUN_102ee6e0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc76250_102ee6e0(int reg_EAX,uint32_t reg_EDI,uint param_3,int param_4,void *param_5,
                 uint *param_6)

{
  functions_SaveFunctions_102e8f00(reg_EAX,param_3,param_4,param_5,param_6,reg_EDI);
  return;
}


// 0x102ee700  (ghidra: FUN_102ee700)  [gap]
void __thiscall sub_102ee700(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0b560)(param_2,param_3,this);
  return;
}


// 0x102ee720  (ghidra: FUN_102ee720)  [gap]
void sub_102ee720(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0baf0)(param_3);
  return;
}


// 0x102ee740  (ghidra: FUN_102ee740)  [gap]
void __thiscall sub_102ee740(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0ba40)(param_3,this);
  return;
}


// 0x102ee760  (ghidra: FUN_102ee760)  [gap]
void __thiscall sub_102ee760(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0b4e0)(param_2,param_3,this);
  return;
}


// 0x102ee780  (ghidra: FUN_102ee780)  [gap]
void sub_102ee780(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0b440)(param_3);
  return;
}


// 0x102ee7a0  (ghidra: FUN_102ee7a0)  [gap]
void __thiscall
sub_102ee7a0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  (*PLAYER_PlrSave2_6fd0bda0)(param_3,param_4,param_5,param_6,this);
  return;
}


// 0x102ee7d0  (ghidra: FUN_102ee7d0)  [gap]
void __fastcall
sub_102ee7d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6)

{
  (*sub_6fd0ca60)(param_5,param_6,param_2);
  return;
}


// 0x102ee7f0  (ghidra: FUN_102ee7f0)  [gap]
void __fastcall sub_102ee7f0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fd0cb50)();
  return;
}


// 0x102ee820  (ghidra: FUN_102ee820)  [gap]
void sub_102ee820(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0d960)(param_2,param_3);
  return;
}


// 0x102ee840  (ghidra: FUN_102ee840)  [gap]
void sub_102ee840(void)

{
  (*sub_6fd0cbd0)();
  return;
}


// 0x102ee870  (ghidra: FUN_102ee870)  [gap]
void __fastcall sub_102ee870(uint32_t param_1)

{
  (*sub_6fc68950)(param_1);
  return;
}


// 0x102ee890  (ghidra: FUN_102ee890)  [gap]
void sub_102ee890(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fd0cc90)(param_2,param_3,param_4);
  return;
}


// 0x102ee8b0  (ghidra: FUN_102ee8b0)  [gap]
void sub_102ee8b0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fd0d540)(param_2,param_3);
  return;
}


// 0x102ee8d0  (ghidra: FUN_102ee8d0)  [gap]
void sub_102ee8d0(void)

{
  (*PLAYER_PlrTrade_6fc90fb0)();
  return;
}


// 0x102ee8f0  (ghidra: FUN_102ee8f0)  [gap]
void sub_102ee8f0(void)

{
  (*PLAYER_PlrTrade_6fc900c0)();
  return;
}


// 0x102ee910  (ghidra: FUN_102ee910)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_PLAYER_PlrTrade_6fc919a0_102ee910(int reg_EAX,uint32_t reg_EBX)

{
  sub_102d44e0(reg_EAX,reg_EBX);
  return;
}


// 0x102ee920  (ghidra: FUN_102ee920)  [gap]
void sub_102ee920(uint32_t param_1,uint32_t param_2)

{
  (*ITEMS_ItemMode_6fcf5590)(param_2);
  return;
}


// 0x102ee940  (ghidra: FUN_102ee940)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_PLAYER_PlrTrade_6fc916d0_102ee940(int reg_EAX,uint32_t param_2)

{
  sub_102d4560(reg_EAX,param_2);
  return;
}


// 0x102ee950  (ghidra: FUN_102ee950)  [gap]
void __fastcall sub_102ee950(uint32_t param_1,uint32_t param_2)

{
  (*SKILLS_SkillBar_6fc48170)();
  return;
}


// 0x102ee980  (ghidra: FUN_102ee980)  [gap]
void sub_102ee980(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*UNIT_Monster_6fb01650)(param_2,param_3,param_4,param_5);
  return;
}


// 0x102ee9a0  (ghidra: FUN_102ee9a0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fb01ae0_102ee9a0(uint32_t reg_EAX,uint32_t param_2,int param_3)

{
  sub_10259c50(reg_EAX,param_2,param_3);
  return;
}


// 0x102ee9c0  (ghidra: FUN_102ee9c0)  [gap]
void sub_102ee9c0(void)

{
  (*UNIT_Player_6facb7f0)();
  return;
}


// 0x102ee9d0  (ghidra: FUN_102ee9d0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_Player_6facbbc0_102ee9d0(uint reg_EAX)

{
  sub_10259ce0(reg_EAX);
  return;
}


// 0x102ee9e0  (ghidra: FUN_102ee9e0)  [gap]
void sub_102ee9e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*sub_6fb01ae0)(param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102eea10  (ghidra: FUN_102eea10)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_Player_6fac9350_102eea10(int *reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  sub_10259c90(reg_EAX,param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102eea30  (ghidra: FUN_102eea30)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc68950_102eea30(int reg_EAX,uint32_t param_2,uint32_t param_3)

{
  functions_HelperFunctions_102d1550(reg_EAX,param_2,param_3);
  return;
}


// 0x102eea50  (ghidra: FUN_102eea50)  [gap]
void __thiscall sub_102eea50(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*D2Game_loc_6fcdd490)(param_3,this);
  return;
}


// 0x102eea70  (ghidra: FUN_102eea70)  [gap]
/* WARNING: Unknown calling convention */

int sub_Hook_UNIT_sunitproxy_6fcafbe0_102eea70(int reg_EAX)

{
  functions_HelperFunctions_102d15b0(reg_EAX);
  return reg_EAX;
}


// 0x102eea80  (ghidra: FUN_102eea80)  [gap]
void sub_102eea80(void)

{
  (*SKILLS_Skills_6fd9f870)();
  return;
}


// 0x102eeac0  (ghidra: FUN_102eeac0)  [gap]
void sub_102eeac0(void)

{
  (*sub_6fdbab20)();
  return;
}


// 0x102eeaf0  (ghidra: FUN_102eeaf0)  [gap]
void __fastcall sub_102eeaf0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fd511e0)(param_2,param_1);
  return;
}


// 0x102eeb10  (ghidra: FUN_102eeb10)  [gap]
void sub_102eeb10(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fcdcc60)(param_2);
  return;
}


// 0x102eeb30  (ghidra: FUN_102eeb30)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fce1510_102eeb30(int reg_EBX,int *reg_ESI,uint32_t param_3)

{
  functions_D2NewFunctions_102c9860(reg_EBX,reg_ESI,param_3);
  return;
}


// 0x102eeb40  (ghidra: FUN_102eeb40)  [gap]
void __thiscall sub_102eeb40(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fc977f0)(param_3,this);
  return;
}


// 0x102eeb60  (ghidra: FUN_102eeb60)  [gap]
void sub_102eeb60(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*UNIT_SUnitDmg_6fcfe6d0)(param_2,param_3,param_4);
  return;
}


// 0x102eeb80  (ghidra: FUN_102eeb80)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitDmg_6fcfe750_102eeb80(int reg_EAX,uint32_t param_2,int param_3,uint32_t param_4)

{
  functions_D2NewFunctions_102c9af0(reg_EAX,param_2,param_3,param_4);
  return;
}


// 0x102eeba0  (ghidra: FUN_102eeba0)  [gap]
void sub_OpenMpqs_102eeba0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  (*sub_6f8e7e60)(param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102eebd0  (ghidra: FUN_102eebd0)  [gap]
void sub_Hook_sub_6fc5a4e0_102eebd0(int *param_1)

{
  int unaff_EBP;
  
  sub_10270c50(unaff_EBP,param_1);
  return;
}


// 0x102eebe0  (ghidra: FUN_102eebe0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Common_10413_102eebe0(uint8_t *reg_EAX,uint32_t reg_EDI,int param_3)

{
  sub_10270cf0(reg_EAX,param_3,reg_EDI);
  return;
}


// 0x102eebf0  (ghidra: FUN_102eebf0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Common_10819_102eebf0(uint32_t reg_EBX,uint32_t reg_ESI,int *reg_EDI)

{
  int unaff_EBP;
  
  functions_D2CommonFunctions_10268a90(reg_EDI,reg_ESI,reg_EBX,unaff_EBP);
  return;
}


// 0x102eec20  (ghidra: FUN_102eec20)  [gap]
void sub_102eec20(void)

{
  (*SKILLS_Skills_6fcbe490)();
  return;
}


// 0x102eec40  (ghidra: FUN_102eec40)  [gap]
void sub_102eec40(void)

{
  (*SKILLS_Skills_6fcbe450)();
  return;
}


// 0x102eec70  (ghidra: FUN_102eec70)  [gap]
void sub_102eec70(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*UNIT_SUnitDmg_6fcfffd0)(param_2,param_3);
  return;
}


// 0x102eec90  (ghidra: FUN_102eec90)  [gap]
void sub_102eec90(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fc2e660)(param_3);
  return;
}


// 0x102eecb0  (ghidra: FUN_102eecb0)  [gap]
void __thiscall
sub_102eecb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fc565e0)(param_3,param_4,this);
  return;
}


// 0x102eecd0  (ghidra: FUN_102eecd0)  [gap]
void sub_102eecd0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  (*sub_6fd121e0)(param_3,param_4,param_5);
  return;
}


// 0x102eecf0  (ghidra: FUN_102eecf0)  [gap]
void sub_102eecf0(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fd0ab60)(param_2);
  return;
}


// 0x102eed10  (ghidra: FUN_102eed10)  [gap]
void __fastcall sub_102eed10(uint32_t param_1)

{
  (*sub_6fc55e90)(param_1);
  return;
}


// 0x102eed30  (ghidra: FUN_102eed30)  [gap]
void sub_102eed30(void)

{
  (*UNIT_Party_6fcbc160)();
  return;
}


// 0x102eed50  (ghidra: FUN_102eed50)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_UNIT_SUnitInactive_6fc400e0_102eed50(int reg_EAX,int param_2,void *param_3,uint32_t param_4,uint *param_5,
                 uint32_t reg_ECX,int reg_EDX)

{
  functions_D2NewFunctions_102c8430(reg_EAX,reg_ECX,reg_EDX,param_2,param_3,param_4,param_5);
  return;
}


// 0x102eed70  (ghidra: FUN_102eed70)  [gap]
void sub_102eed70(void)

{
  (*sub_6fd013b0)();
  return;
}


// 0x102eed90  (ghidra: FUN_102eed90)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fd01430_102eed90(int reg_EBX,int reg_ESI,int reg_EDI)

{
  sub_102dcfb0(reg_EBX,reg_EDI,reg_ESI,reg_EBX);
  return;
}


// 0x102eede0  (ghidra: FUN_102eede0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc5ae10_102eede0(int reg_EAX,uint *reg_ESI,uint32_t param_3,int param_4,int *reg_ECX)

{
  sub_1026fb60(reg_EAX,reg_ECX,reg_ESI,param_3,param_4);
  return;
}


// 0x102eee70  (ghidra: FUN_102eee70)  [gap]
void sub_102eee70(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*sub_6fc58180)(param_2,param_3);
  return;
}


// 0x102eee90  (ghidra: FUN_102eee90)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fc583a0_102eee90(int reg_ESI,uint32_t param_2,uint32_t param_3)

{
  functions_D2NewFunctions_102c9b50(reg_ESI,param_2,param_3);
  return;
}


// 0x102eeeb0  (ghidra: FUN_102eeeb0)  [gap]
void __thiscall
sub_102eeeb0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fcdee30)(param_3,param_4,param_5,param_6,param_7,this);
  return;
}


// 0x102eeee0  (ghidra: FUN_102eeee0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcdf2e0_102eeee0(int reg_EAX,void *param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
                 ,uint32_t param_6,uint32_t reg_ECX)

{
  uint32_t param_5;   /* not traced by Ghidra: value with no visible source */

  functions_ItemFunctions_102d70a0(reg_EAX,reg_ECX,param_2,param_3,param_4,param_5,param_6);
  return;
}


// 0x102eef00  (ghidra: FUN_102eef00)  [gap]
void __fastcall sub_102eef00(uint32_t param_1,uint32_t param_2)

{
  (*sub_6fc31980)();
  return;
}


// 0x102eef40  (ghidra: FUN_102eef40)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcdf990_102eef40(int reg_EAX,int reg_EBX,int param_3)

{
  functions_ItemFunctions_102d6d00(reg_EAX,reg_EBX,param_3);
  return;
}


// 0x102eef50  (ghidra: FUN_102eef50)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcdd330_102eef50(int reg_EAX)

{
  functions_HelperFunctions_102d1920(reg_EAX);
  return;
}


// 0x102eef60  (ghidra: FUN_102eef60)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Common_11104_102eef60(uint reg_EAX)

{
  functions_D2CommonFunctions_10268e40(reg_EAX);
  return;
}


// 0x102eef70  (ghidra: FUN_102eef70)  [gap]
void sub_102eef70(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fd12220)(param_3,param_4);
  return;
}


// 0x102eef90  (ghidra: FUN_102eef90)  [gap]
void __thiscall
sub_102eef90(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  (*SKILLS_Skills_6fb536f0)(param_3,param_4,param_5,param_6,param_7,param_8,this);
  return;
}


// 0x102eefc0  (ghidra: FUN_102eefc0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6faf8b20_102eefc0(uint32_t reg_EAX,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,void *param_6,uint32_t param_7,uint32_t reg_ECX)

{
  sub_10259e80(reg_EAX,reg_ECX,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102eeff0  (ghidra: FUN_102eeff0)  [gap]
void __thiscall
sub_102eeff0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fcde2a0)(param_3,param_4,this);
  return;
}


// 0x102ef010  (ghidra: FUN_102ef010)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcdf170_102ef010(uint32_t param_1,uint32_t param_2,uint32_t param_3,void *param_4,
                 char *param_5,int reg_EAX,uint32_t reg_EBX,int reg_ECX)

{
  functions_ItemFunctions_102d5e80(reg_EAX,reg_ECX,param_4,param_5,reg_EBX);
  return;
}


// 0x102ef020  (ghidra: FUN_102ef020)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcdd920_102ef020(int reg_EAX,int reg_EDI,int reg_ECX)

{
  functions_ItemFunctions_102d67f0(reg_EDI,reg_ECX,reg_EAX);
  return;
}


// 0x102ef030  (ghidra: FUN_102ef030)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_INVENTORY_InvMode_6fcbb630_102ef030(int reg_EAX,int param_2,int param_3,int param_4,int param_5)

{
  functions_ItemFunctions_102d68a0(reg_EAX,param_2,param_3,param_4,param_5);
  return;
}


// 0x102ef050  (ghidra: FUN_102ef050)  [gap]
void sub_102ef050(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*UNIT_sunitproxy_6fcaf6c0)(param_3);
  return;
}


// 0x102ef070  (ghidra: FUN_102ef070)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_D2Common_10107_102ef070(int reg_EAX,uint32_t reg_EDI,int *param_3,int param_4,uint32_t param_5,
                 int param_6,int param_7)

{
  functions_ItemFunctions_102d6c60(reg_EAX,param_3,param_4,param_5,param_6,param_7,reg_EDI);
  return;
}


// 0x102ef090  (ghidra: FUN_102ef090)  [gap]
void sub_102ef090(void)

{
  (*sub_6fcdd920)();
  return;
}


// 0x102ef0c0  (ghidra: FUN_102ef0c0)  [gap]
void sub_102ef0c0(void)

{
  (*sub_6fcdd880)();
  return;
}


// 0x102ef0e0  (ghidra: FUN_102ef0e0)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fcde640_102ef0e0(int reg_EAX,int param_2,int param_3,int param_4,int reg_ECX)

{
  functions_ItemFunctions_102d6df0(reg_EAX,reg_ECX,param_2,param_3,param_4);
  return;
}


// 0x102ef100  (ghidra: FUN_102ef100)  [gap]
void sub_102ef100(void)

{
  (*UNIT_SUnitDmg_6fd000c0)();
  return;
}


// 0x102ef120  (ghidra: FUN_102ef120)  [gap]
void sub_102ef120(uint32_t param_1,uint32_t param_2)

{
  (*UNIT_SUnitMsg_6fc9a0f0)(param_2);
  return;
}


// 0x102ef140  (ghidra: FUN_102ef140)  [gap]
void sub_102ef140(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*UNIT_Monster_6fb01390)(param_3);
  return;
}


// 0x102ef160  (ghidra: FUN_102ef160)  [gap]
/* WARNING: Unknown calling convention */

void sub_Hook_sub_6fb01ae0_102ef160(uint32_t reg_EBX,int *reg_EDI,uint32_t param_3)

{
  sub_10259fc0(reg_EBX,reg_EDI,param_3);
  return;
}


// 0x102ef170  (ghidra: FUN_102ef170)  [gap]
void sub_102ef170(void)

{
  (*UNIT_SUnitDmg_6fd00210)();
  return;
}


// 0x102ef190  (ghidra: FUN_102ef190)  [gap]
void sub_102ef190(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fd00660)(param_2,param_3,param_4);
  return;
}


// 0x102ef1b0  (ghidra: FUN_102ef1b0)  [gap]
void __thiscall
sub_102ef1b0(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  (*sub_6fc59b40)(param_3,param_4,this);
  return;
}


// 0x102ef1d0  (ghidra: FUN_102ef1d0)  [gap]
void sub_102ef1d0(void)

{
  (*UNIT_SUnitDmg_6fcffa60)();
  return;
}


// 0x102ef1e0  (ghidra: FUN_102ef1e0)  [gap]
void sub_102ef1e0(void)

{
  (*sub_6fcb83b0)();
  return;
}


// 0x102ef1f0  (ghidra: FUN_102ef1f0)  [gap]
void __thiscall sub_102ef1f0(void *this,uint32_t param_1,uint32_t param_2)

{
  (*sub_6fcb8e30)(param_2,this);
  return;
}


// 0x102ef220  (ghidra: FUN_102ef220)  [gap]
void sub_102ef220(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  (*sub_6fac3ce0)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// 0x102ef280  (ghidra: FUN_102ef280)  [gap]
void sub_102ef280(uint32_t param_1,uint32_t param_2)

{
  (*GAME_Game_6fc4a850)(param_2);
  return;
}


// 0x102ef2a0  (ghidra: FUN_102ef2a0)  [gap]
void sub_102ef2a0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*GAME_CCmd_6fcead60)(param_3);
  return;
}


// 0x102ef2c0  (ghidra: FUN_102ef2c0)  [gap]
void __fastcall sub_102ef2c0(uint32_t param_1,uint32_t param_2)

{
  (*GAME_SCmd_6fcac4b0)(param_2);
  return;
}


// 0x102ef2d0  (ghidra: FUN_102ef2d0)  [gap]
void sub_102ef2d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
                 uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12)

{
  (*GAME_Game_6fc4a740)(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                  param_12);
  return;
}


// 0x102ef310  (ghidra: FUN_102ef310)  [gap]
void sub_102ef310(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
                 uint32_t param_9)

{
  (*GAME_Game_6fc4bb10)(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


// 0x102ef340  (ghidra: FUN_102ef340)  [gap]
void sub_102ef340(uint32_t param_1,uint32_t param_2)

{
  (*GAME_Clients_6fc69930)(param_2);
  return;
}


// 0x102ef360  (ghidra: FUN_102ef360)  [gap]
void sub_102ef360(void)

{
  (*GAME_Game_6fc4ba10)();
  return;
}


// 0x102ef370  (ghidra: FUN_102ef370)  [gap]
void sub_102ef370(void)

{
  (*GAME_Game_6fc4e360)();
  return;
}


// 0x102ef380  (ghidra: FUN_102ef380)  [gap]
void sub_102ef380(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  (*GAME_Clients_6fc6a780)(param_2,param_3);
  return;
}


// 0x102ef3a0  (ghidra: FUN_102ef3a0)  [gap]
void sub_102ef3a0(void)

{
  (*GAME_Game_6fc4a6e0)();
  return;
}

