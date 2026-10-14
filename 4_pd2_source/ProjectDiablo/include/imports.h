/* imports.h - functions this module calls in other game modules, with the prototype
 * from the module that defines them (see 5_game_source/<Module>/include); the comment names the defining file. */
#pragma once

uint32_t LOCK();   /* called but not found in any module header or system DLL */
uint32_t UNLOCK();   /* called but not found in any module header or system DLL */
uint32_t XInputGetState();   /* called but not found in any module header or system DLL */
uint32_t XInputSetState();   /* called but not found in any module header or system DLL */
uint32_t _Locinfo();   /* called but not found in any module header or system DLL */
uint32_t _Lockit();   /* called but not found in any module header or system DLL */
void __cdecl _exit(int _Code);   /* sigmaRE/5_game_source/Bnclient/_unattributed/before_SRP_SHA.cpp */
uint32_t divpd();   /* called but not found in any module header or system DLL */
uint32_t facet();   /* called but not found in any module header or system DLL */
uint32_t func_0x10233e90();   /* called but not found in any module header or system DLL */
uint32_t func_0x10263310();   /* called but not found in any module header or system DLL */
uint32_t func_0x102637c0();   /* called but not found in any module header or system DLL */
uint32_t func_0x1026c690();   /* called but not found in any module header or system DLL */
uint32_t func_0x1026c6a0();   /* called but not found in any module header or system DLL */
uint32_t func_0x1026c6b0();   /* called but not found in any module header or system DLL */
uint32_t func_0x10276300();   /* called but not found in any module header or system DLL */
uint32_t func_0x1028e830();   /* called but not found in any module header or system DLL */
uint32_t func_0x102ce4d0();   /* called but not found in any module header or system DLL */
uint32_t func_0x102ecc50();   /* called but not found in any module header or system DLL */
uint32_t func_0x102f0690();   /* called but not found in any module header or system DLL */
uint32_t sub_10229d50();   /* called but not found in any module header or system DLL */
void __cdecl terminate(void);   /* sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
uint32_t vcvtqq2pd_avx512vl();   /* called but not found in any module header or system DLL */
uint32_t vcvttsd2usi_avx512f();   /* called but not found in any module header or system DLL */
uint32_t vcvttss2usi_avx512f();   /* called but not found in any module header or system DLL */
uint32_t xinuse();   /* called but not found in any module header or system DLL */

/* ---- game functions and variables PD2 binds at run time (D2Template GetDllOffset; game_pointers.tsv) ----
 * Declared where PD2 defines them: lazy thunks in the module header (named after the target), accessor cells
 * and their per-file copies in globals.h. Listed here once per target with the reference prototype from
 * sigmaRE/5_game_source/<Module>/include and the file that defines it.
 *   <name used in this tree>  <dll value>  <reference prototype>  <defining file> */
