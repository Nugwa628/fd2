/*
 * functions/D2ServerFunctions.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x100e1c40 - 0x1026d1a0
 * Functions     : 61
 * Attribution   : range=39, anchor=1, inferred=7, linked=14
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x100e1c40  (ghidra: FUN_100e1c40)  [range]
void functions_D2ServerFunctions_init_100e1c40(void)

{
  uint8_t local_3a8 [24];
  uint8_t local_390 [24];
  uint8_t local_378 [24];
  uint8_t local_360 [24];
  uint8_t local_348 [24];
  uint8_t local_330 [24];
  uint8_t local_318 [24];
  uint8_t local_300 [24];
  uint8_t local_2e8 [24];
  uint8_t local_2d0 [24];
  uint8_t local_2b8 [24];
  uint8_t local_2a0 [24];
  uint8_t local_288 [24];
  uint8_t local_270 [24];
  uint8_t local_258 [24];
  uint8_t local_240 [24];
  uint8_t local_228 [24];
  uint8_t local_210 [24];
  uint8_t local_1f8 [24];
  uint8_t local_1e0 [24];
  uint8_t local_1c8 [24];
  uint8_t local_1b0 [24];
  uint8_t local_198 [24];
  uint8_t local_180 [24];
  uint8_t local_168 [24];
  uint8_t local_150 [24];
  uint8_t local_138 [24];
  uint8_t local_120 [24];
  uint8_t local_108 [24];
  uint8_t local_f0 [24];
  uint8_t local_d8 [24];
  uint8_t local_c0 [24];
  uint8_t local_a8 [24];
  uint8_t local_90 [24];
  uint8_t local_78 [24];
  uint8_t local_60 [24];
  uint8_t local_48 [24];
  uint8_t local_30 [24];
  uint8_t local_18 [8];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10303889;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104e1b94);
  sub_1020f990(local_3a8,"");
  local_8 = 0;
  sub_1020f990(local_390,"the Blood Moor and Den of Evil");
  local_8._0_1_ = 1;
  sub_1020f990(local_378,"the Cold Plains and the Cave");
  local_8._0_1_ = 2;
  sub_1020f990(local_360,"the Stony Field and Tristram");
  local_8._0_1_ = 3;
  sub_1020f990(local_348,"the Dark Wood and the Underground Passage");
  local_8._0_1_ = 4;
  sub_1020f990(local_330,"the Black Marsh and the Hole");
  local_8._0_1_ = 5;
  sub_1020f990(local_318,"the Tamoe Highland and the Pit");
  local_8._0_1_ = 6;
  sub_1020f990(local_300,"the Burial Ground and Mausoleum");
  local_8._0_1_ = 7;
  sub_1020f990(local_2e8,"the Forgotten Tower");
  local_8._0_1_ = 8;
  sub_1020f990(local_2d0,"the Outer Cloister and Barracks");
  local_8._0_1_ = 9;
  sub_1020f990(local_2b8,"the Jail, Inner Cloister, and Cathedral");
  local_8._0_1_ = 10;
  sub_1020f990(local_2a0,"the Catacombs");
  local_8._0_1_ = 0xb;
  sub_1020f990(local_288,"the Cow Level");
  local_8._0_1_ = 0xc;
  sub_1020f990(local_270,"the Rocky Waste and the Stony Tomb");
  local_8._0_1_ = 0xd;
  sub_1020f990(local_258,"the Dry Hills and the Halls of the Dead");
  local_8._0_1_ = 0xe;
  sub_1020f990(local_240,"the Far Oasis and the Maggot Lair");
  local_8._0_1_ = 0xf;
  sub_1020f990(local_228,"the Lost City, Ancient Tunnels, and Claw Viper Temple");
  local_8._0_1_ = 0x10;
  sub_1020f990(local_210,"the Canyon of the Magi and Tal Rasha\'s Tomb");
  local_8._0_1_ = 0x11;
  sub_1020f990(local_1f8,"the Lut Gholein Sewers and the Palace Cellars");
  local_8._0_1_ = 0x12;
  sub_1020f990(local_1e0,"the Arcane Sanctuary");
  local_8._0_1_ = 0x13;
  sub_1020f990(local_1c8,"the Spider Forest, Arachnid Lair, and Spider Cavern");
  local_8._0_1_ = 0x14;
  sub_1020f990(local_1b0,"the Great Marsh and the Swampy Pit");
  local_8._0_1_ = 0x15;
  sub_1020f990(local_198,"the Flayer Jungle and the Flayer Dungeon");
  local_8._0_1_ = 0x16;
  sub_1020f990(local_180,"Lower Kurast and the Kurast Sewers");
  local_8._0_1_ = 0x17;
  sub_1020f990(local_168,"the Kurast Bazaar, Ruined Temple, and Disused Fane");
  local_8._0_1_ = 0x18;
  sub_1020f990(local_150,"Upper Kurast, the Forgotten Reliquary, and Forgotten Temple");
  local_8._0_1_ = 0x19;
  sub_1020f990(local_138,"Travincal, the Ruined Fane, and Disused Reliquary");
  local_8._0_1_ = 0x1a;
  sub_1020f990(local_120,"the Durance of Hate");
  local_8._0_1_ = 0x1b;
  sub_1020f990(local_108,"the Outer Steppes and the Plains of Despair");
  local_8._0_1_ = 0x1c;
  sub_1020f990(local_f0,"the City of the Damned and the River of Flame");
  local_8._0_1_ = 0x1d;
  sub_1020f990(local_d8,"Chaos Sanctuary");
  local_8._0_1_ = 0x1e;
  sub_1020f990(local_c0,"the Bloody Foothills and the Frigid Highlands");
  local_8._0_1_ = 0x1f;
  sub_1020f990(local_a8,"the Arreat Plateau, Crystalline Passage, and Frozen River");
  local_8._0_1_ = 0x20;
  sub_1020f990(local_90,"the Glacial Trail, Drifter Cavern, and Frozen Tundra");
  local_8._0_1_ = 0x21;
  sub_1020f990(local_78,"the Ancients\' Way and the Icy Cellar");
  local_8._0_1_ = 0x22;
  sub_1020f990(local_60,"Nihlathak\'s Temple");
  local_8._0_1_ = 0x23;
  sub_1020f990(local_48,"Abaddon, the Pit of Acheron, and the Infernal Pit");
  local_8 = CONCAT31(local_8._1_3_,0x24);
  sub_1020f990(local_30,"the Worldstone Keep and Throne of Destruction");
  local_8 = 0x25;
  sub_1020f550(local_18,local_3a8,local_18);
  sub_1020f730(&DAT_104e1b94);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_1031bb30);
  ExceptionList = local_10;
  return;
}


// 0x100e1fc0  (ghidra: FUN_100e1fc0)  [range]
void functions_D2ServerFunctions_init_100e1fc0(void)

{
  uint8_t local_2bc [16];
  uint8_t local_2ac [16];
  uint8_t local_29c [16];
  uint8_t local_28c [16];
  uint8_t local_27c [16];
  uint8_t local_26c [16];
  uint8_t local_25c [16];
  uint8_t local_24c [16];
  uint8_t local_23c [16];
  uint8_t local_22c [16];
  uint32_t local_21c;
  uint32_t uStack_218;
  uint32_t uStack_214;
  uint32_t uStack_210;
  uint32_t local_20c;
  uint32_t uStack_208;
  uint32_t uStack_204;
  uint32_t uStack_200;
  uint32_t local_1fc;
  uint32_t uStack_1f8;
  uint32_t uStack_1f4;
  uint32_t uStack_1f0;
  uint32_t local_1ec;
  uint32_t uStack_1e8;
  uint32_t uStack_1e4;
  uint32_t uStack_1e0;
  uint32_t local_1dc;
  uint32_t uStack_1d8;
  uint32_t uStack_1d4;
  uint32_t uStack_1d0;
  uint32_t local_1cc;
  uint32_t uStack_1c8;
  uint32_t uStack_1c4;
  uint32_t uStack_1c0;
  uint8_t local_1bc [8];
  uint8_t local_1b4 [8];
  uint8_t local_1ac [8];
  uint8_t local_1a4 [8];
  uint8_t local_19c [8];
  uint8_t local_194 [8];
  uint8_t local_18c [8];
  uint8_t local_184 [8];
  uint8_t local_17c [8];
  uint8_t local_174 [8];
  uint8_t local_16c [8];
  uint32_t local_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t uStack_158;
  uint32_t local_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t uStack_148;
  uint32_t local_144;
  uint32_t local_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t uStack_134;
  uint32_t local_130;
  uint32_t local_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t local_11c;
  uint32_t local_118;
  uint32_t local_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint32_t uStack_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t uStack_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint32_t uStack_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t uStack_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  int local_b0 [3];
  int local_a4 [3];
  int local_98 [3];
  int local_8c [3];
  int local_80 [3];
  int local_74 [3];
  int local_68 [3];
  int local_5c [3];
  int local_50 [3];
  int local_44 [3];
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030398a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f410((uint64_t *)&DAT_104e1aec);
  local_1dc = 7;
  uStack_1d8 = 0xe;
  uStack_1d4 = 0x16;
  uStack_1d0 = 0x20;
  local_14 = 0;
  local_1cc = 0x30;
  uStack_1c8 = 0x44;
  uStack_1c4 = 99;
  uStack_1c0 = 0x98;
  sub_1020f550(local_16c,&local_1dc,local_1bc);
  sub_1020f780(local_44);
  local_8 = 0;
  sub_102100d0(local_2bc,&local_14,local_44);
  local_8._0_1_ = 1;
  local_18 = 1;
  local_e4 = 9;
  uStack_e0 = 0x14;
  uStack_dc = 0x25;
  uStack_d8 = 0x3f;
  local_d4 = 0x69;
  local_d0 = 200;
  sub_1020f550(local_174,&local_e4,&local_cc);
  sub_1020f780(local_b0);
  local_8._0_1_ = 2;
  sub_102100d0(local_2ac,&local_18,local_b0);
  local_8._0_1_ = 3;
  local_1c = 4;
  local_fc = 9;
  uStack_f8 = 0x14;
  uStack_f4 = 0x25;
  uStack_f0 = 0x3f;
  local_ec = 0x69;
  local_e8 = 200;
  sub_1020f550(local_17c,&local_fc,&local_e4);
  sub_1020f780(local_a4);
  local_8._0_1_ = 4;
  sub_102100d0(local_29c,&local_1c,local_a4);
  local_8._0_1_ = 5;
  local_20 = 2;
  local_104 = 0x4b;
  local_114 = 9;
  uStack_110 = 0x12;
  uStack_10c = 0x1e;
  uStack_108 = 0x30;
  local_100 = 0x7d;
  sub_1020f550(local_184,&local_114,&local_fc);
  sub_1020f780(local_98);
  local_8._0_1_ = 6;
  sub_102100d0(local_28c,&local_20,local_98);
  local_8._0_1_ = 7;
  local_24 = 3;
  local_12c = 9;
  uStack_128 = 0x12;
  uStack_124 = 0x1e;
  uStack_120 = 0x30;
  local_11c = 0x4b;
  local_118 = 0x7d;
  sub_1020f550(local_18c,&local_12c,&local_114);
  sub_1020f780(local_50);
  local_8._0_1_ = 8;
  sub_102100d0(local_27c,&local_24,local_50);
  local_8._0_1_ = 9;
  local_28 = 6;
  local_cc = 8;
  uStack_c8 = 0x10;
  uStack_c4 = 0x1b;
  uStack_c0 = 0x2a;
  local_bc = 0x41;
  local_b8 = 0x66;
  local_b4 = 0xae;
  sub_1020f550(local_194,&local_cc,local_b0);
  sub_1020f780(local_80);
  local_8._0_1_ = 10;
  sub_102100d0(local_26c,&local_28,local_80);
  local_8._0_1_ = 0xb;
  local_2c = 5;
  local_1fc = 4;
  uStack_1f8 = 10;
  uStack_1f4 = 0x13;
  uStack_1f0 = 0x1e;
  local_1ec = 0x2e;
  uStack_1e8 = 0x44;
  uStack_1e4 = 99;
  uStack_1e0 = 0xa3;
  sub_1020f550(local_1bc,&local_1fc,&local_1dc);
  sub_1020f780(local_74);
  local_8._0_1_ = 0xc;
  sub_102100d0(local_25c,&local_2c,local_74);
  local_8._0_1_ = 0xd;
  local_30 = 0x8b;
  local_140 = 9;
  uStack_13c = 0x14;
  uStack_138 = 0x2a;
  uStack_134 = 0x56;
  local_130 = 0x118;
  sub_1020f550(local_19c,&local_140,&local_12c);
  sub_1020f780(local_68);
  local_8._0_1_ = 0xe;
  sub_102100d0(local_24c,&local_30,local_68);
  local_8._0_1_ = 0xf;
  local_164 = 5;
  uStack_160 = 10;
  uStack_15c = 0x10;
  uStack_158 = 0x18;
  local_34 = 0x8c;
  local_154 = 0x25;
  uStack_150 = 0x36;
  uStack_14c = 0x56;
  uStack_148 = 0x98;
  local_144 = 0x168;
  sub_1020f550(local_1a4,&local_164,&local_140);
  sub_1020f780(local_5c);
  local_8._0_1_ = 0x10;
  sub_102100d0(local_23c,&local_34,local_5c);
  local_8._0_1_ = 0x11;
  local_21c = 7;
  uStack_218 = 0xf;
  uStack_214 = 0x17;
  uStack_210 = 0x23;
  local_38 = 0x8f;
  local_20c = 0x34;
  uStack_208 = 0x4e;
  uStack_204 = 0x75;
  uStack_200 = 0xc2;
  sub_1020f550(local_1ac,&local_21c,&local_1fc);
  sub_1020f780(local_8c);
  local_8._0_1_ = 0x12;
  sub_102100d0(local_22c,&local_38,local_8c);
  local_8._0_1_ = 0x1c;
  sub_1020f550(local_1b4,local_2bc,&local_21c);
  sub_1020f6a0(&DAT_104e1aec);
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  _eh_vector_destructor_iterator_(local_2bc,0x10,10,sub_1020f440);
  thunk_FUN_1020fb40(local_8c);
  thunk_FUN_1020fb40(local_5c);
  thunk_FUN_1020fb40(local_68);
  thunk_FUN_1020fb40(local_74);
  thunk_FUN_1020fb40(local_80);
  thunk_FUN_1020fb40(local_50);
  thunk_FUN_1020fb40(local_98);
  thunk_FUN_1020fb40(local_a4);
  thunk_FUN_1020fb40(local_b0);
  thunk_FUN_1020fb40(local_44);
  _atexit((_func_4879 *)&LAB_1031bb40);
  ExceptionList = local_10;
  return;
}


// 0x100e24f0  (ghidra: FUN_100e24f0)  [range]
void functions_D2ServerFunctions_init_100e24f0(void)

{
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  uint32_t local_98;
  uint32_t local_94;
  uint32_t local_90;
  uint32_t local_8c;
  uint32_t local_88;
  uint32_t local_84;
  uint32_t local_80;
  uint32_t local_7c;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint8_t local_60 [80];
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e1d84);
  local_a0 = 0;
  local_a4 = 0x13;
  sub_10210100(&local_a0,&local_a4);
  local_98 = 1;
  local_9c = 0xd;
  sub_10210100(&local_98,&local_9c);
  local_90 = 4;
  local_94 = 0xd;
  sub_10210100(&local_90,&local_94);
  local_88 = 2;
  local_8c = 0xf;
  sub_10210100(&local_88,&local_8c);
  local_80 = 3;
  local_84 = 0xf;
  sub_10210100(&local_80,&local_84);
  local_78 = 6;
  local_7c = 0x10;
  sub_10210100(&local_78,&local_7c);
  local_70 = 5;
  local_74 = 0x12;
  sub_10210100(&local_70,&local_74);
  local_6c = 0x10;
  sub_10210100(&DAT_10367ec0,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10367eb8,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10367ebc,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104e1d84);
  _atexit((_func_4879 *)&LAB_1031bb50);
  return;
}


// 0x100e26a0  (ghidra: FUN_100e26a0)  [range]
void functions_D2ServerFunctions_init_100e26a0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e1a3c);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e1a3c);
  _atexit((_func_4879 *)&LAB_1031bb60);
  return;
}


// 0x100e2700  (ghidra: FUN_100e2700)  [range]
void functions_D2ServerFunctions_init_100e2700(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e1b40);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e1b40);
  _atexit((_func_4879 *)&LAB_1031bb70);
  return;
}


// 0x100e2760  (ghidra: FUN_100e2760)  [range]
void functions_D2ServerFunctions_init_100e2760(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e1aac);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e1aac);
  _atexit((_func_4879 *)&LAB_1031bb80);
  return;
}


// 0x100e27c0  (ghidra: FUN_100e27c0)  [range]
void functions_D2ServerFunctions_init_100e27c0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e1bc8);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e1bc8);
  _atexit((_func_4879 *)&LAB_1031bb90);
  return;
}


// 0x100e2820  (ghidra: FUN_100e2820)  [range]
void functions_D2ServerFunctions_init_100e2820(void)

{
  uint32_t local_250;
  uint32_t local_24c;
  uint32_t local_248;
  uint32_t local_244;
  uint32_t local_240;
  uint32_t local_23c;
  uint32_t local_238;
  uint32_t local_234;
  uint32_t local_230;
  uint32_t local_22c;
  uint32_t local_228;
  uint32_t local_224;
  uint32_t local_220;
  uint32_t local_21c;
  uint32_t local_218;
  uint32_t local_214;
  uint32_t local_210;
  uint32_t local_20c;
  uint32_t local_208;
  uint32_t local_204;
  uint32_t local_200;
  uint32_t local_1fc;
  uint32_t local_1f8;
  uint32_t local_1f4;
  uint32_t local_1f0;
  uint32_t local_1ec;
  uint32_t local_1e8;
  uint32_t local_1e4;
  uint32_t local_1e0;
  uint32_t local_1dc;
  uint32_t local_1d8;
  uint32_t local_1d4;
  uint32_t local_1d0;
  uint32_t local_1cc;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint32_t local_1c0;
  uint32_t local_1bc;
  uint32_t local_1b8;
  uint32_t local_1b4;
  uint32_t local_1b0;
  uint32_t local_1ac;
  uint32_t local_1a8;
  uint32_t local_1a4;
  uint32_t local_1a0;
  uint32_t local_19c;
  uint32_t local_198;
  uint32_t local_194;
  uint32_t local_190;
  uint32_t local_18c;
  uint32_t local_188;
  uint32_t local_184;
  uint32_t local_180;
  uint32_t local_17c;
  uint32_t local_178;
  uint32_t local_174;
  uint32_t local_170;
  uint32_t local_16c;
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_160;
  uint32_t local_15c;
  uint32_t local_158;
  uint32_t local_154;
  uint32_t local_150;
  uint32_t local_14c;
  uint32_t local_148;
  uint32_t local_144;
  uint32_t local_140;
  uint32_t local_13c;
  uint32_t local_138;
  uint32_t local_134;
  uint8_t local_130 [288];
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e1a04);
  local_24c = 0x33;
  local_250 = 1;
  sub_10210130(&local_24c,&local_250);
  local_244 = 0x30;
  local_248 = 4;
  sub_10210130(&local_244,&local_248);
  local_23c = 0x50;
  local_240 = 0x10;
  sub_10210130(&local_23c,&local_240);
  local_234 = 0x41;
  local_238 = 0x20;
  sub_10210130(&local_234,&local_238);
  local_22c = 0x54;
  local_230 = 0x40;
  sub_10210130(&local_22c,&local_230);
  local_224 = 0x47;
  local_228 = 0x80;
  sub_10210130(&local_224,&local_228);
  local_21c = 0x48;
  local_220 = 0x100;
  sub_10210130(&local_21c,&local_220);
  local_214 = 0x32;
  local_218 = 0x200;
  sub_10210130(&local_214,&local_218);
  local_20c = 0x58;
  local_210 = 0x800;
  sub_10210130(&local_20c,&local_210);
  local_204 = 0x52;
  local_208 = 0x2000;
  sub_10210130(&local_204,&local_208);
  local_1fc = 0x37;
  local_200 = 0x4000;
  sub_10210130(&local_1fc,&local_200);
  local_1f4 = 0x57;
  local_1f8 = 0x8000;
  sub_10210130(&local_1f4,&local_1f8);
  local_1ec = 0x36;
  local_1f0 = 2;
  sub_10210130(&local_1ec,&local_1f0);
  local_1e4 = 0x4e;
  local_1e8 = 4;
  sub_10210130(&local_1e4,&local_1e8);
  local_1dc = 0x4f;
  local_1e0 = 0x10;
  sub_10210130(&local_1dc,&local_1e0);
  local_1d4 = 0x55;
  local_1d8 = 0x20;
  sub_10210130(&local_1d4,&local_1d8);
  local_1cc = 0x49;
  local_1d0 = 0x40;
  sub_10210130(&local_1cc,&local_1d0);
  local_1c4 = 0x31;
  local_1c8 = 0x100;
  sub_10210130(&local_1c4,&local_1c8);
  local_1bc = 0x38;
  local_1c0 = 0x200;
  sub_10210130(&local_1bc,&local_1c0);
  local_1b4 = 0x56;
  local_1b8 = 0x800;
  sub_10210130(&local_1b4,&local_1b8);
  local_1ac = 0x42;
  local_1b0 = 0x1000;
  sub_10210130(&local_1ac,&local_1b0);
  local_1a4 = 0x59;
  local_1a8 = 0x2000;
  sub_10210130(&local_1a4,&local_1a8);
  local_19c = 0x4d;
  local_1a0 = 0x4000;
  sub_10210130(&local_19c,&local_1a0);
  local_194 = 0x4a;
  local_198 = 0x8000;
  sub_10210130(&local_194,&local_198);
  local_18c = 0x34;
  local_190 = 1;
  sub_10210130(&local_18c,&local_190);
  local_184 = 0x35;
  local_188 = 2;
  sub_10210130(&local_184,&local_188);
  local_17c = 0x51;
  local_180 = 4;
  sub_10210130(&local_17c,&local_180);
  local_174 = 0x44;
  local_178 = 8;
  sub_10210130(&local_174,&local_178);
  local_16c = 0x4c;
  local_170 = 0x20;
  sub_10210130(&local_16c,&local_170);
  local_164 = 0x4b;
  local_168 = 0x40;
  sub_10210130(&local_164,&local_168);
  local_15c = 0x5a;
  local_160 = 0x80;
  sub_10210130(&local_15c,&local_160);
  local_154 = 0x45;
  local_158 = 0x200;
  sub_10210130(&local_154,&local_158);
  local_14c = 0x53;
  local_150 = 0x400;
  sub_10210130(&local_14c,&local_150);
  local_144 = 0x39;
  local_148 = 0x800;
  sub_10210130(&local_144,&local_148);
  local_13c = 0x43;
  local_140 = 0x2000;
  sub_10210130(&local_13c,&local_140);
  local_134 = 0x46;
  local_138 = 0x4000;
  sub_10210130(&local_134,&local_138);
  sub_1020f550(local_10,local_130,local_10);
  sub_1020f570(&DAT_104e1a04);
  _atexit((_func_4879 *)&LAB_1031bba0);
  return;
}


// 0x100e4670  (ghidra: FUN_100e4670)  [range]
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd31c30_100e4670(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd31c30();
  p_D2Game_DAT_6fd31c30 = *puVar1;
  return;
}


// 0x100e4680  (ghidra: FUN_100e4680)  [range]
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd31c3c_100e4680(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd31c3c();
  p_D2Game_DAT_6fd31c3c = *puVar1;
  return;
}


// 0x100e4a70  (ghidra: FUN_100e4a70)  [range]
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd30bb8_100e4a70(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd30bb8();
  p_D2Game_DAT_6fd30bb8 = *puVar1;
  return;
}


// 0x100e5e40  (ghidra: FUN_100e5e40)  [range]
void functions_D2ServerFunctions_InitPtr_D2Game_DAT_6fd31c24_100e5e40(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd31c24();
  p_D2Game_DAT_6fd31c24 = *puVar1;
  return;
}


// 0x100e7170  (ghidra: FUN_100e7170)  [range]
void functions_D2ServerFunctions_init_100e7170(void)

{
  functions_D2CommonFunctions_1026bf70();
  return;
}


// 0x100e7180  (ghidra: FUN_100e7180)  [range]
void functions_D2ServerFunctions_init_100e7180(void)

{
  functions_D2CommonFunctions_1026bf80();
  return;
}


// 0x100e7190  (ghidra: FUN_100e7190)  [range]
void functions_D2ServerFunctions_init_100e7190(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1c78);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bbb0);
  return;
}


// 0x100e71b0  (ghidra: FUN_100e71b0)  [range]
void functions_D2ServerFunctions_init_100e71b0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1acc);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bbc0);
  return;
}


// 0x100e71d0  (ghidra: FUN_100e71d0)  [range]
void functions_D2ServerFunctions_init_100e71d0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e19e4);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bbd0);
  return;
}


// 0x100e71f0  (ghidra: FUN_100e71f0)  [range]
void functions_D2ServerFunctions_init_100e71f0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1db4);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bbe0);
  return;
}


// 0x100e7210  (ghidra: FUN_100e7210)  [range]
void functions_D2ServerFunctions_init_100e7210(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1b74);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bbf0);
  return;
}


// 0x100e7230  (ghidra: FUN_100e7230)  [range]
void functions_D2ServerFunctions_init_100e7230(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1ce4);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc00);
  return;
}


// 0x100e7250  (ghidra: FUN_100e7250)  [range]
void functions_D2ServerFunctions_init_100e7250(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1a0c);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc10);
  return;
}


// 0x100e7270  (ghidra: FUN_100e7270)  [range]
void functions_D2ServerFunctions_init_100e7270(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1c54);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc20);
  return;
}


// 0x100e7290  (ghidra: FUN_100e7290)  [range]
void functions_D2ServerFunctions_init_100e7290(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1ddc);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc30);
  return;
}


// 0x100e72b0  (ghidra: FUN_100e72b0)  [range]
void functions_D2ServerFunctions_init_100e72b0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1a48);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc40);
  return;
}


// 0x100e72d0  (ghidra: FUN_100e72d0)  [range]
void functions_D2ServerFunctions_init_100e72d0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1a84);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc50);
  return;
}


// 0x100e72f0  (ghidra: FUN_100e72f0)  [range]
void functions_D2ServerFunctions_init_100e72f0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1cac);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc60);
  return;
}


// 0x100e7310  (ghidra: FUN_100e7310)  [range]
void functions_D2ServerFunctions_init_100e7310(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1d94);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc70);
  return;
}


// 0x100e7330  (ghidra: FUN_100e7330)  [range]
void functions_D2ServerFunctions_init_100e7330(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1bdc);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc80);
  return;
}


// 0x100e7350  (ghidra: FUN_100e7350)  [range]
void functions_D2ServerFunctions_init_100e7350(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1b54);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bc90);
  return;
}


// 0x100e7370  (ghidra: FUN_100e7370)  [range]
void functions_D2ServerFunctions_init_100e7370(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1d1c);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bca0);
  return;
}


// 0x100e7390  (ghidra: FUN_100e7390)  [range]
void functions_D2ServerFunctions_init_100e7390(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1b10);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bcb0);
  return;
}


// 0x100e73b0  (ghidra: FUN_100e73b0)  [range]
void functions_D2ServerFunctions_init_100e73b0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1c04);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bcc0);
  return;
}


// 0x100e73d0  (ghidra: FUN_100e73d0)  [range]
void functions_D2ServerFunctions_init_100e73d0(void)

{
  void *extraout_ECX;
  
  sub_10265100((uint32_t *)&DAT_104e1c34);
  functions_D2ServerFunctions_1026cc60(extraout_ECX);
  _atexit(FUN_1031bcd0);
  return;
}


// 0x1026c700  (ghidra: FUN_1026c700)  [range]
void __fastcall
functions_D2ServerFunctions_Wraps_D2Game_GAME_Game_1026c700(uint param_1,uint param_2,uint32_t param_3,int param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7,uint8_t param_8,uint8_t param_9,
            byte param_10,uint32_t reg_EBX)

{
  uint uVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint32_t uVar7;
  
  iVar5 = *p_D2Game_DAT_6fd31c24;
  if (iVar5 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x50));
    uVar1 = sub_102f0720();
    uVar2 = sub_102f0730(iVar5,uVar1,0,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x50));
    if (uVar2 != 0) {
      lpCriticalSection = Fog_10045((void *)0x0,0x18,"..\\Source\\D2Game\\GAME\\Game.cpp",0x4a6,0);
      *(LPCRITICAL_SECTION *)(uVar2 + 0x18) = lpCriticalSection;
      InitializeCriticalSection(lpCriticalSection);
      *(uint32_t *)(uVar2 + 0x1c) = 0;
      memset((void *)(uVar2 + 0x1120),0,0xa00);
      memset((void *)(uVar2 + 0x1b24),0,0x200);
      *(uint32_t *)(uVar2 + 0x90) = 0;
      *(uint32_t *)(uVar2 + 0x94) = 0;
      *(uint32_t *)(uVar2 + 0x98) = 0;
      *(uint32_t *)(uVar2 + 0x9c) = 0;
      *(uint64_t *)(uVar2 + 0xa0) = 0;
      *(uint32_t *)(uVar2 + 0x24) = 1;
      uVar3 = GAME_Game_6fc4a220();
      *(short *)(uVar2 + 0x28) = (short)uVar3;
      sub_102f0750();
      uVar7 = CONCAT31((int3)((uint)reg_EBX >> 8),param_8);
      *(uint8_t *)(uVar2 + 0x6a) = (uint8_t)param_4;
      *(uint8_t *)(uVar2 + 0x6d) = param_9;
      *(uint8_t *)(uVar2 + 0x6b) = param_8;
      *(uint *)(uVar2 + 0x70) = param_1 >> 0x14 & 1;
      *(uint32_t *)(uVar2 + 0x78) = 0x67;
      *(uint *)(uVar2 + 0x74) = param_1 >> 0x15 & 1;
      sub_102f0770();
      sub_102f0780();
      sub_102f0790(param_1,uVar2,uVar7);
      param_4 = *p_D2Game_DAT_6fd31c3c;
      *(uint32_t *)(uVar2 + 0x8c) = 0;
      *(uint32_t *)(uVar2 + 0x88) = 0;
      puVar4 = functions_D2NewFunctions_102beb20(param_2,uVar2,(char)param_5,param_6,&DAT_10367500,0,(uint)param_10);
      D2Net_10021(param_2,uVar1);
      if (*(char *)(uVar2 + 0x6a) == '\x01') {
        puVar4[0xf5] = puVar4[0xf5] | 0x20;
      }
      sub_102f07b0();
      sub_102f07c0();
      uVar3 = OBJECTS_objrgn_6fc2b9a0(uVar2);
      *(uint *)(uVar2 + 0x80) = uVar3;
      UNIT_sunitproxy_6fcafbe0(uVar2);
      sub_6fc548a0(uVar2);
      GAME_Game_6fc4a2d0(uVar1,*(ushort *)(uVar2 + 0x28));
      sub_102f07d0();
      if (puVar4 == (uint *)0x0) {
        iVar5 = 0x7d6;
      }
      else if (*p_D2Game_DAT_6fd31c30 < 5) {
        *(byte *)(puVar4 + 0x6b) = *p_D2Game_DAT_6fd31c30;
        uVar3 = Fog_10055();
        *(uint *)(uVar2 + 0x1dc4) = uVar3;
        if (uVar3 < 2) {
          *(uint32_t *)(uVar2 + 0x1dc4) = 2;
        }
        puVar6 = Fog_10042(0x14,"..\\Source\\D2Game\\GAME\\Game.cpp",0x524,0);
        D2Game_10015(puVar6,0,uVar1);
        if ((param_4 == 0) || (*(int *)(param_4 + 8) == 0)) {
          param_4 = CONCAT13(2,(uint32_t)param_4);
          sub_102ecd00(puVar4,(int)&param_4 + 3,1);
          return;
        }
        iVar5 = 0x52b;
      }
      else {
        iVar5 = 0x7d7;
      }
      Fog_10024("","D2GAME_SendGameInit",iVar5);
                    /* WARNING: Subroutine does not return */
      _exit(-1);
    }
  }
  return;
}