/* Ai_AiGeneral_6fc409b0  D2Game.dll +0x209b0  void Ai_AiGeneral_6fc409b0(int *reg_ESI,void *reg_EDI);  sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
/* Ai_AiGeneral_6fc40cf0  D2Game.dll +0x20cf0  void Ai_AiGeneral_6fc40cf0(int *reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
/* Ai_AiGeneral_6fc41290  D2Game.dll +0x21290  void __thiscall Ai_AiGeneral_6fc41290(void *this,int param_1);  sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
/* Ai_AiGeneral_6fc416a0  D2Game.dll +0x216a0  void Ai_AiGeneral_6fc416a0(int *reg_EAX);  sigmaRE/5_game_source/D2Game/Ai/AiGeneral.cpp */
/* Ai_AiThink4_6fcc3ae0  D2Game.dll +0xa3ae0  int Ai_AiThink4_6fcc3ae0(int *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fcc3d60  D2Game.dll +0xa3d60  bool __fastcall Ai_AiThink4_6fcc3d60(int param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fcc44c0  D2Game.dll +0xa44c0  uint32_t __fastcall Ai_AiThink4_6fcc44c0(int param_1,int reg_EAX,int reg_EBX,uint32_t param_4,uint32_t param_5);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fcc4890  D2Game.dll +0xa4890  uint32_t __fastcall Ai_AiThink4_6fcc4890(int param_1,int param_2,uint32_t param_3,int param_4,int *param_5,int reg_EAX);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fcc5580  D2Game.dll +0xa5580  void __fastcall Ai_AiThink4_6fcc5580(int param_1,int param_2,int *param_3,uint reg_EBX,uint reg_ESI);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fcc5d70  D2Game.dll +0xa5d70  void __fastcall Ai_AiThink4_6fcc5d70(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fcc9610  D2Game.dll +0xa9610  void __fastcall Ai_AiThink4_6fcc9610(int param_1,int *param_2,int *param_3,int reg_EBX);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* Ai_AiThink4_6fccc940  D2Game.dll +0xac940  int __fastcall Ai_AiThink4_6fccc940(int *param_1,int param_2);  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* BnDownload_6ff2d320  Bnclient.dll +0xd320  uint32_t * BnDownload_6ff2d320(uint32_t *param_1,uint32_t *param_2,uint8_t *param_3,uint reg_ESI, uint32_t reg_EDI);  sigmaRE/5_game_source/Bnclient/BnDownload.cpp */
/* D2CMP_10000  D2CMP.dll ordinal 10000  uint32_t D2CMP_10000(int param_1);  sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
/* D2CMP_10005  D2CMP.dll ordinal 10005  uint __thiscall D2CMP_10005(void *this,uint *param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
/* D2CMP_10054  D2CMP.dll ordinal 10054  void D2CMP_10054(uint32_t param_1,uint32_t param_2);  sigmaRE/5_game_source/D2CMP/_unattributed/before_SRC_SpriteCache.cpp */
/* D2CMP_10060  D2CMP.dll ordinal 10060  uint32_t D2CMP_10060(int param_1);  sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
/* D2CMP_10068  D2CMP.dll ordinal 10068  void D2CMP_10068(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint param_4);  sigmaRE/5_game_source/D2CMP/SRC/SpriteCache.cpp */
/* D2CMP_10091  D2CMP.dll ordinal 10091  uint8_t * D2CMP_10091(int param_1,int param_2);  sigmaRE/5_game_source/D2CMP/SRC/_unattributed/between_SRC_Codec_and_SRC_GfxHash.cpp */
/* D2Client_loc_6fac4d30  D2Client.dll +0x14d30  (code address inside sub_6fac4b00+0x230)  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* D2Client_loc_6fad8260  D2Client.dll +0x28260  (code address inside sub_6fad7ef0+0x370)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* D2Client_loc_6faed110  D2Client.dll +0x3d110  (code address inside sub_6faed080+0x90)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* D2Client_loc_6faf6af0  D2Client.dll +0x46af0  (code address inside sub_6faf6a60+0x90)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf6d10  D2Client.dll +0x46d10  (code address inside sub_6faf6c00+0x110)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf8350  D2Client.dll +0x48350  (code address inside sub_6faf8150+0x200)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf8380  D2Client.dll +0x48380  (code address inside sub_6faf8150+0x230)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf8650  D2Client.dll +0x48650  (code address inside sub_6faf8590+0xc0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf8750  D2Client.dll +0x48750  (code address inside sub_6faf8730+0x20)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf87b0  D2Client.dll +0x487b0  (code address inside sub_6faf8730+0x80)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf8810  D2Client.dll +0x48810  (code address inside sub_6faf8730+0xe0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf9130  D2Client.dll +0x49130  (code address inside sub_6faf9090+0xa0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf91e0  D2Client.dll +0x491e0  (code address inside sub_6faf9090+0x150)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6faf9250  D2Client.dll +0x49250  (code address inside sub_6faf9090+0x1c0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6fafa2f0  D2Client.dll +0x4a2f0  (code address inside sub_6fafa270+0x80)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6fafabe0  D2Client.dll +0x4abe0  (code address inside sub_6fafa8c0+0x320)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6fafaee0  D2Client.dll +0x4aee0  (code address inside sub_6fafa8c0+0x620)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* D2Client_loc_6fb1264e  D2Client.dll +0x6264e  (code address inside sub_6fb12580+0xce)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* D2Client_loc_6fb15180  D2Client.dll +0x65180  (code address inside sub_6fb14fd0+0x1b0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* D2Client_loc_6fb18f40  D2Client.dll +0x68f40  (code address inside ENGINE_Gfx_6fb18ea0+0xa0)  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* D2Client_loc_6fb20ec6  D2Client.dll +0x70ec6  (code address inside sub_6fb207f0+0x6d6)  sigmaRE/5_game_source/D2Client/_unattributed/between_ENGINE_GfxUtil_and_UNIT_PlrSkills.cpp */
/* D2Client_loc_6fb273a0  D2Client.dll +0x773a0  (code address inside sub_6fb272e0+0xc0)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* D2Client_loc_6fb3b6b0  D2Client.dll +0x8b6b0  (code address inside WARDEN_WardenClient_6fb3b650+0x60)  sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
/* D2Client_loc_6fb3c470  D2Client.dll +0x8c470  (code address inside UI_inv_6fb3c440+0x30)  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* D2Client_loc_6fb3cd00  D2Client.dll +0x8cd00  (code address inside UI_inv_6fb3ccb0+0x50)  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* D2Client_loc_6fb4e180, D2Client_loc_6fb4e180_10298ce0  D2Client.dll +0x9e180  (code address inside sub_6fb4dfd0+0x1b0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* D2Client_loc_6fb57630  D2Client.dll +0xa7630  (code address inside UNIT_CUnit_6fb57400+0x230)  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* D2Client_loc_6fb5a8b3  D2Client.dll +0xaa8b3  (code address inside UNIT_CUnit_6fb5a3e0+0x4d3)  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* D2Client_loc_6fb6e400  D2Client.dll +0xbe400  (code address inside sub_6fb6e350+0xb0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* D2Client_loc_6fb714f7  D2Client.dll +0xc14f7  (code address inside sub_6fb714f0+0x7)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* D2Client_loc_6fb719a4  D2Client.dll +0xc19a4  (code address inside sub_6fb71760+0x244)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* D2Common_10002  D2Common.dll ordinal 10002  int D2Common_10002(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10003  D2Common.dll ordinal 10003  void D2Common_10003(uint32_t *param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10008  D2Common.dll ordinal 10008  int * D2Common_10008(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10009  D2Common.dll ordinal 10009  void D2Common_10009(int param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10010  D2Common.dll ordinal 10010  int * D2Common_10010(int *param_1,uint param_2,int *param_3,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10012  D2Common.dll ordinal 10012  uint64_t D2Common_10012(int *param_1,uint8_t param_2,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10014  D2Common.dll ordinal 10014  int D2Common_10014(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
/* D2Common_10019  D2Common.dll ordinal 10019  void D2Common_10019(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10020  D2Common.dll ordinal 10020  uint8_t D2Common_10020(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10024  D2Common.dll ordinal 10024  void D2Common_10024(int *param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10029  D2Common.dll ordinal 10029  void D2Common_10029(int *param_1,int param_2,uint32_t param_3,int param_4,int param_5,int param_6, uint32_t reg_EBX);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10030  D2Common.dll +0x4ec50  uint __fastcall D2Common_10030(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10031  D2Common.dll ordinal 10031  uint32_t D2Common_10031(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10032  D2Common.dll +0x31850  void D2Common_10032(int *param_1,uint32_t param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10033  D2Common.dll ordinal 10033  uint D2Common_10033(uint param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10038  D2Common.dll ordinal 10038  int D2Common_10038(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_10040  D2Common.dll ordinal 10040  int D2Common_10040(int *param_1,uint32_t param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10044  D2Common.dll ordinal 10044  int D2Common_10044(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10048, D2Common_10048_10278990  D2Common.dll ordinal 10048  uint8_t D2Common_10048(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10049  D2Common.dll ordinal 10049  int D2Common_10049(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10050  D2Common.dll ordinal 10050  void D2Common_10050(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10051  D2Common.dll ordinal 10051  uint32_t D2Common_10051(int *param_1,int *param_2,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10056  D2Common.dll ordinal 10056  void D2Common_10056(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10057, D2Common_10057_102763f0  D2Common.dll ordinal 10057  void D2Common_10057(int param_1);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10059  D2Common.dll ordinal 10059  int D2Common_10059(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10061, D2Common_10061_102776e0  D2Common.dll ordinal 10061  int D2Common_10061(int *param_1,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10062  D2Common.dll ordinal 10062  int * D2Common_10062(int *param_1,uint param_2,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10064  D2Common.dll ordinal 10064  uint D2Common_10064(int param_1,int *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* D2Common_10066  D2Common.dll ordinal 10066  uint32_t D2Common_10066(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
/* D2Common_10068  D2Common.dll ordinal 10068  void D2Common_10068(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10069  D2Common.dll ordinal 10069  void D2Common_10069(uint32_t param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10074  D2Common.dll ordinal 10074  void D2Common_10074(int *param_1,uint16_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10076  D2Common.dll +0x321c0  uint __fastcall D2Common_10076(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10079  D2Common.dll ordinal 10079  int * D2Common_10079(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_10080  D2Common.dll ordinal 10080  int D2Common_10080(int *param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_FieldTbls_and_DRLG_DrlgLogic.cpp */
/* D2Common_10082  D2Common.dll ordinal 10082  int D2Common_10082(uint param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10086  D2Common.dll ordinal 10086  uint32_t D2Common_10086(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10087  D2Common.dll ordinal 10087  bool D2Common_10087(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10089  D2Common.dll ordinal 10089  bool D2Common_10089(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10091  D2Common.dll +0x2c9c0  uint32_t __fastcall D2Common_10091(uint param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10100  D2Common.dll ordinal 10100  void D2Common_10100(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10101  D2Common.dll ordinal 10101  uint32_t D2Common_10101(int *param_1,int *param_2,uint32_t *param_3,uint32_t *param_4,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10106  D2Common.dll ordinal 10106  uint64_t D2Common_10106(int *param_1,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10108  D2Common.dll ordinal 10108  uint8_t D2Common_10108(int param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10111  D2Common.dll ordinal 10111  void D2Common_10111(int *param_1,uint8_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10114  D2Common.dll ordinal 10114  void D2Common_10114(int *param_1,uint8_t *param_2,uint8_t *param_3);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10120  D2Common.dll ordinal 10120  short D2Common_10120(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10121, D2Common_10121_10276b50  D2Common.dll ordinal 10121  int D2Common_10121(int param_1,int param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10123  D2Common.dll ordinal 10123  uint32_t D2Common_10123(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10130  D2Common.dll ordinal 10130  int D2Common_10130(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10133  D2Common.dll ordinal 10133  uint32_t D2Common_10133(int *param_1,int *param_2,int param_3,uint32_t param_4,uint param_5);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10137  D2Common.dll ordinal 10137  void D2Common_10137(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10141  D2Common.dll ordinal 10141  void D2Common_10141(int *param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10143  D2Common.dll ordinal 10143  bool D2Common_10143(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10153  D2Common.dll ordinal 10153  void D2Common_10153(int param_1,int param_2,uint *param_3);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10158  D2Common.dll ordinal 10158  void D2Common_10158(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_DataTbls_and_WayPoint_Waypoint.cpp */
/* D2Common_10161  D2Common.dll ordinal 10161  void D2Common_10161(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10163  D2Common.dll ordinal 10163  void D2Common_10163(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10164  D2Common.dll ordinal 10164  void D2Common_10164(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10168  D2Common.dll ordinal 10168  void D2Common_10168(int param_1,byte param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10174  D2Common.dll ordinal 10174  bool D2Common_10174(uint32_t *param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10175  D2Common.dll ordinal 10175  int D2Common_10175(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10179  D2Common.dll ordinal 10179  uint32_t D2Common_10179(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10181  D2Common.dll ordinal 10181  uint32_t __fastcall D2Common_10181(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10186  D2Common.dll ordinal 10186  int D2Common_10186(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10188, D2Common_10188_10278310  D2Common.dll ordinal 10188  void D2Common_10188(uint32_t *param_1,uint32_t param_2,int param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10192  D2Common.dll ordinal 10192  uint D2Common_10192(int *param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10195  D2Common.dll ordinal 10195  uint32_t D2Common_10195(int param_1,uint param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10201  D2Common.dll ordinal 10201  void D2Common_10201(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_QuestRecord_QuestRecord_and_PATH_Path.cpp */
/* D2Common_10202, D2Common_10202_10278e10  D2Common.dll ordinal 10202  uint D2Common_10202(int *param_1,uint param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10205  D2Common.dll ordinal 10205  int D2Common_10205(int *param_1,uint32_t param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10210  D2Common.dll ordinal 10210  void D2Common_10210(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10212  D2Common.dll ordinal 10212  int D2Common_10212(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10213  D2Common.dll ordinal 10213  short D2Common_10213(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10215  D2Common.dll ordinal 10215  uint D2Common_10215(uint param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
/* D2Common_10225, D2Common_10225_102787e0  D2Common.dll ordinal 10225  uint D2Common_10225(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10226  D2Common.dll ordinal 10226  uint D2Common_10226(uint param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10227  D2Common.dll ordinal 10227  uint32_t D2Common_10227(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10231  D2Common.dll ordinal 10231  uint32_t D2Common_10231(int *param_1,uint32_t param_2,uint param_3,int param_4,int param_5);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10232  D2Common.dll ordinal 10232  void D2Common_10232(void *param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5);  sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
/* D2Common_10237  D2Common.dll ordinal 10237  int D2Common_10237(uint param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
/* D2Common_10239  D2Common.dll ordinal 10239  uint32_t D2Common_10239(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* D2Common_10241  D2Common.dll ordinal 10241  uint8_t __fastcall D2Common_10241(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_FieldTbls_and_DRLG_DrlgLogic.cpp */
/* D2Common_10242  D2Common.dll ordinal 10242  int D2Common_10242(uint32_t param_1,uint32_t param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10243  D2Common.dll ordinal 10243  void D2Common_10243(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10244  D2Common.dll ordinal 10244  uint32_t D2Common_10244(int *param_1,int *param_2,int param_3,int *param_4,uint *param_5,int *param_6);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10245, D2Common_10245_102a37c0  D2Common.dll ordinal 10245  void D2Common_10245(uint32_t *param_1,int param_2,int param_3,uint param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10248  D2Common.dll ordinal 10248  uint64_t D2Common_10248(int param_1,uint reg_EDX);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_10254  D2Common.dll ordinal 10254  void D2Common_10254(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10255  D2Common.dll ordinal 10255  bool D2Common_10255(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* D2Common_10256  D2Common.dll ordinal 10256  int D2Common_10256(int *param_1,uint32_t param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10257  D2Common.dll ordinal 10257  uint D2Common_10257(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10258  D2Common.dll ordinal 10258  uint32_t D2Common_10258(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10261  D2Common.dll ordinal 10261  uint32_t D2Common_10261(uint32_t *param_1,int param_2,int param_3,uint param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10266  D2Common.dll ordinal 10266  uint8_t D2Common_10266(byte param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* D2Common_10273  D2Common.dll ordinal 10273  uint32_t D2Common_10273(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10278  D2Common.dll ordinal 10278  uint D2Common_10278(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* D2Common_10285  D2Common.dll ordinal 10285  int D2Common_10285(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_10286  D2Common.dll ordinal 10286  void D2Common_10286(int param_1,uint16_t param_2,uint16_t param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10296  D2Common.dll ordinal 10296  uint32_t D2Common_10296(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10297  D2Common.dll ordinal 10297  int D2Common_10297(int *param_1,int param_2,uint32_t param_3,int param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10302  D2Common.dll ordinal 10302  void D2Common_10302(int *param_1,int param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_SKILLS_Skills_and_DATATBLS_MonsterTbls.cpp */
/* D2Common_10303  D2Common.dll ordinal 10303  void D2Common_10303(uint32_t param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6);  sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
/* D2Common_10304  D2Common.dll ordinal 10304  uint32_t D2Common_10304(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10305  D2Common.dll ordinal 10305  uint8_t D2Common_10305(int *param_1,uint param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_OverlayTbls_and_DRLG_OutJung.cpp */
/* D2Common_10306  D2Common.dll ordinal 10306  uint D2Common_10306(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10308  D2Common.dll ordinal 10308  void D2Common_10308(uint32_t *param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10309  D2Common.dll ordinal 10309  void D2Common_10309(void);  sigmaRE/5_game_source/D2Common/WayPoint/Waypoint.cpp */
/* D2Common_10310  D2Common.dll ordinal 10310  uint32_t D2Common_10310(int param_1);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10312  D2Common.dll ordinal 10312  void D2Common_10312(int *param_1,uint16_t param_2,int param_3);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10321  D2Common.dll ordinal 10321  uint D2Common_10321(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10323  D2Common.dll ordinal 10323  void D2Common_10323(int param_1,int *param_2,int *param_3,int *param_4,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10326  D2Common.dll ordinal 10326  uint8_t D2Common_10326(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10331, D2Common_10331_102753f0  D2Common.dll ordinal 10331  uint32_t D2Common_10331(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10333  D2Common.dll ordinal 10333  void D2Common_10333(int param_1,int param_2,uint32_t *param_3,int param_4);  sigmaRE/5_game_source/D2Common/DRLG/DrlgAnim.cpp */
/* D2Common_10334, D2Common_10334_10277260  D2Common.dll ordinal 10334  int D2Common_10334(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10336  D2Common.dll ordinal 10336  void D2Common_10336(int param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10337  D2Common.dll ordinal 10337  void D2Common_10337(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10346  D2Common.dll ordinal 10346  void D2Common_10346(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10350  D2Common.dll ordinal 10350  void D2Common_10350(int *param_1,uint32_t *param_2,int *param_3,int *param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10353  D2Common.dll ordinal 10353  uint32_t D2Common_10353(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10355  D2Common.dll ordinal 10355  void D2Common_10355(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10360  D2Common.dll ordinal 10360  bool D2Common_10360(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10364  D2Common.dll ordinal 10364  uint32_t D2Common_10364(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10366  D2Common.dll ordinal 10366  int D2Common_10366(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10370  D2Common.dll ordinal 10370  void D2Common_10370(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10379  D2Common.dll ordinal 10379  void D2Common_10379(int param_1,uint32_t param_2,uint32_t param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10383, D2Common_10383_10278610  D2Common.dll ordinal 10383  void D2Common_10383(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10387  D2Common.dll ordinal 10387  uint32_t * D2Common_10387(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10391  D2Common.dll ordinal 10391  bool D2Common_10391(int param_1,int *param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10392  D2Common.dll ordinal 10392  uint32_t D2Common_10392(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10393  D2Common.dll ordinal 10393  int D2Common_10393(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10396  D2Common.dll ordinal 10396  uint32_t D2Common_10396(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10397  D2Common.dll ordinal 10397  uint32_t D2Common_10397(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10399  D2Common.dll ordinal 10399  uint32_t D2Common_10399(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
/* D2Common_10404  D2Common.dll ordinal 10404  void D2Common_10404(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10405, D2Common_10405_10275ea0  D2Common.dll ordinal 10405  uint32_t D2Common_10405(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10408  D2Common.dll ordinal 10408  void D2Common_10408(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10411  D2Common.dll ordinal 10411  int D2Common_10411(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10417  D2Common.dll ordinal 10417  uint D2Common_10417(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10418  D2Common.dll ordinal 10418  void D2Common_10418(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_SKILLS_Skills_and_DATATBLS_MonsterTbls.cpp */
/* D2Common_10419  D2Common.dll ordinal 10419  void D2Common_10419(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DRLG/Drlg.cpp */
/* D2Common_10421  D2Common.dll ordinal 10421  uint32_t D2Common_10421(uint32_t param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10422  D2Common.dll ordinal 10422  void D2Common_10422(uint32_t param_1,int param_2);  sigmaRE/5_game_source/D2Common/Chat/Chat.cpp */
/* D2Common_10426  D2Common.dll ordinal 10426  bool D2Common_10426(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10428, D2Common_10428_102769d0  D2Common.dll ordinal 10428  uint32_t D2Common_10428(uint32_t param_1,uint32_t param_2,uint param_3);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10431  D2Common.dll ordinal 10431  uint32_t D2Common_10431(int *param_1,int *param_2,uint32_t *param_3,int param_4,int param_5, uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
/* D2Common_10435, D2Common_10435_10299c60  D2Common.dll ordinal 10435  uint32_t D2Common_10435(uint32_t param_1,uint param_2,uint32_t param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10440  D2Common.dll ordinal 10440  void D2Common_10440(int *param_1,uint16_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10449  D2Common.dll ordinal 10449  int D2Common_10449(uint param_1,uint32_t param_2,int param_3,uint *param_4,int *param_5,int *param_6 );  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
/* D2Common_10450, D2Common_10450_102794d0  D2Common.dll ordinal 10450  int D2Common_10450(uint32_t param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_10455  D2Common.dll ordinal 10455  uint32_t D2Common_10455(int *param_1,int param_2,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10457  D2Common.dll ordinal 10457  void D2Common_10457(int *param_1,int param_2,int param_3,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10459, D2Common_10459_10276620  D2Common.dll ordinal 10459  uint D2Common_10459(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_ITEMS_Items_and_DRLG_Drlg.cpp */
/* D2Common_10460  D2Common.dll ordinal 10460  int D2Common_10460(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10463  D2Common.dll ordinal 10463  int D2Common_10463(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10464  D2Common.dll ordinal 10464  uint32_t D2Common_10464(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10466  D2Common.dll ordinal 10466  void D2Common_10466(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10473  D2Common.dll ordinal 10473  uint32_t D2Common_10473(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10478  D2Common.dll ordinal 10478  uint8_t D2Common_10478(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10488  D2Common.dll ordinal 10488  void D2Common_10488(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10494, D2Common_10494_10277e30  D2Common.dll ordinal 10494  uint D2Common_10494(int *param_1,uint param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10501  D2Common.dll ordinal 10501  uint32_t D2Common_10501(int *param_1);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10507, D2Common_10507_102a3700  D2Common.dll ordinal 10507  uint32_t D2Common_10507(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10509  D2Common.dll ordinal 10509  void D2Common_10509(uint32_t param_1,int *param_2,uint32_t param_3,uint param_4,int param_5);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10510, D2Common_10510_10277b90  D2Common.dll ordinal 10510  int D2Common_10510(uint32_t param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10511  D2Common.dll ordinal 10511  uint32_t D2Common_10511(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10515  D2Common.dll ordinal 10515  uint32_t D2Common_10515(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10516  D2Common.dll ordinal 10516  uint64_t D2Common_10516(int *param_1,uint reg_EDX);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10522  D2Common.dll ordinal 10522  int D2Common_10522(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_FieldTbls_and_DRLG_DrlgLogic.cpp */
/* D2Common_10525  D2Common.dll ordinal 10525  void D2Common_10525(int *param_1,uint16_t param_2,int param_3);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10527  D2Common.dll ordinal 10527  void D2Common_10527(int param_1,uint8_t param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10530  D2Common.dll ordinal 10530  uint8_t D2Common_10530(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10532  D2Common.dll ordinal 10532  int D2Common_10532(int *param_1,uint32_t param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10534  D2Common.dll ordinal 10534  int D2Common_10534(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10535  D2Common.dll ordinal 10535  uint32_t * D2Common_10535(void);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_10536  D2Common.dll ordinal 10536  void D2Common_10536(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10537  D2Common.dll ordinal 10537  uint32_t D2Common_10537(uint32_t *param_1,int *param_2,int *param_3,uint32_t *param_4,uint32_t *param_5);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10540  D2Common.dll ordinal 10540  int D2Common_10540(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10542  D2Common.dll ordinal 10542  void D2Common_10542(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10546  D2Common.dll ordinal 10546  void D2Common_10546(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10551  D2Common.dll ordinal 10551  void D2Common_10551(int param_1,uint32_t param_2,int param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10554  D2Common.dll ordinal 10554  void D2Common_10554(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10555  D2Common.dll ordinal 10555  uint32_t D2Common_10555(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10557  D2Common.dll ordinal 10557  uint D2Common_10557(uint param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10558  D2Common.dll ordinal 10558  void D2Common_10558(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10563  D2Common.dll ordinal 10563  void D2Common_10563(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
/* D2Common_10565  D2Common.dll ordinal 10565  void D2Common_10565(void *param_1,int param_2,int param_3,uint32_t param_4,int param_5);  sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
/* D2Common_10566  D2Common.dll ordinal 10566  bool D2Common_10566(int *param_1,int *param_2,uint *param_3,uint *param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10567  D2Common.dll ordinal 10567  int D2Common_10567(int *param_1,int param_2,uint32_t param_3,int param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10572  D2Common.dll ordinal 10572  void D2Common_10572(int *param_1,uint32_t *param_2,uint32_t *param_3);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10573  D2Common.dll ordinal 10573  ushort D2Common_10573(void *param_1,int param_2,int param_3,uint32_t param_4,uint param_5);  sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
/* D2Common_10577  D2Common.dll ordinal 10577  uint32_t D2Common_10577(uint32_t param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10578  D2Common.dll ordinal 10578  int D2Common_10578(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10582  D2Common.dll ordinal 10582  uint32_t D2Common_10582(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_10585, D2Common_10585_102766e0  D2Common.dll ordinal 10585  uint32_t D2Common_10585(byte param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
/* D2Common_10587  D2Common.dll ordinal 10587  int D2Common_10587(int param_1,int param_2,uint param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10588  D2Common.dll ordinal 10588  uint8_t D2Common_10588(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10589  D2Common.dll ordinal 10589  uint D2Common_10589(uint32_t *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10592  D2Common.dll ordinal 10592  int D2Common_10592(uint *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10599, D2Common_10599_102759a0  D2Common.dll ordinal 10599  void D2Common_10599(int *param_1,uint param_2);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10601  D2Common.dll ordinal 10601  int D2Common_10601(uint32_t *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10607, D2Common_10607_10275a30  D2Common.dll ordinal 10607  uint32_t D2Common_10607(int param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10611  D2Common.dll ordinal 10611  void D2Common_10611(int *param_1,uint16_t param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10614  D2Common.dll ordinal 10614  void __fastcall D2Common_10614(uint32_t *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10620  D2Common.dll ordinal 10620  uint32_t D2Common_10620(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10621  D2Common.dll ordinal 10621  int __thiscall D2Common_10621(void *this,int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10623  D2Common.dll ordinal 10623  uint32_t D2Common_10623(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10628  D2Common.dll ordinal 10628  void D2Common_10628(int *param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10630  D2Common.dll ordinal 10630  void D2Common_10630(uint32_t reg_ECX,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10631, D2Common_10631_10276710  D2Common.dll ordinal 10631  uint32_t D2Common_10631(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10633  D2Common.dll ordinal 10633  uint32_t D2Common_10633(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10634  D2Common.dll ordinal 10634  short * D2Common_10634(ushort param_1,int param_2);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_10637  D2Common.dll ordinal 10637  void D2Common_10637(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10640  D2Common.dll ordinal 10640  int D2Common_10640(int param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10641, D2Common_10641_10277650  D2Common.dll ordinal 10641  int * D2Common_10641(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10646  D2Common.dll ordinal 10646  int * D2Common_10646(int param_1,int *param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10647  D2Common.dll ordinal 10647  void D2Common_10647(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10649  D2Common.dll ordinal 10649  uint32_t D2Common_10649(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10651  D2Common.dll ordinal 10651  uint32_t D2Common_10651(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10653, D2Common_10653_102775c0  D2Common.dll ordinal 10653  int D2Common_10653(uint32_t param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10658  D2Common.dll ordinal 10658  int D2Common_10658(int param_1,uint32_t *param_2,int param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10661  D2Common.dll ordinal 10661  void D2Common_10661(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10662  D2Common.dll +0x3c7e0  void D2Common_10662(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10666  D2Common.dll ordinal 10666  uint32_t D2Common_10666(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_OverlayTbls_and_DRLG_OutJung.cpp */
/* D2Common_10672  D2Common.dll ordinal 10672  uint D2Common_10672(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10673  D2Common.dll ordinal 10673  uint8_t D2Common_10673(int param_1,uint8_t *param_2);  sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
/* D2Common_10675  D2Common.dll ordinal 10675  uint32_t D2Common_10675(void);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgVer_and_UNITS_MisStream.cpp */
/* D2Common_10677  D2Common.dll ordinal 10677  uint8_t D2Common_10677(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10678  D2Common.dll ordinal 10678  uint32_t D2Common_10678(int *param_1);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10680, D2Common_10680_10278430  D2Common.dll ordinal 10680  int D2Common_10680(int param_1,int param_2,uint param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10682  D2Common.dll ordinal 10682  void D2Common_10682(uint param_1,uint *param_2,uint *param_3,uint *param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
/* D2Common_10686  D2Common.dll ordinal 10686  uint32_t D2Common_10686(int *param_1,uint32_t param_2,int param_3,ushort param_4);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10688, D2Common_10688_10273110  D2Common.dll +0x3e980  int D2Common_10688(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Text_Text_and_DATATBLS_AnimTbls.cpp */
/* D2Common_10689  D2Common.dll ordinal 10689  void D2Common_10689(int *param_1,uint param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10695  D2Common.dll ordinal 10695  int D2Common_10695(uint param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_10698  D2Common.dll ordinal 10698  int D2Common_10698(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10702  D2Common.dll ordinal 10702  uint32_t D2Common_10702(int param_1,uint param_2,void *param_3,int param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10704  D2Common.dll ordinal 10704  void D2Common_10704(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10705  D2Common.dll ordinal 10705  uint32_t D2Common_10705(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10708  D2Common.dll ordinal 10708  uint32_t * __fastcall D2Common_10708(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10711  D2Common.dll ordinal 10711  uint8_t D2Common_10711(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10717  D2Common.dll ordinal 10717  uint32_t D2Common_10717(int param_1);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10718, D2Common_10718_10278a50  D2Common.dll ordinal 10718  uint32_t D2Common_10718(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10722  D2Common.dll ordinal 10722  void D2Common_10722(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10725  D2Common.dll ordinal 10725  void D2Common_10725(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10731  D2Common.dll ordinal 10731  uint32_t D2Common_10731(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10737  D2Common.dll ordinal 10737  int D2Common_10737(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10739  D2Common.dll ordinal 10739  void D2Common_10739(uint *param_1,int param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10742  D2Common.dll ordinal 10742  void D2Common_10742(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
/* D2Common_10744  D2Common.dll ordinal 10744  uint D2Common_10744(int param_1,uint param_2);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10747  D2Common.dll ordinal 10747  uint32_t D2Common_10747(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10748  D2Common.dll ordinal 10748  void D2Common_10748(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10749  D2Common.dll +0x6cb20  int __fastcall D2Common_10749(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
/* D2Common_10750  D2Common.dll ordinal 10750  uint16_t D2Common_10750(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10757  D2Common.dll ordinal 10757  uint8_t D2Common_10757(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10760  D2Common.dll ordinal 10760  void D2Common_10760(int param_1,int param_2,uint32_t *param_3);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgLogic_and_DATATBLS_OverlayTbls.cpp */
/* D2Common_10762  D2Common.dll ordinal 10762  char * D2Common_10762(int param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10764  D2Common.dll ordinal 10764  uint16_t D2Common_10764(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10783  D2Common.dll ordinal 10783  int D2Common_10783(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgVer_and_UNITS_MisStream.cpp */
/* D2Common_10785, D2Common_10785_10278250  D2Common.dll ordinal 10785  void D2Common_10785(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10786, D2Common_10786_102769a0  D2Common.dll ordinal 10786  uint32_t D2Common_10786(uint32_t param_1,uint param_2,uint32_t param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10787  D2Common.dll ordinal 10787  int D2Common_10787(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10790  D2Common.dll ordinal 10790  int D2Common_10790(int param_1,uint32_t *param_2,int param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10802  D2Common.dll ordinal 10802  uint32_t D2Common_10802(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10806  D2Common.dll ordinal 10806  int D2Common_10806(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_10807, D2Common_10807_10278370  D2Common.dll ordinal 10807  void D2Common_10807(int param_1,void *param_2,int param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10814, D2Common_10814_10278d80  D2Common.dll ordinal 10814  void D2Common_10814(uint32_t param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_10816  D2Common.dll ordinal 10816  int * D2Common_10816(int param_1,int param_2,int param_3,int *param_4,int *param_5,uint32_t param_6);  sigmaRE/5_game_source/D2Common/_unattributed/between_ENVIRONMENT_Env_and_Text_Text.cpp */
/* D2Common_10819  D2Common.dll ordinal 10819  void D2Common_10819(uint *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10822  D2Common.dll ordinal 10822  byte D2Common_10822(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10823  D2Common.dll ordinal 10823  int D2Common_10823(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10824  D2Common.dll ordinal 10824  void D2Common_10824(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10826, D2Common_10826_10276680, p_D2Common_10826  D2Common.dll ordinal 10826  uint32_t D2Common_10826(int param_1);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10828, D2Common_10828_102a3730  D2Common.dll ordinal 10828  uint32_t D2Common_10828(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10830  D2Common.dll ordinal 10830  int D2Common_10830(int *param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10832  D2Common.dll ordinal 10832  int D2Common_10832(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10835  D2Common.dll ordinal 10835  uint8_t D2Common_10835(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10838  D2Common.dll ordinal 10838  uint32_t D2Common_10838(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10839  D2Common.dll ordinal 10839  uint32_t D2Common_10839(int *param_1,int *param_2,ushort param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10842  D2Common.dll ordinal 10842  uint32_t D2Common_10842(int *param_1,int *param_2,int *param_3,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10843  D2Common.dll ordinal 10843  void D2Common_10843(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10847  D2Common.dll ordinal 10847  int D2Common_10847(int param_1);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10849  D2Common.dll ordinal 10849  int * D2Common_10849(uint32_t param_1,char *param_2,uint32_t param_3,int *param_4);  sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
/* D2Common_10854  D2Common.dll ordinal 10854  uint32_t D2Common_10854(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10858  D2Common.dll +0x4e1c0  uint32_t __fastcall D2Common_10858(uint32_t *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10863  D2Common.dll ordinal 10863  uint32_t D2Common_10863(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10865  D2Common.dll ordinal 10865  bool D2Common_10865(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10867  D2Common.dll ordinal 10867  uint16_t D2Common_10867(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10871, D2Common_10871_10277ec0  D2Common.dll ordinal 10871  int D2Common_10871(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10872  D2Common.dll ordinal 10872  int D2Common_10872(int param_1,int param_2,uint param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10880  D2Common.dll ordinal 10880  void D2Common_10880(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_Stats_StatsEx_and_DUNGEON_Dungeon.cpp */
/* D2Common_10882  D2Common.dll ordinal 10882  void D2Common_10882(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10883  D2Common.dll ordinal 10883  void D2Common_10883(int *param_1,uint16_t param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10885  D2Common.dll ordinal 10885  void D2Common_10885(int param_1,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_10887, D2Common_10887_10273d40  D2Common.dll ordinal 10887  void D2Common_10887(int *param_1,int param_2,int param_3,uint param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10889  D2Common.dll ordinal 10889  uint32_t D2Common_10889(int *param_1);  sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
/* D2Common_10890  D2Common.dll ordinal 10890  void D2Common_10890(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
/* D2Common_10892  D2Common.dll ordinal 10892  void D2Common_10892(int *param_1,uint param_2,int param_3);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10893  D2Common.dll ordinal 10893  uint32_t D2Common_10893(int *param_1,int *param_2,char *param_3,int param_4);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10894  D2Common.dll ordinal 10894  int D2Common_10894(int param_1,byte param_2,int param_3);  sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
/* D2Common_10895  D2Common.dll ordinal 10895  void D2Common_10895(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10910  D2Common.dll ordinal 10910  int D2Common_10910(int param_1,int param_2,uint param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10911, D2Common_10911_102783d0  D2Common.dll ordinal 10911  void D2Common_10911(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10913, D2Common_10913_10274df0  D2Common.dll ordinal 10913  int D2Common_10913(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10914  D2Common.dll ordinal 10914  void D2Common_10914(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
/* D2Common_10918  D2Common.dll ordinal 10918  int D2Common_10918(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10920  D2Common.dll ordinal 10920  int D2Common_10920(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_10925  D2Common.dll ordinal 10925  int D2Common_10925(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10927  D2Common.dll ordinal 10927  void D2Common_10927(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10930, D2Common_10930_10277f50  D2Common.dll ordinal 10930  int D2Common_10930(int param_1,int param_2,uint param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10932  D2Common.dll ordinal 10932  void D2Common_10932(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10935  D2Common.dll ordinal 10935  int D2Common_10935(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10936  D2Common.dll ordinal 10936  void __fastcall D2Common_10936(uint32_t *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10939  D2Common.dll ordinal 10939  uint32_t D2Common_10939(void);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10943  D2Common.dll ordinal 10943  void D2Common_10943(void *param_1,int param_2,int param_3,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Common/DATATBLS/DataTbls.cpp */
/* D2Common_10945  D2Common.dll ordinal 10945  void D2Common_10945(int *param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10946  D2Common.dll ordinal 10946  uint __thiscall D2Common_10946(uint3 param_1,int *param_2,uint param_3,int *param_4,int param_5);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10947  D2Common.dll ordinal 10947  uint32_t D2Common_10947(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_10951  D2Common.dll ordinal 10951  uint32_t * D2Common_10951(uint param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint reg_EBX);  sigmaRE/5_game_source/D2Common/_unattributed/between_ENVIRONMENT_Env_and_Text_Text.cpp */
/* D2Common_10957  D2Common.dll ordinal 10957  uint8_t D2Common_10957(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_10959  D2Common.dll ordinal 10959  uint32_t D2Common_10959(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10970  D2Common.dll ordinal 10970  void D2Common_10970(int *param_1,int param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* D2Common_10973, D2Common_10973_10273ce0  D2Common.dll ordinal 10973  int D2Common_10973(int param_1,int param_2,uint param_3);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_10977  D2Common.dll ordinal 10977  void D2Common_10977(int *param_1,uint param_2,int param_3);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_10978  D2Common.dll ordinal 10978  void D2Common_10978(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_10980, D2Common_10980_10275060  D2Common.dll ordinal 10980  uint32_t D2Common_10980(int param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_10983  D2Common.dll ordinal 10983  uint16_t D2Common_10983(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10985  D2Common.dll ordinal 10985  int D2Common_10985(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_10991  D2Common.dll ordinal 10991  void D2Common_10991(int param_1,int param_2,uint32_t *param_3);  sigmaRE/5_game_source/D2Common/DRLG/DrlgAnim.cpp */
/* D2Common_10993  D2Common.dll ordinal 10993  void D2Common_10993(int *param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10995  D2Common.dll +0x36760  uint __fastcall D2Common_10995(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_10996  D2Common.dll ordinal 10996  void D2Common_10996(uint32_t param_1,uint32_t param_2,int *param_3,int *param_4,uint param_5);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
/* D2Common_11003  D2Common.dll ordinal 11003  void D2Common_11003(int param_1,int *param_2,int param_3,uint reg_EBX);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11006  D2Common.dll ordinal 11006  uint32_t D2Common_11006(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_11010  D2Common.dll ordinal 11010  int D2Common_11010(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* D2Common_11013, D2Common_11013_102781f0  D2Common.dll ordinal 11013  uint32_t * D2Common_11013(uint32_t param_1,uint32_t param_2,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11015  D2Common.dll ordinal 11015  void D2Common_11015(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_11016  D2Common.dll ordinal 11016  void D2Common_11016(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DATATBLS_DataTbls_and_WayPoint_Waypoint.cpp */
/* D2Common_11017  D2Common.dll ordinal 11017  int D2Common_11017(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11018  D2Common.dll ordinal 11018  uint32_t D2Common_11018(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_11020  D2Common.dll ordinal 11020  uint8_t D2Common_11020(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_11027  D2Common.dll ordinal 11027  int D2Common_11027(int param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11028  D2Common.dll ordinal 11028  uint64_t D2Common_11028(int *param_1,int param_2,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11029  D2Common.dll ordinal 11029  int D2Common_11029(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* D2Common_11031, D2Common_11031_10276740  D2Common.dll ordinal 11031  void D2Common_11031(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_COLLISN_Collisn_and_SKILLS_Skills.cpp */
/* D2Common_11034  D2Common.dll ordinal 11034  uint D2Common_11034(int param_1,uint param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11037  D2Common.dll ordinal 11037  void D2Common_11037(uint32_t *param_1,uint32_t param_2,int param_3,uint32_t param_4, uint32_t param_5);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11039, D2Common_11039_10277980  D2Common.dll ordinal 11039  void D2Common_11039(int *param_1,uint param_2,int param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11043, D2Common_11043_10278490  D2Common.dll ordinal 11043  void D2Common_11043(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11056  D2Common.dll ordinal 11056  void D2Common_11056(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11059  D2Common.dll ordinal 11059  uint32_t D2Common_11059(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_11060  D2Common.dll ordinal 11060  uint32_t D2Common_11060(void);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_11065, D2Common_11065_102793c0  D2Common.dll ordinal 11065  int D2Common_11065(int param_1);  sigmaRE/5_game_source/D2Common/DATATBLS/ItemTbls.cpp */
/* D2Common_11073  D2Common.dll ordinal 11073  void D2Common_11073(void *param_1,int param_2,int param_3,uint32_t param_4,int param_5);  sigmaRE/5_game_source/D2Common/COLLISN/Collisn.cpp */
/* D2Common_11075  D2Common.dll ordinal 11075  char D2Common_11075(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11076  D2Common.dll ordinal 11076  uint32_t D2Common_11076(int *param_1,int *param_2,int *param_3,ushort param_4);  sigmaRE/5_game_source/D2Common/_unattributed/between_Logging_ProfCore_and_COLLISN_Collisn.cpp */
/* D2Common_11080  D2Common.dll ordinal 11080  int D2Common_11080(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_11081  D2Common.dll ordinal 11081  void D2Common_11081(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11082  D2Common.dll ordinal 11082  void D2Common_11082(uint32_t param_1);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11088, D2Common_11088_10275940  D2Common.dll ordinal 11088  int D2Common_11088(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11089  D2Common.dll ordinal 11089  uint32_t D2Common_11089(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_11090, D2Common_11090_10276450  D2Common.dll ordinal 11090  uint32_t D2Common_11090(uint *param_1,uint param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11091, D2Common_11091_10276b80  D2Common.dll ordinal 11091  int D2Common_11091(int param_1,int param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_11098  D2Common.dll ordinal 11098  uint D2Common_11098(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11100  D2Common.dll ordinal 11100  uint D2Common_11100(int *param_1,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11103  D2Common.dll ordinal 11103  void D2Common_11103(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_11104  D2Common.dll ordinal 11104  uint32_t D2Common_11104(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* D2Common_11107  D2Common.dll ordinal 11107  void D2Common_11107(int param_1,uint32_t param_2,int param_3,int param_4,int param_5, uint32_t param_6,byte param_7);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11108, D2Common_11108_102a3820  D2Common.dll ordinal 11108  void D2Common_11108(void *param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11110  D2Common.dll ordinal 11110  void D2Common_11110(uint32_t param_1,uint param_2,void *param_3,int param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11111, D2Common_11111_102a37f0  D2Common.dll ordinal 11111  void D2Common_11111(uint32_t param_1,void *param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11116  D2Common.dll ordinal 11116  int D2Common_11116(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11118  D2Common.dll ordinal 11118  void D2Common_11118(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* D2Common_11120  D2Common.dll ordinal 11120  uint32_t D2Common_11120(int param_1);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_11127  D2Common.dll ordinal 11127  void D2Common_11127(uint32_t param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11129  D2Common.dll ordinal 11129  void D2Common_11129(int *param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Common/_unattributed/between_QuestRecord_QuestRecord_and_PATH_Path.cpp */
/* D2Common_11131  D2Common.dll ordinal 11131  uint32_t D2Common_11131(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11132  D2Common.dll ordinal 11132  uint32_t D2Common_11132(int param_1);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11133  D2Common.dll ordinal 11133  byte D2Common_11133(int *param_1,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11138  D2Common.dll ordinal 11138  bool D2Common_11138(int *param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11139  D2Common.dll ordinal 11139  uint32_t D2Common_11139(int *param_1,int param_2,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11142  D2Common.dll ordinal 11142  uint32_t D2Common_11142(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_11144  D2Common.dll ordinal 11144  int D2Common_11144(int *param_1);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_11145  D2Common.dll ordinal 11145  uint32_t D2Common_11145(int param_1,uint32_t param_2,uint32_t param_3,uint32_t *param_4);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_11147  D2Common.dll ordinal 11147  uint D2Common_11147(int *param_1);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11148  D2Common.dll ordinal 11148  uint32_t D2Common_11148(int *param_1,int *param_2,int param_3,int param_4,int param_5,int *param_6,int *param_7 ,uint param_8);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* D2Common_11151  D2Common.dll ordinal 11151  uint D2Common_11151(int *param_1,uint reg_EAX);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* D2Common_11156  D2Common.dll ordinal 11156  ushort * D2Common_11156(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Common/DATATBLS/MonsterTbls.cpp */
/* D2Common_11157  D2Common.dll ordinal 11157  uint32_t D2Common_11157(int *param_1);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* D2Common_11160  D2Common.dll ordinal 11160  uint32_t D2Common_11160(int param_1,uint *param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* D2Common_11164  D2Common.dll ordinal 11164  void D2Common_11164(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* D2Common_11168  D2Common.dll ordinal 11168  int D2Common_11168(int *param_1);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Units_and_QuestRecord_QuestRecord.cpp */
/* D2Common_11169  D2Common.dll ordinal 11169  int D2Common_11169(int param_1,int param_2);  sigmaRE/5_game_source/D2Common/DATATBLS/_unattributed/between_DATATBLS_ItemTbls_and_DATATBLS_MissileTbls.cpp */
/* D2Game_10015  D2Game.dll ordinal 10015  uint32_t __fastcall D2Game_10015(uint32_t *param_1,uint32_t param_2,uint32_t param_3);  sigmaRE/5_game_source/D2Game/GAME/Task.cpp */
/* D2Game_10049  D2Game.dll +0x37430  void __fastcall D2Game_10049(int param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
/* D2Game_loc_6fc21740  D2Game.dll +0x1740  (code address inside sub_6fc21720+0x20)  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* D2Game_loc_6fc68710  D2Game.dll +0x48710  (code address inside MONSTER_MonsterAI_6fc686d0+0x40)  sigmaRE/5_game_source/D2Game/MONSTER/MonsterAI.cpp */
/* D2Game_loc_6fcaf620  D2Game.dll +0x8f620  (code address inside UNIT_sunitproxy_6fcaf5c0+0x60)  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* D2Game_loc_6fcc3d00  D2Game.dll +0xa3d00  (code address inside Ai_AiThink4_6fcc3b50+0x1b0)  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* D2Game_loc_6fcd31d0  D2Game.dll +0xb31d0  (code address inside sub_6fcd2fc0+0x210)  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Arena_and_SKILLS_SkillMonst.cpp */
/* D2Game_loc_6fcdcd90  D2Game.dll +0xbcd90  (code address inside sub_6fcdcc60+0x130)  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* D2Game_loc_6fcdd490  D2Game.dll +0xbd490  (code address inside sub_6fcdd330+0x160)  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* D2Game_loc_6fcdf810  D2Game.dll +0xbf810  (code address inside sub_6fcdf2e0+0x530)  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* D2Game_loc_6fce00c0  D2Game.dll +0xc00c0  (code address inside sub_6fcdffa0+0x120)  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* D2Game_loc_6fceb610  D2Game.dll +0xcb610  (code address inside PLAYER_PlrMsg_6fceb3d0+0x240)  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* D2Game_loc_6fcecf70  D2Game.dll +0xccf70  (code address inside PLAYER_PlrMsg_6fcece20+0x150)  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* D2Game_loc_6fceece0  D2Game.dll +0xcece0  (code address inside sub_6fcee9d0+0x310)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* D2Game_loc_6fcf4230  D2Game.dll +0xd4230  (code address inside ITEMS_ItemMode_6fcf4140+0xf0)  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* D2Game_loc_6fcfa350  D2Game.dll +0xda350  (code address inside ITEMS_ItemMode_6fcf9bf0+0x760)  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* D2Lang_10003  D2Lang.dll ordinal 10003  void __fastcall D2Lang_10003(uint32_t param_1);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2Lang_10004  D2Lang.dll ordinal 10004  void D2Lang_10004(char *param_1,int param_2,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2Lang_10006  D2Lang.dll ordinal 10006  void D2Lang_10006(int param_1,ulong param_2,int param_3);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2Lang_10008  D2Lang.dll ordinal 10008  uint32_t __fastcall D2Lang_10008(uint32_t param_1,char *param_2,int reg_ESI);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2Lang_10009  D2Lang.dll ordinal 10009  uint D2Lang_10009(uint32_t reg_ESI);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2Lang_10010  D2Lang.dll ordinal 10010  uint D2Lang_10010(byte *param_1,uint *param_2);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2Lang_10011, p_D2Lang_10011  D2Lang.dll ordinal 10011  uint __fastcall D2Lang_10011(byte *param_1);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* D2MCPClient_10058  D2MCPClient.dll +0x7330  void __fastcall D2MCPClient_10058(char *param_1,uint16_t param_2);  sigmaRE/5_game_source/D2MCPClient/_unattributed/code.cpp */
/* D2Multi_loc_6f9dd5b0  D2Multi.dll +0xd5b0  (code address inside sub_6f9dce70+0x740)  sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
/* D2Multi_loc_6f9e07a6  D2Multi.dll +0x107a6  (code address inside sub_6f9e04d0+0x2d6)  sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
/* D2Multi_loc_6f9e08a6  D2Multi.dll +0x108a6  (code address inside sub_6f9e04d0+0x3d6)  sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
/* D2Net_10001  D2Net.dll ordinal 10001  void D2Net_10001(uint32_t param_1,uint32_t param_2,uint32_t param_3);  sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
/* D2Net_10002  D2Net.dll ordinal 10002  uint D2Net_10002(char param_1,uint32_t param_2,byte *param_3,uint param_4);  sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
/* D2Net_10021  D2Net.dll ordinal 10021  void D2Net_10021(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Net/_unattributed/before_SRC_Server.cpp */
/* p_D2Net_10024, D2Net_10024  D2Net.dll ordinal 10024  uint D2Net_10024(ushort param_1,uint32_t param_2,char *param_3);  sigmaRE/5_game_source/D2Net/_unattributed/after_SRC_Server.cpp */
/* D2Win_10000  D2Win.dll ordinal 10000  uint32_t __fastcall D2Win_10000(int *param_1,Unicode *param_2,int param_3,uint32_t param_4,int param_5);  sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
/* D2Win_10003  D2Win.dll ordinal 10003  uint32_t __fastcall D2Win_10003(int *param_1);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10013  D2Win.dll ordinal 10013  void __fastcall D2Win_10013(Unicode *param_1,uint param_2,int param_3,int reg_EBX);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10020  D2Win.dll ordinal 10020  void __fastcall D2Win_10020(int *param_1,Unicode *param_2);  sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
/* D2Win_10028  D2Win.dll ordinal 10028  void __fastcall D2Win_10028(Unicode *param_1);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10041  D2Win.dll ordinal 10041  void __fastcall D2Win_10041(int *param_1);  sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
/* D2Win_10042  D2Win.dll ordinal 10042  uint32_t __fastcall D2Win_10042(int *param_1,Unicode *param_2);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10050  D2Win.dll +0x18490  uint32_t D2Win_10050(uint32_t *param_1);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10065  D2Win.dll +0xf2d0  uint32_t __fastcall D2Win_10065(uint param_1);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10068  D2Win.dll ordinal 10068  uint32_t * __fastcall D2Win_10068(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int param_5 ,uint32_t param_6,uint32_t param_7,int param_8,uint32_t param_9,int reg_EBX);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10083  D2Win.dll ordinal 10083  uint8_t D2Win_10083(void);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10085  D2Win.dll ordinal 10085  void __fastcall D2Win_10085(Unicode *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10097  D2Win.dll ordinal 10097  void __fastcall D2Win_10097(int *param_1,int param_2);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10098  D2Win.dll ordinal 10098  int * D2Win_10098(uint32_t *param_1,uint32_t reg_EBX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10150  D2Win.dll ordinal 10150  void __thiscall D2Win_10150(void *this,int param_2,int param_3,int param_4,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10155  D2Win.dll ordinal 10155  void __fastcall D2Win_10155(int *param_1);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10177, D2Win_10177_102aa690  D2Win.dll ordinal 10177  void __fastcall D2Win_10177(uint32_t param_1,int *param_2,int *param_3);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10184  D2Win.dll ordinal 10184  int __fastcall D2Win_10184(int param_1);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10187  D2Win.dll ordinal 10187  void D2Win_10187(void);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10190, D2Win_10190_1028e380  D2Win.dll ordinal 10190  void D2Win_10190(uint8_t param_1,uint8_t param_2,uint8_t param_3);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10192  D2Win.dll ordinal 10192  void __fastcall D2Win_10192(int *param_1,int param_2,Unicode *param_3,int param_4);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* D2Win_10204  D2Win.dll ordinal 10204  int * __thiscall D2Win_10204(void *this,int param_2,int param_3,int param_4,int param_5,uint param_6,int *param_7, int *param_8,int reg_EBX);  sigmaRE/5_game_source/D2Win/Src/_unattributed/between_Src_D2WinTextBox_and_Src_D2WinArchive.cpp */
/* D2gfx_10006  D2gfx.dll ordinal 10006  void __fastcall D2gfx_10006(uint32_t param_1);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10010  D2gfx.dll ordinal 10010  void D2gfx_10010(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10012  D2gfx.dll ordinal 10012  bool D2gfx_10012(int param_1,int param_2);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10013  D2gfx.dll ordinal 10013  uint D2gfx_10013(void);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10014  D2gfx.dll ordinal 10014  void D2gfx_10014(int param_1,int param_2,int param_3,int param_4,uint32_t param_5, uint32_t param_6);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10019  D2gfx.dll ordinal 10019  void D2gfx_10019(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10023  D2gfx.dll ordinal 10023  void D2gfx_10023(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10036  D2gfx.dll ordinal 10036  uint32_t D2gfx_10036(void);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10041  D2gfx.dll ordinal 10041  void D2gfx_10041(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10048  D2gfx.dll ordinal 10048  uint32_t D2gfx_10048(void);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10062  D2gfx.dll ordinal 10062  void D2gfx_10062(uint32_t param_1);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2gfx_10082  D2gfx.dll ordinal 10082  void D2gfx_10082(void);  sigmaRE/5_game_source/D2gfx/_unattributed/code_6fa81000.cpp */
/* D2sound_10001  D2sound.dll ordinal 10001  uint32_t D2sound_10001(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10005  D2sound.dll ordinal 10005  void __fastcall D2sound_10005(int *param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10006  D2sound.dll ordinal 10006  void __fastcall D2sound_10006(int *param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10008  D2sound.dll ordinal 10008  void __fastcall D2sound_10008(int *param_1,int param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10011  D2sound.dll ordinal 10011  uint32_t D2sound_10011(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10018  D2sound.dll ordinal 10018  void __fastcall D2sound_10018(int *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10020  D2sound.dll +0x68d0  void __thiscall D2sound_10020(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10023  D2sound.dll ordinal 10023  void __fastcall D2sound_10023(uint param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10025  D2sound.dll ordinal 10025  int * __fastcall D2sound_10025(int *param_1,uint *param_2,uint16_t *param_3);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10026  D2sound.dll ordinal 10026  void __thiscall D2sound_10026(void *this,float param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10028  D2sound.dll ordinal 10028  void __fastcall D2sound_10028(uint32_t *param_1,int param_2,uint32_t reg_EAX);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10032  D2sound.dll ordinal 10032  uint __fastcall D2sound_10032(int param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10034  D2sound.dll ordinal 10034  void __fastcall D2sound_10034(uint32_t *param_1,uint32_t param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10037  D2sound.dll ordinal 10037  uint32_t __fastcall D2sound_10037(uint32_t *param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10038  D2sound.dll ordinal 10038  void __fastcall D2sound_10038(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10039  D2sound.dll ordinal 10039  uint32_t __thiscall D2sound_10039(void *this,int param_1,int param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10041  D2sound.dll ordinal 10041  uint32_t D2sound_10041(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10044  D2sound.dll ordinal 10044  int __fastcall D2sound_10044(int *param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10046  D2sound.dll ordinal 10046  uint32_t D2sound_10046(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10047  D2sound.dll ordinal 10047  void __fastcall D2sound_10047(int *param_1,int *param_2,float param_3,float param_4,float param_5);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10049  D2sound.dll ordinal 10049  void __fastcall D2sound_10049(int *param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10050  D2sound.dll ordinal 10050  void __fastcall D2sound_10050(int param_1,uint32_t param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10051  D2sound.dll ordinal 10051  void __thiscall D2sound_10051(void *this,float param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10053  D2sound.dll ordinal 10053  uint32_t __fastcall D2sound_10053(int *param_1,int param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10056  D2sound.dll ordinal 10056  uint32_t D2sound_10056(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10059  D2sound.dll ordinal 10059  uint32_t D2sound_10059(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10061  D2sound.dll ordinal 10061  void __fastcall D2sound_10061(int param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10062  D2sound.dll ordinal 10062  void __fastcall D2sound_10062(int *param_1,int param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10063  D2sound.dll ordinal 10063  void __fastcall D2sound_10063(int *param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10065  D2sound.dll ordinal 10065  uint32_t * __fastcall D2sound_10065(uint param_1,uint32_t param_2);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10066  D2sound.dll ordinal 10066  uint32_t __fastcall D2sound_10066(uint32_t param_1);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10067  D2sound.dll ordinal 10067  uint32_t D2sound_10067(void);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* D2sound_10069  D2sound.dll ordinal 10069  uint32_t __fastcall D2sound_10069(int *param_1,int *param_2,uint param_3);  sigmaRE/5_game_source/D2sound/_unattributed/code.cpp */
/* DATATBLS_LvlTbls_6fdbc300  D2Common.dll +0x6c300  int DATATBLS_LvlTbls_6fdbc300(byte *reg_EAX);  sigmaRE/5_game_source/D2Common/DATATBLS/LvlTbls.cpp */
/* p_D2Win_DAT_6f901488  D2Win.dll +0x21488  (game variable DAT_6f901488)  sigmaRE/5_game_source/D2Win/include/globals.h */
/* p_D2Win_DAT_6f90148c  D2Win.dll +0x2148c  (game variable DAT_6f90148c)  sigmaRE/5_game_source/D2Win/include/globals.h */
/* p_D2Win_DAT_6f9014a0  D2Win.dll +0x214a0  (game variable DAT_6f9014a0)  sigmaRE/5_game_source/D2Win/include/globals.h */
/* p_D2Win_DAT_6f9014b0  D2Win.dll +0x214b0  (game variable DAT_6f9014b0)  sigmaRE/5_game_source/D2Win/include/globals.h */
/* p_D2Win_DAT_6f9aa658  D2Win.dll +0xca658  (game variable DAT_6f9aa658)  sigmaRE/5_game_source/D2Win/include/globals.h */
/* p_D2Win_DAT_6f9aa65c  D2Win.dll +0xca65c  (game variable DAT_6f9aa65c)  sigmaRE/5_game_source/D2Win/include/globals.h */
/* p_D2Multi_DAT_6f9e9c60  D2Multi.dll +0x19c60  (game variable DAT_6f9e9c60)  sigmaRE/5_game_source/D2Multi/include/globals.h */
/* p_D2Multi_DAT_6fa08f18  D2Multi.dll +0x38f18  (game variable DAT_6fa08f18)  sigmaRE/5_game_source/D2Multi/include/globals.h */
/* p_D2Multi_DAT_6fa09cc0  D2Multi.dll +0x39cc0  (game variable DAT_6fa09cc0)  sigmaRE/5_game_source/D2Multi/include/globals.h */
/* p_D2Multi_DAT_6fa09cd8  D2Multi.dll +0x39cd8  (game variable DAT_6fa09cd8)  sigmaRE/5_game_source/D2Multi/include/globals.h */
/* p_D2Multi_DAT_6fa0a0c8  D2Multi.dll +0x3a0c8  (game variable DAT_6fa0a0c8)  sigmaRE/5_game_source/D2Multi/include/globals.h */
/* p_D2Multi_DAT_6fa0a0d0  D2Multi.dll +0x3a0d0  (game variable DAT_6fa0a0d0)  sigmaRE/5_game_source/D2Multi/include/globals.h */
/* p_D2MCPClient_DAT_6fa2aeb4  D2MCPClient.dll +0xaeb4  (game variable DAT_6fa2aeb4)  sigmaRE/5_game_source/D2MCPClient/include/globals.h */
/* p_D2MCPClient_DAT_6fa2aed8  D2MCPClient.dll +0xaed8  (game variable DAT_6fa2aed8)  sigmaRE/5_game_source/D2MCPClient/include/globals.h */
/* p_D2MCPClient_DAT_6fa2b028  D2MCPClient.dll +0xb028  (game variable DAT_6fa2b028)  sigmaRE/5_game_source/D2MCPClient/include/globals.h */
/* p_D2MCPClient_DAT_6fa2b1c8  D2MCPClient.dll +0xb1c8  (game variable DAT_6fa2b1c8)  sigmaRE/5_game_source/D2MCPClient/include/globals.h */
/* p_D2Launch_DAT_6fa65abc  D2Launch.dll +0x25abc  (game variable DAT_6fa65abc)  sigmaRE/5_game_source/D2Launch/include/globals.h */
/* p_D2Client_DAT_6fb80680  D2Client.dll +0xd0680  (game variable DAT_6fb80680)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb84290  D2Client.dll +0xd4290  (game variable DAT_6fb84290)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb84390  D2Client.dll +0xd4390  (game variable DAT_6fb84390)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb869c4  D2Client.dll +0xd69c4  (game variable DAT_6fb869c4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8bc48  D2Client.dll +0xdbc48  (game variable DAT_6fb8bc48)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8bc4c  D2Client.dll +0xdbc4c  (game variable DAT_6fb8bc4c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8bc54  D2Client.dll +0xdbc54  (game variable DAT_6fb8bc54)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8bc58  D2Client.dll +0xdbc58  (game variable DAT_6fb8bc58)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8bdb8  D2Client.dll +0xdbdb8  (game variable DAT_6fb8bdb8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8be18  D2Client.dll +0xdbe18  (game variable DAT_6fb8be18)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8d538  D2Client.dll +0xdd538  (game variable DAT_6fb8d538)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8d5d0  D2Client.dll +0xdd5d0  (game variable DAT_6fb8d5d0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8d810  D2Client.dll +0xdd810  (game variable DAT_6fb8d810)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8d854  D2Client.dll +0xdd854  (game variable DAT_6fb8d854)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8d8a0  D2Client.dll +0xdd8a0  (game variable DAT_6fb8d8a0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8da10  D2Client.dll +0xdda10  (game variable DAT_6fb8da10)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8de60  D2Client.dll +0xdde60  (game variable DAT_6fb8de60)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8e85c  D2Client.dll +0xde85c  (game variable DAT_6fb8e85c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8e868  D2Client.dll +0xde868  (game variable DAT_6fb8e868)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8e928  D2Client.dll +0xde928  (game variable DAT_6fb8e928)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb8ea48  D2Client.dll +0xdea48  (game variable DAT_6fb8ea48)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90ea4  D2Client.dll +0xe0ea4  (game variable DAT_6fb90ea4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90ea8  D2Client.dll +0xe0ea8  (game variable DAT_6fb90ea8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90eac  D2Client.dll +0xe0eac  (game variable DAT_6fb90eac)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90eb0  D2Client.dll +0xe0eb0  (game variable DAT_6fb90eb0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90eb4  D2Client.dll +0xe0eb4  (game variable DAT_6fb90eb4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90eb8, p_D2Client_DAT_6fb90eb8_10293390  D2Client.dll +0xe0eb8  (game variable DAT_6fb90eb8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90ebc, p_D2Client_DAT_6fb90ebc_10293440  D2Client.dll +0xe0ebc  (game variable DAT_6fb90ebc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb90ec4  D2Client.dll +0xe0ec4  (game variable DAT_6fb90ec4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb91180  D2Client.dll +0xe1180  (game variable DAT_6fb91180)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb91388  D2Client.dll +0xe1388  (game variable DAT_6fb91388)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fb928f8  D2Client.dll +0xe28f8  (game variable DAT_6fb928f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba16b0, p_D2Client_DAT_6fba16b0_102969a0  D2Client.dll +0xf16b0  (game variable DAT_6fba16b0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba20c8  D2Client.dll +0xf20c8  (game variable DAT_6fba20c8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba2188  D2Client.dll +0xf2188  (game variable DAT_6fba2188)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba218c  D2Client.dll +0xf218c  (game variable DAT_6fba218c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba23e8  D2Client.dll +0xf23e8  (game variable DAT_6fba23e8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba3ba0  D2Client.dll +0xf3ba0  (game variable DAT_6fba3ba0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba3ee5  D2Client.dll +0xf3ee5  (game variable DAT_6fba3ee5)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba42f0  D2Client.dll +0xf42f0  (game variable DAT_6fba42f0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba46c4  D2Client.dll +0xf46c4  (game variable DAT_6fba46c4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba46c8  D2Client.dll +0xf46c8  (game variable DAT_6fba46c8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba51bc  D2Client.dll +0xf51bc  (game variable DAT_6fba51bc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba5204  D2Client.dll +0xf5204  (game variable DAT_6fba5204)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba5210  D2Client.dll +0xf5210  (game variable DAT_6fba5210)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba5384  D2Client.dll +0xf5384  (game variable DAT_6fba5384)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba538c  D2Client.dll +0xf538c  (game variable DAT_6fba538c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba5390  D2Client.dll +0xf5390  (game variable DAT_6fba5390)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba5394  D2Client.dll +0xf5394  (game variable DAT_6fba5394)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba856c  D2Client.dll +0xf856c  (game variable DAT_6fba856c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba8728  D2Client.dll +0xf8728  (game variable DAT_6fba8728)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba8b94  D2Client.dll +0xf8b94  (game variable DAT_6fba8b94)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba8c9c  D2Client.dll +0xf8c9c  (game variable DAT_6fba8c9c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba9e14  D2Client.dll +0xf9e14  (game variable DAT_6fba9e14)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fba9e18  D2Client.dll +0xf9e18  (game variable DAT_6fba9e18)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad50  D2Client.dll +0xfad50  (game variable DAT_6fbaad50)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad5c  D2Client.dll +0xfad5c  (game variable DAT_6fbaad5c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad60  D2Client.dll +0xfad60  (game variable DAT_6fbaad60)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad64  D2Client.dll +0xfad64  (game variable DAT_6fbaad64)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad68  D2Client.dll +0xfad68  (game variable DAT_6fbaad68)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad80  D2Client.dll +0xfad80  (game variable DAT_6fbaad80)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaad94, p_D2Client_DAT_6fbaad94_102a4de0  D2Client.dll +0xfad94  (game variable DAT_6fbaad94)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaada4, p_D2Client_DAT_6fbaada4_102a4e90  D2Client.dll +0xfada4  (game variable DAT_6fbaada4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaada8  D2Client.dll +0xfada8  (game variable DAT_6fbaada8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaadac, p_D2Client_DAT_6fbaadac_102a4f40  D2Client.dll +0xfadac  (game variable DAT_6fbaadac)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaadb4  D2Client.dll +0xfadb4  (game variable DAT_6fbaadb4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaadd0  D2Client.dll +0xfadd0  (game variable DAT_6fbaadd0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaade4  D2Client.dll +0xfade4  (game variable DAT_6fbaade4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbaade8  D2Client.dll +0xfade8  (game variable DAT_6fbaade8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacd8c  D2Client.dll +0xfcd8c  (game variable DAT_6fbacd8c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacdbc  D2Client.dll +0xfcdbc  (game variable DAT_6fbacdbc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacdbd  D2Client.dll +0xfcdbd  (game variable DAT_6fbacdbd)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacdcd  D2Client.dll +0xfcdcd  (game variable DAT_6fbacdcd)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacdd1  D2Client.dll +0xfcdd1  (game variable DAT_6fbacdd1)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacdd5, p_D2Client_DAT_6fbacdd5_102abb50  D2Client.dll +0xfcdd5  (game variable DAT_6fbacdd5)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbacdd6  D2Client.dll +0xfcdd6  (game variable DAT_6fbacdd6)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbb9a08  D2Client.dll +0x109a08  (game variable DAT_6fbb9a08)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbba608  D2Client.dll +0x10a608  (game variable DAT_6fbba608)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbba808  D2Client.dll +0x10a808  (game variable DAT_6fbba808)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb210  D2Client.dll +0x10b210  (game variable DAT_6fbbb210)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb214  D2Client.dll +0x10b214  (game variable DAT_6fbbb214)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb21c  D2Client.dll +0x10b21c  (game variable DAT_6fbbb21c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb228  D2Client.dll +0x10b228  (game variable DAT_6fbbb228)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb238  D2Client.dll +0x10b238  (game variable DAT_6fbbb238)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb288  D2Client.dll +0x10b288  (game variable DAT_6fbbb288)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb2a4  D2Client.dll +0x10b2a4  (game variable DAT_6fbbb2a4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb2d0  D2Client.dll +0x10b2d0  (game variable DAT_6fbbb2d0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb2f8  D2Client.dll +0x10b2f8  (game variable DAT_6fbbb2f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb35c  D2Client.dll +0x10b35c  (game variable DAT_6fbbb35c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb3b0  D2Client.dll +0x10b3b0  (game variable DAT_6fbbb3b0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb3c8  D2Client.dll +0x10b3c8  (game variable DAT_6fbbb3c8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb3e0  D2Client.dll +0x10b3e0  (game variable DAT_6fbbb3e0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb430  D2Client.dll +0x10b430  (game variable DAT_6fbbb430)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbb9dc  D2Client.dll +0x10b9dc  (game variable DAT_6fbbb9dc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbbf2f3  D2Client.dll +0x10f2f3  (game variable DAT_6fbbf2f3)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc38f4  D2Client.dll +0x1138f4  (game variable DAT_6fbc38f4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3a68  D2Client.dll +0x113a68  (game variable DAT_6fbc3a68)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3a7c  D2Client.dll +0x113a7c  (game variable DAT_6fbc3a7c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3a80  D2Client.dll +0x113a80  (game variable DAT_6fbc3a80)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3aba  D2Client.dll +0x113aba  (game variable DAT_6fbc3aba)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3ac6  D2Client.dll +0x113ac6  (game variable DAT_6fbc3ac6)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3aca  D2Client.dll +0x113aca  (game variable DAT_6fbc3aca)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3ace  D2Client.dll +0x113ace  (game variable DAT_6fbc3ace)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3aec  D2Client.dll +0x113aec  (game variable DAT_6fbc3aec)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3af4  D2Client.dll +0x113af4  (game variable DAT_6fbc3af4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3afa  D2Client.dll +0x113afa  (game variable DAT_6fbc3afa)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc3afb  D2Client.dll +0x113afb  (game variable DAT_6fbc3afb)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc5591  D2Client.dll +0x115591  (game variable DAT_6fbc5591)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc55b8  D2Client.dll +0x1155b8  (game variable DAT_6fbc55b8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc75b8  D2Client.dll +0x1175b8  (game variable DAT_6fbc75b8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc77ec  D2Client.dll +0x1177ec  (game variable DAT_6fbc77ec)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc77fc  D2Client.dll +0x1177fc  (game variable DAT_6fbc77fc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9638  D2Client.dll +0x119638  (game variable DAT_6fbc9638)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc964c  D2Client.dll +0x11964c  (game variable DAT_6fbc964c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc971d, p_D2Client_DAT_6fbc971d_10296c60  D2Client.dll +0x11971d  (game variable DAT_6fbc971d)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9721  D2Client.dll +0x119721  (game variable DAT_6fbc9721)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc973b  D2Client.dll +0x11973b  (game variable DAT_6fbc973b)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc975b  D2Client.dll +0x11975b  (game variable DAT_6fbc975b)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9763  D2Client.dll +0x119763  (game variable DAT_6fbc9763)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc97a8  D2Client.dll +0x1197a8  (game variable DAT_6fbc97a8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc97ac  D2Client.dll +0x1197ac  (game variable DAT_6fbc97ac)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc97b0  D2Client.dll +0x1197b0  (game variable DAT_6fbc97b0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc97f8  D2Client.dll +0x1197f8  (game variable DAT_6fbc97f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9804  D2Client.dll +0x119804  (game variable DAT_6fbc9804)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9810  D2Client.dll +0x119810  (game variable DAT_6fbc9810)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9840  D2Client.dll +0x119840  (game variable DAT_6fbc9840)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9854, p_D2Client_DAT_6fbc9854_102a2b00  D2Client.dll +0x119854  (game variable DAT_6fbc9854)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9858  D2Client.dll +0x119858  (game variable DAT_6fbc9858)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc985c  D2Client.dll +0x11985c  (game variable DAT_6fbc985c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9860  D2Client.dll +0x119860  (game variable DAT_6fbc9860)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9928  D2Client.dll +0x119928  (game variable DAT_6fbc9928)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc995c  D2Client.dll +0x11995c  (game variable DAT_6fbc995c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9960  D2Client.dll +0x119960  (game variable DAT_6fbc9960)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9968  D2Client.dll +0x119968  (game variable DAT_6fbc9968)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9a58  D2Client.dll +0x119a58  (game variable DAT_6fbc9a58)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9b48  D2Client.dll +0x119b48  (game variable DAT_6fbc9b48)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9c38  D2Client.dll +0x119c38  (game variable DAT_6fbc9c38)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9d30  D2Client.dll +0x119d30  (game variable DAT_6fbc9d30)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9d70  D2Client.dll +0x119d70  (game variable DAT_6fbc9d70)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9dd0  D2Client.dll +0x119dd0  (game variable DAT_6fbc9dd0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9e20  D2Client.dll +0x119e20  (game variable DAT_6fbc9e20)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbc9e60  D2Client.dll +0x119e60  (game variable DAT_6fbc9e60)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca2e4  D2Client.dll +0x11a2e4  (game variable DAT_6fbca2e4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca2e6  D2Client.dll +0x11a2e6  (game variable DAT_6fbca2e6)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca754  D2Client.dll +0x11a754  (game variable DAT_6fbca754)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca758  D2Client.dll +0x11a758  (game variable DAT_6fbca758)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca75c  D2Client.dll +0x11a75c  (game variable DAT_6fbca75c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca760  D2Client.dll +0x11a760  (game variable DAT_6fbca760)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca764  D2Client.dll +0x11a764  (game variable DAT_6fbca764)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca768  D2Client.dll +0x11a768  (game variable DAT_6fbca768)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca76c  D2Client.dll +0x11a76c  (game variable DAT_6fbca76c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca774  D2Client.dll +0x11a774  (game variable DAT_6fbca774)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca784  D2Client.dll +0x11a784  (game variable DAT_6fbca784)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca7c8  D2Client.dll +0x11a7c8  (game variable DAT_6fbca7c8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca7d0  D2Client.dll +0x11a7d0  (game variable DAT_6fbca7d0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca7d1  D2Client.dll +0x11a7d1  (game variable DAT_6fbca7d1)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca7d2  D2Client.dll +0x11a7d2  (game variable DAT_6fbca7d2)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbca7d3  D2Client.dll +0x11a7d3  (game variable DAT_6fbca7d3)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb824  D2Client.dll +0x11b824  (game variable DAT_6fbcb824)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb828  D2Client.dll +0x11b828  (game variable DAT_6fbcb828)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb82c  D2Client.dll +0x11b82c  (game variable DAT_6fbcb82c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb834  D2Client.dll +0x11b834  (game variable DAT_6fbcb834)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb854  D2Client.dll +0x11b854  (game variable DAT_6fbcb854)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb864  D2Client.dll +0x11b864  (game variable DAT_6fbcb864)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb980  D2Client.dll +0x11b980  (game variable DAT_6fbcb980)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb99c  D2Client.dll +0x11b99c  (game variable DAT_6fbcb99c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb9a0  D2Client.dll +0x11b9a0  (game variable DAT_6fbcb9a0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb9a4  D2Client.dll +0x11b9a4  (game variable DAT_6fbcb9a4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb9c0  D2Client.dll +0x11b9c0  (game variable DAT_6fbcb9c0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcb9c4  D2Client.dll +0x11b9c4  (game variable DAT_6fbcb9c4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbbb0  D2Client.dll +0x11bbb0  (game variable DAT_6fbcbbb0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbbc4  D2Client.dll +0x11bbc4  (game variable DAT_6fbcbbc4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbbfc  D2Client.dll +0x11bbfc  (game variable DAT_6fbcbbfc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc04, p_D2Client_DAT_6fbcbc04_10297d10  D2Client.dll +0x11bc04  (game variable DAT_6fbcbc04)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc08  D2Client.dll +0x11bc08  (game variable DAT_6fbcbc08)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc10  D2Client.dll +0x11bc10  (game variable DAT_6fbcbc10)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc14  D2Client.dll +0x11bc14  (game variable DAT_6fbcbc14)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc28  D2Client.dll +0x11bc28  (game variable DAT_6fbcbc28)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc2c  D2Client.dll +0x11bc2c  (game variable DAT_6fbcbc2c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc34  D2Client.dll +0x11bc34  (game variable DAT_6fbcbc34)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc38  D2Client.dll +0x11bc38  (game variable DAT_6fbcbc38)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc3c  D2Client.dll +0x11bc3c  (game variable DAT_6fbcbc3c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc48  D2Client.dll +0x11bc48  (game variable DAT_6fbcbc48)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc4c  D2Client.dll +0x11bc4c  (game variable DAT_6fbcbc4c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc54  D2Client.dll +0x11bc54  (game variable DAT_6fbcbc54)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc58  D2Client.dll +0x11bc58  (game variable DAT_6fbcbc58)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc5c  D2Client.dll +0x11bc5c  (game variable DAT_6fbcbc5c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc60  D2Client.dll +0x11bc60  (game variable DAT_6fbcbc60)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc64  D2Client.dll +0x11bc64  (game variable DAT_6fbcbc64)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc70  D2Client.dll +0x11bc70  (game variable DAT_6fbcbc70)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc74  D2Client.dll +0x11bc74  (game variable DAT_6fbcbc74)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc78  D2Client.dll +0x11bc78  (game variable DAT_6fbcbc78)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc84  D2Client.dll +0x11bc84  (game variable DAT_6fbcbc84)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc90  D2Client.dll +0x11bc90  (game variable DAT_6fbcbc90)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc94  D2Client.dll +0x11bc94  (game variable DAT_6fbcbc94)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbc98  D2Client.dll +0x11bc98  (game variable DAT_6fbcbc98)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbcb4  D2Client.dll +0x11bcb4  (game variable DAT_6fbcbcb4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbcc8  D2Client.dll +0x11bcc8  (game variable DAT_6fbcbcc8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbcdc  D2Client.dll +0x11bcdc  (game variable DAT_6fbcbcdc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbcf0  D2Client.dll +0x11bcf0  (game variable DAT_6fbcbcf0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd04  D2Client.dll +0x11bd04  (game variable DAT_6fbcbd04)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd18  D2Client.dll +0x11bd18  (game variable DAT_6fbcbd18)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd2c  D2Client.dll +0x11bd2c  (game variable DAT_6fbcbd2c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd40  D2Client.dll +0x11bd40  (game variable DAT_6fbcbd40)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd54  D2Client.dll +0x11bd54  (game variable DAT_6fbcbd54)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd68  D2Client.dll +0x11bd68  (game variable DAT_6fbcbd68)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbd94  D2Client.dll +0x11bd94  (game variable DAT_6fbcbd94)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe5c  D2Client.dll +0x11be5c  (game variable DAT_6fbcbe5c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe60  D2Client.dll +0x11be60  (game variable DAT_6fbcbe60)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe64, p_D2Client_DAT_6fbcbe64_102981e0  D2Client.dll +0x11be64  (game variable DAT_6fbcbe64)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe68  D2Client.dll +0x11be68  (game variable DAT_6fbcbe68)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe6c  D2Client.dll +0x11be6c  (game variable DAT_6fbcbe6c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe74, p_D2Client_DAT_6fbcbe74_10298290  D2Client.dll +0x11be74  (game variable DAT_6fbcbe74)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe78  D2Client.dll +0x11be78  (game variable DAT_6fbcbe78)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe7c  D2Client.dll +0x11be7c  (game variable DAT_6fbcbe7c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe80  D2Client.dll +0x11be80  (game variable DAT_6fbcbe80)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe84  D2Client.dll +0x11be84  (game variable DAT_6fbcbe84)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe88  D2Client.dll +0x11be88  (game variable DAT_6fbcbe88)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe8c  D2Client.dll +0x11be8c  (game variable DAT_6fbcbe8c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbe94  D2Client.dll +0x11be94  (game variable DAT_6fbcbe94)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbeb4  D2Client.dll +0x11beb4  (game variable DAT_6fbcbeb4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbeb8  D2Client.dll +0x11beb8  (game variable DAT_6fbcbeb8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbebc  D2Client.dll +0x11bebc  (game variable DAT_6fbcbebc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbec0  D2Client.dll +0x11bec0  (game variable DAT_6fbcbec0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbec4  D2Client.dll +0x11bec4  (game variable DAT_6fbcbec4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbec8  D2Client.dll +0x11bec8  (game variable DAT_6fbcbec8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbecc  D2Client.dll +0x11becc  (game variable DAT_6fbcbecc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbed0  D2Client.dll +0x11bed0  (game variable DAT_6fbcbed0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbedc  D2Client.dll +0x11bedc  (game variable DAT_6fbcbedc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbee0  D2Client.dll +0x11bee0  (game variable DAT_6fbcbee0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbeec  D2Client.dll +0x11beec  (game variable DAT_6fbcbeec)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbf00  D2Client.dll +0x11bf00  (game variable DAT_6fbcbf00)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbf30  D2Client.dll +0x11bf30  (game variable DAT_6fbcbf30)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbf34  D2Client.dll +0x11bf34  (game variable DAT_6fbcbf34)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbf38  D2Client.dll +0x11bf38  (game variable DAT_6fbcbf38)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbf40  D2Client.dll +0x11bf40  (game variable DAT_6fbcbf40)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbf78  D2Client.dll +0x11bf78  (game variable DAT_6fbcbf78)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcbff8  D2Client.dll +0x11bff8  (game variable DAT_6fbcbff8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc058  D2Client.dll +0x11c058  (game variable DAT_6fbcc058)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc05c  D2Client.dll +0x11c05c  (game variable DAT_6fbcc05c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc060  D2Client.dll +0x11c060  (game variable DAT_6fbcc060)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc068  D2Client.dll +0x11c068  (game variable DAT_6fbcc068)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc06c  D2Client.dll +0x11c06c  (game variable DAT_6fbcc06c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc070  D2Client.dll +0x11c070  (game variable DAT_6fbcc070)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc074  D2Client.dll +0x11c074  (game variable DAT_6fbcc074)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc078  D2Client.dll +0x11c078  (game variable DAT_6fbcc078)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc07c  D2Client.dll +0x11c07c  (game variable DAT_6fbcc07c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc098  D2Client.dll +0x11c098  (game variable DAT_6fbcc098)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc1b0  D2Client.dll +0x11c1b0  (game variable DAT_6fbcc1b0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc1c4  D2Client.dll +0x11c1c4  (game variable DAT_6fbcc1c4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc1e8  D2Client.dll +0x11c1e8  (game variable DAT_6fbcc1e8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc1ec  D2Client.dll +0x11c1ec  (game variable DAT_6fbcc1ec)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc1f8, p_D2Client_DAT_6fbcc1f8_102aa480  D2Client.dll +0x11c1f8  (game variable DAT_6fbcc1f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc1fc  D2Client.dll +0x11c1fc  (game variable DAT_6fbcc1fc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc216  D2Client.dll +0x11c216  (game variable DAT_6fbcc216)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc24c  D2Client.dll +0x11c24c  (game variable DAT_6fbcc24c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc250  D2Client.dll +0x11c250  (game variable DAT_6fbcc250)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc254  D2Client.dll +0x11c254  (game variable DAT_6fbcc254)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc258  D2Client.dll +0x11c258  (game variable DAT_6fbcc258)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc25c  D2Client.dll +0x11c25c  (game variable DAT_6fbcc25c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc260  D2Client.dll +0x11c260  (game variable DAT_6fbcc260)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc264  D2Client.dll +0x11c264  (game variable DAT_6fbcc264)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc268  D2Client.dll +0x11c268  (game variable DAT_6fbcc268)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc278  D2Client.dll +0x11c278  (game variable DAT_6fbcc278)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc27c  D2Client.dll +0x11c27c  (game variable DAT_6fbcc27c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc280  D2Client.dll +0x11c280  (game variable DAT_6fbcc280)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc2ac  D2Client.dll +0x11c2ac  (game variable DAT_6fbcc2ac)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc2cc  D2Client.dll +0x11c2cc  (game variable DAT_6fbcc2cc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc2f0  D2Client.dll +0x11c2f0  (game variable DAT_6fbcc2f0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc2f4  D2Client.dll +0x11c2f4  (game variable DAT_6fbcc2f4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc2f8, p_D2Client_DAT_6fbcc2f8_102aa3d0  D2Client.dll +0x11c2f8  (game variable DAT_6fbcc2f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc2fc  D2Client.dll +0x11c2fc  (game variable DAT_6fbcc2fc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc300  D2Client.dll +0x11c300  (game variable DAT_6fbcc300)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc304, p_D2Client_DAT_6fbcc304_10290ef0  D2Client.dll +0x11c304  (game variable DAT_6fbcc304)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc334  D2Client.dll +0x11c334  (game variable DAT_6fbcc334)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc34c  D2Client.dll +0x11c34c  (game variable DAT_6fbcc34c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc354  D2Client.dll +0x11c354  (game variable DAT_6fbcc354)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc368  D2Client.dll +0x11c368  (game variable DAT_6fbcc368)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc36c  D2Client.dll +0x11c36c  (game variable DAT_6fbcc36c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc370  D2Client.dll +0x11c370  (game variable DAT_6fbcc370)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc390  D2Client.dll +0x11c390  (game variable DAT_6fbcc390)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc394  D2Client.dll +0x11c394  (game variable DAT_6fbcc394)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc39c  D2Client.dll +0x11c39c  (game variable DAT_6fbcc39c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3a0  D2Client.dll +0x11c3a0  (game variable DAT_6fbcc3a0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3a4  D2Client.dll +0x11c3a4  (game variable DAT_6fbcc3a4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3b8  D2Client.dll +0x11c3b8  (game variable DAT_6fbcc3b8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3bc  D2Client.dll +0x11c3bc  (game variable DAT_6fbcc3bc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3c4  D2Client.dll +0x11c3c4  (game variable DAT_6fbcc3c4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3dc  D2Client.dll +0x11c3dc  (game variable DAT_6fbcc3dc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3de  D2Client.dll +0x11c3de  (game variable DAT_6fbcc3de)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3e8  D2Client.dll +0x11c3e8  (game variable DAT_6fbcc3e8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3ec  D2Client.dll +0x11c3ec  (game variable DAT_6fbcc3ec)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3f0  D2Client.dll +0x11c3f0  (game variable DAT_6fbcc3f0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3f8  D2Client.dll +0x11c3f8  (game variable DAT_6fbcc3f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc3fc  D2Client.dll +0x11c3fc  (game variable DAT_6fbcc3fc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc414  D2Client.dll +0x11c414  (game variable DAT_6fbcc414)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc418  D2Client.dll +0x11c418  (game variable DAT_6fbcc418)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc434  D2Client.dll +0x11c434  (game variable DAT_6fbcc434)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc468  D2Client.dll +0x11c468  (game variable DAT_6fbcc468)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc46c  D2Client.dll +0x11c46c  (game variable DAT_6fbcc46c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc470  D2Client.dll +0x11c470  (game variable DAT_6fbcc470)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc474  D2Client.dll +0x11c474  (game variable DAT_6fbcc474)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc47c  D2Client.dll +0x11c47c  (game variable DAT_6fbcc47c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc484  D2Client.dll +0x11c484  (game variable DAT_6fbcc484)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4b0  D2Client.dll +0x11c4b0  (game variable DAT_6fbcc4b0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4b4  D2Client.dll +0x11c4b4  (game variable DAT_6fbcc4b4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4c0  D2Client.dll +0x11c4c0  (game variable DAT_6fbcc4c0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4c4  D2Client.dll +0x11c4c4  (game variable DAT_6fbcc4c4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4c8  D2Client.dll +0x11c4c8  (game variable DAT_6fbcc4c8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4cc  D2Client.dll +0x11c4cc  (game variable DAT_6fbcc4cc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4d0  D2Client.dll +0x11c4d0  (game variable DAT_6fbcc4d0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4d4  D2Client.dll +0x11c4d4  (game variable DAT_6fbcc4d4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4e0  D2Client.dll +0x11c4e0  (game variable DAT_6fbcc4e0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4e8  D2Client.dll +0x11c4e8  (game variable DAT_6fbcc4e8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4f0  D2Client.dll +0x11c4f0  (game variable DAT_6fbcc4f0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4f8  D2Client.dll +0x11c4f8  (game variable DAT_6fbcc4f8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc4fc  D2Client.dll +0x11c4fc  (game variable DAT_6fbcc4fc)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc500  D2Client.dll +0x11c500  (game variable DAT_6fbcc500)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc534  D2Client.dll +0x11c534  (game variable DAT_6fbcc534)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc538  D2Client.dll +0x11c538  (game variable DAT_6fbcc538)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc540  D2Client.dll +0x11c540  (game variable DAT_6fbcc540)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcc544  D2Client.dll +0x11c544  (game variable DAT_6fbcc544)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcec80  D2Client.dll +0x11ec80  (game variable DAT_6fbcec80)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbcfed8  D2Client.dll +0x11fed8  (game variable DAT_6fbcfed8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbd23c8  D2Client.dll +0x1223c8  (game variable DAT_6fbd23c8)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbd33f4  D2Client.dll +0x1233f4  (game variable DAT_6fbd33f4)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbd3448  D2Client.dll +0x123448  (game variable DAT_6fbd3448)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbd3498  D2Client.dll +0x123498  (game variable DAT_6fbd3498)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbd349c  D2Client.dll +0x12349c  (game variable DAT_6fbd349c)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Client_DAT_6fbd34c0  D2Client.dll +0x1234c0  (game variable DAT_6fbd34c0)  sigmaRE/5_game_source/D2Client/include/globals.h */
/* p_D2Net_DAT_6fbfa900  D2Net.dll +0xa900  (game variable DAT_6fbfa900)  sigmaRE/5_game_source/D2Net/include/globals.h */
/* p_D2Net_DAT_6fbfabd8  D2Net.dll +0xabd8  (game variable DAT_6fbfabd8)  sigmaRE/5_game_source/D2Net/include/globals.h */
/* p_D2Net_DAT_6fbfb400  D2Net.dll +0xb400  (game variable DAT_6fbfb400)  sigmaRE/5_game_source/D2Net/include/globals.h */
/* p_D2Lang_DAT_6fc10a6c  D2Lang.dll +0x10a6c  (game variable DAT_6fc10a6c)  sigmaRE/5_game_source/D2Lang/include/globals.h */
/* p_D2Lang_DAT_6fc10a80  D2Lang.dll +0x10a80  (game variable DAT_6fc10a80)  sigmaRE/5_game_source/D2Lang/include/globals.h */
/* p_D2Game_DAT_6fd18be0  D2Game.dll +0xf8be0  (game variable DAT_6fd18be0)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd19f68  D2Game.dll +0xf9f68  (game variable DAT_6fd19f68)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1a01c  D2Game.dll +0xfa01c  (game variable DAT_6fd1a01c)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1a048  D2Game.dll +0xfa048  (game variable DAT_6fd1a048)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1a078  D2Game.dll +0xfa078  (game variable DAT_6fd1a078)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1a3dc  D2Game.dll +0xfa3dc  (game variable DAT_6fd1a3dc)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1a3f8  D2Game.dll +0xfa3f8  (game variable DAT_6fd1a3f8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1a5f8  D2Game.dll +0xfa5f8  (game variable DAT_6fd1a5f8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1b454  D2Game.dll +0xfb454  (game variable DAT_6fd1b454)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1b770  D2Game.dll +0xfb770  (game variable DAT_6fd1b770)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1b870  D2Game.dll +0xfb870  (game variable DAT_6fd1b870)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd1c3e8  D2Game.dll +0xfc3e8  (game variable DAT_6fd1c3e8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd22ab0  D2Game.dll +0x102ab0  (game variable DAT_6fd22ab0)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd26f0c  D2Game.dll +0x106f0c  (game variable DAT_6fd26f0c)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd27238  D2Game.dll +0x107238  (game variable DAT_6fd27238)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd27330  D2Game.dll +0x107330  (game variable DAT_6fd27330)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd27338  D2Game.dll +0x107338  (game variable DAT_6fd27338)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd274a8  D2Game.dll +0x1074a8  (game variable DAT_6fd274a8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd277a8  D2Game.dll +0x1077a8  (game variable DAT_6fd277a8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd27bb8  D2Game.dll +0x107bb8  (game variable DAT_6fd27bb8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2d8bc  D2Game.dll +0x10d8bc  (game variable DAT_6fd2d8bc)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2d970, p_D2Game_DAT_6fd2d970_102a91f0  D2Game.dll +0x10d970  (game variable DAT_6fd2d970)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2da44  D2Game.dll +0x10da44  (game variable DAT_6fd2da44)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2da48  D2Game.dll +0x10da48  (game variable DAT_6fd2da48)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2db68  D2Game.dll +0x10db68  (game variable DAT_6fd2db68)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2e050  D2Game.dll +0x10e050  (game variable DAT_6fd2e050)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2e35c  D2Game.dll +0x10e35c  (game variable DAT_6fd2e35c)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2e550  D2Game.dll +0x10e550  (game variable DAT_6fd2e550)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2e788  D2Game.dll +0x10e788  (game variable DAT_6fd2e788)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2f448  D2Game.dll +0x10f448  (game variable DAT_6fd2f448)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd2f850  D2Game.dll +0x10f850  (game variable DAT_6fd2f850)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd30208  D2Game.dll +0x110208  (game variable DAT_6fd30208)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd303b8  D2Game.dll +0x1103b8  (game variable DAT_6fd303b8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd307b8  D2Game.dll +0x1107b8  (game variable DAT_6fd307b8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd30bb8  D2Game.dll +0x110bb8  (game variable DAT_6fd30bb8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd30bd0  D2Game.dll +0x110bd0  (game variable DAT_6fd30bd0)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd30be8  D2Game.dll +0x110be8  (game variable DAT_6fd30be8)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd30c08  D2Game.dll +0x110c08  (game variable DAT_6fd30c08)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c08, p_D2Game_DAT_6fd31c08_1028cba0  D2Game.dll +0x111c08  (game variable DAT_6fd31c08)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c18  D2Game.dll +0x111c18  (game variable DAT_6fd31c18)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c24  D2Game.dll +0x111c24  (game variable DAT_6fd31c24)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c30  D2Game.dll +0x111c30  (game variable DAT_6fd31c30)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c3c  D2Game.dll +0x111c3c  (game variable DAT_6fd31c3c)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c44  D2Game.dll +0x111c44  (game variable DAT_6fd31c44)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31c48  D2Game.dll +0x111c48  (game variable DAT_6fd31c48)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31f70  D2Game.dll +0x111f70  (game variable DAT_6fd31f70)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Game_DAT_6fd31f84  D2Game.dll +0x111f84  (game variable DAT_6fd31f84)  sigmaRE/5_game_source/D2Game/include/globals.h */
/* p_D2Common_DAT_6fde4608  D2Common.dll +0x94608  (game variable DAT_6fde4608)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fde4734  D2Common.dll +0x94734  (game variable DAT_6fde4734)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fde9e1c, p_D2Common_DAT_6fde9e1c_10279cd0  D2Common.dll +0x99e1c  (game variable DAT_6fde9e1c)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdeb0c8  D2Common.dll +0x9b0c8  (game variable DAT_6fdeb0c8)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fded378  D2Common.dll +0x9d378  (game variable DAT_6fded378)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fded390  D2Common.dll +0x9d390  (game variable DAT_6fded390)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdeefe4  D2Common.dll +0x9efe4  (game variable DAT_6fdeefe4)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdeefe8  D2Common.dll +0x9efe8  (game variable DAT_6fdeefe8)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefa58, p_D2Common_DAT_6fdefa58_102a45a0  D2Common.dll +0x9fa58  (game variable DAT_6fdefa58)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefa5c  D2Common.dll +0x9fa5c  (game variable DAT_6fdefa5c)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefb94  D2Common.dll +0x9fb94  (game variable DAT_6fdefb94)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefb98  D2Common.dll +0x9fb98  (game variable DAT_6fdefb98)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefba4  D2Common.dll +0x9fba4  (game variable DAT_6fdefba4)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefba8  D2Common.dll +0x9fba8  (game variable DAT_6fdefba8)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdefbc8  D2Common.dll +0x9fbc8  (game variable DAT_6fdefbc8)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdeff6c  D2Common.dll +0x9ff6c  (game variable DAT_6fdeff6c)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdf1420  D2Common.dll +0xa1420  (game variable DAT_6fdf1420)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_D2Common_DAT_6fdf1424  D2Common.dll +0xa1424  (game variable DAT_6fdf1424)  sigmaRE/5_game_source/D2Common/include/globals.h */
/* p_Bnclient_DAT_6ff3e8d8  Bnclient.dll +0x1e8d8  (game variable DAT_6ff3e8d8)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* p_Bnclient_DAT_6ff3e8e0  Bnclient.dll +0x1e8e0  (game variable DAT_6ff3e8e0)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* p_Bnclient_DAT_6ff3e8e4  Bnclient.dll +0x1e8e4  (game variable DAT_6ff3e8e4)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* p_Bnclient_DAT_6ff3f1dc  Bnclient.dll +0x1f1dc  (game variable DAT_6ff3f1dc)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* p_Bnclient_DAT_6ff3f1f4  Bnclient.dll +0x1f1f4  (game variable DAT_6ff3f1f4)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* p_Bnclient_DAT_6ff3f654  Bnclient.dll +0x1f654  (game variable DAT_6ff3f654)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* p_Bnclient_DAT_6ff3f930  Bnclient.dll +0x1f930  (game variable DAT_6ff3f930)  sigmaRE/5_game_source/Bnclient/include/globals.h */
/* DRLG_DrlgRoom_6fd94950  D2Common.dll +0x44950  void DRLG_DrlgRoom_6fd94950(int reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Common/DRLG/DrlgRoom.cpp */
/* DRLG_DrlgRoom_6fd94bd0  D2Common.dll +0x44bd0  uint32_t * DRLG_DrlgRoom_6fd94bd0(int param_1,int reg_EBX);  sigmaRE/5_game_source/D2Common/DRLG/DrlgRoom.cpp */
/* DRLG_Maze_6fd5eec0  D2Common.dll +0xeec0  uint32_t __fastcall DRLG_Maze_6fd5eec0(int *param_1,int param_2,uint32_t reg_EAX);  sigmaRE/5_game_source/D2Common/DRLG/Maze.cpp */
/* DRLG_Maze_6fd5f110  D2Common.dll +0xf110  void DRLG_Maze_6fd5f110(int *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Common/DRLG/Maze.cpp */
/* DRLG_Maze_6fd60010  D2Common.dll +0x10010  void DRLG_Maze_6fd60010(int reg_EAX);  sigmaRE/5_game_source/D2Common/DRLG/Maze.cpp */
/* DRLG_Outdoors_6fd92ce0  D2Common.dll +0x42ce0  uint32_t DRLG_Outdoors_6fd92ce0(int param_1,int param_2,int param_3,byte param_4,int reg_ESI);  sigmaRE/5_game_source/D2Common/DRLG/Outdoors.cpp */
/* DUNGEON_Dungeon_6fd8bdd0  D2Common.dll +0x3bdd0  void DUNGEON_Dungeon_6fd8bdd0(int reg_EAX);  sigmaRE/5_game_source/D2Common/DUNGEON/Dungeon.cpp */
/* ENGINE_GfxUtil_6fb1db40  D2Client.dll +0x6db40  void ENGINE_GfxUtil_6fb1db40(uint32_t reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Client/ENGINE/GfxUtil.cpp */
/* ENGINE_GfxUtil_6fb1e2c0  D2Client.dll +0x6e2c0  uint32_t ENGINE_GfxUtil_6fb1e2c0(uint *param_1,uint param_2,int reg_EAX);  sigmaRE/5_game_source/D2Client/ENGINE/GfxUtil.cpp */
/* ENGINE_Gfx_6fb19b40  D2Client.dll +0x69b40  uint32_t ENGINE_Gfx_6fb19b40(uint32_t *param_1,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb19f20  D2Client.dll +0x69f20  uint32_t ENGINE_Gfx_6fb19f20(uint32_t *reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb1aee0  D2Client.dll +0x6aee0  void ENGINE_Gfx_6fb1aee0(int *param_1,uint32_t param_2,int param_3,int param_4,int param_5,int param_6);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb1b5a0  D2Client.dll +0x6b5a0  uint32_t ENGINE_Gfx_6fb1b5a0(uint32_t param_1,int param_2,uint *reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb1ba90  D2Client.dll +0x6ba90  uint32_t ENGINE_Gfx_6fb1ba90(uint *reg_EAX,byte *reg_EDI);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb1c490  D2Client.dll +0x6c490  uint32_t ENGINE_Gfx_6fb1c490(uint *param_1,int reg_EAX,uint reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb1cb30  D2Client.dll +0x6cb30  void ENGINE_Gfx_6fb1cb30(int reg_ESI);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* ENGINE_Gfx_6fb1d280  D2Client.dll +0x6d280  bool ENGINE_Gfx_6fb1d280(int reg_EBX);  sigmaRE/5_game_source/D2Client/ENGINE/Gfx.cpp */
/* Fog_10007  Fog.dll ordinal 10007  int __fastcall Fog_10007(int param_1,char *param_2,int param_3,uint32_t reg_EBX);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_Safesock_and_Src_IFF.cpp */
/* Fog_10022  Fog.dll ordinal 10022  uint Fog_10022(void);  sigmaRE/5_game_source/Fog/Src/ErrorManager.cpp */
/* Fog_10024  Fog.dll ordinal 10024  void Fog_10024(uint32_t param_1,uint32_t param_2,uint32_t param_3);  sigmaRE/5_game_source/Fog/Src/ErrorManager.cpp */
/* Fog_10042  Fog.dll ordinal 10042  uint32_t * __fastcall Fog_10042(uint32_t param_1,char *param_2,uint32_t param_3);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10043  Fog.dll ordinal 10043  uint32_t Fog_10043(void);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10045  Fog.dll ordinal 10045  uint32_t * __thiscall Fog_10045(void *this,char *param_2,uint32_t param_3,uint32_t reg_EDX);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10046  Fog.dll ordinal 10046  uint32_t __fastcall Fog_10046(uint param_1,uint param_2);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10050  Fog.dll ordinal 10050  void __fastcall Fog_10050(LPCRITICAL_SECTION param_1,uint32_t reg_EBX);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_ErrorManager_and_Src_Excel_Excel.cpp */
/* Fog_10055  Fog.dll ordinal 10055  int Fog_10055(uint32_t reg_EBX);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_LogManager_and_Src_AsyncData.cpp */
/* Fog_10070  Fog.dll ordinal 10070  int Fog_10070(int param_1,int param_2,ushort param_3,int reg_EBX);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSSocket_and_Src_DataArrays.cpp */
/* Fog_10086  Fog.dll ordinal 10086  void Fog_10086(byte *param_1,uint param_2);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10091  Fog.dll ordinal 10091  int * __fastcall Fog_10091(int *param_1,uint32_t param_2,int param_3,int param_4,int *param_5,int *param_6, uint32_t param_7,uint32_t param_8,int reg_EBX);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10092  Fog.dll ordinal 10092  uint __fastcall Fog_10092(int param_1);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10094  Fog.dll ordinal 10094  uint32_t __fastcall Fog_10094(int param_1);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_AsyncData_and_Src_D2QSSocket.cpp */
/* Fog_10095  Fog.dll ordinal 10095  uint32_t __fastcall Fog_10095(int param_1);  sigmaRE/5_game_source/Fog/Src/AsyncData.cpp */
/* Fog_10097  Fog.dll ordinal 10097  void __fastcall Fog_10097(uint param_1);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_AsyncData_and_Src_D2QSSocket.cpp */
/* Fog_10102  Fog.dll ordinal 10102  void __fastcall Fog_10102(uint32_t param_1,uint32_t param_2);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10103  Fog.dll ordinal 10103  void __fastcall Fog_10103(uint32_t param_1);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10105  Fog.dll ordinal 10105  void __fastcall Fog_10105(uint32_t param_1,uint32_t param_2);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10107  Fog.dll ordinal 10107  void __fastcall Fog_10107(LPCSTR param_1,DWORD param_2,DWORD param_3,LPSECURITY_ATTRIBUTES param_4,DWORD param_5, DWORD param_6,HANDLE param_7);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10109  Fog.dll ordinal 10109  void __fastcall Fog_10109(HANDLE param_1);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10110  Fog.dll ordinal 10110  void __fastcall Fog_10110(HANDLE param_1,LPVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10111  Fog.dll ordinal 10111  void __fastcall Fog_10111(HANDLE param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10114  Fog.dll ordinal 10114  uint32_t __fastcall Fog_10114(char *param_1,uint32_t reg_EBX);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10115  Fog.dll ordinal 10115  void __fastcall Fog_10115(LPCSTR param_1,uint param_2,uint32_t reg_EBX);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10116  Fog.dll ordinal 10116  void __fastcall Fog_10116(LPCSTR param_1,uint param_2);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSQueue_and_Src_LogManager.cpp */
/* Fog_10126  Fog.dll ordinal 10126  void Fog_10126(uint32_t *param_1,uint32_t param_2,int param_3);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
/* Fog_10127  Fog.dll ordinal 10127  int Fog_10127(int param_1);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
/* Fog_10128  Fog.dll ordinal 10128  void Fog_10128(int *param_1,int param_2,int param_3);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
/* Fog_10129  Fog.dll ordinal 10129  uint Fog_10129(uint32_t param_1,int param_2);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
/* Fog_10130  Fog.dll ordinal 10130  void Fog_10130(uint32_t param_1,int param_2);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
/* Fog_10137  Fog.dll ordinal 10137  ushort Fog_10137(byte *param_1);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSSocket_and_Src_DataArrays.cpp */
/* Fog_10207  Fog.dll ordinal 10207  void Fog_10207(int param_1,uint32_t *param_2,int param_3,int param_4,int param_5);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_Excel_Excel_and_Src_Exceptions.cpp */
/* Fog_10208  Fog.dll ordinal 10208  uint32_t * Fog_10208(uint *param_1,int param_2);  sigmaRE/5_game_source/Fog/Src/Excel/Excel.cpp */
/* Fog_10209  Fog.dll ordinal 10209  void Fog_10209(uint *param_1);  sigmaRE/5_game_source/Fog/Src/Excel/Excel.cpp */
/* Fog_10211  Fog.dll ordinal 10211  uint32_t * Fog_10211(char *param_1,uint32_t param_2);  sigmaRE/5_game_source/Fog/Src/Excel/Excel.cpp */
/* Fog_10213  Fog.dll ordinal 10213  uint32_t Fog_10213(int *param_1,uint param_2);  sigmaRE/5_game_source/Fog/_unattributed/between_Src_ErrorManager_and_Src_Excel_Excel.cpp */
/* Fog_10227  Fog.dll ordinal 10227  uint32_t Fog_10227(void);  sigmaRE/5_game_source/Fog/Src/_unattributed/between_Src_D2QSSocket_and_Src_DataArrays.cpp */
/* GAME_Arena_6fcd2560  D2Game.dll +0xb2560  void GAME_Arena_6fcd2560(uint reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Arena.cpp */
/* GAME_CCmd_6fcead60  D2Game.dll +0xcad60  uint32_t GAME_CCmd_6fcead60(int param_1,int reg_EAX,char *reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/CCmd.cpp */
/* GAME_CCmd_6fceae80  D2Game.dll +0xcae80  void GAME_CCmd_6fceae80(int *reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/CCmd.cpp */
/* GAME_Clients_6fc69930  D2Game.dll +0x49930  bool GAME_Clients_6fc69930(uint param_1,uint reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc69fe0  D2Game.dll +0x49fe0  int * __fastcall GAME_Clients_6fc69fe0(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc6a0a0  D2Game.dll +0x4a0a0  uint * GAME_Clients_6fc6a0a0(uint reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc6a190  D2Game.dll +0x4a190  uint32_t GAME_Clients_6fc6a190(uint32_t *param_1,uint param_2,uint param_3,uint param_4,uint reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc6a780  D2Game.dll +0x4a780  void GAME_Clients_6fc6a780(int param_1,uint reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc6ad10  D2Game.dll +0x4ad10  int GAME_Clients_6fc6ad10(int param_1,int reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc6b500  D2Game.dll +0x4b500  void GAME_Clients_6fc6b500(int param_1,void *param_2,int param_3,uint32_t param_4,int reg_EAX,uint reg_EBX, int *reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Clients_6fc6b7f0  D2Game.dll +0x4b7f0  void GAME_Clients_6fc6b7f0(int param_1,int param_2,uint reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Clients.cpp */
/* GAME_Event_6fcae490  D2Game.dll +0x8e490  void GAME_Event_6fcae490(int reg_EAX,uint reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Event.cpp */
/* GAME_Event_6fcae630  D2Game.dll +0x8e630  void GAME_Event_6fcae630(int reg_EBX);  sigmaRE/5_game_source/D2Game/GAME/Event.cpp */
/* GAME_Game_6fc49ba0  D2Game.dll +0x29ba0  void GAME_Game_6fc49ba0(int reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4a220  D2Game.dll +0x2a220  uint GAME_Game_6fc4a220(void);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4a2d0  D2Game.dll +0x2a2d0  void GAME_Game_6fc4a2d0(uint32_t param_1,ushort param_2);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4a6e0  D2Game.dll +0x2a6e0  bool GAME_Game_6fc4a6e0(uint reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4a740  D2Game.dll +0x2a740  uint32_t GAME_Game_6fc4a740(uint param_1,ushort param_2,byte param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,byte param_7,uint32_t param_8,uint32_t param_9, uint32_t param_10,uint32_t param_11,char *reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4a850  D2Game.dll +0x2a850  bool GAME_Game_6fc4a850(uint param_1,char *reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4a900  D2Game.dll +0x2a900  void GAME_Game_6fc4a900(int reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4aac0  D2Game.dll +0x2aac0  void GAME_Game_6fc4aac0(int reg_EAX,uint32_t param_2);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4ab70  D2Game.dll +0x2ab70  uint * GAME_Game_6fc4ab70(int reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4ac60  D2Game.dll +0x2ac60  void GAME_Game_6fc4ac60(int reg_ESI,uint32_t reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4ba10  D2Game.dll +0x2ba10  void GAME_Game_6fc4ba10(void);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4bb10  D2Game.dll +0x2bb10  void GAME_Game_6fc4bb10(uint param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4bc90  D2Game.dll +0x2bc90  void GAME_Game_6fc4bc90(int reg_EAX,char *reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4bf90  D2Game.dll +0x2bf90  void GAME_Game_6fc4bf90(int reg_EAX,int reg_EDI,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4c120  D2Game.dll +0x2c120  void GAME_Game_6fc4c120(int param_1,int param_2);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4c2d0  D2Game.dll +0x2c2d0  void GAME_Game_6fc4c2d0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4cb80  D2Game.dll +0x2cb80  void GAME_Game_6fc4cb80(void *reg_EAX,uint32_t reg_EBX,void *reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4ce20  D2Game.dll +0x2ce20  void GAME_Game_6fc4ce20(uint32_t reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4d090  D2Game.dll +0x2d090  void GAME_Game_6fc4d090(int param_1,uint32_t *reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4d7e0  D2Game.dll +0x2d7e0  void GAME_Game_6fc4d7e0(int reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4d980  D2Game.dll +0x2d980  void GAME_Game_6fc4d980(int reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4dc70  D2Game.dll +0x2dc70  void GAME_Game_6fc4dc70(int param_1);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4e050  D2Game.dll +0x2e050  void GAME_Game_6fc4e050(uint reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_Game_6fc4e360  D2Game.dll +0x2e360  void GAME_Game_6fc4e360(int reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/Game.cpp */
/* GAME_SCmd_6fcaa3e0  D2Game.dll +0x8a3e0  void GAME_SCmd_6fcaa3e0(uint32_t *param_1,uint param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcaade0  D2Game.dll +0x8ade0  void __fastcall GAME_SCmd_6fcaade0(uint32_t param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,uint32_t *reg_EAX);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcab010  D2Game.dll +0x8b010  void GAME_SCmd_6fcab010(int reg_EAX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcab710  D2Game.dll +0x8b710  void __fastcall GAME_SCmd_6fcab710(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint8_t param_4, uint16_t param_5,uint32_t param_6);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcac280  D2Game.dll +0x8c280  void __fastcall GAME_SCmd_6fcac280(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint8_t param_4, uint16_t param_5,uint16_t param_6,uint8_t param_7,uint8_t param_8);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcac490  D2Game.dll +0x8c490  void GAME_SCmd_6fcac490(uint32_t param_1);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcac4b0  D2Game.dll +0x8c4b0  void __fastcall GAME_SCmd_6fcac4b0(uint32_t param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcac810  D2Game.dll +0x8c810  void GAME_SCmd_6fcac810(uint32_t reg_EAX,int reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcad3d0  D2Game.dll +0x8d3d0  void GAME_SCmd_6fcad3d0(int reg_EBX,int reg_ESI,uint32_t param_3,uint32_t param_4,uint32_t param_5);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_SCmd_6fcad5f0  D2Game.dll +0x8d5f0  void GAME_SCmd_6fcad5f0(int reg_EAX,int *reg_ESI,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Game/GAME/SCmd.cpp */
/* GAME_Targets_6fd0fe40  D2Game.dll +0xefe40  void __fastcall GAME_Targets_6fd0fe40(int param_1,int reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Targets.cpp */
/* GAME_Targets_6fd0fed0  D2Game.dll +0xefed0  void GAME_Targets_6fd0fed0(int reg_EAX,int *reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/Targets.cpp */
/* INVENTORY_InvMode_6fcbb3b0  D2Game.dll +0x9b3b0  void INVENTORY_InvMode_6fcbb3b0(void *param_1,int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/INVENTORY/InvMode.cpp */
/* INVENTORY_InvMode_6fcbb570  D2Game.dll +0x9b570  uint32_t __fastcall INVENTORY_InvMode_6fcbb570(int param_1,int reg_EBX);  sigmaRE/5_game_source/D2Game/INVENTORY/InvMode.cpp */
/* INVENTORY_InvMode_6fcbb630  D2Game.dll +0x9b630  uint32_t __thiscall INVENTORY_InvMode_6fcbb630(void *this,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/INVENTORY/InvMode.cpp */
/* INVENTORY_Inventory_6fd6e1b0  D2Common.dll +0x1e1b0  int INVENTORY_Inventory_6fd6e1b0(char *param_1,int reg_EAX,int reg_EBX,uint8_t *reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* INVENTORY_Inventory_6fd6fb50  D2Common.dll +0x1fb50  uint INVENTORY_Inventory_6fd6fb50(int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* INVENTORY_Inventory_6fd70e80  D2Common.dll +0x20e80  void __thiscall INVENTORY_Inventory_6fd70e80(void *this,int param_2,int param_3,int *reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* INVENTORY_Inventory_6fd71640  D2Common.dll +0x21640  uint32_t __fastcall INVENTORY_Inventory_6fd71640(int param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* INVENTORY_Inventory_6fd718a0  D2Common.dll +0x218a0  uint32_t INVENTORY_Inventory_6fd718a0(int param_1,int param_2,int param_3,int param_4,int *reg_EAX,int *reg_EDI);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* ITEMSReadInfoFromStreamVersioned  D2Common.dll ordinal 11171  uint32_t ITEMSReadInfoFromStreamVersioned(uint32_t param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Common/INVENTORY/Inventory.cpp */
/* ITEMS_ItemMode_6fcf1bc0  D2Game.dll +0xd1bc0  uint32_t ITEMS_ItemMode_6fcf1bc0(int *reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf24b0  D2Game.dll +0xd24b0  void ITEMS_ItemMode_6fcf24b0(int reg_EBX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf29f0  D2Game.dll +0xd29f0  void ITEMS_ItemMode_6fcf29f0(int *param_1);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf2c70  D2Game.dll +0xd2c70  uint32_t ITEMS_ItemMode_6fcf2c70(int *reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf2f00  D2Game.dll +0xd2f00  uint32_t ITEMS_ItemMode_6fcf2f00(int *param_1,uint32_t reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf3280  D2Game.dll +0xd3280  void __thiscall ITEMS_ItemMode_6fcf3280(void *this,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf39b0  D2Game.dll +0xd39b0  void __fastcall ITEMS_ItemMode_6fcf39b0(int *param_1,uint32_t reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf4140  D2Game.dll +0xd4140  uint32_t ITEMS_ItemMode_6fcf4140(int param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf4550  D2Game.dll +0xd4550  void ITEMS_ItemMode_6fcf4550(int reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf4570  D2Game.dll +0xd4570  void ITEMS_ItemMode_6fcf4570(int *reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf4670  D2Game.dll +0xd4670  void __fastcall ITEMS_ItemMode_6fcf4670(int *param_1,int reg_EAX,uint32_t reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf46b0  D2Game.dll +0xd46b0  void ITEMS_ItemMode_6fcf46b0(uint32_t param_1,int param_2,int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf4a70  D2Game.dll +0xd4a70  uint32_t ITEMS_ItemMode_6fcf4a70(int param_1,int *param_2,uint param_3,uint32_t *param_4,uint reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf4e80  D2Game.dll +0xd4e80  uint32_t __fastcall ITEMS_ItemMode_6fcf4e80(int *param_1,int param_2,int param_3,uint32_t param_4,uint32_t *param_5, uint reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf51a0  D2Game.dll +0xd51a0  void ITEMS_ItemMode_6fcf51a0(int param_1,int *param_2,int reg_EBX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf5590  D2Game.dll +0xd5590  void ITEMS_ItemMode_6fcf5590(int *reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf60d0  D2Game.dll +0xd60d0  uint32_t __thiscall ITEMS_ItemMode_6fcf60d0(void *this,int param_2,byte param_3,uint32_t *param_4,uint32_t *param_5, uint reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf62e0  D2Game.dll +0xd62e0  uint32_t __thiscall ITEMS_ItemMode_6fcf62e0(void *this,uint param_2,uint32_t *param_3,uint32_t *param_4,uint32_t param_5, int param_6,int reg_EAX,uint reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf6bc0  D2Game.dll +0xd6bc0  void ITEMS_ItemMode_6fcf6bc0(int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf6c80  D2Game.dll +0xd6c80  void ITEMS_ItemMode_6fcf6c80(int *reg_ESI,uint *reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf6e30  D2Game.dll +0xd6e30  uint32_t __thiscall ITEMS_ItemMode_6fcf6e30(void *this,int param_2,int *param_3,uint32_t *param_4,uint reg_EAX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf7160  D2Game.dll +0xd7160  void ITEMS_ItemMode_6fcf7160(uint32_t *param_1,uint32_t *param_2,int *reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf76a0  D2Game.dll +0xd76a0  uint32_t ITEMS_ItemMode_6fcf76a0(int param_1,int *param_2,uint param_3,uint32_t param_4,uint32_t param_5, uint32_t param_6,int param_7,int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf78c0  D2Game.dll +0xd78c0  void ITEMS_ItemMode_6fcf78c0(int *param_1,uint32_t param_2,int *param_3,int *reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf8310  D2Game.dll +0xd8310  void ITEMS_ItemMode_6fcf8310(int param_1,int *param_2,uint reg_EAX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcf9470  D2Game.dll +0xd9470  void __fastcall ITEMS_ItemMode_6fcf9470(void *param_1,uint *param_2,int param_3,uint param_4,uint param_5,uint param_6, uint reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_ItemMode_6fcfa540  D2Game.dll +0xda540  int ITEMS_ItemMode_6fcfa540(int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* ITEMS_Items_6fd78850  D2Common.dll +0x28850  void __thiscall ITEMS_Items_6fd78850(void *this,uint *param_1,int *param_2,int *param_3,uint param_4);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* ITEMS_Items_6fd7c630  D2Common.dll +0x2c630  uint32_t ITEMS_Items_6fd7c630(int *param_1,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* MISSILES_Missiles_6fc8f620  D2Game.dll +0x6f620  void MISSILES_Missiles_6fc8f620(uint32_t reg_EAX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/MISSILES/Missiles.cpp */
/* MISSILES_Missiles_6fc8f930  D2Game.dll +0x6f930  int * __fastcall MISSILES_Missiles_6fc8f930(uint32_t param_1,uint *param_2,int reg_ESI);  sigmaRE/5_game_source/D2Game/MISSILES/Missiles.cpp */
/* MONSTER_MonsterRegion_6fceacc0  D2Game.dll +0xcacc0  void MONSTER_MonsterRegion_6fceacc0(int reg_ESI);  sigmaRE/5_game_source/D2Game/MONSTER/MonsterRegion.cpp */
/* OBJECTS_objrgn_6fc2b9a0  D2Game.dll +0xb9a0  uint32_t OBJECTS_objrgn_6fc2b9a0(int param_1);  sigmaRE/5_game_source/D2Game/OBJECTS/objrgn.cpp */
/* PATH_Path_6fd823e0  D2Common.dll +0x323e0  int PATH_Path_6fd823e0(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* PATH_Path_6fd876f0  D2Common.dll +0x376f0  void __fastcall PATH_Path_6fd876f0(int param_1,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Common/PATH/Path.cpp */
/* PLAYER_PlayerPets_6fcb6570  D2Game.dll +0x96570  int PLAYER_PlayerPets_6fcb6570(int reg_EBX);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb6600  D2Game.dll +0x96600  int PLAYER_PlayerPets_6fcb6600(int reg_EBX);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb67b0  D2Game.dll +0x967b0  uint32_t PLAYER_PlayerPets_6fcb67b0(int reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb6a40  D2Game.dll +0x96a40  int PLAYER_PlayerPets_6fcb6a40(int reg_EBX,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb6ea0  D2Game.dll +0x96ea0  void PLAYER_PlayerPets_6fcb6ea0(uint32_t param_1,int param_2,int reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb6fa0  D2Game.dll +0x96fa0  void PLAYER_PlayerPets_6fcb6fa0(uint32_t param_1,int *param_2,int reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb7420  D2Game.dll +0x97420  void PLAYER_PlayerPets_6fcb7420(uint32_t param_1,uint32_t *param_2,int param_3,int param_4,void *reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlayerPets_6fcb7b50  D2Game.dll +0x97b50  void __fastcall PLAYER_PlayerPets_6fcb7b50(int param_1,uint32_t param_2,int param_3);  sigmaRE/5_game_source/D2Game/PLAYER/PlayerPets.cpp */
/* PLAYER_PlrModes_6fc97e00  D2Game.dll +0x77e00  bool PLAYER_PlrModes_6fc97e00(int param_1,uint32_t reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc97fa0  D2Game.dll +0x77fa0  uint32_t PLAYER_PlrModes_6fc97fa0(int param_1,int reg_EBX,int reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc98100  D2Game.dll +0x78100  bool PLAYER_PlrModes_6fc98100(uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc98230  D2Game.dll +0x78230  void PLAYER_PlrModes_6fc98230(int *reg_EAX,uint32_t reg_ECX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc98340  D2Game.dll +0x78340  bool PLAYER_PlrModes_6fc98340(int reg_EAX,int reg_EBX,uint reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc98550  D2Game.dll +0x78550  void __fastcall PLAYER_PlrModes_6fc98550(int param_1,uint32_t param_2,int param_3,int param_4,uint32_t param_5, uint32_t param_6,int param_7);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc98610  D2Game.dll +0x78610  void __thiscall PLAYER_PlrModes_6fc98610(void *this,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc98a90  D2Game.dll +0x78a90  void __fastcall PLAYER_PlrModes_6fc98a90(int param_1,int *reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc99100  D2Game.dll +0x79100  void PLAYER_PlrModes_6fc99100(uint32_t param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrModes_6fc99210  D2Game.dll +0x79210  uint32_t * PLAYER_PlrModes_6fc99210(int *param_1,int param_2,uint32_t param_3,int param_4,uint32_t reg_ESI, uint32_t reg_EDI,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrModes.cpp */
/* PLAYER_PlrMsg_6fcebf50  D2Game.dll +0xcbf50  int PLAYER_PlrMsg_6fcebf50(uint32_t param_1,int param_2,ushort *param_3,uint16_t *param_4,int reg_EAX, int *reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* PLAYER_PlrMsg_6fcec2f0  D2Game.dll +0xcc2f0  void __fastcall PLAYER_PlrMsg_6fcec2f0(int *param_1,ushort param_2,uint param_3,int *param_4);  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* PLAYER_PlrMsg_6fcec550  D2Game.dll +0xcc550  uint32_t PLAYER_PlrMsg_6fcec550(int param_1,byte *reg_EBX,int reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* PLAYER_PlrMsg_6fcece20  D2Game.dll +0xcce20  bool __fastcall PLAYER_PlrMsg_6fcece20(uint param_1,int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* PLAYER_PlrMsg_6fcedbb0  D2Game.dll +0xcdbb0  (no reference prototype)  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* PLAYER_PlrMsg_6fcee520  D2Game.dll +0xce520  int __fastcall PLAYER_PlrMsg_6fcee520(uint32_t param_1,uint param_2,uint32_t param_3,int param_4);  sigmaRE/5_game_source/D2Game/PLAYER/PlrMsg.cpp */
/* PLAYER_PlrSave2_6fd0bda0  D2Game.dll +0xebda0  uint32_t __thiscall PLAYER_PlrSave2_6fd0bda0(void *this,int *param_2,uint32_t param_3,uint32_t *param_4,int param_5,uint reg_EAX );  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrSave2_6fd0be70  D2Game.dll +0xebe70  uint32_t PLAYER_PlrSave2_6fd0be70(uint32_t param_1,uint32_t *param_2,uint16_t *param_3);  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrSave2_6fd0c020  D2Game.dll +0xec020  uint32_t PLAYER_PlrSave2_6fd0c020(uint32_t param_1,int *param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrSave2_6fd0c0e0  D2Game.dll +0xec0e0  uint32_t PLAYER_PlrSave2_6fd0c0e0(uint32_t param_1,uint32_t param_2,int param_3,int reg_EAX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrSave2_6fd0c1e0  D2Game.dll +0xec1e0  uint32_t PLAYER_PlrSave2_6fd0c1e0(uint32_t param_1,uint32_t *param_2,int param_3,int reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrSave2_6fd0c260  D2Game.dll +0xec260  uint32_t PLAYER_PlrSave2_6fd0c260(uint32_t param_1,uint32_t *param_2,uint32_t *param_3,int reg_EBX, uint16_t *reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrSave2_6fd0c470  D2Game.dll +0xec470  uint32_t PLAYER_PlrSave2_6fd0c470(int param_1,int *param_2,uint param_3,int *reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrSave2.cpp */
/* PLAYER_PlrTrade_6fc900c0  D2Game.dll +0x700c0  uint64_t PLAYER_PlrTrade_6fc900c0(void);  sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
/* PLAYER_PlrTrade_6fc90240  D2Game.dll +0x70240  bool PLAYER_PlrTrade_6fc90240(int param_1,int param_2,int param_3,int param_4,int reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
/* PLAYER_PlrTrade_6fc90d60  D2Game.dll +0x70d60  uint32_t __thiscall PLAYER_PlrTrade_6fc90d60(void *this,int param_1);  sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
/* PLAYER_PlrTrade_6fc90fb0  D2Game.dll +0x70fb0  uint32_t PLAYER_PlrTrade_6fc90fb0(int reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
/* PLAYER_PlrTrade_6fc919a0  D2Game.dll +0x719a0  void PLAYER_PlrTrade_6fc919a0(int *param_1,int reg_EAX,int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
/* PLAYER_PlrTrade_6fc91e10  D2Game.dll +0x71e10  uint PLAYER_PlrTrade_6fc91e10(int *param_1,int *param_2,int *reg_EAX,int reg_ESI,int *reg_EBX);  sigmaRE/5_game_source/D2Game/PLAYER/PlrTrade.cpp */
/* Quests_a2q8_6fd0e7b0  D2Game.dll +0xee7b0  void __fastcall Quests_a2q8_6fd0e7b0(int *param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/Quests/a2q8.cpp */
/* SKILLS_SkillBar_6fc47130  D2Game.dll +0x27130  uint32_t __fastcall SKILLS_SkillBar_6fc47130(uint32_t param_1,int *param_2);  sigmaRE/5_game_source/D2Game/SKILLS/SkillBar.cpp */
/* SKILLS_SkillBar_6fc48170  D2Game.dll +0x28170  uint32_t __fastcall SKILLS_SkillBar_6fc48170(int param_1,int *param_2,uint32_t reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/SkillBar.cpp */
/* SKILLS_SkillBar_6fc48740  D2Game.dll +0x28740  uint32_t SKILLS_SkillBar_6fc48740(uint32_t param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/SKILLS/SkillBar.cpp */
/* SKILLS_SkillDruid_6fc648e0  D2Game.dll +0x448e0  void SKILLS_SkillDruid_6fc648e0(int param_1,int param_2,int param_3,uint32_t param_4,int reg_EAX);  sigmaRE/5_game_source/D2Game/SKILLS/SkillDruid.cpp */
/* SKILLS_SkillDruid_6fc654e0  D2Game.dll +0x454e0  uint32_t __fastcall SKILLS_SkillDruid_6fc654e0(uint32_t param_1,int *param_2,void *param_3,int param_4,uint32_t param_5, uint32_t param_6,int reg_EAX);  sigmaRE/5_game_source/D2Game/SKILLS/SkillDruid.cpp */
/* SKILLS_SkillItem_6fccce60  D2Game.dll +0xace60  uint32_t SKILLS_SkillItem_6fccce60(int param_1,int *param_2,int param_3,uint param_4);  sigmaRE/5_game_source/D2Game/SKILLS/SkillItem.cpp */
/* SKILLS_SkillItem_6fccd050  D2Game.dll +0xad050  void SKILLS_SkillItem_6fccd050(int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/SkillItem.cpp */
/* SKILLS_SkillNec_6fc6ef70  D2Game.dll +0x4ef70  uint32_t SKILLS_SkillNec_6fc6ef70(int param_1,int *param_2);  sigmaRE/5_game_source/D2Game/SKILLS/SkillNec.cpp */
/* SKILLS_SkillNec_6fc6f970  D2Game.dll +0x4f970  uint32_t SKILLS_SkillNec_6fc6f970(int param_1,int param_2,int *param_3,int param_4,uint32_t param_5,int reg_EBX, int reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/SkillNec.cpp */
/* SKILLS_SkillNec_6fc70250  D2Game.dll +0x50250  uint32_t __fastcall SKILLS_SkillNec_6fc70250(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Game/SKILLS/SkillNec.cpp */
/* SKILLS_SkillsBar_6fb76060  D2Client.dll +0xc6060  void SKILLS_SkillsBar_6fb76060(int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
/* SKILLS_SkillsBar_6fb76450  D2Client.dll +0xc6450  void SKILLS_SkillsBar_6fb76450(int reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
/* SKILLS_SkillsBar_6fb765b0  D2Client.dll +0xc65b0  void SKILLS_SkillsBar_6fb765b0(int param_1,int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
/* SKILLS_SkillsBar_6fb76aa0  D2Client.dll +0xc6aa0  uint32_t SKILLS_SkillsBar_6fb76aa0(uint32_t param_1,int *reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
/* SKILLS_SkillsBar_6fb77290  D2Client.dll +0xc7290  void SKILLS_SkillsBar_6fb77290(int *reg_EAX);  sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
/* SKILLS_SkillsBar_6fb779c0  D2Client.dll +0xc79c0  uint SKILLS_SkillsBar_6fb779c0(int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/SkillsBar.cpp */
/* SKILLS_Skills_6fb50750  D2Client.dll +0xa0750  uint32_t __fastcall SKILLS_Skills_6fb50750(uint32_t param_1,int param_2,int reg_EAX,int reg_EBX,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb50880  D2Client.dll +0xa0880  void SKILLS_Skills_6fb50880(uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb51340  D2Client.dll +0xa1340  uint32_t SKILLS_Skills_6fb51340(int *param_1,int reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb515c0  D2Client.dll +0xa15c0  uint32_t SKILLS_Skills_6fb515c0(uint32_t reg_EAX);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb51860  D2Client.dll +0xa1860  void SKILLS_Skills_6fb51860(int *param_1,uint8_t *param_2,uint param_3,int param_4,uint32_t param_5, int param_6,int reg_EBX,int reg_ESI,uint reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb51a50  D2Client.dll +0xa1a50  uint32_t __fastcall SKILLS_Skills_6fb51a50(uint32_t param_1,int param_2,int *param_3,uint8_t *param_4,uint32_t param_5, uint reg_EAX,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb53040  D2Client.dll +0xa3040  uint32_t SKILLS_Skills_6fb53040(int *param_1,uint32_t *reg_EAX,uint32_t reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb536f0  D2Client.dll +0xa36f0  void __thiscall SKILLS_Skills_6fb536f0(void *this,Unicode *param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, int param_6,int param_7,int reg_EAX);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb53d20  D2Client.dll +0xa3d20  void SKILLS_Skills_6fb53d20(void);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb54d40  D2Client.dll +0xa4d40  bool SKILLS_Skills_6fb54d40(void);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fb54e20  D2Client.dll +0xa4e20  int * __fastcall SKILLS_Skills_6fb54e20(int param_1,int param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbe370  D2Game.dll +0x9e370  void SKILLS_Skills_6fcbe370(int reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbe450  D2Game.dll +0x9e450  void SKILLS_Skills_6fcbe450(int *reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbe490  D2Game.dll +0x9e490  void __fastcall SKILLS_Skills_6fcbe490(uint32_t param_1,int *param_2,int *reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbea30  D2Game.dll +0x9ea30  uint32_t SKILLS_Skills_6fcbea30(int param_1,int param_2);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbeb80  D2Game.dll +0x9eb80  uint32_t SKILLS_Skills_6fcbeb80(int *reg_EAX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbee50  D2Game.dll +0x9ee50  int __fastcall SKILLS_Skills_6fcbee50(uint32_t param_1,uint32_t param_2,int *param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbefe0  D2Game.dll +0x9efe0  void __fastcall SKILLS_Skills_6fcbefe0(int param_1,int param_2,int param_3,int param_4,int param_5,uint32_t *param_6, int *param_7);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbf1a0  D2Game.dll +0x9f1a0  void SKILLS_Skills_6fcbf1a0(int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbf210  D2Game.dll +0x9f210  int SKILLS_Skills_6fcbf210(int reg_EAX,int reg_EDI,uint32_t param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbf3b0  D2Game.dll +0x9f3b0  uint32_t __thiscall SKILLS_Skills_6fcbf3b0(void *this,int param_2,int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbf9a0  D2Game.dll +0x9f9a0  void SKILLS_Skills_6fcbf9a0(int reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbfa30  D2Game.dll +0x9fa30  uint32_t __thiscall SKILLS_Skills_6fcbfa30(void *this,int *param_2,int *reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbfae0  D2Game.dll +0x9fae0  uint32_t __fastcall SKILLS_Skills_6fcbfae0(int *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcbfd00  D2Game.dll +0x9fd00  int SKILLS_Skills_6fcbfd00(int param_1,int *param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc0000  D2Game.dll +0xa0000  int * SKILLS_Skills_6fcc0000(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, int param_5,int param_6,int reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc00b0  D2Game.dll +0xa00b0  int SKILLS_Skills_6fcc00b0(int *reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc0ad0  D2Game.dll +0xa0ad0  uint32_t __thiscall SKILLS_Skills_6fcc0ad0(void *this,uint32_t param_2,int param_3,uint32_t param_4,int param_5,int reg_ESI, int reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc0c70  D2Game.dll +0xa0c70  void SKILLS_Skills_6fcc0c70(int *param_1,uint8_t *param_2,uint param_3,int param_4,uint32_t param_5, int param_6,int reg_EAX,uint reg_EBX,int reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc0f40  D2Game.dll +0xa0f40  uint32_t __fastcall SKILLS_Skills_6fcc0f40(uint32_t param_1,int param_2,uint32_t param_3,int *param_4,uint8_t *param_5, uint32_t param_6,uint reg_EAX,uint32_t reg_EBX,uint32_t reg_ESI, uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc1000  D2Game.dll +0xa1000  uint32_t SKILLS_Skills_6fcc1000(uint32_t param_1,int param_2,uint32_t reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc10b0  D2Game.dll +0xa10b0  void SKILLS_Skills_6fcc10b0(int *param_1,int param_2,int *reg_EAX,uint *reg_ESI,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc1210  D2Game.dll +0xa1210  uint32_t __fastcall SKILLS_Skills_6fcc1210(uint32_t *param_1,int param_2,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc1280  D2Game.dll +0xa1280  void SKILLS_Skills_6fcc1280(int *reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc16a0  D2Game.dll +0xa16a0  int SKILLS_Skills_6fcc16a0(int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc1880  D2Game.dll +0xa1880  int * SKILLS_Skills_6fcc1880(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,int param_7,int param_8,int reg_EAX, int *reg_ESI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc19a0  D2Game.dll +0xa19a0  int SKILLS_Skills_6fcc19a0(void *param_1,int param_2,uint32_t param_3,int param_4,int param_5,int param_6, int *reg_EAX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc1d10  D2Game.dll +0xa1d10  void SKILLS_Skills_6fcc1d10(uint32_t param_1,int param_2,void *reg_EBX,uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc22e0  D2Game.dll +0xa22e0  int * SKILLS_Skills_6fcc22e0(uint32_t param_1,int *param_2,uint32_t *param_3,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fcc28f0  D2Game.dll +0xa28f0  int * __fastcall SKILLS_Skills_6fcc28f0(void *param_1,uint32_t param_2,int *param_3,uint32_t param_4,uint32_t param_5, int param_6,int param_7,int param_8,int param_9,int param_10);  sigmaRE/5_game_source/D2Game/SKILLS/Skills.cpp */
/* SKILLS_Skills_6fd9f870  D2Common.dll +0x4f870  int __fastcall SKILLS_Skills_6fd9f870(uint32_t param_1,int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Common/SKILLS/Skills.cpp */
/* Sound_SoundHdr_6fb0d110  D2Client.dll +0x5d110  void Sound_SoundHdr_6fb0d110(void);  sigmaRE/5_game_source/D2Client/Sound/SoundHdr.cpp */
/* Sound_SoundHdr_6fb0f090  D2Client.dll +0x5f090  void Sound_SoundHdr_6fb0f090(void);  sigmaRE/5_game_source/D2Client/Sound/SoundHdr.cpp */
/* Stats_StatsEx_6fd881a0  D2Common.dll +0x381a0  void __fastcall Stats_StatsEx_6fd881a0(uint32_t param_1,void *param_2,int *reg_ESI);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd882b0  D2Common.dll +0x382b0  int Stats_StatsEx_6fd882b0(int *reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd882f0  D2Common.dll +0x382f0  void __thiscall Stats_StatsEx_6fd882f0(void *this,uint param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd88550  D2Common.dll +0x38550  void Stats_StatsEx_6fd88550(int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd88940  D2Common.dll +0x38940  void Stats_StatsEx_6fd88940(uint32_t param_1,int param_2,int param_3,uint32_t param_4,int reg_EBX);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd88a80  D2Common.dll +0x38a80  int Stats_StatsEx_6fd88a80(int param_1,int reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd88cd0  D2Common.dll +0x38cd0  int __thiscall Stats_StatsEx_6fd88cd0(void *this,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd89530  D2Common.dll +0x39530  int __fastcall Stats_StatsEx_6fd89530(void *param_1,int param_2);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd89ce0  D2Common.dll +0x39ce0  int __fastcall Stats_StatsEx_6fd89ce0(void *param_1,int param_2,ushort *param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Stats_StatsEx_6fd89f70  D2Common.dll +0x39f70  void Stats_StatsEx_6fd89f70(int param_1,uint32_t param_2,void *reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Common/Stats/StatsEx.cpp */
/* Storm_252  Storm.dll ordinal 252  uint32_t Storm_252(int *param_1);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_253  Storm.dll ordinal 253  uint32_t Storm_253(int *param_1);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_265  Storm.dll ordinal 265  DWORD Storm_265(int param_1,LPDWORD param_2);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_266  Storm.dll ordinal 266  uint32_t Storm_266(uint *param_1,uint param_2,uint param_3,uint32_t *param_4);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_268  Storm.dll ordinal 268  bool Storm_268(void *param_1,uint *param_2,byte param_3,uint32_t *param_4);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_269  Storm.dll ordinal 269  void Storm_269(uint param_1,uint *param_2,uint param_3,int *param_4,int param_5);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_280  Storm.dll +0x26c40  uint32_t Storm_280(uint32_t *param_1);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_401  Storm.dll ordinal 401  uint * Storm_401(uint param_1,uint32_t param_2,int param_3,uint param_4);  sigmaRE/5_game_source/Storm/_unattributed/code_6f60b3c7.cpp */
/* Storm_403  Storm.dll ordinal 403  uint32_t Storm_403(uint32_t *param_1,uint *param_2,int param_3);  sigmaRE/5_game_source/Storm/_unattributed/code_6f60b3c7.cpp */
/* Storm_422  Storm.dll ordinal 422  uint32_t Storm_422(uint *param_1,LPCSTR param_2,uint32_t param_3,LPBYTE param_4,DWORD param_5);  sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
/* Storm_423  Storm.dll +0x3c1d0  uint32_t Storm_423(uint *param_1,LPCSTR param_2,byte param_3,ulong *param_4);  sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
/* Storm_426  Storm.dll +0x3c080  uint32_t Storm_426(uint *param_1,LPCSTR param_2,uint32_t param_3);  sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
/* Storm_491  Storm.dll +0x22c80  uint64_t Storm_491(uint32_t *param_1,uint32_t *param_2,uint param_3,uint32_t reg_EDX);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_501  Storm.dll +0x3b080  uint8_t * Storm_501(int param_1,uint *param_2,int param_3);  sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
/* Storm_506  Storm.dll +0x3afd0  char * Storm_506(uint *param_1);  sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
/* p_Storm_511, Storm_511  Storm.dll +0x343d0  uint32_t Storm_511(uint param_1);  sigmaRE/5_game_source/Storm/_unattributed/code_6f621bc0.cpp */
/* Storm_578  Storm.dll +0x3ba80  uint __cdecl Storm_578(char *param_1,uint param_2,char *param_3);  sigmaRE/5_game_source/Storm/_unattributed/code_6f634900.cpp */
/* UI_SkillDesc_6fadd3c0  D2Client.dll +0x2d3c0  void UI_SkillDesc_6fadd3c0(int param_1,uint32_t param_2,int param_3,int param_4,int param_5, uint32_t param_6);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fade140  D2Client.dll +0x2e140  uint32_t __fastcall UI_SkillDesc_6fade140(void *param_1,Unicode *param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fade190  D2Client.dll +0x2e190  void UI_SkillDesc_6fade190(int param_1,short *reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fade350  D2Client.dll +0x2e350  uint32_t UI_SkillDesc_6fade350(int param_1,int param_2);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fadf0a0  D2Client.dll +0x2f0a0  void __thiscall UI_SkillDesc_6fadf0a0(void *this,int param_2,int param_3,int param_4,void *reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fadf980  D2Client.dll +0x2f980  uint32_t UI_SkillDesc_6fadf980(uint32_t param_1,uint32_t param_2,int *param_3,uint32_t *param_4, uint32_t reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fadfb50  D2Client.dll +0x2fb50  int UI_SkillDesc_6fadfb50(void);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fadfd30  D2Client.dll +0x2fd30  void UI_SkillDesc_6fadfd30(int param_1,int param_2,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fae0b40  D2Client.dll +0x30b40  void __thiscall UI_SkillDesc_6fae0b40(void *this,int param_2,uint32_t param_3,int param_4,uint32_t param_5, uint32_t param_6,int param_7,int param_8,uint32_t param_9,int param_10,int reg_EAX, uint32_t reg_EBX);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fae0e30  D2Client.dll +0x30e30  void UI_SkillDesc_6fae0e30(uint32_t param_1,int *param_2,int *param_3,uint32_t *param_4,int *reg_EBX, int *reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_SkillDesc_6fae3240  D2Client.dll +0x33240  void __fastcall UI_SkillDesc_6fae3240(void *param_1,int *param_2,int *param_3,uint32_t *param_4,uint32_t param_5, uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9);  sigmaRE/5_game_source/D2Client/UI/SkillDesc.cpp */
/* UI_automap_6fb0fb50  D2Client.dll +0x5fb50  void UI_automap_6fb0fb50(void);  sigmaRE/5_game_source/D2Client/UI/automap.cpp */
/* UI_automap_6fb101a0  D2Client.dll +0x601a0  void UI_automap_6fb101a0(int param_1,int param_2,byte param_3,char *reg_EBX);  sigmaRE/5_game_source/D2Client/UI/automap.cpp */
/* UI_automap_6fb108d0  D2Client.dll +0x608d0  int __fastcall UI_automap_6fb108d0(int param_1);  sigmaRE/5_game_source/D2Client/UI/automap.cpp */
/* UI_automap_6fb11490  D2Client.dll +0x61490  uint32_t __fastcall UI_automap_6fb11490(uint32_t param_1,int *reg_EAX,uint8_t *reg_EBX);  sigmaRE/5_game_source/D2Client/UI/automap.cpp */
/* UI_inv_6fb3c440  D2Client.dll +0x8c440  uint32_t __fastcall UI_inv_6fb3c440(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3c4c0  D2Client.dll +0x8c4c0  uint32_t __fastcall UI_inv_6fb3c4c0(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3c580  D2Client.dll +0x8c580  uint32_t __fastcall UI_inv_6fb3c580(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3ccb0  D2Client.dll +0x8ccb0  void UI_inv_6fb3ccb0(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3cf60  D2Client.dll +0x8cf60  uint32_t UI_inv_6fb3cf60(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3cfb0  D2Client.dll +0x8cfb0  void UI_inv_6fb3cfb0(int param_1);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3d300  D2Client.dll +0x8d300  void UI_inv_6fb3d300(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3d3d0  D2Client.dll +0x8d3d0  uint32_t UI_inv_6fb3d3d0(int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3d430  D2Client.dll +0x8d430  uint32_t UI_inv_6fb3d430(int reg_EBX);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3d600  D2Client.dll +0x8d600  void UI_inv_6fb3d600(int param_1,int reg_EAX,Unicode *reg_ESI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3f140  D2Client.dll +0x8f140  void UI_inv_6fb3f140(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3f260  D2Client.dll +0x8f260  void UI_inv_6fb3f260(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3f710  D2Client.dll +0x8f710  void UI_inv_6fb3f710(byte param_1);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb3f880  D2Client.dll +0x8f880  void UI_inv_6fb3f880(int param_1,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb408c0  D2Client.dll +0x908c0  void UI_inv_6fb408c0(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb40cb0  D2Client.dll +0x90cb0  void __cdecl UI_inv_6fb40cb0(Unicode *param_1,Unicode *param_2,Unicode *param_3);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* p_UI_inv_6fb40f60, UI_inv_6fb40f60  D2Client.dll +0x90f60  void __fastcall UI_inv_6fb40f60(uint32_t param_1);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb41360  D2Client.dll +0x91360  void UI_inv_6fb41360(Unicode *param_1,Unicode *reg_ESI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb414f0  D2Client.dll +0x914f0  void UI_inv_6fb414f0(Unicode *param_1,int param_2,Unicode *reg_ESI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb42440  D2Client.dll +0x92440  void UI_inv_6fb42440(void);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb453b0  D2Client.dll +0x953b0  void UI_inv_6fb453b0(int reg_EBX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_inv_6fb458a0  D2Client.dll +0x958a0  void UI_inv_6fb458a0(int *param_1,uint32_t reg_EBX,int reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* UI_npcmenu_6faf60a0  D2Client.dll +0x460a0  void UI_npcmenu_6faf60a0(int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/npcmenu.cpp */
/* UI_npcmenu_6faf6150  D2Client.dll +0x46150  int * UI_npcmenu_6faf6150(void);  sigmaRE/5_game_source/D2Client/UI/npcmenu.cpp */
/* UI_npcmenu_6faf6230  D2Client.dll +0x46230  uint32_t __fastcall UI_npcmenu_6faf6230(int param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Client/UI/npcmenu.cpp */
/* UNIT_CUnit_6fb55440  D2Client.dll +0xa5440  uint64_t UNIT_CUnit_6fb55440(int *reg_EAX,uint reg_EDX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb554a0  D2Client.dll +0xa54a0  bool UNIT_CUnit_6fb554a0(int *reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb556c0  D2Client.dll +0xa56c0  uint32_t UNIT_CUnit_6fb556c0(int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb55b40  D2Client.dll +0xa5b40  void __fastcall UNIT_CUnit_6fb55b40(int param_1,int param_2);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb55b90  D2Client.dll +0xa5b90  bool UNIT_CUnit_6fb55b90(int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb55d90  D2Client.dll +0xa5d90  Unicode * UNIT_CUnit_6fb55d90(uint32_t *reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb55f70  D2Client.dll +0xa5f70  void UNIT_CUnit_6fb55f70(int reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb56070  D2Client.dll +0xa6070  bool UNIT_CUnit_6fb56070(int *reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb560d0  D2Client.dll +0xa60d0  int * __fastcall UNIT_CUnit_6fb560d0(uint32_t param_1,int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb56210  D2Client.dll +0xa6210  void UNIT_CUnit_6fb56210(int *reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb56500  D2Client.dll +0xa6500  uint32_t __fastcall UNIT_CUnit_6fb56500(uint param_1,int *reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb568e0  D2Client.dll +0xa68e0  uint32_t UNIT_CUnit_6fb568e0(int *param_1,uint32_t param_2,uint32_t param_3,int param_4);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb57780  D2Client.dll +0xa7780  int * UNIT_CUnit_6fb57780(uint *param_1,uint16_t param_2,uint16_t param_3,int param_4, uint32_t reg_EBX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb59a20  D2Client.dll +0xa9a20  void __thiscall UNIT_CUnit_6fb59a20(void *this,uint *param_2,uint8_t *param_3,uint8_t *param_4,uint8_t *param_5, int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb59f00  D2Client.dll +0xa9f00  void UNIT_CUnit_6fb59f00(int reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb5a090  D2Client.dll +0xaa090  void UNIT_CUnit_6fb5a090(int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_CUnit_6fb5aec0  D2Client.dll +0xaaec0  void UNIT_CUnit_6fb5aec0(void);  sigmaRE/5_game_source/D2Client/UNIT/CUnit.cpp */
/* UNIT_Item_6fb31ce0  D2Client.dll +0x81ce0  void UNIT_Item_6fb31ce0(uint32_t *reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
/* UNIT_Item_6fb31e40  D2Client.dll +0x81e40  int UNIT_Item_6fb31e40(int reg_ESI,uint *reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
/* UNIT_Item_6fb32660  D2Client.dll +0x82660  void __fastcall UNIT_Item_6fb32660(int *param_1,uint reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
/* UNIT_Item_6fb34080  D2Client.dll +0x84080  void UNIT_Item_6fb34080(uint reg_EBX,uint reg_ESI,uint reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/Item.cpp */
/* UNIT_Missile_6fb61420  D2Client.dll +0xb1420  uint __thiscall UNIT_Missile_6fb61420(void *this,int param_2,uint32_t *reg_EAX,uint reg_EBX);  sigmaRE/5_game_source/D2Client/UNIT/Missile.cpp */
/* UNIT_Missile_6fb617c0  D2Client.dll +0xb17c0  void __fastcall UNIT_Missile_6fb617c0(void *param_1,int reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/Missile.cpp */
/* UNIT_Missile_6fb630f0  D2Client.dll +0xb30f0  int * __fastcall UNIT_Missile_6fb630f0(uint *param_1,uint reg_EBX);  sigmaRE/5_game_source/D2Client/UNIT/Missile.cpp */
/* UNIT_Monster_6faffd90  D2Client.dll +0x4fd90  uint __fastcall UNIT_Monster_6faffd90(uint32_t param_1,int param_2,uint param_3,int reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
/* p_UNIT_Monster_6fb00e70, UNIT_Monster_6fb00e70  D2Client.dll +0x50e70  ulonglong UNIT_Monster_6fb00e70(void);  sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
/* UNIT_Monster_6fb01390  D2Client.dll +0x51390  int * UNIT_Monster_6fb01390(uint32_t *param_1,uint32_t *reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
/* UNIT_Monster_6fb01650  D2Client.dll +0x51650  int * UNIT_Monster_6fb01650(int *param_1,int *param_2,uint32_t *param_3,uint32_t *param_4,int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
/* UNIT_Monster_6fb01860  D2Client.dll +0x51860  void UNIT_Monster_6fb01860(int *reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
/* UNIT_Monster_6fb01a80  D2Client.dll +0x51a80  int * UNIT_Monster_6fb01a80(void);  sigmaRE/5_game_source/D2Client/UNIT/Monster.cpp */
/* UNIT_Party_6fcbbe40  D2Game.dll +0x9be40  void UNIT_Party_6fcbbe40(int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
/* UNIT_Party_6fcbc070  D2Game.dll +0x9c070  void UNIT_Party_6fcbc070(uint32_t param_1,uint32_t param_2,int *reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
/* UNIT_Party_6fcbc160  D2Game.dll +0x9c160  void UNIT_Party_6fcbc160(uint8_t *param_1,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
/* UNIT_Party_6fcbc840  D2Game.dll +0x9c840  void UNIT_Party_6fcbc840(uint32_t param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/Party.cpp */
/* UNIT_Player_6facb7f0  D2Client.dll +0x1b7f0  void UNIT_Player_6facb7f0(uint *reg_EAX,uint reg_ESI,uint reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/Player.cpp */
/* UNIT_PlrSkills_6fb22530  D2Client.dll +0x72530  void UNIT_PlrSkills_6fb22530(int param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/PlrSkills.cpp */
/* UNIT_PlrSkills_6fb22610  D2Client.dll +0x72610  (no reference prototype)  sigmaRE/5_game_source/D2Client/UNIT/PlrSkills.cpp */
/* UNIT_SUnitDmg_6fcfa6d0  D2Game.dll +0xda6d0  void UNIT_SUnitDmg_6fcfa6d0(uint32_t param_1,int *param_2,int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfa750  D2Game.dll +0xda750  void UNIT_SUnitDmg_6fcfa750(int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfa7b0  D2Game.dll +0xda7b0  void UNIT_SUnitDmg_6fcfa7b0(int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfa930  D2Game.dll +0xda930  uint UNIT_SUnitDmg_6fcfa930(uint reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfa970  D2Game.dll +0xda970  uint UNIT_SUnitDmg_6fcfa970(uint reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfaa40  D2Game.dll +0xdaa40  int __fastcall UNIT_SUnitDmg_6fcfaa40(uint param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfaa90  D2Game.dll +0xdaa90  longlong __fastcall UNIT_SUnitDmg_6fcfaa90(uint32_t param_1,int *param_2,int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfb030  D2Game.dll +0xdb030  uint32_t UNIT_SUnitDmg_6fcfb030(int param_1,int *reg_EAX,uint32_t reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfb570  D2Game.dll +0xdb570  int UNIT_SUnitDmg_6fcfb570(int param_1,int reg_EDI,uint32_t reg_EDX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfb790  D2Game.dll +0xdb790  uint32_t __thiscall UNIT_SUnitDmg_6fcfb790(void *this,int param_2,int param_3,int reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfba40  D2Game.dll +0xdba40  void __fastcall UNIT_SUnitDmg_6fcfba40(int *param_1,int param_2,int *param_3,int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfbed0  D2Game.dll +0xdbed0  uint __fastcall UNIT_SUnitDmg_6fcfbed0(uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uint reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfc030  D2Game.dll +0xdc030  uint UNIT_SUnitDmg_6fcfc030(uint param_1,int reg_EAX,int *reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfc530  D2Game.dll +0xdc530  ulonglong __fastcall UNIT_SUnitDmg_6fcfc530(int param_1,int param_2,int param_3,int param_4,int param_5,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfc780  D2Game.dll +0xdc780  void UNIT_SUnitDmg_6fcfc780(int param_1,uint32_t *reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfc940  D2Game.dll +0xdc940  void __thiscall UNIT_SUnitDmg_6fcfc940(void *this,int param_1,int *param_2,int param_3,int param_4);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfcd80  D2Game.dll +0xdcd80  uint UNIT_SUnitDmg_6fcfcd80(uint32_t param_1,uint param_2,uint reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfce70  D2Game.dll +0xdce70  void UNIT_SUnitDmg_6fcfce70(int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfcf20  D2Game.dll +0xdcf20  void UNIT_SUnitDmg_6fcfcf20(int param_1,int *param_2,int param_3,int *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfd450  D2Game.dll +0xdd450  void UNIT_SUnitDmg_6fcfd450(uint32_t param_1,int *param_2,int *param_3,uint *param_4,uint param_5, byte param_6,int reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfdac0  D2Game.dll +0xddac0  void __thiscall UNIT_SUnitDmg_6fcfdac0(void *this,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfdcb0  D2Game.dll +0xddcb0  void __thiscall UNIT_SUnitDmg_6fcfdcb0(void *this,int param_2,uint32_t param_3,int param_4,int param_5,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfdde0  D2Game.dll +0xddde0  void __thiscall UNIT_SUnitDmg_6fcfdde0(byte param_1,int *param_2,int *param_3,int *reg_EAX,uint32_t reg_ESI,uint *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfde90  D2Game.dll +0xdde90  uint32_t UNIT_SUnitDmg_6fcfde90(int *param_1,int *reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfe0c0  D2Game.dll +0xde0c0  void UNIT_SUnitDmg_6fcfe0c0(int *param_1,int *param_2,uint32_t param_3,uint *param_4,int *reg_EAX, int reg_EBX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfe5a0  D2Game.dll +0xde5a0  ushort UNIT_SUnitDmg_6fcfe5a0(int param_1,uint32_t param_2,int param_3,int *reg_EAX,uint32_t reg_ESI, int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfe6d0  D2Game.dll +0xde6d0  void UNIT_SUnitDmg_6fcfe6d0(int *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfeba0  D2Game.dll +0xdeba0  int * UNIT_SUnitDmg_6fcfeba0(int *reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfed30  D2Game.dll +0xded30  void UNIT_SUnitDmg_6fcfed30(uint32_t param_1,int *param_2,int *param_3,uint reg_EBX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcff080  D2Game.dll +0xdf080  char UNIT_SUnitDmg_6fcff080(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcff4a0  D2Game.dll +0xdf4a0  int __fastcall UNIT_SUnitDmg_6fcff4a0(int param_1,int param_2,int param_3,int *param_4,byte param_5,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcff780  D2Game.dll +0xdf780  uint32_t UNIT_SUnitDmg_6fcff780(int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcffa60  D2Game.dll +0xdfa60  uint16_t UNIT_SUnitDmg_6fcffa60(int *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcffa90  D2Game.dll +0xdfa90  longlong UNIT_SUnitDmg_6fcffa90(int *reg_EAX,uint reg_EDX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcffcc0  D2Game.dll +0xdfcc0  int __thiscall UNIT_SUnitDmg_6fcffcc0(void *this,uint32_t param_2,int reg_EAX,FARPROC reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcffdc0  D2Game.dll +0xdfdc0  void UNIT_SUnitDmg_6fcffdc0(int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfff10  D2Game.dll +0xdff10  void UNIT_SUnitDmg_6fcfff10(int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fcfffd0, UNIT_SUnitDmg_6fcfffd0_1027a750  D2Game.dll +0xdffd0  void UNIT_SUnitDmg_6fcfffd0(uint16_t param_1,uint32_t param_2,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fd000c0  D2Game.dll +0xe00c0  void UNIT_SUnitDmg_6fd000c0(uint *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fd00110  D2Game.dll +0xe0110  void UNIT_SUnitDmg_6fd00110(uint *reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fd00210  D2Game.dll +0xe0210  uint32_t __fastcall UNIT_SUnitDmg_6fd00210(int param_1,int *reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fd00310  D2Game.dll +0xe0310  void __fastcall UNIT_SUnitDmg_6fd00310(uint32_t param_1,int param_2,int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitDmg_6fd003a0  D2Game.dll +0xe03a0  int __fastcall UNIT_SUnitDmg_6fd003a0(int param_1,uint param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/SUnitDmg.cpp */
/* UNIT_SUnitEvent_6fc57030  D2Game.dll +0x37030  uint32_t UNIT_SUnitEvent_6fc57030(uint32_t param_1,uint param_2,int reg_EBX,uint32_t param_4,uint32_t param_5);  sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
/* UNIT_SUnitEvent_6fc570e0  D2Game.dll +0x370e0  int __fastcall UNIT_SUnitEvent_6fc570e0(uint32_t param_1,int param_2,int reg_EAX,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
/* UNIT_SUnitEvent_6fc57110  D2Game.dll +0x37110  void UNIT_SUnitEvent_6fc57110(int param_1,int param_2,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
/* UNIT_SUnitEvent_6fc57190  D2Game.dll +0x37190  uint32_t * UNIT_SUnitEvent_6fc57190(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int reg_ESI );  sigmaRE/5_game_source/D2Game/UNIT/SUnitEvent.cpp */
/* UNIT_SUnitInactive_6fc3ef50  D2Game.dll +0x1ef50  void UNIT_SUnitInactive_6fc3ef50(uint32_t param_1,int param_2,int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitInactive.cpp */
/* UNIT_SUnitInactive_6fc3f2d0  D2Game.dll +0x1f2d0  void UNIT_SUnitInactive_6fc3f2d0(uint32_t param_1,int param_2,int *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitInactive.cpp */
/* UNIT_SUnitInactive_6fc3f600  D2Game.dll +0x1f600  void UNIT_SUnitInactive_6fc3f600(int *reg_EAX,uint32_t param_2);  sigmaRE/5_game_source/D2Game/UNIT/SUnitInactive.cpp */
/* UNIT_SUnitMsg_6fc9a0f0  D2Game.dll +0x7a0f0  void UNIT_SUnitMsg_6fc9a0f0(uint32_t *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
/* UNIT_SUnitMsg_6fc9a190  D2Game.dll +0x7a190  void UNIT_SUnitMsg_6fc9a190(uint32_t param_1,uint8_t param_2,uint32_t *reg_ESI,uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
/* UNIT_SUnitMsg_6fc9a440  D2Game.dll +0x7a440  void UNIT_SUnitMsg_6fc9a440(uint16_t param_1,uint8_t param_2,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
/* UNIT_SUnitMsg_6fc9a4c0  D2Game.dll +0x7a4c0  void UNIT_SUnitMsg_6fc9a4c0(uint32_t param_1,uint8_t param_2,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/SUnitMsg.cpp */
/* UNIT_UnitMode_6fada6c0  D2Client.dll +0x2a6c0  void UNIT_UnitMode_6fada6c0(int *reg_ESI,uint8_t *reg_EDI,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Client/UNIT/UnitMode.cpp */
/* UNIT_UnitSnd_6fad23d0  D2Client.dll +0x223d0  uint8_t * UNIT_UnitSnd_6fad23d0(uint32_t *reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/UnitSnd.cpp */
/* UNIT_UnitSnd_6fad2430  D2Client.dll +0x22430  int UNIT_UnitSnd_6fad2430(uint32_t *reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/UnitSnd.cpp */
/* UNIT_UnitSnd_6fad2490  D2Client.dll +0x22490  int UNIT_UnitSnd_6fad2490(uint32_t *reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/UnitSnd.cpp */
/* UNIT_sunitproxy_6fcaf4e0  D2Game.dll +0x8f4e0  void UNIT_sunitproxy_6fcaf4e0(uint32_t param_1,uint32_t *param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* UNIT_sunitproxy_6fcaf5c0  D2Game.dll +0x8f5c0  int __fastcall UNIT_sunitproxy_6fcaf5c0(int param_1,int *reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* UNIT_sunitproxy_6fcaf6c0  D2Game.dll +0x8f6c0  void UNIT_sunitproxy_6fcaf6c0(int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* UNIT_sunitproxy_6fcaf820  D2Game.dll +0x8f820  void __fastcall UNIT_sunitproxy_6fcaf820(int param_1,uint32_t param_2,uint32_t param_3,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* UNIT_sunitproxy_6fcafaa0  D2Game.dll +0x8faa0  uint32_t __fastcall UNIT_sunitproxy_6fcafaa0(int param_1,int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* UNIT_sunitproxy_6fcafbe0  D2Game.dll +0x8fbe0  void UNIT_sunitproxy_6fcafbe0(int param_1);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* UNIT_sunitproxy_6fcb02e0  D2Game.dll +0x902e0  void UNIT_sunitproxy_6fcb02e0(int param_1,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/UNIT/sunitproxy.cpp */
/* Unicode_strcat  D2Lang.dll +0xafe0  Unicode * __fastcall Unicode_strcat(Unicode *param_1,Unicode *param_2);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* Unicode_strlen  D2Lang.dll +0xb0b0  int __fastcall Unicode_strlen(Unicode *param_1);  sigmaRE/5_game_source/D2Lang/_unattributed/code.cpp */
/* WARDEN_WardenClient_6fb3a4d0  D2Client.dll +0x8a4d0  void __fastcall WARDEN_WardenClient_6fb3a4d0(int param_1,int param_2,int param_3,int reg_EAX,uint *reg_ESI);  sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
/* WARDEN_WardenClient_6fb3afd0  D2Client.dll +0x8afd0  void WARDEN_WardenClient_6fb3afd0(int *param_1,int *param_2);  sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
/* WARDEN_WardenClient_6fb3bbf0  D2Client.dll +0x8bbf0  void WARDEN_WardenClient_6fb3bbf0(void);  sigmaRE/5_game_source/D2Client/WARDEN/WardenClient.cpp */
/* _strncpy  D2Common.dll +0x26f0  char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);  sigmaRE/5_game_source/Game/_unattributed/code.cpp */
/* sub_6f8e7e60  D2Win.dll +0x7e60  int * sub_6f8e7e60(uint32_t param_1,uint32_t param_2,uint8_t *param_3);  sigmaRE/5_game_source/D2Win/_unattributed/before_Src_D2WinTextBox.cpp */
/* sub_6f8f2940  D2Win.dll +0x12940  void sub_6f8f2940(Unicode *param_1,int param_2,int param_3,int param_4,int param_5,int reg_EAX);  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* p_sub_6f8f80f0, sub_6f8f80f0  D2Win.dll +0x180f0  (code address inside D2Win_10144+0x90)  sigmaRE/5_game_source/D2Win/_unattributed/after_Src_D2Comp.cpp */
/* sub_6f9dc690  D2Multi.dll +0xc690  void sub_6f9dc690(void);  sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
/* sub_6f9dcb30  D2Multi.dll +0xcb30  (code address inside sub_6f9dc690+0x4a0)  sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
/* sub_6f9e0000  D2Multi.dll +0x10000  void sub_6f9e0000(byte *param_1,byte *reg_EDI);  sigmaRE/5_game_source/D2Multi/_unattributed/code_6f9dc510.cpp */
/* sub_6fab1260  D2Client.dll +0x1260  int sub_6fab1260(int reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
/* sub_6fab1400  D2Client.dll +0x1400  int sub_6fab1400(int reg_EAX,int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
/* sub_6fab1630  D2Client.dll +0x1630  uint32_t __fastcall sub_6fab1630(int *param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
/* sub_6fab1660  D2Client.dll +0x1660  uint32_t __fastcall sub_6fab1660(int *param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fab1000.cpp */
/* sub_6fabd810  D2Client.dll +0xd810  int sub_6fabd810(uint32_t param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac1240  D2Client.dll +0x11240  longlong sub_6fac1240(void);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac1360  D2Client.dll +0x11360  void __fastcall sub_6fac1360(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac14f0  D2Client.dll +0x114f0  void sub_6fac14f0(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac17c0  D2Client.dll +0x117c0  void __fastcall sub_6fac17c0(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac25a0  D2Client.dll +0x125a0  void sub_6fac25a0(void);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac2eb0  D2Client.dll +0x12eb0  void sub_6fac2eb0(void);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac3ce0  D2Client.dll +0x13ce0  void sub_6fac3ce0(int param_1,uint32_t param_2,int param_3,int param_4,int param_5,int param_6, int *reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac43e0  D2Client.dll +0x143e0  void sub_6fac43e0(char *param_1,uint reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac4660  D2Client.dll +0x14660  void __fastcall sub_6fac4660(uint32_t param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac47a0, sub_6fac47a0_10299100  D2Client.dll +0x147a0  void sub_6fac47a0(int reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac4910  D2Client.dll +0x14910  void __fastcall sub_6fac4910(uint32_t param_1,uint32_t param_2);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac49a0  D2Client.dll +0x149a0  void __fastcall sub_6fac49a0(uint32_t param_1,uint16_t param_2,uint16_t param_3);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac4a10  D2Client.dll +0x14a10  void __fastcall sub_6fac4a10(uint32_t param_1);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac4a30  D2Client.dll +0x14a30  void sub_6fac4a30(void);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac6020  D2Client.dll +0x16020  (code address inside sub_6fac5fc0+0x60)  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac61b0  D2Client.dll +0x161b0  void sub_6fac61b0(int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac63d0  D2Client.dll +0x163d0  (code address inside sub_6fac6360+0x70)  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6fac6a90  D2Client.dll +0x16a90  void sub_6fac6a90(uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/before_UNIT_Player_6fabd3f0.cpp */
/* sub_6facbde0  D2Client.dll +0x1bde0  uint32_t sub_6facbde0(uint *reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
/* sub_6facbf20  D2Client.dll +0x1bf20  uint32_t sub_6facbf20(uint32_t param_1,int param_2,int param_3,byte param_4);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
/* sub_6facd740  D2Client.dll +0x1d740  uint32_t sub_6facd740(int reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
/* sub_6facddf0  D2Client.dll +0x1ddf0  (code address inside sub_6facdcc0+0x130)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
/* sub_6facedb0  D2Client.dll +0x1edb0  (code address inside sub_6face940+0x470)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_Player_and_UNIT_CUnitEvent.cpp */
/* sub_6fad16a0, sub_6fad16a0_102ac310  D2Client.dll +0x216a0  uint32_t __fastcall sub_6fad16a0(int param_1);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
/* sub_6fad17e0  D2Client.dll +0x217e0  int sub_6fad17e0(int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
/* sub_6fad2390  D2Client.dll +0x22390  void sub_6fad2390(int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_CUnitEvent_and_UNIT_UnitSnd.cpp */
/* sub_6fad2a70  D2Client.dll +0x22a70  void sub_6fad2a70(int *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad3200  D2Client.dll +0x23200  void sub_6fad3200(int param_1,uint param_2);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad3f20  D2Client.dll +0x23f20  uint __fastcall sub_6fad3f20(int param_1,uint param_2,uint param_3);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad42b0  D2Client.dll +0x242b0  int __thiscall sub_6fad42b0(void *this,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad6320  D2Client.dll +0x26320  uint32_t sub_6fad6320(int reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad65e0  D2Client.dll +0x265e0  void sub_6fad65e0(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad6fa0  D2Client.dll +0x26fa0  (code address inside sub_6fad6cd0+0x2d0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad77e0  D2Client.dll +0x277e0  void sub_6fad77e0(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad8050  D2Client.dll +0x28050  (code address inside sub_6fad7ef0+0x160)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitSnd_and_UI_panel.cpp */
/* sub_6fad9300  D2Client.dll +0x29300  (code address inside sub_6fad9250+0xb0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_panel_and_UNIT_UnitMode.cpp */
/* sub_6fad9990  D2Client.dll +0x29990  void __fastcall sub_6fad9990(uint32_t param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_panel_and_UNIT_UnitMode.cpp */
/* sub_6fad9b50  D2Client.dll +0x29b50  (code address inside sub_6fad9990+0x1c0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_panel_and_UNIT_UnitMode.cpp */
/* sub_6fadb360  D2Client.dll +0x2b360  void sub_6fadb360(int reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
/* sub_6fadb420  D2Client.dll +0x2b420  char * sub_6fadb420(uint32_t param_1,char *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
/* sub_6fadb4c0  D2Client.dll +0x2b4c0  void sub_6fadb4c0(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
/* sub_6fadb680  D2Client.dll +0x2b680  uint32_t __fastcall sub_6fadb680(int *param_1,uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_UnitMode_and_SKILLS_SkillsPal.cpp */
/* sub_6fadc190  D2Client.dll +0x2c190  int sub_6fadc190(int reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/between_SKILLS_SkillsPal_and_UI_SkillDesc.cpp */
/* sub_6fadc230  D2Client.dll +0x2c230  int sub_6fadc230(int reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/between_SKILLS_SkillsPal_and_UI_SkillDesc.cpp */
/* sub_6fae8cd0  D2Client.dll +0x38cd0  uint32_t sub_6fae8cd0(uint reg_ESI);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_SkillDesc_and_UI_CmdTbl.cpp */
/* sub_6fae91e0  D2Client.dll +0x391e0  uint8_t * __fastcall sub_6fae91e0(uint32_t param_1,int param_2,int reg_ESI);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_SkillDesc_and_UI_CmdTbl.cpp */
/* sub_6fae9c20  D2Client.dll +0x39c20  (code address inside sub_6fae9ba0+0x80)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9c30, sub_6fae9c30_102a8050  D2Client.dll +0x39c30  (code address inside sub_6fae9ba0+0x90)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9c50  D2Client.dll +0x39c50  (code address inside sub_6fae9ba0+0xb0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9c60  D2Client.dll +0x39c60  (code address inside sub_6fae9ba0+0xc0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9c80  D2Client.dll +0x39c80  (code address inside sub_6fae9ba0+0xe0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9ca0  D2Client.dll +0x39ca0  (code address inside sub_6fae9ba0+0x100)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9cc0  D2Client.dll +0x39cc0  (code address inside sub_6fae9ba0+0x120)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9ce0  D2Client.dll +0x39ce0  (code address inside sub_6fae9ba0+0x140)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9d00  D2Client.dll +0x39d00  (code address inside sub_6fae9ba0+0x160)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9d20  D2Client.dll +0x39d20  (code address inside sub_6fae9ba0+0x180)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9d40  D2Client.dll +0x39d40  (code address inside sub_6fae9ba0+0x1a0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9d60  D2Client.dll +0x39d60  (code address inside sub_6fae9ba0+0x1c0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9d80  D2Client.dll +0x39d80  (code address inside sub_6fae9ba0+0x1e0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9dc0  D2Client.dll +0x39dc0  (code address inside sub_6fae9ba0+0x220)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9df0  D2Client.dll +0x39df0  (code address inside sub_6fae9ba0+0x250)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9e20  D2Client.dll +0x39e20  (code address inside sub_6fae9ba0+0x280)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6fae9f30  D2Client.dll +0x39f30  void __fastcall sub_6fae9f30(uint32_t param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faea690  D2Client.dll +0x3a690  (code address inside sub_6faea3a0+0x2f0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faea8c0  D2Client.dll +0x3a8c0  (code address inside sub_6faea730+0x190)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faea8e0  D2Client.dll +0x3a8e0  (code address inside sub_6faea730+0x1b0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faea900  D2Client.dll +0x3a900  (code address inside sub_6faea730+0x1d0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faea9f0  D2Client.dll +0x3a9f0  (code address inside sub_6faea730+0x2c0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeaa30  D2Client.dll +0x3aa30  (code address inside sub_6faea730+0x300)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeaa70  D2Client.dll +0x3aa70  (code address inside sub_6faea730+0x340)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeaab0  D2Client.dll +0x3aab0  (code address inside sub_6faea730+0x380)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeaaf0  D2Client.dll +0x3aaf0  (code address inside sub_6faea730+0x3c0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeab30  D2Client.dll +0x3ab30  (code address inside sub_6faea730+0x400)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeab70  D2Client.dll +0x3ab70  (code address inside sub_6faea730+0x440)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeabb0  D2Client.dll +0x3abb0  (code address inside sub_6faea730+0x480)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeabf0  D2Client.dll +0x3abf0  (code address inside sub_6faea730+0x4c0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeac30  D2Client.dll +0x3ac30  (code address inside sub_6faea730+0x500)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeac70  D2Client.dll +0x3ac70  (code address inside sub_6faea730+0x540)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeacb0  D2Client.dll +0x3acb0  (code address inside sub_6faea730+0x580)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeacf0  D2Client.dll +0x3acf0  (code address inside sub_6faea730+0x5c0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faead30  D2Client.dll +0x3ad30  (code address inside sub_6faea730+0x600)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faead70  D2Client.dll +0x3ad70  (code address inside sub_6faea730+0x640)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeadb0  D2Client.dll +0x3adb0  (code address inside sub_6faea730+0x680)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeadf0  D2Client.dll +0x3adf0  (code address inside sub_6faea730+0x6c0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeae40  D2Client.dll +0x3ae40  (code address inside sub_6faea730+0x710)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeaea0  D2Client.dll +0x3aea0  (code address inside sub_6faea730+0x770)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeaee0  D2Client.dll +0x3aee0  (code address inside sub_6faea730+0x7b0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeb230  D2Client.dll +0x3b230  (code address inside sub_6faea730+0xb00)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeb300  D2Client.dll +0x3b300  (code address inside sub_6faea730+0xbd0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeb470  D2Client.dll +0x3b470  (code address inside sub_6faea730+0xd40)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeb5b0  D2Client.dll +0x3b5b0  (code address inside sub_6faea730+0xe80)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeb8b0  D2Client.dll +0x3b8b0  (code address inside sub_6faea730+0x1180)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* p_sub_6faeba70, sub_6faeba70  D2Client.dll +0x3ba70  (code address inside sub_6faea730+0x1340)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faebc10  D2Client.dll +0x3bc10  (code address inside sub_6faea730+0x14e0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faebeb0  D2Client.dll +0x3beb0  (code address inside sub_6faea730+0x1780)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faebfc0  D2Client.dll +0x3bfc0  (code address inside sub_6faea730+0x1890)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec2a0  D2Client.dll +0x3c2a0  (code address inside sub_6faea730+0x1b70)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec5b0  D2Client.dll +0x3c5b0  (code address inside sub_6faea730+0x1e80)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec8c0  D2Client.dll +0x3c8c0  (code address inside sub_6faea730+0x2190)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec8e0  D2Client.dll +0x3c8e0  (code address inside sub_6faea730+0x21b0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec920  D2Client.dll +0x3c920  (code address inside sub_6faea730+0x21f0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec960  D2Client.dll +0x3c960  (code address inside sub_6faea730+0x2230)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faec9a0  D2Client.dll +0x3c9a0  (code address inside sub_6faea730+0x2270)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faecc60  D2Client.dll +0x3cc60  void sub_6faecc60(int param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeccc0, sub_6faeccc0_1029e920  D2Client.dll +0x3ccc0  void sub_6faeccc0(int param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faedcf0  D2Client.dll +0x3dcf0  void __thiscall sub_6faedcf0(void *this,short *param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faee0c0  D2Client.dll +0x3e0c0  void __thiscall sub_6faee0c0(void *this,short *param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faeecb0  D2Client.dll +0x3ecb0  (code address inside sub_6faeebf0+0xc0)  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf0550  D2Client.dll +0x40550  int sub_6faf0550(uint32_t param_1,int reg_EAX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf0f00  D2Client.dll +0x40f00  void sub_6faf0f00(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,int param_6,int reg_EBX);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf15a0  D2Client.dll +0x415a0  uint32_t __fastcall sub_6faf15a0(int param_1,int param_2);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf2090  D2Client.dll +0x42090  bool sub_6faf2090(void);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf20e0  D2Client.dll +0x420e0  bool sub_6faf20e0(void);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf2880  D2Client.dll +0x42880  void sub_6faf2880(void);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf29c0  D2Client.dll +0x429c0  void sub_6faf29c0(void);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf5980  D2Client.dll +0x45980  uint32_t sub_6faf5980(void);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_CmdTbl_and_UI_npcmenu.cpp */
/* sub_6faf6880  D2Client.dll +0x46880  uint32_t sub_6faf6880(int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* sub_6faf6ee0  D2Client.dll +0x46ee0  void sub_6faf6ee0(int param_1,byte param_2,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* sub_6faf7b20  D2Client.dll +0x47b20  uint32_t sub_6faf7b20(uint reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* sub_6faf7d60  D2Client.dll +0x47d60  uint32_t __thiscall sub_6faf7d60(void *this,int param_2,uint32_t param_3,uint32_t param_4,int param_5, uint32_t param_6,int param_7,uint32_t reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* sub_6faf8150  D2Client.dll +0x48150  uint64_t sub_6faf8150(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* p_sub_6faf8b20, sub_6faf8b20  D2Client.dll +0x48b20  void sub_6faf8b20(uint32_t reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* sub_6faf9440  D2Client.dll +0x49440  uint32_t sub_6faf9440(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_npcmenu_and_UNIT_Monster.cpp */
/* sub_6fb01ae0  D2Client.dll +0x51ae0  int * sub_6fb01ae0(int *param_1,int *param_2,int *param_3,byte param_4,int *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb01e30  D2Client.dll +0x51e30  void sub_6fb01e30(int *reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb03c30  D2Client.dll +0x53c30  void __fastcall sub_6fb03c30(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb04280  D2Client.dll +0x54280  int sub_6fb04280(uint32_t param_1,Unicode *param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb046e0  D2Client.dll +0x546e0  int sub_6fb046e0(int *param_1,int param_2,int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb04780  D2Client.dll +0x54780  void sub_6fb04780(Unicode *param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb04880  D2Client.dll +0x54880  void sub_6fb04880(uint32_t param_1,uint32_t param_2,int *param_3);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb04e10, sub_6fb04e10_1029a7c0  D2Client.dll +0x54e10  uint32_t sub_6fb04e10(int *param_1,uint param_2,uint param_3,uint32_t param_4,int reg_EAX, uint16_t *reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb05f10  D2Client.dll +0x55f10  void sub_6fb05f10(int *reg_EBX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb05fb0  D2Client.dll +0x55fb0  void sub_6fb05fb0(uint32_t param_1,uint32_t param_2,uint32_t reg_EBX,int *reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb060b0  D2Client.dll +0x560b0  void sub_6fb060b0(int *param_1,uint32_t param_2,Unicode *param_3,Unicode *reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Monster_and_UI_showitems.cpp */
/* sub_6fb096a0  D2Client.dll +0x596a0  void sub_6fb096a0(uint reg_ESI);  sigmaRE/5_game_source/D2Client/UI/_unattributed/between_UI_showitems_and_UI_Hireables.cpp */
/* sub_6fb0c3d0  D2Client.dll +0x5c3d0  (code address inside sub_6fb0ba90+0x940)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_Hireables_and_Sound_SoundHdr.cpp */
/* sub_6fb11d00  D2Client.dll +0x61d00  void sub_6fb11d00(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13270  D2Client.dll +0x63270  void sub_6fb13270(int *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb133b0  D2Client.dll +0x633b0  (code address inside sub_6fb13270+0x140)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb133e0  D2Client.dll +0x633e0  (code address inside sub_6fb13270+0x170)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13410  D2Client.dll +0x63410  (code address inside sub_6fb13270+0x1a0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13420  D2Client.dll +0x63420  (code address inside sub_6fb13270+0x1b0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13430  D2Client.dll +0x63430  (code address inside sub_6fb13270+0x1c0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13460  D2Client.dll +0x63460  (code address inside sub_6fb13270+0x1f0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13470  D2Client.dll +0x63470  (code address inside sub_6fb13270+0x200)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb134a0  D2Client.dll +0x634a0  (code address inside sub_6fb13270+0x230)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13520  D2Client.dll +0x63520  void __fastcall sub_6fb13520(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13580  D2Client.dll +0x63580  (code address inside sub_6fb13520+0x60)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb135b0  D2Client.dll +0x635b0  void __fastcall sub_6fb135b0(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb13610  D2Client.dll +0x63610  (code address inside sub_6fb135b0+0x60)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14080  D2Client.dll +0x64080  int sub_6fb14080(int reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14110  D2Client.dll +0x64110  void sub_6fb14110(uint32_t reg_ECX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14150  D2Client.dll +0x64150  (code address inside sub_6fb14110+0x40)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14250  D2Client.dll +0x64250  void __fastcall sub_6fb14250(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb142e0  D2Client.dll +0x642e0  (code address inside sub_6fb14250+0x90)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14310  D2Client.dll +0x64310  (code address inside sub_6fb14250+0xc0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14330  D2Client.dll +0x64330  void __fastcall sub_6fb14330(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14350  D2Client.dll +0x64350  (code address inside sub_6fb14330+0x20)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14370  D2Client.dll +0x64370  (code address inside sub_6fb14330+0x40)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb143a0  D2Client.dll +0x643a0  (code address inside sub_6fb14330+0x70)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb143e0  D2Client.dll +0x643e0  (code address inside sub_6fb14330+0xb0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14400  D2Client.dll +0x64400  void __fastcall sub_6fb14400(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14420  D2Client.dll +0x64420  (code address inside sub_6fb14400+0x20)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14440  D2Client.dll +0x64440  void __fastcall sub_6fb14440(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14460  D2Client.dll +0x64460  (code address inside sub_6fb14440+0x20)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14810  D2Client.dll +0x64810  (code address inside sub_6fb147a0+0x70)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14890  D2Client.dll +0x64890  (code address inside sub_6fb147a0+0xf0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14910  D2Client.dll +0x64910  void __fastcall sub_6fb14910(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14960  D2Client.dll +0x64960  (code address inside sub_6fb14910+0x50)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14b30  D2Client.dll +0x64b30  (code address inside sub_6fb14990+0x1a0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14d20  D2Client.dll +0x64d20  (code address inside sub_6fb14990+0x390)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14e00  D2Client.dll +0x64e00  (code address inside sub_6fb14990+0x470)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14ee0  D2Client.dll +0x64ee0  (code address inside sub_6fb14990+0x550)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14f50  D2Client.dll +0x64f50  (code address inside sub_6fb14990+0x5c0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb14fd0  D2Client.dll +0x64fd0  void sub_6fb14fd0(int param_1,uint32_t reg_ECX,uint reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb15230  D2Client.dll +0x65230  void sub_6fb15230(uint32_t reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb156b0  D2Client.dll +0x656b0  (code address inside sub_6fb15230+0x480)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb15c70  D2Client.dll +0x65c70  (code address inside sub_6fb15760+0x510)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb15df0  D2Client.dll +0x65df0  (code address inside sub_6fb15760+0x690)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb15e00  D2Client.dll +0x65e00  (code address inside sub_6fb15760+0x6a0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb166d0  D2Client.dll +0x666d0  void __fastcall sub_6fb166d0(uint *param_1,int reg_EAX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_automap_and_ENGINE_Gfx.cpp */
/* sub_6fb20140  D2Client.dll +0x70140  void sub_6fb20140(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_ENGINE_GfxUtil_and_UNIT_PlrSkills.cpp */
/* sub_6fb23760  D2Client.dll +0x73760  void sub_6fb23760(int param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb23bc0  D2Client.dll +0x73bc0  void sub_6fb23bc0(int *reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb24480  D2Client.dll +0x74480  void sub_6fb24480(int *reg_EBX);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb25a20  D2Client.dll +0x75a20  (code address inside sub_6fb258c0+0x160)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb274d0  D2Client.dll +0x774d0  (code address inside sub_6fb272e0+0x1f0)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb28fc0  D2Client.dll +0x78fc0  void sub_6fb28fc0(int param_1,int reg_EBX,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb296f0  D2Client.dll +0x796f0  void sub_6fb296f0(int param_1,int reg_EBX,int reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb2c5c0  D2Client.dll +0x7c5c0  int * sub_6fb2c5c0(void);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb2d850  D2Client.dll +0x7d850  void sub_6fb2d850(uint reg_ESI);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb2de50  D2Client.dll +0x7de50  void sub_6fb2de50(int reg_EAX);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb2e6e0  D2Client.dll +0x7e6e0  uint32_t sub_6fb2e6e0(void);  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb2e840  D2Client.dll +0x7e840  (code address inside sub_6fb2e6e0+0x160)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb2ed30  D2Client.dll +0x7ed30  (code address inside sub_6fb2ea90+0x2a0)  sigmaRE/5_game_source/D2Client/UNIT/_unattributed/between_UNIT_PlrSkills_and_UNIT_Item.cpp */
/* sub_6fb3bd90  D2Client.dll +0x8bd90  uint32_t __fastcall sub_6fb3bd90(int param_1,int param_2);  sigmaRE/5_game_source/D2Client/_unattributed/between_WARDEN_WardenClient_and_UI_inv.cpp */
/* sub_6fb44aa0  D2Client.dll +0x94aa0  (code address inside UI_inv_6fb44970+0x130)  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* sub_6fb44df0  D2Client.dll +0x94df0  (code address inside UI_inv_6fb44ced+0x103)  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* sub_6fb44ff0  D2Client.dll +0x94ff0  (code address inside UI_inv_6fb44ced+0x303)  sigmaRE/5_game_source/D2Client/UI/inv.cpp */
/* sub_6fb45c60  D2Client.dll +0x95c60  void sub_6fb45c60(uint32_t reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb45f80  D2Client.dll +0x95f80  void __fastcall sub_6fb45f80(void *param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5, int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb47450  D2Client.dll +0x97450  void sub_6fb47450(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb47840  D2Client.dll +0x97840  void sub_6fb47840(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb48b60  D2Client.dll +0x98b60  uint32_t __fastcall sub_6fb48b60(int param_1,int param_2,int *param_3);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb48dc0  D2Client.dll +0x98dc0  void sub_6fb48dc0(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4a7d0  D2Client.dll +0x9a7d0  (code address inside sub_6fb49440+0x1390)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4a920  D2Client.dll +0x9a920  void sub_6fb4a920(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4adb0  D2Client.dll +0x9adb0  (code address inside sub_6fb4a920+0x490)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4b010  D2Client.dll +0x9b010  (code address inside sub_6fb4ae80+0x190)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4b300  D2Client.dll +0x9b300  (code address inside sub_6fb4ae80+0x480)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4be70  D2Client.dll +0x9be70  uint32_t sub_6fb4be70(int reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4bed0  D2Client.dll +0x9bed0  (code address inside sub_6fb4be70+0x60)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4c4f0  D2Client.dll +0x9c4f0  (code address inside sub_6fb4be70+0x680)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4c630  D2Client.dll +0x9c630  (code address inside sub_6fb4be70+0x7c0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4c830  D2Client.dll +0x9c830  (code address inside sub_6fb4be70+0x9c0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4d850  D2Client.dll +0x9d850  int __fastcall sub_6fb4d850(uint32_t param_1,int *reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4f460  D2Client.dll +0x9f460  void sub_6fb4f460(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4f7b0  D2Client.dll +0x9f7b0  void sub_6fb4f7b0(int param_1,int param_2);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4f950  D2Client.dll +0x9f950  void sub_6fb4f950(int reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4fc50  D2Client.dll +0x9fc50  (code address inside sub_6fb4fb00+0x150)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb4ff10  D2Client.dll +0x9ff10  (code address inside sub_6fb4fe50+0xc0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb50320  D2Client.dll +0xa0320  (code address inside sub_6fb50250+0xd0)  sigmaRE/5_game_source/D2Client/_unattributed/between_UI_inv_and_SKILLS_Skills.cpp */
/* sub_6fb53c10  D2Client.dll +0xa3c10  (code address inside SKILLS_Skills_6fb53ad0+0x140)  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* sub_6fb54860  D2Client.dll +0xa4860  (code address inside SKILLS_Skills_6fb54040+0x820)  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* sub_6fb54a20  D2Client.dll +0xa4a20  (code address inside SKILLS_Skills_6fb54040+0x9e0)  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* sub_6fb54d60  D2Client.dll +0xa4d60  (code address inside SKILLS_Skills_6fb54d40+0x20)  sigmaRE/5_game_source/D2Client/SKILLS/Skills.cpp */
/* sub_6fb5bf50  D2Client.dll +0xabf50  (code address inside sub_6fb5bdc0+0x190)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_CUnit_and_GAME_SCmd.cpp */
/* sub_6fb5c1b0  D2Client.dll +0xac1b0  void sub_6fb5c1b0(uint8_t *reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_CUnit_and_GAME_SCmd.cpp */
/* sub_6fb5ce20  D2Client.dll +0xace20  void sub_6fb5ce20(int param_1,byte *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_GAME_SCmd_and_UNIT_Missile.cpp */
/* sub_6fb5dd30  D2Client.dll +0xadd30  void __fastcall sub_6fb5dd30(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_GAME_SCmd_and_UNIT_Missile.cpp */
/* sub_6fb691c0, p_sub_6fb691c0  D2Client.dll +0xb91c0  void __fastcall sub_6fb691c0(int *param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb69a80  D2Client.dll +0xb9a80  uint32_t __thiscall sub_6fb69a80(void *this,uint32_t param_2,int param_3,int param_4,int param_5,int param_6, uint32_t param_7,uint32_t param_8,int param_9,int *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6c720  D2Client.dll +0xbc720  void sub_6fb6c720(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6cd20  D2Client.dll +0xbcd20  (code address inside sub_6fb6cb90+0x190)  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6dca0  D2Client.dll +0xbdca0  void sub_6fb6dca0(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6e240  D2Client.dll +0xbe240  int sub_6fb6e240(int reg_ESI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6e2e0  D2Client.dll +0xbe2e0  void sub_6fb6e2e0(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6e350  D2Client.dll +0xbe350  uint32_t sub_6fb6e350(int param_1,int param_2);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6e4c0  D2Client.dll +0xbe4c0  void sub_6fb6e4c0(int *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6e860  D2Client.dll +0xbe860  void sub_6fb6e860(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6eaf0  D2Client.dll +0xbeaf0  void sub_6fb6eaf0(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6eb90  D2Client.dll +0xbeb90  void sub_6fb6eb90(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6f5f0  D2Client.dll +0xbf5f0  short * sub_6fb6f5f0(char param_1,short *reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6f720  D2Client.dll +0xbf720  void sub_6fb6f720(void);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb6fec0  D2Client.dll +0xbfec0  void sub_6fb6fec0(Unicode *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb70450  D2Client.dll +0xc0450  void __thiscall sub_6fb70450(void *this,uint32_t *param_2,Unicode *param_3,int param_4,int *reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb70d30  D2Client.dll +0xc0d30  void sub_6fb70d30(int *param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb71a80  D2Client.dll +0xc1a80  uint32_t sub_6fb71a80(int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb71c40  D2Client.dll +0xc1c40  void __fastcall sub_6fb71c40(int param_1,uint32_t reg_EAX,uint32_t reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb721f0  D2Client.dll +0xc21f0  void sub_6fb721f0(uint32_t reg_EAX);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb72790  D2Client.dll +0xc2790  uint64_t __fastcall sub_6fb72790(uint param_1,uint param_2,int param_3);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb730e0  D2Client.dll +0xc30e0  void sub_6fb730e0(int param_1);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb739e0  D2Client.dll +0xc39e0  void sub_6fb739e0(uint32_t reg_EBX,uint32_t reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Client/_unattributed/between_UNIT_Missile_and_SKILLS_SkillsEMon.cpp */
/* sub_6fb77e30  D2Client.dll +0xc7e30  void __fastcall sub_6fb77e30(int param_1,int param_2,int param_3,int reg_EAX);  sigmaRE/5_game_source/D2Client/SKILLS/_unattributed/between_SKILLS_SkillsBar_and_SKILLS_SkillsNec.cpp */
/* sub_6fc21100  D2Game.dll +0x1100  uint32_t __fastcall sub_6fc21100(int *param_1);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21130  D2Game.dll +0x1130  uint32_t __fastcall sub_6fc21130(int *param_1);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21160  D2Game.dll +0x1160  void __fastcall sub_6fc21160(uint *param_1);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21180  D2Game.dll +0x1180  uint __fastcall sub_6fc21180(ulonglong *param_1,uint reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc211d0  D2Game.dll +0x11d0  uint __fastcall sub_6fc211d0(ulonglong *param_1,uint reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21280  D2Game.dll +0x1280  int sub_6fc21280(int reg_EAX,int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21320  D2Game.dll +0x1320  int sub_6fc21320(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21420  D2Game.dll +0x1420  int sub_6fc21420(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21480  D2Game.dll +0x1480  int __fastcall sub_6fc21480(ulonglong *param_1,uint reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc214d0  D2Game.dll +0x14d0  int __fastcall sub_6fc214d0(uint param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21560  D2Game.dll +0x1560  uint __fastcall sub_6fc21560(uint32_t param_1,uint param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc215d0  D2Game.dll +0x15d0  uint __fastcall sub_6fc215d0(uint32_t param_1,uint param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21620  D2Game.dll +0x1620  uint __fastcall sub_6fc21620(uint param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21670  D2Game.dll +0x1670  void sub_6fc21670(int param_1,int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc21900  D2Game.dll +0x1900  int sub_6fc21900(int *reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc22060  D2Game.dll +0x2060  uint32_t __fastcall sub_6fc22060(uint32_t param_1,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc22090  D2Game.dll +0x2090  void sub_6fc22090(uint param_1,uint32_t param_2,uint32_t param_3,int *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc22130  D2Game.dll +0x2130  uint * __fastcall sub_6fc22130(uint32_t param_1,int param_2,uint reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/before_OBJECTS_objrgn_6fc21000.cpp */
/* sub_6fc2e5d0  D2Game.dll +0xe5d0  int sub_6fc2e5d0(int param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2e660  D2Game.dll +0xe660  int sub_6fc2e660(int param_1,int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2e7e0  D2Game.dll +0xe7e0  void sub_6fc2e7e0(uint32_t param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2e930  D2Game.dll +0xe930  void sub_6fc2e930(uint32_t param_1,int *param_2,int *reg_ESI,uint32_t param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2e990  D2Game.dll +0xe990  void __fastcall sub_6fc2e990(int param_1,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2ea10  D2Game.dll +0xea10  void sub_6fc2ea10(int param_1,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2eae0  D2Game.dll +0xeae0  int * sub_6fc2eae0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, int *param_5,uint32_t param_6,int reg_EBX,uint *reg_ESI,void *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2ebb0  D2Game.dll +0xebb0  void sub_6fc2ebb0(int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2ec90  D2Game.dll +0xec90  void sub_6fc2ec90(int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2f2f0  D2Game.dll +0xf2f0  int sub_6fc2f2f0(int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2f370  D2Game.dll +0xf370  uint32_t sub_6fc2f370(uint32_t param_1,int param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc2fc40  D2Game.dll +0xfc40  char __fastcall sub_6fc2fc40(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc307e0  D2Game.dll +0x107e0  int * sub_6fc307e0(uint32_t param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc31070  D2Game.dll +0x11070  uint32_t __thiscall sub_6fc31070(void *this,int param_2,int *reg_EBX,uint reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc31490, sub_6fc31490_1027a920  D2Game.dll +0x11490  int sub_6fc31490(int param_1,int *param_2,int reg_EDI,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc31880  D2Game.dll +0x11880  int sub_6fc31880(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint param_5, int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc31980  D2Game.dll +0x11980  int __fastcall sub_6fc31980(int param_1,int param_2,int param_3,uint32_t param_4,int param_5,uint32_t param_6, uint32_t param_7,uint32_t param_8,uint32_t param_9,uint32_t param_10,int reg_EAX );  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc32380  D2Game.dll +0x12380  void sub_6fc32380(int param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int *param_9,int param_10);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc32df0  D2Game.dll +0x12df0  void sub_6fc32df0(int *reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_objrgn_and_ITEMS_Items.cpp */
/* sub_6fc33c20  D2Game.dll +0x13c20  uint32_t sub_6fc33c20(int param_1,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc344d0  D2Game.dll +0x144d0  uint sub_6fc344d0(int param_1,int param_2,uint32_t param_3,uint32_t param_4,int param_5, uint32_t param_6,int param_7);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc36270  D2Game.dll +0x16270  void __fastcall sub_6fc36270(int param_1,int param_2,int *param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc37cb0  D2Game.dll +0x17cb0  void __fastcall sub_6fc37cb0(int param_1,int *param_2,int *param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc38730  D2Game.dll +0x18730  void __fastcall sub_6fc38730(int param_1,int *param_2,int param_3,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc38a90  D2Game.dll +0x18a90  (code address inside sub_6fc38730+0x360)  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc38ce0  D2Game.dll +0x18ce0  void __fastcall sub_6fc38ce0(int param_1,int *param_2,int param_3,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc3c8a0  D2Game.dll +0x1c8a0  void sub_6fc3c8a0(int param_1,int param_2,void *param_3,int *param_4,ulonglong *param_5,int *param_6 ,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc3cae0  D2Game.dll +0x1cae0  int sub_6fc3cae0(int param_1,int *param_2,byte param_3,int *reg_EAX,int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc3db40  D2Game.dll +0x1db40  void __fastcall sub_6fc3db40(uint32_t *param_1,int *param_2,int *param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc3dd40  D2Game.dll +0x1dd40  (code address inside sub_6fc3db40+0x200)  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc3e140  D2Game.dll +0x1e140  int sub_6fc3e140(int param_1,int *param_2,int param_3,int param_4,int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_ITEMS_Items_and_UNIT_SUnitInactive.cpp */
/* sub_6fc42920  D2Game.dll +0x22920  void sub_6fc42920(uint8_t param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc42a80  D2Game.dll +0x22a80  bool sub_6fc42a80(ushort param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc43260  D2Game.dll +0x23260  void sub_6fc43260(int *reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc432b0  D2Game.dll +0x232b0  void sub_6fc432b0(int *param_1,int param_2,int reg_EBX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc43ae0  D2Game.dll +0x23ae0  int sub_6fc43ae0(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc43ca0  D2Game.dll +0x23ca0  void sub_6fc43ca0(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc448a0  D2Game.dll +0x248a0  void __fastcall sub_6fc448a0(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,int reg_EAX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc44950  D2Game.dll +0x24950  int * __fastcall sub_6fc44950(uint32_t param_1,int param_2,int param_3,void *param_4,int param_5,int param_6, int param_7,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc468e0  D2Game.dll +0x268e0  void __fastcall sub_6fc468e0(uint32_t param_1,int *param_2,uint32_t param_3,int param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc46a30  D2Game.dll +0x26a30  uint32_t sub_6fc46a30(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiGeneral_and_SKILLS_SkillBar.cpp */
/* sub_6fc4e830  D2Game.dll +0x2e830  uint32_t sub_6fc4e830(int reg_ESI,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6);  sigmaRE/5_game_source/D2Game/_unattributed/between_OBJECTS_Objects_and_UNIT_SUnit.cpp */
/* sub_6fc54130  D2Game.dll +0x34130  void sub_6fc54130(int param_1,int *param_2,int *param_3,int param_4);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc54860  D2Game.dll +0x34860  void sub_6fc54860(void);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc548a0  D2Game.dll +0x348a0  void sub_6fc548a0(int param_1);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc54aa0  D2Game.dll +0x34aa0  void sub_6fc54aa0(byte param_1,int *reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc54b80  D2Game.dll +0x34b80  void __thiscall sub_6fc54b80(void *this,uint16_t param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc55e90  D2Game.dll +0x35e90  void __fastcall sub_6fc55e90(void *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc56140  D2Game.dll +0x36140  void sub_6fc56140(int reg_ESI);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc56470  D2Game.dll +0x36470  int * __fastcall sub_6fc56470(uint32_t param_1,int *param_2,void *param_3,int reg_EAX);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc565e0  D2Game.dll +0x365e0  void __thiscall sub_6fc565e0(void *this,int param_2,int reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/UNIT/_unattributed/between_UNIT_SUnit_and_UNIT_SUnitEvent.cpp */
/* sub_6fc57260  D2Game.dll +0x37260  void sub_6fc57260(int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
/* sub_6fc572c0, sub_6fc572c0_1029a300  D2Game.dll +0x372c0  uint32_t * sub_6fc572c0(int param_1,uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitEvent_and_PLAYER_Player.cpp */
/* sub_6fc57540  D2Game.dll +0x37540  void sub_6fc57540(int reg_EAX,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc57680  D2Game.dll +0x37680  uint32_t sub_6fc57680(int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc58180  D2Game.dll +0x38180  void sub_6fc58180(int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc58620  D2Game.dll +0x38620  void sub_6fc58620(int param_1,int reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc58fb0  D2Game.dll +0x38fb0  uint32_t __fastcall sub_6fc58fb0(uint32_t param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc59b40  D2Game.dll +0x39b40  int __thiscall sub_6fc59b40(void *this,int param_2,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc5a280, sub_6fc5a280_1027c820  D2Game.dll +0x3a280  int sub_6fc5a280(int param_1,uint32_t reg_EBX,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc5a4e0  D2Game.dll +0x3a4e0  void sub_6fc5a4e0(uint32_t param_1,uint *param_2,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc5ae10  D2Game.dll +0x3ae10  void sub_6fc5ae10(int param_1,int *param_2,uint32_t param_3,uint *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc5aff0  D2Game.dll +0x3aff0  void sub_6fc5aff0(int reg_EAX,uint32_t reg_ECX,int *reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc5ede0  D2Game.dll +0x3ede0  uint32_t sub_6fc5ede0(int param_1,int *param_2,int param_3,int *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc5f320  D2Game.dll +0x3f320  uint32_t sub_6fc5f320(int param_1,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc639a0  D2Game.dll +0x439a0  void sub_6fc639a0(int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc641c0  D2Game.dll +0x441c0  uint32_t sub_6fc641c0(void *param_1,int param_2,uint32_t param_3,int param_4,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc64600  D2Game.dll +0x44600  (code address inside sub_6fc645e0+0x20)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_Player_and_SKILLS_SkillDruid.cpp */
/* sub_6fc66b20  D2Game.dll +0x46b20  uint32_t __thiscall sub_6fc66b20(void *this,uint32_t param_2,int param_3,int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
/* sub_6fc67700  D2Game.dll +0x47700  int * sub_6fc67700(int param_1,int param_2,uint param_3,byte param_4,void *reg_EAX, uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
/* sub_6fc67880  D2Game.dll +0x47880  void sub_6fc67880(int *reg_ESI,void *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
/* sub_6fc679b0  D2Game.dll +0x479b0  uint32_t __thiscall sub_6fc679b0(void *this,int param_2,uint32_t param_3,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
/* sub_6fc67a20  D2Game.dll +0x47a20  void sub_6fc67a20(void *param_1,void *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
/* sub_6fc67cf0  D2Game.dll +0x47cf0  int * __thiscall sub_6fc67cf0(void *this,int param_2,int param_3,int param_4,int reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillDruid_and_MONSTER_MonsterAI.cpp */
/* sub_6fc68950  D2Game.dll +0x48950  void __fastcall sub_6fc68950(int param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterAI_and_GAME_Clients.cpp */
/* sub_6fc6c220  D2Game.dll +0x4c220  uint32_t sub_6fc6c220(int reg_ECX);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
/* sub_6fc6df20  D2Game.dll +0x4df20  int sub_6fc6df20(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
/* sub_6fc6dfe0  D2Game.dll +0x4dfe0  (code address inside sub_6fc6df80+0x60)  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
/* sub_6fc6e180  D2Game.dll +0x4e180  void sub_6fc6e180(uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
/* sub_6fc6e2a0  D2Game.dll +0x4e2a0  uint32_t __thiscall sub_6fc6e2a0(void *this,int param_1,uint32_t param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
/* sub_6fc6eb50  D2Game.dll +0x4eb50  void __fastcall sub_6fc6eb50(void *param_1,int reg_EAX,uint32_t reg_EBX,uint32_t param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Clients_and_SKILLS_SkillNec.cpp */
/* sub_6fc71540  D2Game.dll +0x51540  (code address inside sub_6fc71340+0x200)  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillNec_and_GAME_Task.cpp */
/* sub_6fc71750  D2Game.dll +0x51750  uint32_t __fastcall sub_6fc71750(uint32_t param_1,int *param_2,int param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillNec_and_GAME_Task.cpp */
/* sub_6fc73470  D2Game.dll +0x53470  int sub_6fc73470(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Task_and_PLAYER_PlrSave.cpp */
/* sub_6fc73720  D2Game.dll +0x53720  void __fastcall sub_6fc73720(int *param_1,int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Task_and_PLAYER_PlrSave.cpp */
/* sub_6fc74320  D2Game.dll +0x54320  uint32_t sub_6fc74320(int reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Task_and_PLAYER_PlrSave.cpp */
/* sub_6fc8abb0  D2Game.dll +0x6abb0  (code address inside sub_6fc8a9d0+0x1e0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
/* sub_6fc8ac30  D2Game.dll +0x6ac30  (code address inside sub_6fc8a9d0+0x260)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
/* sub_6fc8ace0  D2Game.dll +0x6ace0  (code address inside sub_6fc8a9d0+0x310)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
/* sub_6fc8b070  D2Game.dll +0x6b070  uint32_t sub_6fc8b070(int param_1,int *param_2,uint32_t param_3,int param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
/* sub_6fc8d0f0  D2Game.dll +0x6d0f0  uint32_t __fastcall sub_6fc8d0f0(int *param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
/* sub_6fc8f040  D2Game.dll +0x6f040  uint32_t __fastcall sub_6fc8f040(int *param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrIntro_and_MISSILES_Missiles.cpp */
/* sub_6fc92220  D2Game.dll +0x72220  int sub_6fc92220(int *param_1,int *param_2,int param_3,int param_4,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc93ba0  D2Game.dll +0x73ba0  void sub_6fc93ba0(int param_1,int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc95680  D2Game.dll +0x75680  void sub_6fc95680(int *param_1,int param_2);  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc95e10  D2Game.dll +0x75e10  int sub_6fc95e10(uint32_t param_1,int *param_2,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc96270  D2Game.dll +0x76270  (code address inside sub_6fc960f0+0x180)  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc970e0  D2Game.dll +0x770e0  void __thiscall sub_6fc970e0(void *this,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc977f0  D2Game.dll +0x777f0  void __thiscall sub_6fc977f0(void *this,uint param_2,int reg_EAX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/PLAYER/_unattributed/between_PLAYER_PlrTrade_and_PLAYER_PlrModes.cpp */
/* sub_6fc99a60  D2Game.dll +0x79a60  void __fastcall sub_6fc99a60(int param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrModes_and_UNIT_SUnitMsg.cpp */
/* sub_6fc99b10  D2Game.dll +0x79b10  (code address inside sub_6fc99aa0+0x70)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrModes_and_UNIT_SUnitMsg.cpp */
/* sub_6fc9ac50  D2Game.dll +0x7ac50  void sub_6fc9ac50(uint32_t reg_EAX,uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fc9b0a0  D2Game.dll +0x7b0a0  void sub_6fc9b0a0(int param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fc9be10  D2Game.dll +0x7be10  void sub_6fc9be10(int reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fc9bf50  D2Game.dll +0x7bf50  void __fastcall sub_6fc9bf50(int param_1,int param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fc9cfd0  D2Game.dll +0x7cfd0  void __fastcall sub_6fc9cfd0(int param_1,int *param_2,int *param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fc9df00  D2Game.dll +0x7df00  void __fastcall sub_6fc9df00(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fc9f370  D2Game.dll +0x7f370  void __fastcall sub_6fc9f370(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca0f20  D2Game.dll +0x80f20  (code address inside sub_6fca0b00+0x420)  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca3130  D2Game.dll +0x83130  (code address inside sub_6fca2ec0+0x270)  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca3ce0  D2Game.dll +0x83ce0  void __fastcall sub_6fca3ce0(int param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca3fe0  D2Game.dll +0x83fe0  void __fastcall sub_6fca3fe0(int param_1,int *param_2,int *param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca5780  D2Game.dll +0x85780  void __fastcall sub_6fca5780(void *param_1,int *param_2,int *param_3,int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca5b60  D2Game.dll +0x85b60  void __fastcall sub_6fca5b60(uint32_t param_1,int *param_2,int param_3,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca64a0  D2Game.dll +0x864a0  void __fastcall sub_6fca64a0(void *param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca7e60  D2Game.dll +0x87e60  void __fastcall sub_6fca7e60(int param_1,int *param_2,int param_3,int reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca8380  D2Game.dll +0x88380  void __fastcall sub_6fca8380(void *param_1,int *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fca9730  D2Game.dll +0x89730  uint32_t sub_6fca9730(uint32_t param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitMsg_and_GAME_SCmd.cpp */
/* sub_6fcae2a0  D2Game.dll +0x8e2a0  void sub_6fcae2a0(uint32_t reg_EAX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/GAME/_unattributed/between_GAME_SCmd_and_GAME_Event.cpp */
/* sub_6fcae680  D2Game.dll +0x8e680  void __fastcall sub_6fcae680(uint32_t *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
/* sub_6fcae6f0  D2Game.dll +0x8e6f0  void sub_6fcae6f0(int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
/* sub_6fcae810  D2Game.dll +0x8e810  void sub_6fcae810(uint32_t param_1,uint32_t param_2,uint32_t param_3,int *reg_EAX,int reg_EBX, int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
/* sub_6fcae900  D2Game.dll +0x8e900  void sub_6fcae900(uint param_1,int reg_EAX,uint32_t reg_ECX,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
/* sub_6fcaea80  D2Game.dll +0x8ea80  void __fastcall sub_6fcaea80(int param_1,int *param_2,int param_3,uint param_4,uint32_t param_5,uint32_t param_6 ,uint32_t param_7);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
/* sub_6fcaf070  D2Game.dll +0x8f070  void sub_6fcaf070(int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_GAME_Event_and_UNIT_sunitproxy.cpp */
/* sub_6fcb0f30  D2Game.dll +0x90f30  void sub_6fcb0f30(uint32_t param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb1240  D2Game.dll +0x91240  uint32_t sub_6fcb1240(int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb1340  D2Game.dll +0x91340  int sub_6fcb1340(uint32_t param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb1b70  D2Game.dll +0x91b70  void __thiscall sub_6fcb1b70(void *this,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb1e30  D2Game.dll +0x91e30  void sub_6fcb1e30(int param_1,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb2030  D2Game.dll +0x92030  (code address inside sub_6fcb1f10+0x120)  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb22a0  D2Game.dll +0x922a0  void sub_6fcb22a0(int param_1,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb2360  D2Game.dll +0x92360  void sub_6fcb2360(uint32_t param_1,uint *param_2,uint32_t param_3,int *param_4,int param_5, uint *reg_EAX,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb2a60  D2Game.dll +0x92a60  void sub_6fcb2a60(uint32_t param_1,uint32_t param_2,uint param_3,uint32_t param_4,int *reg_EAX );  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb2ed0  D2Game.dll +0x92ed0  void __thiscall sub_6fcb2ed0(void *this,int param_2,int param_3,uint32_t param_4,int param_5,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb3340  D2Game.dll +0x93340  (code address inside sub_6fcb3270+0xd0)  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb34a0  D2Game.dll +0x934a0  uint32_t __fastcall sub_6fcb34a0(uint32_t param_1,int *param_2,int param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb3d60  D2Game.dll +0x93d60  void sub_6fcb3d60(uint32_t param_1,uint32_t param_2,int param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,int param_8);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb4970  D2Game.dll +0x94970  uint32_t __fastcall sub_6fcb4970(void *param_1,int param_2,int param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb4b10  D2Game.dll +0x94b10  uint32_t __fastcall sub_6fcb4b10(uint32_t param_1,uint8_t *param_2,int param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb4e60  D2Game.dll +0x94e60  uint32_t __fastcall sub_6fcb4e60(void *param_1,int param_2,int param_3,uint32_t param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb5370  D2Game.dll +0x95370  uint32_t sub_6fcb5370(uint32_t param_1,int param_2,int *reg_EBX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb5d50  D2Game.dll +0x95d50  int * sub_6fcb5d50(int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_sunitproxy_and_PLAYER_PlayerPets.cpp */
/* sub_6fcb83b0  D2Game.dll +0x983b0  int sub_6fcb83b0(void);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlayerPets_and_SKILLS_SkilPal.cpp */
/* sub_6fcb8a70  D2Game.dll +0x98a70  void sub_6fcb8a70(uint32_t param_1,int *param_2,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlayerPets_and_SKILLS_SkilPal.cpp */
/* sub_6fcb8e30  D2Game.dll +0x98e30  uint32_t __fastcall sub_6fcb8e30(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t reg_EBX, uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlayerPets_and_SKILLS_SkilPal.cpp */
/* sub_6fcbcb30  D2Game.dll +0x9cb30  uint32_t __thiscall sub_6fcbcb30(void *this,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
/* sub_6fcbd160, sub_6fcbd160_10284b40  D2Game.dll +0x9d160  bool sub_6fcbd160(uint32_t param_1,int *reg_EBX,uint32_t *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
/* sub_6fcbdf40  D2Game.dll +0x9df40  void sub_6fcbdf40(int param_1,int param_2,uint32_t reg_EBX,uint32_t param_4,uint32_t param_5);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
/* sub_6fcbe170  D2Game.dll +0x9e170  void sub_6fcbe170(void *param_1,int *reg_EAX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
/* sub_6fcbe290  D2Game.dll +0x9e290  uint32_t * sub_6fcbe290(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,int reg_EAX ,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_Party_and_SKILLS_Skills.cpp */
/* sub_6fcc2de0  D2Game.dll +0xa2de0  uint32_t sub_6fcc2de0(uint32_t *param_1,int *reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
/* sub_6fcc3120  D2Game.dll +0xa3120  uint32_t __thiscall sub_6fcc3120(void *this,uint32_t param_2,int *param_3,int reg_EAX,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
/* sub_6fcc3610  D2Game.dll +0xa3610  int * sub_6fcc3610(void *param_1,byte *reg_EAX,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
/* sub_6fcc37d0  D2Game.dll +0xa37d0  void __fastcall sub_6fcc37d0(void *param_1,int *param_2,void *param_3,int param_4);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_Skills_and_Ai_AiThink4.cpp */
/* sub_6fcc7530  D2Game.dll +0xa7530  (code address inside Ai_AiThink4_6fcc7410+0x120)  sigmaRE/5_game_source/D2Game/Ai/AiThink4.cpp */
/* sub_6fccd2a0  D2Game.dll +0xad2a0  (code address inside SKILLS_SkillItem_6fccd0f0+0x1b0)  sigmaRE/5_game_source/D2Game/SKILLS/SkillItem.cpp */
/* sub_6fccdb30  D2Game.dll +0xadb30  void sub_6fccdb30(void *param_1,uint32_t param_2,int param_3,uint32_t param_4,int *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccdfa0  D2Game.dll +0xadfa0  (code address inside sub_6fccddc0+0x1e0)  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fcce6d0  D2Game.dll +0xae6d0  uint __fastcall sub_6fcce6d0(int param_1,int *param_2,int param_3,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccedc0  D2Game.dll +0xaedc0  uint32_t __fastcall sub_6fccedc0(uint32_t param_1,int *param_2,int param_3,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccf450  D2Game.dll +0xaf450  int __fastcall sub_6fccf450(uint32_t param_1,int *param_2,uint32_t *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccf5f0  D2Game.dll +0xaf5f0  int sub_6fccf5f0(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccf610  D2Game.dll +0xaf610  uint32_t sub_6fccf610(int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccf840  D2Game.dll +0xaf840  void __fastcall sub_6fccf840(int *param_1,int *reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_SKILLS_SkillItem_and_MONSTER_Monster.cpp */
/* sub_6fccfdb0  D2Game.dll +0xafdb0  void sub_6fccfdb0(int param_1,uint32_t param_2,int param_3,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd0a20  D2Game.dll +0xb0a20  int sub_6fcd0a20(int *param_1,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd0db0  D2Game.dll +0xb0db0  (code address inside sub_6fcd0ce0+0xd0)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd0df0  D2Game.dll +0xb0df0  (code address inside sub_6fcd0ce0+0x110)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd0e30  D2Game.dll +0xb0e30  (code address inside sub_6fcd0ce0+0x150)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd14b0  D2Game.dll +0xb14b0  (code address inside sub_6fcd1320+0x190)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd1520  D2Game.dll +0xb1520  (code address inside sub_6fcd1320+0x200)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd1580  D2Game.dll +0xb1580  (code address inside sub_6fcd1320+0x260)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd15e0  D2Game.dll +0xb15e0  (code address inside sub_6fcd1320+0x2c0)  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd1660  D2Game.dll +0xb1660  uint32_t __fastcall sub_6fcd1660(uint32_t param_1,int *param_2,int *param_3,uint32_t *param_4,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd17b0  D2Game.dll +0xb17b0  int __fastcall sub_6fcd17b0(uint32_t param_1,uint32_t param_2,int param_3,int param_4,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd1bc0  D2Game.dll +0xb1bc0  int __thiscall sub_6fcd1bc0(void *this,int *param_2,int reg_EAX,uint32_t *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_MONSTER_MonsterMode_and_GAME_Arena.cpp */
/* sub_6fcd8610  D2Game.dll +0xb8610  void __fastcall sub_6fcd8610(uint32_t *param_1,int *param_2,int *param_3);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiBaal_and_Quests_a4q3.cpp */
/* sub_6fcd88c0  D2Game.dll +0xb88c0  uint32_t sub_6fcd88c0(int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Ai_AiBaal_and_Quests_a4q3.cpp */
/* sub_6fcdca20  D2Game.dll +0xbca20  uint32_t sub_6fcdca20(int reg_EBX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcdcc60  D2Game.dll +0xbcc60  uint32_t sub_6fcdcc60(int *reg_ESI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcdce60  D2Game.dll +0xbce60  void sub_6fcdce60(int *reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcdd880  D2Game.dll +0xbd880  void sub_6fcdd880(int param_1,int reg_EAX,uint reg_EBX,void *reg_EDI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcdd920  D2Game.dll +0xbd920  void sub_6fcdd920(void *param_1,int param_2,void *reg_EAX,uint32_t reg_ECX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcde2a0  D2Game.dll +0xbe2a0  void __thiscall sub_6fcde2a0(void *this,void *param_2,int reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcdee30  D2Game.dll +0xbee30  int * __thiscall sub_6fcdee30(void *this,int param_2,int param_3,int param_4,void *reg_EAX,int *reg_EDI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fcdf2e0  D2Game.dll +0xbf2e0  void sub_6fcdf2e0(int param_1,uint32_t param_2,int param_3,int param_4,int reg_ESI);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fce1510  D2Game.dll +0xc1510  void sub_6fce1510(uint32_t param_1,int *param_2,int reg_EBX);  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fce32c0  D2Game.dll +0xc32c0  (code address inside sub_6fce3260+0x60)  sigmaRE/5_game_source/D2Game/Quests/_unattributed/between_Quests_a4q2_and_Quests_a2q0.cpp */
/* sub_6fceebd0  D2Game.dll +0xcebd0  (code address inside sub_6fcee9d0+0x200)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fceee60  D2Game.dll +0xcee60  (code address inside sub_6fcee9d0+0x490)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcef2f0  D2Game.dll +0xcf2f0  (code address inside sub_6fcee9d0+0x920)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcef380  D2Game.dll +0xcf380  (code address inside sub_6fcee9d0+0x9b0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcef510  D2Game.dll +0xcf510  (code address inside sub_6fcee9d0+0xb40)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcef570  D2Game.dll +0xcf570  (code address inside sub_6fcee9d0+0xba0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf08b0  D2Game.dll +0xd08b0  (code address inside sub_6fcf01d0+0x6e0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf0bc0  D2Game.dll +0xd0bc0  (code address inside sub_6fcf01d0+0x9f0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf0e90  D2Game.dll +0xd0e90  (code address inside sub_6fcf01d0+0xcc0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf1010  D2Game.dll +0xd1010  (code address inside sub_6fcf01d0+0xe40)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf1140  D2Game.dll +0xd1140  (code address inside sub_6fcf01d0+0xf70)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf1200  D2Game.dll +0xd1200  (code address inside sub_6fcf01d0+0x1030)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf12e0  D2Game.dll +0xd12e0  (code address inside sub_6fcf01d0+0x1110)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf1370  D2Game.dll +0xd1370  (code address inside sub_6fcf01d0+0x11a0)  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf1650  D2Game.dll +0xd1650  uint32_t sub_6fcf1650(int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf16b0  D2Game.dll +0xd16b0  bool sub_6fcf16b0(void);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrMsg_and_ITEMS_ItemMode.cpp */
/* sub_6fcf1780  D2Game.dll +0xd1780  (code address inside ITEMS_ItemMode_6fcf1720+0x60)  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* sub_6fcf1790  D2Game.dll +0xd1790  (code address inside ITEMS_ItemMode_6fcf1720+0x70)  sigmaRE/5_game_source/D2Game/ITEMS/ItemMode.cpp */
/* sub_6fd00460  D2Game.dll +0xe0460  void sub_6fd00460(uint32_t *reg_EAX,uint reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd00570  D2Game.dll +0xe0570  uint32_t __fastcall sub_6fd00570(int *param_1,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd00660  D2Game.dll +0xe0660  bool sub_6fd00660(int param_1,int *param_2,uint32_t param_3,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd007a0  D2Game.dll +0xe07a0  void __fastcall sub_6fd007a0(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd00a20  D2Game.dll +0xe0a20  int sub_6fd00a20(int param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd00a60  D2Game.dll +0xe0a60  uint __thiscall sub_6fd00a60(void *this,int param_2,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd00f40  D2Game.dll +0xe0f40  void __fastcall sub_6fd00f40(uint32_t param_1,uint32_t *param_2,int param_3,int param_4,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd012d0  D2Game.dll +0xe12d0  int * __fastcall sub_6fd012d0(uint32_t param_1,int param_2,int param_3,void *param_4,int param_5,int param_6, uint reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd013b0  D2Game.dll +0xe13b0  int * sub_6fd013b0(int reg_EBX,uint32_t *reg_ESI,void *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd01610  D2Game.dll +0xe1610  void sub_6fd01610(int reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd019c0  D2Game.dll +0xe19c0  uint32_t __fastcall sub_6fd019c0(uint32_t param_1,int param_2,uint32_t param_3,int *param_4,int param_5,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd01d90  D2Game.dll +0xe1d90  int * __fastcall sub_6fd01d90(int param_1,uint param_2,byte param_3,uint32_t param_4,int param_5,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd020a0, p_sub_6fd020a0  D2Game.dll +0xe20a0  void __fastcall sub_6fd020a0(void *param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd02240  D2Game.dll +0xe2240  void __fastcall sub_6fd02240(int *param_1,int param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd02310  D2Game.dll +0xe2310  void sub_6fd02310(int param_1,int param_2,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd02480  D2Game.dll +0xe2480  void sub_6fd02480(int param_1,int param_2,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_UNIT_SUnitDmg_and_Quests_a3q7.cpp */
/* sub_6fd0ab60  D2Game.dll +0xeab60  void sub_6fd0ab60(int param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0af80  D2Game.dll +0xeaf80  void sub_6fd0af80(int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b090  D2Game.dll +0xeb090  void sub_6fd0b090(int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b2c0  D2Game.dll +0xeb2c0  void __fastcall sub_6fd0b2c0(int param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b440  D2Game.dll +0xeb440  uint32_t sub_6fd0b440(uint32_t param_1,short *reg_EAX,uint *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b4e0  D2Game.dll +0xeb4e0  uint32_t __thiscall sub_6fd0b4e0(void *this,uint32_t *param_1,short *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b560  D2Game.dll +0xeb560  uint32_t __thiscall sub_6fd0b560(void *this,int *param_1,uint param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b610  D2Game.dll +0xeb610  uint32_t __thiscall sub_6fd0b610(void *this,uint32_t *param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b700  D2Game.dll +0xeb700  uint32_t __thiscall sub_6fd0b700(void *this,uint32_t *param_1,uint32_t *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0b7b0  D2Game.dll +0xeb7b0  uint32_t __thiscall sub_6fd0b7b0(void *this,uint32_t param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0ba40  D2Game.dll +0xeba40  void __fastcall sub_6fd0ba40(int *param_1,int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0baf0  D2Game.dll +0xebaf0  uint32_t sub_6fd0baf0(int param_1,uint reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0bc40  D2Game.dll +0xebc40  uint32_t sub_6fd0bc40(uint32_t *param_1,uint param_2,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a3q6_and_PLAYER_PlrSave2.cpp */
/* sub_6fd0ca60  D2Game.dll +0xeca60  uint32_t __fastcall sub_6fd0ca60(uint32_t param_1,short *param_2,uint32_t *param_3,int *reg_EAX,int reg_EBX, int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0cb50  D2Game.dll +0xecb50  uint32_t __fastcall sub_6fd0cb50(uint32_t param_1,uint param_2,void *param_3,int *param_4,int reg_EAX,int *reg_EBX, int *reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0cbd0  D2Game.dll +0xecbd0  uint32_t __thiscall sub_6fd0cbd0(void *this,uint *param_2,uint param_3,uint32_t *param_4,short *reg_EAX, uint32_t reg_EBX,void *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0cc90  D2Game.dll +0xecc90  void sub_6fd0cc90(int *reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0cf30  D2Game.dll +0xecf30  uint32_t sub_6fd0cf30(void *param_1,int *param_2,uint *param_3,short *param_4,uint32_t param_5, uint32_t *param_6,int reg_EBX,int reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0d540  D2Game.dll +0xed540  uint32_t sub_6fd0d540(uint32_t *param_1,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0d880  D2Game.dll +0xed880  uint32_t sub_6fd0d880(uint32_t *param_1,int reg_EAX,short *reg_EBX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0d960  D2Game.dll +0xed960  int * sub_6fd0d960(int param_1,uint32_t *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_PLAYER_PlrSave2_and_Quests_a2q8.cpp */
/* sub_6fd0ef10  D2Game.dll +0xeef10  int * __fastcall sub_6fd0ef10(int *param_1);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a2q8_and_GAME_Targets.cpp */
/* sub_6fd0f650  D2Game.dll +0xef650  void __fastcall sub_6fd0f650(uint32_t param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5 ,uint32_t param_6,uint32_t param_7,uint16_t param_8);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a2q8_and_GAME_Targets.cpp */
/* sub_6fd0fb80  D2Game.dll +0xefb80  uint32_t __thiscall sub_6fd0fb80(void *this,void *param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5, ushort param_6,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/between_Quests_a2q8_and_GAME_Targets.cpp */
/* sub_6fd114f0  D2Game.dll +0xf14f0  int __thiscall sub_6fd114f0(void *this,int *param_2,int *param_3,uint32_t *param_4,uint32_t *param_5, int param_6,int reg_EAX,uint32_t reg_ESI,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd11730  D2Game.dll +0xf1730  uint32_t sub_6fd11730(uint32_t param_1,uint32_t param_2,uint32_t *param_3,void *reg_EAX,int reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd117e0  D2Game.dll +0xf17e0  uint32_t __fastcall sub_6fd117e0(void *param_1,int reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd11b10  D2Game.dll +0xf1b10  void sub_6fd11b10(uint32_t param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd120c0  D2Game.dll +0xf20c0  void sub_6fd120c0(int param_1,int reg_EAX,int *reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd12120  D2Game.dll +0xf2120  int sub_6fd12120(int reg_ESI,int reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd121e0  D2Game.dll +0xf21e0  void sub_6fd121e0(uint32_t param_1,uint32_t param_2,uint32_t param_3,int reg_EAX, uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd12220  D2Game.dll +0xf2220  void sub_6fd12220(uint32_t param_1,uint32_t param_2,int reg_EAX,uint32_t reg_EDI);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd122c0  D2Game.dll +0xf22c0  void sub_6fd122c0(int param_1,int reg_EAX,int *reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd12380  D2Game.dll +0xf2380  uint32_t __fastcall sub_6fd12380(int param_1,uint32_t reg_EBX);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd12540  D2Game.dll +0xf2540  int __fastcall sub_6fd12540(uint32_t param_1,int *param_2,uint32_t param_3,int param_4,uint32_t param_5, byte param_6,uint32_t param_7,uint32_t reg_ESI);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd12870  D2Game.dll +0xf2870  void __thiscall sub_6fd12870(void *this,uint32_t param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd129b0  D2Game.dll +0xf29b0  void sub_6fd129b0(uint32_t param_1,int *param_2);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd12d80  D2Game.dll +0xf2d80  int sub_6fd12d80(uint32_t param_1,int *param_2,byte param_3,int *reg_EAX);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd142d0  D2Game.dll +0xf42d0  int sub_6fd142d0(uint32_t param_1,uint32_t param_2,uint param_3);  sigmaRE/5_game_source/D2Game/_unattributed/after_UNIT_PlayerList.cpp */
/* sub_6fd511e0  D2Common.dll +0x11e0  int __fastcall sub_6fd511e0(uint param_1,int param_2,int reg_EAX);  sigmaRE/5_game_source/D2Common/_unattributed/before_DRLG_Preset.cpp */
/* sub_6fd5e490  D2Common.dll +0xe490  int * sub_6fd5e490(int param_1,int *reg_EBX);  sigmaRE/5_game_source/D2Common/DRLG/_unattributed/between_DRLG_Preset_and_DRLG_Maze.cpp */
/* sub_6fd61bf0  D2Common.dll +0x11bf0  void sub_6fd61bf0(uint reg_EAX);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Maze_and_UNITS_UnitFinds.cpp */
/* sub_6fd6a130  D2Common.dll +0x1a130  uint32_t __fastcall sub_6fd6a130(int param_1,int param_2,int param_3,int *param_4,int *reg_EAX);  sigmaRE/5_game_source/D2Common/_unattributed/between_Chat_Chat_and_DRLG_DrlgVer.cpp */
/* sub_6fd752db  D2Common.dll +0x252db  (code address inside D2Common_10893+0x11b)  sigmaRE/5_game_source/D2Common/ITEMS/Items.cpp */
/* sub_6fd7d3c0  D2Common.dll +0x2d3c0  void __fastcall sub_6fd7d3c0(uint32_t param_1,int *param_2,int param_3,int *reg_EBX,int *reg_ESI,int *reg_EDI);  sigmaRE/5_game_source/D2Common/_unattributed/between_ITEMS_Items_and_DRLG_Drlg.cpp */
/* sub_6fd7e790  D2Common.dll +0x2e790  uint32_t sub_6fd7e790(int *reg_ESI);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* sub_6fd7e840  D2Common.dll +0x2e840  int sub_6fd7e840(int *reg_EAX);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* sub_6fd7f100  D2Common.dll +0x2f100  bool sub_6fd7f100(uint param_1,int reg_ESI);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_Drlg_and_UNITS_Units.cpp */
/* sub_6fd975e0  D2Common.dll +0x475e0  int sub_6fd975e0(void *param_1,uint32_t param_2,int param_3,short param_4,uint32_t param_5, int param_6,int param_7,uint param_8,int reg_EAX);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_DrlgRoom_and_Logging_ProfCore.cpp */
/* sub_6fdb9c60  D2Common.dll +0x69c60  void __fastcall sub_6fdb9c60(int param_1,int reg_ESI);  sigmaRE/5_game_source/D2Common/_unattributed/between_DRLG_RoomTile_and_UNITS_Missile.cpp */
/* sub_6fdbab20  D2Common.dll +0x6ab20  int __fastcall sub_6fdbab20(uint32_t param_1,int reg_EAX,int reg_ESI);  sigmaRE/5_game_source/D2Common/_unattributed/between_UNITS_Missile_and_DATATBLS_LvlTbls.cpp */
/* sub_6fdcc270  D2Common.dll +0x7c270  uint32_t sub_6fdcc270(int reg_EAX);  sigmaRE/5_game_source/D2Common/DATATBLS/_unattributed/between_DATATBLS_ItemTbls_and_DATATBLS_MissileTbls.cpp */
/* sub_6ff36070  Bnclient.dll +0x16070  uint32_t sub_6ff36070(int *reg_EAX,uint reg_EDI);  sigmaRE/5_game_source/Bnclient/_unattributed/after_BNetGW.cpp */
/* sub_6ff362b0  Bnclient.dll +0x162b0  void sub_6ff362b0(void);  sigmaRE/5_game_source/Bnclient/_unattributed/after_BNetGW.cpp */