// 0x1026c940  (ghidra: FUN_1026c940)  [anchor] refs functions/D2ServerFunctions.cpp (assert lines 1812,1853)
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2ServerFunctions_Hook_D2Game_10040_1026c940(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  int iVar4;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  uint32_t extraout_ECX_01;
  uint32_t extraout_EDX;
  uint64_t uVar5;
  uint8_t local_54 [4];
  uint64_t local_50;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint8_t local_3c [52];
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  uVar1 = *param_1;
  memset(local_3c,0,0x34);
  local_40 = 0;
  local_50 = 0;
  switch((char)param_1[1]) {
  case 'g':
    iVar4 = sub_102ef280(param_1 + 1,uVar1);
    if (iVar4 != 0) {
      functions_D2ServerFunctions_Wraps_D2Game_GAME_Game_1026c700(*(uint *)((int)param_1 + 0x2b),uVar1,(int)param_1 + 5,
                   (uint)*(byte *)((int)param_1 + 0x15),(uint)*(byte *)((int)param_1 + 0x16),
                   (int)param_1 + 0x19,extraout_ECX_00,*(uint8_t *)((int)param_1 + 0x17),
                   (char)param_1[6],*(byte *)((int)param_1 + 0x31),param_1 + 1);
      return;
    }
    break;
  case 'h':
    iVar4 = (int)param_1 + 0x19;
    if (*p_D2Game_DAT_6fd31c3c == 0) {
      uVar5 = sub_102ef2a0((uint)*(ushort *)((int)param_1 + 9),iVar4,param_1[3]);
      if ((int)uVar5 != 0) {
        sub_102ef2c0(extraout_ECX_01,(int)((ulonglong)uVar5 >> 0x20));
        D2Net_10001(uVar1,0x1037dda0 /* "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2ServerFunctions.cpp" */,0x714);
        return;
      }
    }
    local_50 = CONCAT44(param_1[3],(uint32_t)local_50);
    iVar3 = sub_102ef2d0(iVar4,uVar1,(uint)*(ushort *)((int)param_1 + 9),
                         (uint)*(byte *)((int)param_1 + 0xb),*(uint32_t *)((int)param_1 + 5),
                         local_3c,&local_50,(uint)(byte)param_1[6],&local_48,&local_44,local_54,
                         &local_40);
    if (iVar3 != 0) {
      sub_102ef310(uVar1,(uint)*(ushort *)((int)param_1 + 9),(uint)*(byte *)((int)param_1 + 0xb),
                   iVar4,local_3c,(uint32_t)local_50,(uint)(byte)param_1[6],local_48,local_44);
      return;
    }
    break;
  case 'i':
    iVar4 = sub_102ef340(uVar1,4);
    if (iVar4 != 0) {
      GAME_Game_6fc4dc70(uVar1,1);
      return;
    }
    break;
  case 'j':
    sub_102ef360();
    return;
  case 'k':
    iVar4 = sub_102ef340(uVar1,1);
    if (iVar4 != 0) {
      sub_102ef370();
      return;
    }
    break;
  case 'l':
    uVar2 = *(uint *)((int)param_1 + 7);
    if (0x20000 < (int)uVar2) {
      sub_102ef2c0(extraout_ECX,extraout_EDX);
      D2Net_10001(uVar1,0x1037dda0 /* "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2ServerFunctions.cpp" */,0x73d);
      return;
    }
    if (*(char *)((int)param_1 + 6) == '\0') {
      functions_SaveFunctions_Wraps_D2Game_GAME_Clients_102eadc0(uVar1,(void *)((int)param_1 + 0xb),(uint)*(byte *)((int)param_1 + 5),uVar2);
      return;
    }
    if (*(char *)((int)param_1 + 6) == '\x01') {
      functions_SaveFunctions_Wraps_D2Game_GAME_Clients_102eaf00(uVar1,(void *)((int)param_1 + 0xb),(uint)*(byte *)((int)param_1 + 5),uVar2);
      return;
    }
    break;
  case 'm':
    sub_102ef380(uVar1,*(uint32_t *)((int)param_1 + 5),*(uint32_t *)((int)param_1 + 9));
    return;
  case 'n':
    iVar4 = sub_102ef3a0();
    if (iVar4 != 0) {
      sub_102ef3b0(uVar1,0);
      return;
    }
    break;
  case 'p':
    iVar4 = sub_102ef3d0();
    lpCriticalSection = p_D2Game_DAT_6fd30bb8;
    if (iVar4 != 0) {
      *(uint32_t *)(iVar4 + 0x504) = 1;
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}


// 0x1026cc40  (ghidra: FUN_1026cc40)  [range]
void functions_D2ServerFunctions_1026cc40(int param_1,uint32_t reg_ESI)

{
  sub_102ef400();
  functions_D2CommonFunctions_1026c100(param_1,reg_ESI);
  return;
}


// 0x1026cc60  (ghidra: FUN_1026cc60)  [range]
void * __fastcall functions_D2ServerFunctions_1026cc60(void *param_1)

{
  uint32_t *puVar1;
  void *local_8;
  
  local_8 = param_1;
  puVar1 = functions_D2ServerFunctions_1026ce60(&local_8);
  functions_D2ServerFunctions_1026cda0(param_1,puVar1);
  return param_1;
}


// 0x1026cc90  [range]
void __fastcall thunk_FUN_1026cd70(int *param_1)

{
  int iVar1;
  
  iVar1 = sub_10218980(param_1);
  sub_1020ff20((void *)*param_1,iVar1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// 0x1026cca0  [range]
void __fastcall thunk_FUN_1026ce40(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  
  functions_D2ServerFunctions_1026d000(param_1,(uint32_t *)*param_1);
  sub_10210fd0(extraout_ECX,(void *)*param_1);
  return;
}


// 0x1026ccb0  (ghidra: FUN_1026ccb0)  [range]
int functions_D2ServerFunctions_1026ccb0(uint param_1)

{
  uint uVar1;
  
  uVar1 = (DAT_104e1b98 - DAT_104e1b94 >> 3) * -0x55555555;
  if (param_1 <= uVar1 && uVar1 - param_1 != 0) {
    return DAT_104e1b94 + param_1 * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  functions_D2CommonFunctions_1026b8a0();
}


// 0x1026cce0  (ghidra: FUN_1026cce0)  [inferred]
int __thiscall functions_D2ServerFunctions_1026cce0(void *this,uint param_1)

{
  if (param_1 < (uint)(*(int *)((int)this + 4) - *(int *)this >> 2)) {
    return *(int *)this + param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  functions_D2CommonFunctions_1026b8a0();
}


// 0x1026cd10  (ghidra: FUN_1026cd10)  [inferred]
int functions_D2ServerFunctions_1026cd10(uint param_1)

{
  uint uVar1;
  
  uVar1 = (DAT_104e1a6c - DAT_104e1a68 >> 2) * -0x55555555;
  if (param_1 <= uVar1 && uVar1 - param_1 != 0) {
    return DAT_104e1a68 + param_1 * 0xc;
  }
                    /* WARNING: Subroutine does not return */
  functions_D2CommonFunctions_1026b8a0();
}


// 0x1026cd40  (ghidra: FUN_1026cd40)  [inferred]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int functions_D2ServerFunctions_1026cd40(void)

{
  return DAT_104e1b08 - DAT_104e1b04 >> 3;
}


// 0x1026cd50  (ghidra: FUN_1026cd50)  [inferred]
uint64_t __thiscall functions_D2ServerFunctions_1026cd50(void *this,void *param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  uint64_t uVar2;
  
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(this);
  uVar2 = sub_10218cd0(param_1,*(uint32_t *)*puVar1);
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),extraout_ECX);
}


// 0x1026cd70  (ghidra: FUN_1026cd70)  [inferred]
void __fastcall functions_D2ServerFunctions_1026cd70(int *param_1)

{
  int iVar1;
  
  iVar1 = sub_10218980(param_1);
  sub_1020ff20((void *)*param_1,iVar1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// 0x1026cda0  (ghidra: FUN_1026cda0)  [linked]
void * __thiscall functions_D2ServerFunctions_1026cda0(void *this,uint32_t *param_1)

{
  uint32_t *puVar1;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030801b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1024ebe0(this,param_1);
  functions_D2ServerFunctions_1026cef0((uint32_t *)((int)this + 4));
  local_8 = 0;
  functions_D2ServerFunctions_1026cfe0((uint32_t *)((int)this + 0xc));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(uint32_t *)((int)this + 0x18) = 7;
  *(uint32_t *)((int)this + 0x1c) = 8;
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(this);
  *puVar1 = 0x3f800000;
  sub_10218cb0((void *)((int)this + 4),&param_1);
  functions_D2ServerFunctions_1026ce90((int *)((int)this + 0xc));
  ExceptionList = local_10;
  return this;
}


// 0x1026ce40  (ghidra: FUN_1026ce40)  [inferred]
void __fastcall functions_D2ServerFunctions_1026ce40(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  
  functions_D2ServerFunctions_1026d000(param_1,(uint32_t *)*param_1);
  sub_10210fd0(extraout_ECX,(void *)*param_1);
  return;
}


// 0x1026ce60  (ghidra: FUN_1026ce60)  [linked]
void * __fastcall functions_D2ServerFunctions_1026ce60(void *param_1)

{
  uint32_t local_c;
  uint8_t local_5;
  
  local_c = 0;
  functions_D2ServerFunctions_1026d020(param_1,0,&local_5,&local_c);
  return param_1;
}


// 0x1026ce90  (ghidra: FUN_1026ce90)  [linked]
void __fastcall functions_D2ServerFunctions_1026ce90(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  uVar2 = sub_10218980(param_1);
  if (uVar2 < 0x10) {
    iVar3 = functions_D2ServerFunctions_1026cf10();
    if (uVar2 != 0) {
      sub_1020ff20((void *)*param_1,uVar2);
    }
    iVar1 = iVar3 + 0x40;
    *param_1 = iVar3;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
    functions_D2ServerFunctions_1026d050(iVar3,iVar1,&stack0x00000008);
    return;
  }
  functions_D2ServerFunctions_1026d0c0(*param_1,param_1[1],(uint32_t *)&stack0x00000008);
  return;
}


// 0x1026cef0  (ghidra: FUN_1026cef0)  [linked]
uint32_t * __fastcall functions_D2ServerFunctions_1026cef0(uint32_t *param_1)

{
  int *extraout_ECX;
  
  sub_10212c40(param_1);
  functions_D2ServerFunctions_1026cf30(extraout_ECX);
  return param_1;
}


// 0x1026cf10  (ghidra: FUN_1026cf10)  [linked]
void functions_D2ServerFunctions_1026cf10(void)

{
  uint uVar1;
  
  uVar1 = sub_10211490(0x10);
  sub_10210950(uVar1);
  return;
}


// 0x1026cf30  (ghidra: FUN_1026cf30)  [linked]
void __fastcall functions_D2ServerFunctions_1026cf30(int *param_1)

{
  int *local_8;
  
  local_8 = param_1;
  local_8 = (int *)sub_10210a30();
  sub_10210750(local_8,&local_8);
  sub_10210750(local_8 + 1,&local_8);
  *param_1 = (int)local_8;
  return;
}


// 0x1026cf70  (ghidra: FUN_1026cf70)  [inferred]
void * __fastcall functions_D2ServerFunctions_1026cf70(void *param_1,int param_2,int param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint32_t extraout_ECX;
  uint64_t uVar4;
  
  sVar1 = client_DrawHoverItem_10224f20(param_2);
  uVar2 = client_DrawHoverItem_10224f20(param_3);
  uVar3 = sub_1020ffe0();
  if (uVar2 <= uVar3 - sVar1) {
    thunk_FUN_1020fe30(param_2);
    uVar4 = thunk_FUN_1020fe30(param_3);
    sub_10260da0(param_1,uVar2,extraout_ECX,(void *)((ulonglong)uVar4 >> 0x20),sVar1,(void *)uVar4,
                 uVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_1020f3f0();
}


// 0x1026cfe0  (ghidra: FUN_1026cfe0)  [linked]
uint32_t __fastcall functions_D2ServerFunctions_1026cfe0(uint32_t *param_1)

{
  uint32_t extraout_ECX;
  
  sub_10210180(param_1);
  return extraout_ECX;
}


// 0x1026d000  (ghidra: FUN_1026d000)  [linked]
void __fastcall functions_D2ServerFunctions_1026d000(uint32_t param_1,uint32_t *param_2)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  uint32_t extraout_ECX;
  
  *(uint32_t *)param_2[1] = 0;
  puVar2 = (uint32_t *)*param_2;
  while (puVar2 != (uint32_t *)0x0) {
    puVar1 = (uint32_t *)*puVar2;
    functions_D2ServerFunctions_1026d180(param_1,puVar2);
    puVar2 = puVar1;
    param_1 = extraout_ECX;
  }
  return;
}


// 0x1026d020  (ghidra: FUN_1026d020)  [linked]
void * __thiscall functions_D2ServerFunctions_1026d020(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  
  puVar1 = (uint8_t *)sub_1020fe80(param_2);
  param_2 = CONCAT31(param_2._1_3_,*puVar1);
  uVar2 = sub_1020fe80(param_3);
  sub_1024b7f0(param_2,uVar2);
  return this;
}


// 0x1026d050  (ghidra: FUN_1026d050)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2ServerFunctions_1026d050(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t auStack_20 [4];
  uint8_t local_1c [4];
  int local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_20;
  local_14 = param_2;
  local_10 = param_1;
  iVar1 = sub_1020faf0(&local_14);
  uVar2 = sub_1020faf0(&local_10);
  functions_D2ServerFunctions_1026d160(local_1c,uVar2);
  while (local_18 != iVar1) {
    functions_D2ServerFunctions_1026d1a0(local_1c,param_3);
  }
  return;
}


// 0x1026d0c0  (ghidra: FUN_1026d0c0)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2ServerFunctions_1026d0c0(uint32_t param_1,uint32_t param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t *extraout_EDX;
  uint32_t *puVar3;
  uint uVar4;
  uint32_t *puVar5;
  uint32_t local_10;
  uint32_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_c = param_1;
  sub_1020faf0(&local_c);
  puVar2 = (uint32_t *)sub_1020faf0(&local_10);
  uVar4 = (uint)((int)puVar2 + (3 - (int)extraout_EDX)) >> 2;
  if (puVar2 < extraout_EDX) {
    uVar4 = 0;
  }
  puVar3 = extraout_EDX;
  if ((uVar4 != 0) && (3 < uVar4)) {
    uVar1 = *param_3;
    if ((param_3 < extraout_EDX) || (extraout_EDX + (uVar4 - 1) < param_3)) {
      puVar3 = extraout_EDX + (uVar4 & 0xfffffffc);
      puVar5 = extraout_EDX;
      for (uVar4 = uVar4 & 0x3ffffffc; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    *puVar3 = *param_3;
  }
  return;
}


// 0x1026d160  (ghidra: FUN_1026d160)  [linked]
uint32_t * __thiscall functions_D2ServerFunctions_1026d160(void *this,uint32_t param_1)

{
  *(uint32_t *)this = param_1;
  *(uint32_t *)((int)this + 4) = param_1;
  return this;
}


// 0x1026d180  (ghidra: FUN_1026d180)  [linked]
void __fastcall functions_D2ServerFunctions_1026d180(uint32_t param_1,void *param_2)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  
  puVar1 = (uint32_t *)sub_1020fe80((int)param_2 + 8);
  sub_102113e0(extraout_ECX,puVar1);
  sub_10210fd0(extraout_ECX_00,param_2);
  return;
}


// 0x1026d1a0  (ghidra: FUN_1026d1a0)  [linked]
void __thiscall functions_D2ServerFunctions_1026d1a0(void *this,uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = sub_1020fe80(param_1);
  sub_10210750(*(uint32_t *)((int)this + 4),uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return;
}

