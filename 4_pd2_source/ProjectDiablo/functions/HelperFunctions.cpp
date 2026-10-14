/*
 * functions/HelperFunctions.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10136a40 - 0x102d3c10
 * Functions     : 217
 * Attribution   : range=205, anchor=1, linked=10, inferred=1
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10136a40  (ghidra: FUN_10136a40)  [range]
void functions_HelperFunctions_init_10136a40(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104e34b0);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_1031d960);
  return;
}


// 0x10136a60  (ghidra: FUN_10136a60)  [range]
void functions_HelperFunctions_init_10136a60(void)

{
  uint8_t local_b0 [8];
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t local_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35d8);
  local_a8 = 0xf7;
  uStack_a4 = 0xf8;
  uStack_a0 = 0xf9;
  uStack_9c = 0x338;
  local_68 = 0x395;
  local_98 = 0x21c;
  uStack_94 = 0x21d;
  uStack_90 = 0x21e;
  uStack_8c = 0x3bf;
  local_88 = 0x354;
  uStack_84 = 0x351;
  uStack_80 = 0x352;
  uStack_7c = 0x34e;
  local_78 = 0x34d;
  uStack_74 = 0x394;
  uStack_70 = 0x34f;
  uStack_6c = 0x353;
  local_64 = 0x350;
  local_60 = 0x3ac;
  uStack_5c = 0x3ad;
  uStack_58 = 0x3ae;
  uStack_54 = 0x3af;
  local_50 = 0x3b2;
  local_4c = 0x3ca;
  uStack_48 = 0x3cb;
  uStack_44 = 0x3cc;
  uStack_40 = 0x3cd;
  local_c = 0x3da;
  local_3c = 0x3ce;
  uStack_38 = 0x3cf;
  uStack_34 = 0x3d0;
  uStack_30 = 0x3d1;
  local_2c = 0x3d2;
  uStack_28 = 0x3d3;
  uStack_24 = 0x3d4;
  uStack_20 = 0x3d5;
  local_1c = 0x3d6;
  uStack_18 = 0x3d7;
  uStack_14 = 0x3d8;
  uStack_10 = 0x3d9;
  sub_1020f550(local_b0,&local_a8,local_8);
  sub_1020f900(&DAT_104e35d8);
  _atexit((_func_4879 *)&LAB_1031d970);
  return;
}


// 0x10136b50  (ghidra: FUN_10136b50)  [range]
void functions_HelperFunctions_init_10136b50(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e349c);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e349c);
  _atexit((_func_4879 *)&LAB_1031d980);
  return;
}


// 0x10136bb0  (ghidra: FUN_10136bb0)  [range]
void functions_HelperFunctions_init_10136bb0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35a4);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e35a4);
  _atexit((_func_4879 *)&LAB_1031d990);
  return;
}


// 0x10136c10  (ghidra: FUN_10136c10)  [range]
void functions_HelperFunctions_init_10136c10(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e34f8);
  local_2c = 0xf2;
  uStack_28 = 0xfb;
  uStack_24 = 0x100;
  uStack_20 = 0x105;
  local_c = 0x188;
  local_1c = 0x106;
  uStack_18 = 0x139;
  uStack_14 = 0x110;
  uStack_10 = 0x114;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104e34f8);
  _atexit((_func_4879 *)&LAB_1031d9a0);
  return;
}


// 0x10136c80  (ghidra: FUN_10136c80)  [range]
void functions_HelperFunctions_init_10136c80(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3538);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e3538);
  _atexit((_func_4879 *)&LAB_1031d9b0);
  return;
}


// 0x10136ce0  (ghidra: FUN_10136ce0)  [range]
void functions_HelperFunctions_init_10136ce0(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f420((uint64_t *)&DAT_104e3554);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104e3554);
  _atexit((_func_4879 *)&LAB_1031d9c0);
  return;
}


// 0x10136d40  (ghidra: FUN_10136d40)  [range]
void functions_HelperFunctions_init_10136d40(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3560);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3560);
  _atexit((_func_4879 *)&LAB_1031d9d0);
  return;
}


// 0x10136db0  (ghidra: FUN_10136db0)  [range]
void functions_HelperFunctions_init_10136db0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3478);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3478);
  _atexit((_func_4879 *)&LAB_1031d9e0);
  return;
}


// 0x10136e20  (ghidra: FUN_10136e20)  [range]
void functions_HelperFunctions_init_10136e20(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3570);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3570);
  _atexit((_func_4879 *)&LAB_1031d9f0);
  return;
}


// 0x10136e90  (ghidra: FUN_10136e90)  [range]
void functions_HelperFunctions_init_10136e90(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3500);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e3500);
  _atexit((_func_4879 *)&LAB_1031da00);
  return;
}


// 0x10136ef0  (ghidra: FUN_10136ef0)  [range]
void functions_HelperFunctions_init_10136ef0(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e354c);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e354c);
  _atexit((_func_4879 *)&LAB_1031da10);
  return;
}


// 0x10136f50  (ghidra: FUN_10136f50)  [range]
void functions_HelperFunctions_init_10136f50(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35e8);
  local_2c = 0xae;
  uStack_28 = 0x8e;
  uStack_24 = 0xaf;
  uStack_20 = 0x9c;
  local_c = 0xc1;
  local_1c = 0x8d;
  uStack_18 = 0xa7;
  uStack_14 = 0xa0;
  uStack_10 = 0x96;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104e35e8);
  _atexit((_func_4879 *)&LAB_1031da20);
  return;
}


// 0x10136fc0  (ghidra: FUN_10136fc0)  [range]
void functions_HelperFunctions_init_10136fc0(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e33e0);
  local_2c = 0x402;
  uStack_28 = 800;
  uStack_24 = 0x401;
  uStack_20 = 0x37e;
  local_c = 0x47d;
  local_1c = 0x374;
  uStack_18 = 0x3e5;
  uStack_14 = 0x3c3;
  uStack_10 = 0x372;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104e33e0);
  _atexit((_func_4879 *)&LAB_1031da30);
  return;
}


// 0x10137030  (ghidra: FUN_10137030)  [range]
void functions_HelperFunctions_init_10137030(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e34f0);
  local_2c = 0x9a;
  uStack_28 = 0xaa;
  uStack_24 = 0x8b;
  uStack_20 = 0x95;
  local_c = 0xc9;
  local_1c = 0xbe;
  uStack_18 = 0xbf;
  uStack_14 = 0x90;
  uStack_10 = 0x93;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104e34f0);
  _atexit((_func_4879 *)&LAB_1031da40);
  return;
}


// 0x101370a0  (ghidra: FUN_101370a0)  [range]
void functions_HelperFunctions_init_101370a0(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35c4);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e35c4);
  _atexit((_func_4879 *)&LAB_1031da50);
  return;
}


// 0x10137100  (ghidra: FUN_10137100)  [range]
void functions_HelperFunctions_init_10137100(void)

{
  uint8_t local_30 [8];
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3464);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e3464);
  _atexit((_func_4879 *)&LAB_1031da60);
  return;
}


// 0x10137160  (ghidra: FUN_10137160)  [range]
void functions_HelperFunctions_init_10137160(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35d0);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e35d0);
  _atexit((_func_4879 *)&LAB_1031da70);
  return;
}


// 0x101371c0  (ghidra: FUN_101371c0)  [range]
void functions_HelperFunctions_init_101371c0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35ac);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e35ac);
  _atexit((_func_4879 *)&LAB_1031da80);
  return;
}


// 0x10137220  (ghidra: FUN_10137220)  [range]
void functions_HelperFunctions_init_10137220(void)

{
  uint8_t local_58 [8];
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104e35fc);
  local_50 = 0xb0;
  uStack_4c = 0xb1;
  uStack_48 = 0xb2;
  uStack_44 = 0xb3;
  local_10 = 200;
  local_40 = 0xb5;
  uStack_3c = 0xb6;
  uStack_38 = 0xb7;
  uStack_34 = 0xb8;
  local_30 = 0xb4;
  uStack_2c = 0xc0;
  uStack_28 = 0xc2;
  uStack_24 = 0xc3;
  local_20 = 0xc4;
  uStack_1c = 0xc5;
  uStack_18 = 0xc6;
  uStack_14 = 199;
  sub_1020f550(local_58,&local_50,local_c);
  sub_1020f900(&DAT_104e35fc);
  _atexit((_func_4879 *)&LAB_1031da90);
  return;
}


// 0x101372a0  (ghidra: FUN_101372a0)  [range]
void functions_HelperFunctions_init_101372a0(void)

{
  uint8_t local_40 [8];
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3444);
  local_38 = 0x422;
  uStack_34 = 0x425;
  uStack_30 = 0x426;
  uStack_2c = 0x427;
  local_28 = 0x424;
  uStack_24 = 0x448;
  uStack_20 = 0x446;
  uStack_1c = 0x47c;
  local_18 = 0x48e;
  uStack_14 = 0x48c;
  uStack_10 = 0x497;
  uStack_c = 0x496;
  sub_1020f550(local_40,&local_38,local_8);
  sub_1020f900(&DAT_104e3444);
  _atexit((_func_4879 *)&LAB_1031daa0);
  return;
}


// 0x10137310  (ghidra: FUN_10137310)  [range]
void functions_HelperFunctions_init_10137310(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e3510);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e3510);
  _atexit((_func_4879 *)&LAB_1031dab0);
  return;
}


// 0x10137370  (ghidra: FUN_10137370)  [range]
void functions_HelperFunctions_init_10137370(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3568);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104e3568);
  _atexit((_func_4879 *)&LAB_1031dac0);
  return;
}


// 0x101373d0  (ghidra: FUN_101373d0)  [range]
void functions_HelperFunctions_init_101373d0(void)

{
  uint8_t local_78 [8];
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104e3540);
  local_70 = 0x85;
  uStack_6c = 0x86;
  uStack_68 = 0x87;
  uStack_64 = 0x88;
  local_10 = 0xc4;
  local_60 = 0xb9;
  uStack_5c = 0x89;
  uStack_58 = 0xa1;
  uStack_54 = 0xa2;
  local_50 = 0xa3;
  uStack_4c = 0xa8;
  uStack_48 = 0xbc;
  uStack_44 = 0xbd;
  local_40 = 0xb0;
  uStack_3c = 0xb1;
  uStack_38 = 0xb2;
  uStack_34 = 0xb3;
  local_30 = 0xb5;
  uStack_2c = 0xb6;
  uStack_28 = 0xb7;
  uStack_24 = 0xb8;
  local_20 = 0xb4;
  uStack_1c = 0xc0;
  uStack_18 = 0xc2;
  uStack_14 = 0xc3;
  sub_1020f550(local_78,&local_70,local_c);
  sub_1020f900(&DAT_104e3540);
  _atexit((_func_4879 *)&LAB_1031dad0);
  return;
}


// 0x10137470  (ghidra: FUN_10137470)  [range]
void functions_HelperFunctions_init_10137470(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e352c);
  local_2c = 0x88;
  uStack_28 = 0xb9;
  uStack_24 = 0x89;
  uStack_20 = 0xa1;
  local_c = 0xbd;
  local_1c = 0xa2;
  uStack_18 = 0xa3;
  uStack_14 = 0xa8;
  uStack_10 = 0xbc;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f900(&DAT_104e352c);
  _atexit((_func_4879 *)&LAB_1031dae0);
  return;
}


// 0x101374e0  (ghidra: FUN_101374e0)  [range]
void functions_HelperFunctions_init_101374e0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e34d4);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e34d4);
  _atexit((_func_4879 *)&LAB_1031daf0);
  return;
}


// 0x10137540  (ghidra: FUN_10137540)  [range]
void functions_HelperFunctions_init_10137540(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3484);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e3484);
  _atexit((_func_4879 *)&LAB_1031db00);
  return;
}


// 0x101375a0  (ghidra: FUN_101375a0)  [range]
void functions_HelperFunctions_init_101375a0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35f4);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e35f4);
  _atexit((_func_4879 *)&LAB_1031db10);
  return;
}


// 0x10137600  (ghidra: FUN_10137600)  [range]
void functions_HelperFunctions_init_10137600(void)

{
  uint8_t local_60 [8];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104e33e8);
  local_58 = 6;
  uStack_54 = 0xb;
  uStack_50 = 0x2a;
  uStack_4c = 0xc;
  local_38 = 0x31;
  local_48 = 0xf;
  uStack_44 = 0x12;
  uStack_40 = 0x14;
  uStack_3c = 0x15;
  local_2c = 0x24;
  uStack_28 = 0x25;
  uStack_24 = 0x26;
  uStack_20 = 0x27;
  local_34 = 0x17;
  local_30 = 0x18;
  local_1c = 0x34;
  uStack_18 = 0x41;
  uStack_14 = 0x10b;
  uStack_10 = 0x100;
  sub_1020f550(local_60,&local_58,local_c);
  sub_1020f900(&DAT_104e33e8);
  _atexit((_func_4879 *)&LAB_1031db20);
  return;
}


// 0x10137690  (ghidra: FUN_10137690)  [range]
void functions_HelperFunctions_init_10137690(void)

{
  uint8_t local_88 [8];
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3508);
  local_80 = 0x315;
  uStack_7c = 0x377;
  uStack_78 = 0x37a;
  uStack_74 = 0x378;
  local_10 = 0x474;
  local_70 = 0x379;
  uStack_6c = 0x37b;
  uStack_68 = 0x376;
  uStack_64 = 0x316;
  local_60 = 0x317;
  uStack_5c = 0x318;
  uStack_58 = 0x319;
  uStack_54 = 0x31a;
  local_50 = 0x3a5;
  uStack_4c = 0x3a6;
  uStack_48 = 0x3a7;
  uStack_44 = 0x3a8;
  local_c = 0x475;
  local_40 = 0x3aa;
  uStack_3c = 0x3c6;
  uStack_38 = 0x3ab;
  uStack_34 = 0x3a9;
  local_30 = 0x3c8;
  uStack_2c = 0x3c9;
  uStack_28 = 0x452;
  uStack_24 = 0x453;
  local_20 = 0x458;
  uStack_1c = 0x459;
  uStack_18 = 0x45a;
  uStack_14 = 0x45b;
  sub_1020f550(local_88,&local_80,local_8);
  sub_1020f900(&DAT_104e3508);
  _atexit((_func_4879 *)&LAB_1031db30);
  return;
}


// 0x10137750  (ghidra: FUN_10137750)  [range]
void functions_HelperFunctions_init_10137750(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e34c0);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e34c0);
  _atexit((_func_4879 *)&LAB_1031db40);
  return;
}


// 0x101377c0  (ghidra: FUN_101377c0)  [range]
void functions_HelperFunctions_init_101377c0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e3494);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e3494);
  _atexit((_func_4879 *)&LAB_1031db50);
  return;
}


// 0x10137830  (ghidra: FUN_10137830)  [range]
void functions_HelperFunctions_init_10137830(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e343c);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104e343c);
  _atexit((_func_4879 *)&LAB_1031db60);
  return;
}


// 0x10137880  (ghidra: FUN_10137880)  [range]
void functions_HelperFunctions_init_10137880(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e3594);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e3594);
  _atexit((_func_4879 *)&LAB_1031db70);
  return;
}


// 0x101378e0  (ghidra: FUN_101378e0)  [range]
void functions_HelperFunctions_init_101378e0(void)

{
  uint8_t local_34 [8];
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e35bc);
  local_2c = 0x6f686364;
  local_28 = 0x6f736364;
  local_24 = 0x6c626364;
  local_20 = 0x766d7472;
  local_1c = 0x6f6d7472;
  local_18 = 0x66326d63;
  local_14 = 0x6263756c;
  local_10 = 0x6363756c;
  local_c = 0x6463756c;
  sub_1020f550(local_34,&local_2c,local_8);
  sub_1020f880(&DAT_104e35bc);
  _atexit((_func_4879 *)&LAB_1031db80);
  return;
}


// 0x10137970  (ghidra: FUN_10137970)  [range]
void functions_HelperFunctions_init_10137970(void)

{
  uint8_t local_70 [8];
  uint32_t local_68;
  uint32_t local_64;
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
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
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104e35b4);
  local_68 = 0x20736b62;
  local_64 = 0x20646b62;
  local_60 = 0x206d6468;
  local_5c = 0x20317274;
  local_58 = 0x20737361;
  local_54 = 0x20786f62;
  local_50 = 0x2066736d;
  local_4c = 0x20706976;
  local_48 = 0x20747368;
  local_44 = 0x2034336a;
  local_40 = 0x20343371;
  local_3c = 0x207a7978;
  local_38 = 0x20796571;
  local_34 = 0x20726871;
  local_30 = 0x20726271;
  local_2c = 0x20316671;
  local_28 = 0x20326671;
  local_24 = 0x20626262;
  local_20 = 0x2073736d;
  local_1c = 0x20686668;
  local_18 = 0x20656369;
  local_14 = 0x20327274;
  local_10 = 0x20202020;
  sub_1020f550(local_70,&local_68,local_c);
  sub_1020f880(&DAT_104e35b4);
  _atexit((_func_4879 *)&LAB_1031db90);
  return;
}


// 0x10137a70  (ghidra: FUN_10137a70)  [range]
void functions_HelperFunctions_init_10137a70(void)

{
  uint8_t local_50 [8];
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e359c);
  local_48 = 0x77;
  uStack_44 = 0x91;
  uStack_40 = 0x9c;
  uStack_3c = 0x9d;
  local_38 = 0xed;
  uStack_34 = 0xee;
  uStack_30 = 0x120;
  uStack_2c = 0x143;
  local_28 = 0x144;
  uStack_24 = 0x18e;
  uStack_20 = 0x192;
  uStack_1c = 0x1ad;
  local_18 = 0x1ee;
  uStack_14 = 0x1f0;
  uStack_10 = 0x1ff;
  uStack_c = 0x21b;
  sub_1020f550(local_50,&local_48,local_8);
  sub_1020f900(&DAT_104e359c);
  _atexit((_func_4879 *)&LAB_1031dba0);
  return;
}


// 0x10137af0  (ghidra: FUN_10137af0)  [range]
void functions_HelperFunctions_init_10137af0(void)

{
  uint8_t local_68 [8];
  uint32_t local_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t local_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t local_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f410((uint64_t *)&DAT_104e3578);
  local_60 = 0x1ae;
  uStack_5c = 0x1af;
  uStack_58 = 0x1b0;
  uStack_54 = 0x1ba;
  local_10 = 0x1f8;
  local_50 = 0x1bb;
  uStack_4c = 0x1bc;
  uStack_48 = 0x1c6;
  uStack_44 = 0x1c7;
  local_40 = 0x1c8;
  uStack_3c = 0x1d2;
  uStack_38 = 0x1d3;
  uStack_34 = 0x1d4;
  local_30 = 0x1de;
  uStack_2c = 0x1df;
  uStack_28 = 0x1e0;
  uStack_24 = 0x1ea;
  local_20 = 0x1eb;
  uStack_1c = 0x1ec;
  uStack_18 = 0x1f6;
  uStack_14 = 0x1f7;
  sub_1020f550(local_68,&local_60,local_c);
  sub_1020f900(&DAT_104e3578);
  _atexit((_func_4879 *)&LAB_1031dbb0);
  return;
}


// 0x10137b80  (ghidra: FUN_10137b80)  [range]
void functions_HelperFunctions_init_10137b80(void)

{
  uint32_t local_4c0;
  uint32_t uStack_4bc;
  uint32_t uStack_4b8;
  uint32_t uStack_4b4;
  uint32_t local_4b0;
  uint32_t uStack_4ac;
  uint32_t uStack_4a8;
  uint32_t uStack_4a4;
  uint32_t local_4a0;
  uint32_t uStack_49c;
  uint32_t uStack_498;
  uint32_t uStack_494;
  uint32_t local_490;
  uint32_t uStack_48c;
  uint32_t uStack_488;
  uint32_t uStack_484;
  uint32_t local_480;
  uint32_t uStack_47c;
  uint32_t uStack_478;
  uint32_t uStack_474;
  uint32_t local_470;
  uint32_t uStack_46c;
  uint32_t uStack_468;
  uint32_t uStack_464;
  uint32_t local_460;
  uint32_t uStack_45c;
  uint32_t uStack_458;
  uint32_t uStack_454;
  uint32_t local_450;
  uint32_t uStack_44c;
  uint32_t uStack_448;
  uint32_t uStack_444;
  uint32_t local_440;
  uint32_t uStack_43c;
  uint32_t uStack_438;
  uint32_t uStack_434;
  uint32_t local_430;
  uint32_t uStack_42c;
  uint32_t uStack_428;
  uint32_t uStack_424;
  uint32_t local_420;
  uint32_t uStack_41c;
  uint32_t uStack_418;
  uint32_t uStack_414;
  uint32_t local_410;
  uint32_t uStack_40c;
  uint32_t uStack_408;
  uint32_t uStack_404;
  uint32_t local_400;
  uint32_t uStack_3fc;
  uint32_t uStack_3f8;
  uint32_t uStack_3f4;
  uint32_t local_3f0;
  uint32_t uStack_3ec;
  uint32_t uStack_3e8;
  uint32_t uStack_3e4;
  uint32_t local_3e0;
  uint32_t uStack_3dc;
  uint32_t uStack_3d8;
  uint32_t uStack_3d4;
  uint32_t local_3d0;
  uint32_t uStack_3cc;
  uint32_t uStack_3c8;
  uint32_t uStack_3c4;
  uint32_t local_3c0;
  uint32_t uStack_3bc;
  uint32_t uStack_3b8;
  uint32_t uStack_3b4;
  uint32_t local_3b0;
  uint32_t uStack_3ac;
  uint32_t uStack_3a8;
  uint32_t uStack_3a4;
  uint32_t local_3a0;
  uint32_t uStack_39c;
  uint32_t uStack_398;
  uint32_t uStack_394;
  uint32_t local_390;
  uint32_t uStack_38c;
  uint32_t uStack_388;
  uint32_t uStack_384;
  uint32_t local_380;
  uint32_t uStack_37c;
  uint32_t uStack_378;
  uint32_t uStack_374;
  uint32_t local_370;
  uint32_t uStack_36c;
  uint32_t uStack_368;
  uint32_t uStack_364;
  uint32_t local_360;
  uint32_t uStack_35c;
  uint32_t uStack_358;
  uint32_t uStack_354;
  uint32_t local_350;
  uint32_t uStack_34c;
  uint32_t uStack_348;
  uint32_t uStack_344;
  uint32_t local_340;
  uint32_t local_33c;
  uint32_t uStack_338;
  uint32_t uStack_334;
  uint32_t uStack_330;
  uint32_t local_32c;
  uint32_t uStack_328;
  uint32_t uStack_324;
  uint32_t uStack_320;
  uint32_t local_31c;
  uint32_t uStack_318;
  uint32_t uStack_314;
  uint32_t uStack_310;
  uint32_t local_30c;
  uint32_t uStack_308;
  uint32_t uStack_304;
  uint32_t uStack_300;
  uint32_t local_2fc;
  uint32_t uStack_2f8;
  uint32_t uStack_2f4;
  uint32_t uStack_2f0;
  uint32_t local_2ec;
  uint32_t uStack_2e8;
  uint32_t uStack_2e4;
  uint32_t uStack_2e0;
  uint32_t local_2dc;
  uint32_t uStack_2d8;
  uint32_t uStack_2d4;
  uint32_t uStack_2d0;
  uint32_t local_2cc;
  uint32_t uStack_2c8;
  uint32_t uStack_2c4;
  uint32_t uStack_2c0;
  uint32_t local_2bc;
  uint32_t local_2b8;
  uint32_t uStack_2b4;
  uint32_t uStack_2b0;
  uint32_t uStack_2ac;
  uint32_t local_2a8;
  uint32_t uStack_2a4;
  uint32_t uStack_2a0;
  uint32_t uStack_29c;
  uint32_t local_298;
  uint32_t uStack_294;
  uint32_t uStack_290;
  uint32_t uStack_28c;
  uint32_t local_288;
  uint32_t uStack_284;
  uint32_t uStack_280;
  uint32_t uStack_27c;
  uint32_t local_278;
  uint32_t uStack_274;
  uint32_t uStack_270;
  uint32_t uStack_26c;
  uint32_t local_268;
  uint32_t uStack_264;
  uint32_t uStack_260;
  uint32_t uStack_25c;
  uint32_t local_258;
  uint32_t uStack_254;
  uint32_t uStack_250;
  uint32_t uStack_24c;
  uint32_t local_248;
  uint32_t local_244;
  uint32_t uStack_240;
  uint32_t uStack_23c;
  uint32_t uStack_238;
  uint32_t local_234;
  uint32_t uStack_230;
  uint32_t uStack_22c;
  uint32_t uStack_228;
  uint32_t local_224;
  uint32_t uStack_220;
  uint32_t uStack_21c;
  uint32_t uStack_218;
  uint32_t local_214;
  uint32_t uStack_210;
  uint32_t uStack_20c;
  uint32_t uStack_208;
  uint32_t local_204;
  uint32_t uStack_200;
  uint32_t uStack_1fc;
  uint32_t uStack_1f8;
  uint32_t local_1f4;
  uint32_t uStack_1f0;
  uint32_t uStack_1ec;
  uint32_t uStack_1e8;
  uint32_t local_1e4;
  uint32_t uStack_1e0;
  uint32_t uStack_1dc;
  uint32_t uStack_1d8;
  uint32_t local_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint32_t local_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t uStack_1b8;
  uint32_t local_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t uStack_1a8;
  uint32_t local_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t local_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t uStack_188;
  uint32_t local_184;
  uint32_t local_180;
  uint32_t local_17c;
  uint32_t uStack_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t local_16c;
  uint32_t uStack_168;
  uint32_t uStack_164;
  uint32_t uStack_160;
  uint32_t local_15c;
  uint32_t uStack_158;
  uint32_t uStack_154;
  uint32_t uStack_150;
  uint32_t local_14c;
  uint32_t uStack_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint32_t local_13c;
  uint32_t uStack_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t local_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t local_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100 [3];
  uint32_t local_f4 [3];
  uint32_t local_e8 [3];
  uint32_t local_dc [3];
  uint32_t local_d0 [3];
  uint32_t local_c4 [3];
  uint32_t local_b8 [3];
  uint32_t local_ac [3];
  uint32_t local_a0 [3];
  uint32_t local_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t local_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t local_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t local_64;
  uint8_t local_60 [8];
  uint8_t local_58 [8];
  uint8_t local_50 [8];
  uint8_t local_48 [8];
  uint8_t local_40 [8];
  uint8_t local_38 [8];
  uint8_t local_30 [8];
  uint8_t local_28 [8];
  uint8_t local_20 [8];
  uint8_t local_18 [8];
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103032f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104e3584);
  local_1f4 = 6;
  uStack_1f0 = 7;
  uStack_1ec = 8;
  uStack_1e8 = 9;
  local_184 = 0x22;
  local_1e4 = 10;
  uStack_1e0 = 0xb;
  uStack_1dc = 0xc;
  uStack_1d8 = 0xd;
  local_1d4 = 0xe;
  uStack_1d0 = 0xf;
  uStack_1cc = 0x10;
  uStack_1c8 = 0x11;
  local_1c4 = 0x12;
  uStack_1c0 = 0x13;
  uStack_1bc = 0x14;
  uStack_1b8 = 0x15;
  local_180 = 0x23;
  local_1b4 = 0x16;
  uStack_1b0 = 0x17;
  uStack_1ac = 0x18;
  uStack_1a8 = 0x19;
  local_1a4 = 0x1a;
  uStack_1a0 = 0x1b;
  uStack_19c = 0x1c;
  uStack_198 = 0x1d;
  local_194 = 0x1e;
  uStack_190 = 0x1f;
  uStack_18c = 0x20;
  uStack_188 = 0x21;
  sub_1020f550(local_18,&local_1f4,&local_17c);
  sub_1020f780(local_100);
  local_8 = 0;
  local_33c = 0x24;
  uStack_338 = 0x25;
  uStack_334 = 0x26;
  uStack_330 = 0x27;
  local_32c = 0x28;
  uStack_328 = 0x29;
  uStack_324 = 0x2a;
  uStack_320 = 0x2b;
  local_31c = 0x2c;
  uStack_318 = 0x2d;
  uStack_314 = 0x2e;
  uStack_310 = 0x2f;
  local_2bc = 0x17f;
  local_30c = 0x30;
  uStack_308 = 0x31;
  uStack_304 = 0x32;
  uStack_300 = 0x33;
  local_2fc = 0x34;
  uStack_2f8 = 0x35;
  uStack_2f4 = 0x36;
  uStack_2f0 = 0x37;
  local_2ec = 0x38;
  uStack_2e8 = 0x39;
  uStack_2e4 = 0x3a;
  uStack_2e0 = 0x3b;
  local_2dc = 0x3c;
  uStack_2d8 = 0x3d;
  uStack_2d4 = 0x3e;
  uStack_2d0 = 0x3f;
  local_2cc = 0x40;
  uStack_2c8 = 0x41;
  uStack_2c4 = 0x171;
  uStack_2c0 = 0x178;
  sub_1020f550(local_20,&local_33c,&local_2b8);
  sub_1020f780(local_f4);
  local_8._0_1_ = 1;
  local_440 = 0x42;
  uStack_43c = 0x43;
  uStack_438 = 0x44;
  uStack_434 = 0x45;
  local_430 = 0x46;
  uStack_42c = 0x47;
  uStack_428 = 0x48;
  uStack_424 = 0x49;
  local_420 = 0x4a;
  uStack_41c = 0x4b;
  uStack_418 = 0x4c;
  uStack_414 = 0x4d;
  local_410 = 0x4e;
  uStack_40c = 0x4f;
  uStack_408 = 0x50;
  uStack_404 = 0x51;
  local_400 = 0x52;
  uStack_3fc = 0x53;
  uStack_3f8 = 0x54;
  uStack_3f4 = 0x55;
  local_3f0 = 0x56;
  uStack_3ec = 0x57;
  uStack_3e8 = 0x58;
  uStack_3e4 = 0x59;
  local_3e0 = 0x5a;
  uStack_3dc = 0x5b;
  uStack_3d8 = 0x5c;
  uStack_3d4 = 0x5d;
  local_3d0 = 0x5e;
  uStack_3cc = 0x5f;
  uStack_3c8 = 0x16f;
  uStack_3c4 = 0x17d;
  sub_1020f550(local_28,&local_440,&local_3c0);
  sub_1020f780(local_e8);
  local_8._0_1_ = 2;
  local_3c0 = 0x60;
  uStack_3bc = 0x61;
  uStack_3b8 = 0x62;
  uStack_3b4 = 99;
  local_3b0 = 100;
  uStack_3ac = 0x65;
  uStack_3a8 = 0x66;
  uStack_3a4 = 0x67;
  local_3a0 = 0x68;
  uStack_39c = 0x69;
  uStack_398 = 0x6a;
  uStack_394 = 0x6b;
  local_340 = 0x17a;
  local_390 = 0x6c;
  uStack_38c = 0x6d;
  uStack_388 = 0x6e;
  uStack_384 = 0x6f;
  local_380 = 0x70;
  uStack_37c = 0x71;
  uStack_378 = 0x72;
  uStack_374 = 0x73;
  local_370 = 0x74;
  uStack_36c = 0x75;
  uStack_368 = 0x76;
  uStack_364 = 0x77;
  local_360 = 0x78;
  uStack_35c = 0x79;
  uStack_358 = 0x7a;
  uStack_354 = 0x7b;
  local_350 = 0x7c;
  uStack_34c = 0x7d;
  uStack_348 = 0x16c;
  uStack_344 = 0x173;
  sub_1020f550(local_30,&local_3c0,&local_33c);
  sub_1020f780(local_dc);
  local_8._0_1_ = 3;
  local_2b8 = 0x7e;
  uStack_2b4 = 0x80;
  uStack_2b0 = 0x82;
  uStack_2ac = 0x83;
  local_2a8 = 0x84;
  uStack_2a4 = 0x85;
  uStack_2a0 = 0x86;
  uStack_29c = 0x87;
  local_298 = 0x89;
  uStack_294 = 0x8a;
  uStack_290 = 0x8b;
  uStack_28c = 0x8c;
  local_248 = 0x177;
  local_288 = 0x8d;
  uStack_284 = 0x8e;
  uStack_280 = 0x8f;
  uStack_27c = 0x90;
  local_278 = 0x91;
  uStack_274 = 0x92;
  uStack_270 = 0x93;
  uStack_26c = 0x94;
  local_268 = 0x95;
  uStack_264 = 0x96;
  uStack_260 = 0x97;
  uStack_25c = 0x98;
  local_258 = 0x99;
  uStack_254 = 0x9a;
  uStack_250 = 0x9b;
  uStack_24c = 0x170;
  sub_1020f550(local_38,&local_2b8,&local_244);
  sub_1020f780(local_d0);
  local_8._0_1_ = 4;
  local_17c = 0xdd;
  uStack_178 = 0xde;
  uStack_174 = 0xdf;
  uStack_170 = 0xe0;
  local_16c = 0xe1;
  uStack_168 = 0xe2;
  uStack_164 = 0xe3;
  uStack_160 = 0xe4;
  local_15c = 0xe5;
  uStack_158 = 0xe6;
  uStack_154 = 0xe7;
  uStack_150 = 0xe8;
  local_14c = 0xe9;
  uStack_148 = 0xea;
  uStack_144 = 0xeb;
  uStack_140 = 0xec;
  local_13c = 0xed;
  uStack_138 = 0xee;
  uStack_134 = 0xef;
  uStack_130 = 0xf0;
  local_12c = 0xf1;
  uStack_128 = 0xf2;
  uStack_124 = 0xf3;
  uStack_120 = 0xf4;
  local_10c = 0xf9;
  local_108 = 0xfa;
  local_104 = 0x172;
  local_11c = 0xf5;
  uStack_118 = 0xf6;
  uStack_114 = 0xf7;
  uStack_110 = 0xf8;
  sub_1020f550(local_40,&local_17c,local_100);
  sub_1020f780(local_c4);
  local_8._0_1_ = 5;
  local_4c0 = 0xfb;
  uStack_4bc = 0xfc;
  uStack_4b8 = 0xfd;
  uStack_4b4 = 0xfe;
  local_4b0 = 0xff;
  uStack_4ac = 0x100;
  uStack_4a8 = 0x101;
  uStack_4a4 = 0x102;
  local_4a0 = 0x103;
  uStack_49c = 0x104;
  uStack_498 = 0x105;
  uStack_494 = 0x106;
  local_490 = 0x107;
  uStack_48c = 0x108;
  uStack_488 = 0x109;
  uStack_484 = 0x10a;
  local_480 = 0x10b;
  uStack_47c = 0x10c;
  uStack_478 = 0x10d;
  uStack_474 = 0x10e;
  local_470 = 0x10f;
  uStack_46c = 0x110;
  uStack_468 = 0x111;
  uStack_464 = 0x112;
  local_460 = 0x113;
  uStack_45c = 0x114;
  uStack_458 = 0x115;
  uStack_454 = 0x116;
  local_450 = 0x117;
  uStack_44c = 0x118;
  uStack_448 = 0x16e;
  uStack_444 = 0x17c;
  sub_1020f550(local_48,&local_4c0,&local_440);
  sub_1020f780(local_b8);
  local_8._0_1_ = 6;
  local_94 = 0x49;
  uStack_90 = 0xfe;
  uStack_8c = 0x112;
  uStack_88 = 0x103;
  local_84 = 0x10d;
  uStack_80 = 0x109;
  uStack_7c = 0x118;
  uStack_78 = 0xff;
  local_74 = 0x10e;
  uStack_70 = 0x113;
  uStack_6c = 0x101;
  uStack_68 = 0x10a;
  local_64 = 0x115;
  sub_1020f550(local_50,&local_94,local_60);
  sub_1020f780(local_ac);
  local_8 = CONCAT31(local_8._1_3_,7);
  local_244 = 0x27;
  uStack_240 = 0x2d;
  uStack_23c = 0x2c;
  uStack_238 = 0x37;
  local_234 = 0x3b;
  uStack_230 = 0x171;
  uStack_22c = 0x40;
  uStack_228 = 0x26;
  local_224 = 0x31;
  uStack_220 = 0x30;
  uStack_21c = 0x35;
  uStack_218 = 0x2b;
  local_214 = 0x24;
  uStack_210 = 0x2f;
  uStack_20c = 0x2e;
  uStack_208 = 0x33;
  local_204 = 0x38;
  uStack_200 = 0x17f;
  uStack_1fc = 0x3e;
  uStack_1f8 = 0x178;
  sub_1020f550(local_58,&local_244,&local_1f4);
  sub_1020f780(local_a0);
  local_8 = 8;
  sub_1020f550(local_60,local_100,&local_94);
  sub_1020f7f0((uint32_t *)&DAT_104e3584);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031dbc0);
  ExceptionList = local_10;
  return;
}


// 0x10138140  (ghidra: FUN_10138140)  [range]
void functions_HelperFunctions_init_10138140(void)

{
  uint8_t local_454 [8];
  uint32_t local_44c;
  uint32_t uStack_448;
  uint32_t uStack_444;
  uint32_t uStack_440;
  uint32_t local_43c;
  uint32_t uStack_438;
  uint32_t uStack_434;
  uint32_t uStack_430;
  uint8_t local_42c [8];
  uint8_t local_424 [8];
  uint8_t local_41c [8];
  uint8_t local_414 [8];
  uint8_t local_40c [8];
  uint8_t local_404 [8];
  uint8_t local_3fc [8];
  uint8_t local_3f4 [8];
  uint8_t local_3ec [8];
  uint8_t local_3e4 [8];
  uint8_t local_3dc [8];
  uint8_t local_3d4 [8];
  uint8_t local_3cc [8];
  uint8_t local_3c4 [8];
  uint8_t local_3bc [8];
  uint8_t local_3b4 [8];
  uint8_t local_3ac [8];
  uint8_t local_3a4 [8];
  uint8_t local_39c [8];
  uint8_t local_394 [8];
  uint8_t local_38c [8];
  uint8_t local_384 [8];
  uint8_t local_37c [8];
  uint8_t local_374 [8];
  uint8_t local_36c [8];
  uint8_t local_364 [8];
  uint8_t local_35c [8];
  uint8_t local_354 [8];
  uint8_t local_34c [8];
  uint8_t local_344 [8];
  uint8_t local_33c [8];
  uint8_t local_334 [8];
  uint8_t local_32c [8];
  uint8_t local_324 [8];
  uint8_t local_31c [8];
  uint8_t local_314 [8];
  uint8_t local_30c [8];
  uint8_t local_304 [8];
  uint8_t local_2fc [8];
  uint8_t local_2f4 [8];
  uint8_t local_2ec [8];
  uint8_t local_2e4 [8];
  uint8_t local_2dc [8];
  uint8_t local_2d4 [8];
  uint8_t local_2cc [8];
  uint8_t local_2c4 [8];
  uint8_t local_2bc [8];
  uint8_t local_2b4 [8];
  uint8_t local_2ac [8];
  uint8_t local_2a4 [8];
  uint8_t local_29c [8];
  uint8_t local_294 [8];
  uint8_t local_28c [8];
  uint8_t local_284 [8];
  uint8_t local_27c [8];
  uint8_t local_274 [8];
  uint8_t local_26c [8];
  uint8_t local_264 [8];
  uint8_t local_25c [8];
  uint8_t local_254 [8];
  uint8_t local_24c [8];
  uint8_t local_244 [8];
  uint8_t local_23c [8];
  uint8_t local_234 [8];
  uint8_t local_22c [8];
  uint8_t local_224 [8];
  uint8_t local_21c [8];
  uint8_t local_214 [8];
  uint8_t local_20c [8];
  uint8_t local_204 [8];
  uint8_t local_1fc [8];
  uint8_t local_1f4 [8];
  uint8_t local_1ec [8];
  uint8_t local_1e4 [8];
  uint8_t local_1dc [8];
  uint32_t local_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint32_t local_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t uStack_1b8;
  uint32_t local_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t uStack_1a8;
  uint32_t local_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t local_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t uStack_188;
  uint32_t local_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint32_t uStack_178;
  uint32_t local_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint32_t uStack_168;
  uint32_t local_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t uStack_158;
  uint32_t local_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t uStack_148;
  uint32_t local_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t uStack_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t local_120;
  uint32_t local_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
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
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
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
  puStack_c = &LAB_103034d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104e34a4);
  sub_1020f960(local_304);
  local_8 = 0;
  local_24 = 2;
  local_20 = 8;
  sub_1020f550(local_314,&local_24,&local_1c);
  sub_1020f900(local_2fc);
  local_8._0_1_ = 1;
  local_64 = 3;
  local_60 = 9;
  local_5c = 0xd;
  sub_1020f550(local_364,&local_64,&local_58);
  sub_1020f900(local_2f4);
  local_8._0_1_ = 2;
  local_2c = 4;
  local_28 = 0x26;
  sub_1020f550(local_36c,&local_2c,&local_24);
  sub_1020f900(local_2ec);
  local_8._0_1_ = 3;
  local_70 = 5;
  local_6c = 10;
  local_68 = 0xe;
  sub_1020f550(local_374,&local_70,&local_64);
  sub_1020f900(local_2e4);
  local_8._0_1_ = 4;
  local_7c = 6;
  local_78 = 0xb;
  local_74 = 0xf;
  sub_1020f550(local_37c,&local_7c,&local_70);
  sub_1020f900(local_2dc);
  local_8._0_1_ = 5;
  local_88 = 7;
  local_84 = 0xc;
  local_80 = 0x10;
  sub_1020f550(local_384,&local_88,&local_7c);
  sub_1020f900(local_2d4);
  local_8._0_1_ = 6;
  local_94 = 0x11;
  local_90 = 0x12;
  local_8c = 0x13;
  sub_1020f550(local_38c,&local_94,&local_88);
  sub_1020f900(local_2cc);
  local_8._0_1_ = 7;
  local_120 = 0x19;
  local_130 = 0x15;
  uStack_12c = 0x16;
  uStack_128 = 0x17;
  uStack_124 = 0x18;
  sub_1020f550(local_394,&local_130,&local_11c);
  sub_1020f900(local_2c4);
  local_8._0_1_ = 8;
  local_a0 = 0x1a;
  local_9c = 0x1b;
  local_98 = 0x1c;
  sub_1020f550(local_39c,&local_a0,&local_94);
  sub_1020f900(local_2bc);
  local_8._0_1_ = 9;
  local_134 = 0x21;
  local_144 = 0x1d;
  uStack_140 = 0x1e;
  uStack_13c = 0x1f;
  uStack_138 = 0x20;
  sub_1020f550(local_3a4,&local_144,&local_130);
  sub_1020f900(local_2b4);
  local_8._0_1_ = 10;
  local_164 = 0x22;
  uStack_160 = 0x23;
  uStack_15c = 0x24;
  uStack_158 = 0x25;
  sub_1020f550(local_3ac,&local_164,&local_154);
  sub_1020f900(local_2ac);
  local_8._0_1_ = 0xb;
  local_14 = 0x27;
  sub_1020f550(local_3b4,&local_14,&local_10);
  sub_1020f900(local_2a4);
  local_8._0_1_ = 0xc;
  local_ac = 0x29;
  local_a8 = 0x37;
  local_a4 = 0x3b;
  sub_1020f550(local_3bc,&local_ac,&local_a0);
  sub_1020f900(local_29c);
  local_8._0_1_ = 0xd;
  local_174 = 0x2a;
  uStack_170 = 0x38;
  uStack_16c = 0x39;
  uStack_168 = 0x3c;
  sub_1020f550(local_3c4,&local_174,&local_164);
  sub_1020f900(local_294);
  local_8._0_1_ = 0xe;
  local_184 = 0x2b;
  uStack_180 = 0x3e;
  uStack_17c = 0x3f;
  uStack_178 = 0x40;
  sub_1020f550(local_3cc,&local_184,&local_174);
  sub_1020f900(local_28c);
  local_8._0_1_ = 0xf;
  local_194 = 0x2c;
  uStack_190 = 0x3a;
  uStack_18c = 0x3d;
  uStack_188 = 0x41;
  sub_1020f550(local_3d4,&local_194,&local_184);
  sub_1020f900(local_284);
  local_8._0_1_ = 0x10;
  local_44c = 0x2e;
  uStack_448 = 0x42;
  uStack_444 = 0x43;
  uStack_440 = 0x44;
  local_43c = 0x45;
  uStack_438 = 0x46;
  uStack_434 = 0x47;
  uStack_430 = 0x48;
  sub_1020f550(local_3dc,&local_44c,local_42c);
  sub_1020f900(local_27c);
  local_8._0_1_ = 0x11;
  local_10c = 0x34;
  local_11c = 0x2f;
  uStack_118 = 0x30;
  uStack_114 = 0x31;
  uStack_110 = 0x33;
  local_108 = 0x35;
  local_104 = 0x36;
  sub_1020f550(local_3e4,&local_11c,&local_100);
  sub_1020f900(local_274);
  local_8._0_1_ = 0x12;
  local_18 = 0x4a;
  sub_1020f550(local_3ec,&local_18,&local_14);
  sub_1020f900(local_26c);
  local_8._0_1_ = 0x13;
  local_b8 = 0x4c;
  local_b4 = 0x54;
  local_b0 = 0x55;
  sub_1020f550(local_3fc,&local_b8,&local_ac);
  sub_1020f900(local_264);
  local_8._0_1_ = 0x14;
  local_154 = 0x4d;
  uStack_150 = 0x56;
  uStack_14c = 0x57;
  uStack_148 = 0x5a;
  sub_1020f550(local_3f4,&local_154,&local_144);
  sub_1020f900(local_25c);
  local_8._0_1_ = 0x15;
  local_1a4 = 0x4e;
  uStack_1a0 = 0x58;
  uStack_19c = 0x59;
  uStack_198 = 0x5b;
  sub_1020f550(local_404,&local_1a4,&local_194);
  sub_1020f900(local_254);
  local_8._0_1_ = 0x16;
  local_c4 = 0x4f;
  local_c0 = 0x5c;
  local_bc = 0x5d;
  sub_1020f550(local_40c,&local_c4,&local_b8);
  sub_1020f900(local_24c);
  local_8._0_1_ = 0x17;
  local_d0 = 0x50;
  local_cc = 0x5e;
  local_c8 = 0x5f;
  sub_1020f550(local_414,&local_d0,&local_c4);
  sub_1020f900(local_244);
  local_8._0_1_ = 0x18;
  local_dc = 0x51;
  local_d8 = 0x60;
  local_d4 = 0x61;
  sub_1020f550(local_41c,&local_dc,&local_d0);
  sub_1020f900(local_23c);
  local_8._0_1_ = 0x19;
  local_1b4 = 0x52;
  uStack_1b0 = 0x53;
  uStack_1ac = 0x62;
  uStack_1a8 = 99;
  sub_1020f550(local_424,&local_1b4,&local_1a4);
  sub_1020f900(local_234);
  local_8._0_1_ = 0x1a;
  local_e8 = 100;
  local_e4 = 0x65;
  local_e0 = 0x66;
  sub_1020f550(local_42c,&local_e8,&local_dc);
  sub_1020f900(local_22c);
  local_8._0_1_ = 0x1b;
  local_34 = 0x68;
  local_30 = 0x69;
  sub_1020f550(local_454,&local_34,&local_2c);
  sub_1020f900(local_224);
  local_8._0_1_ = 0x1c;
  local_3c = 0x6a;
  local_38 = 0x6b;
  sub_1020f550(local_30c,&local_3c,&local_34);
  sub_1020f900(local_21c);
  local_8._0_1_ = 0x1d;
  local_1c = 0x6c;
  sub_1020f550(local_35c,&local_1c,&local_18);
  sub_1020f900(local_214);
  local_8._0_1_ = 0x1e;
  local_44 = 0x6e;
  local_40 = 0x6f;
  sub_1020f550(local_31c,&local_44,&local_3c);
  sub_1020f900(local_20c);
  local_8._0_1_ = 0x1f;
  local_f4 = 0x70;
  local_f0 = 0x71;
  local_ec = 0x72;
  sub_1020f550(local_324,&local_f4,&local_e8);
  sub_1020f900(local_204);
  local_8._0_1_ = 0x20;
  local_100 = 0x73;
  local_fc = 0x74;
  local_f8 = 0x75;
  sub_1020f550(local_32c,&local_100,&local_f4);
  sub_1020f900(local_1fc);
  local_8._0_1_ = 0x21;
  local_4c = 0x76;
  local_48 = 0x77;
  sub_1020f550(local_334,&local_4c,&local_44);
  sub_1020f900(local_1f4);
  local_8._0_1_ = 0x22;
  local_1c4 = 0x79;
  uStack_1c0 = 0x7a;
  uStack_1bc = 0x7b;
  uStack_1b8 = 0x7c;
  sub_1020f550(local_33c,&local_1c4,&local_1b4);
  sub_1020f900(local_1ec);
  local_8._0_1_ = 0x23;
  local_58 = 0x7d;
  local_54 = 0x7e;
  local_50 = 0x7f;
  sub_1020f550(local_344,&local_58,&local_4c);
  sub_1020f900(local_1e4);
  local_8 = CONCAT31(local_8._1_3_,0x24);
  local_1d4 = 0x80;
  uStack_1d0 = 0x81;
  uStack_1cc = 0x82;
  uStack_1c8 = 0x83;
  sub_1020f550(local_34c,&local_1d4,&local_1c4);
  sub_1020f900(local_1dc);
  local_8 = 0x25;
  sub_1020f550(local_354,local_304,&local_1d4);
  sub_1020f840((uint32_t *)&DAT_104e34a4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_1031dbd0);
  ExceptionList = local_10;
  return;
}


// 0x10138b10  (ghidra: FUN_10138b10)  [range]
void functions_HelperFunctions_init_10138b10(void)

{
  uint32_t local_4ec [3];
  uint32_t local_4e0 [3];
  uint32_t local_4d4 [3];
  uint32_t local_4c8 [3];
  uint32_t local_4bc [3];
  uint32_t local_4b0 [3];
  uint32_t local_4a4 [3];
  uint32_t local_498 [3];
  uint32_t local_48c [3];
  uint32_t local_480 [3];
  uint32_t local_474 [3];
  uint32_t local_468 [3];
  uint32_t local_45c [3];
  uint32_t local_450 [3];
  uint32_t local_444 [3];
  uint32_t local_438 [3];
  uint32_t local_42c [3];
  uint32_t local_420 [3];
  uint32_t local_414 [3];
  uint32_t local_408 [3];
  uint32_t local_3fc [3];
  uint32_t local_3f0 [3];
  uint32_t local_3e4 [3];
  uint32_t local_3d8 [3];
  uint32_t local_3cc [3];
  uint32_t local_3c0 [3];
  uint32_t local_3b4 [3];
  uint32_t local_3a8 [3];
  uint32_t local_39c [3];
  uint32_t local_390 [3];
  uint32_t local_384 [3];
  uint32_t local_378 [3];
  uint32_t local_36c [3];
  uint32_t local_360 [3];
  uint32_t local_354 [3];
  uint32_t local_348 [3];
  uint32_t local_33c [3];
  uint32_t local_330 [3];
  uint32_t local_324;
  uint32_t uStack_320;
  uint32_t uStack_31c;
  uint32_t uStack_318;
  uint32_t local_314;
  uint32_t uStack_310;
  uint32_t uStack_30c;
  uint32_t uStack_308;
  uint8_t local_304 [8];
  uint8_t local_2fc [8];
  uint8_t local_2f4 [8];
  uint8_t local_2ec [8];
  uint8_t local_2e4 [8];
  uint8_t local_2dc [8];
  uint8_t local_2d4 [8];
  uint8_t local_2cc [8];
  uint8_t local_2c4 [8];
  uint8_t local_2bc [8];
  uint8_t local_2b4 [8];
  uint8_t local_2ac [8];
  uint8_t local_2a4 [8];
  uint8_t local_29c [8];
  uint8_t local_294 [8];
  uint8_t local_28c [8];
  uint8_t local_284 [8];
  uint8_t local_27c [8];
  uint8_t local_274 [8];
  uint8_t local_26c [8];
  uint8_t local_264 [8];
  uint8_t local_25c [8];
  uint8_t local_254 [8];
  uint8_t local_24c [8];
  uint8_t local_244 [8];
  uint8_t local_23c [8];
  uint8_t local_234 [8];
  uint8_t local_22c [8];
  uint8_t local_224 [8];
  uint8_t local_21c [8];
  uint8_t local_214 [8];
  uint8_t local_20c [8];
  uint8_t local_204 [8];
  uint8_t local_1fc [8];
  uint8_t local_1f4 [8];
  uint8_t local_1ec [8];
  uint8_t local_1e4 [8];
  uint8_t local_1dc [8];
  uint32_t local_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint32_t local_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t uStack_1b8;
  uint32_t local_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t uStack_1a8;
  uint32_t local_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t uStack_198;
  uint32_t local_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t uStack_188;
  uint32_t local_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint32_t uStack_178;
  uint32_t local_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint32_t uStack_168;
  uint32_t local_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t uStack_158;
  uint32_t local_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t uStack_148;
  uint32_t local_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint32_t uStack_138;
  uint32_t local_134;
  uint32_t local_130;
  uint32_t uStack_12c;
  uint32_t uStack_128;
  uint32_t uStack_124;
  uint32_t local_120;
  uint32_t local_11c;
  uint32_t uStack_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t local_10c;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_100;
  uint32_t local_fc;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_f0;
  uint32_t local_ec;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_d0;
  uint32_t local_cc;
  uint32_t local_c8;
  uint32_t local_c4;
  uint32_t local_c0;
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
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
  uint32_t local_60;
  uint32_t local_5c;
  uint32_t local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  uint32_t local_44;
  uint32_t local_40;
  uint32_t local_3c;
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
  puStack_c = &LAB_103036b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  sub_1020f420((uint64_t *)&DAT_104e3430);
  sub_1020f7c0(local_4ec);
  local_8 = 0;
  local_24 = 0x40600000;
  local_20 = 0x40400000;
  sub_1020f550(local_1ec,&local_24,&local_1c);
  sub_1020f780(local_4e0);
  local_8._0_1_ = 1;
  local_64 = 0x40400000;
  local_60 = 0x40200000;
  local_5c = 0x40200000;
  sub_1020f550(local_23c,&local_64,&local_58);
  sub_1020f780(local_4d4);
  local_8._0_1_ = 2;
  local_2c = 0x40600000;
  local_28 = 0x40600000;
  sub_1020f550(local_244,&local_2c,&local_24);
  sub_1020f780(local_4c8);
  local_8._0_1_ = 3;
  local_70 = 0x40333333;
  local_6c = 0x40200000;
  local_68 = 0x40200000;
  sub_1020f550(local_24c,&local_70,&local_64);
  sub_1020f780(local_4bc);
  local_8._0_1_ = 4;
  local_7c = 0x4059999a;
  local_78 = 0x40200000;
  local_74 = 0x40200000;
  sub_1020f550(local_254,&local_7c,&local_70);
  sub_1020f780(local_4b0);
  local_8._0_1_ = 5;
  local_88 = 0x40400000;
  local_84 = 0x40000000;
  local_80 = 0x40000000;
  sub_1020f550(local_25c,&local_88,&local_7c);
  sub_1020f780(local_4a4);
  local_8._0_1_ = 6;
  local_94 = 0x40600000;
  local_90 = 0x402ccccd;
  local_8c = 0x402ccccd;
  sub_1020f550(local_264,&local_94,&local_88);
  sub_1020f780(local_498);
  local_8._0_1_ = 7;
  local_120 = 0x40400000;
  local_130 = 0x40400000;
  uStack_12c = 0x40400000;
  uStack_128 = 0x40400000;
  uStack_124 = 0x40400000;
  sub_1020f550(local_26c,&local_130,&local_11c);
  sub_1020f780(local_48c);
  local_8._0_1_ = 8;
  local_a0 = 0x40400000;
  local_9c = 0x40200000;
  local_98 = 0x40200000;
  sub_1020f550(local_274,&local_a0,&local_94);
  sub_1020f780(local_480);
  local_8._0_1_ = 9;
  local_134 = 0x40400000;
  local_144 = 0x40800000;
  uStack_140 = 0x40800000;
  uStack_13c = 0x40800000;
  uStack_138 = 0x40400000;
  sub_1020f550(local_27c,&local_144,&local_130);
  sub_1020f780(local_474);
  local_8._0_1_ = 10;
  local_164 = 0x40900000;
  uStack_160 = 0x40800000;
  uStack_15c = 0x40900000;
  uStack_158 = 0x40200000;
  sub_1020f550(local_284,&local_164,&local_154);
  sub_1020f780(local_468);
  local_8._0_1_ = 0xb;
  local_14 = 0x3f800000;
  sub_1020f550(local_28c,&local_14,&local_10);
  sub_1020f780(local_45c);
  local_8._0_1_ = 0xc;
  local_ac = 0x40200000;
  local_a8 = 0x40200000;
  local_a4 = 0x40200000;
  sub_1020f550(local_294,&local_ac,&local_a0);
  sub_1020f780(local_450);
  local_8._0_1_ = 0xd;
  local_174 = 0x40400000;
  uStack_170 = 0x40000000;
  uStack_16c = 0x40000000;
  uStack_168 = 0x40000000;
  sub_1020f550(local_29c,&local_174,&local_164);
  sub_1020f780(local_444);
  local_8._0_1_ = 0xe;
  local_184 = 0x40400000;
  uStack_180 = 0x40000000;
  uStack_17c = 0x40000000;
  uStack_178 = 0x40000000;
  sub_1020f550(local_2a4,&local_184,&local_174);
  sub_1020f780(local_438);
  local_8._0_1_ = 0xf;
  local_194 = 0x40400000;
  uStack_190 = 0x40000000;
  uStack_18c = 0x40200000;
  uStack_188 = 0x40200000;
  sub_1020f550(local_2ac,&local_194,&local_184);
  sub_1020f780(local_42c);
  local_8._0_1_ = 0x10;
  local_324 = 0x3fe66666;
  uStack_320 = 0x40000000;
  uStack_31c = 0x40000000;
  uStack_318 = 0x40000000;
  local_314 = 0x40000000;
  uStack_310 = 0x40000000;
  uStack_30c = 0x40000000;
  uStack_308 = 0x40000000;
  sub_1020f550(local_2b4,&local_324,local_304);
  sub_1020f780(local_420);
  local_8._0_1_ = 0x11;
  local_10c = 0x40400000;
  local_11c = 0x40200000;
  uStack_118 = 0x40200000;
  uStack_114 = 0x40200000;
  uStack_110 = 0x40200000;
  local_108 = 0x40400000;
  local_104 = 0x40400000;
  sub_1020f550(local_2bc,&local_11c,&local_100);
  sub_1020f780(local_414);
  local_8._0_1_ = 0x12;
  local_18 = 0x3fc00000;
  sub_1020f550(local_2c4,&local_18,&local_14);
  sub_1020f780(local_408);
  local_8._0_1_ = 0x13;
  local_b8 = 0x3fc00000;
  local_b4 = 0x400ccccd;
  local_b0 = 0x400ccccd;
  sub_1020f550(local_2d4,&local_b8,&local_ac);
  sub_1020f780(local_3fc);
  local_8._0_1_ = 0x14;
  local_154 = 0x3fc00000;
  uStack_150 = 0x3fc00000;
  uStack_14c = 0x3fc00000;
  uStack_148 = 0x40400000;
  sub_1020f550(local_2cc,&local_154,&local_144);
  sub_1020f780(local_3f0);
  local_8._0_1_ = 0x15;
  local_1a4 = 0x3f8ccccd;
  uStack_1a0 = 0x400ccccd;
  uStack_19c = 0x400ccccd;
  uStack_198 = 0x400ccccd;
  sub_1020f550(local_2dc,&local_1a4,&local_194);
  sub_1020f780(local_3e4);
  local_8._0_1_ = 0x16;
  local_c4 = 0x40533333;
  local_c0 = 0x406ccccd;
  local_bc = 0x406ccccd;
  sub_1020f550(local_2e4,&local_c4,&local_b8);
  sub_1020f780(local_3d8);
  local_8._0_1_ = 0x17;
  local_d0 = 0x40333333;
  local_cc = 0x40400000;
  local_c8 = 0x40400000;
  sub_1020f550(local_2ec,&local_d0,&local_c4);
  sub_1020f780(local_3cc);
  local_8._0_1_ = 0x18;
  local_dc = 0x40400000;
  local_d8 = 0x40400000;
  local_d4 = 0x40400000;
  sub_1020f550(local_2f4,&local_dc,&local_d0);
  sub_1020f780(local_3c0);
  local_8._0_1_ = 0x19;
  local_1b4 = 0x40400000;
  uStack_1b0 = 0x40000000;
  uStack_1ac = 0x40400000;
  uStack_1a8 = 0x40400000;
  sub_1020f550(local_2fc,&local_1b4,&local_1a4);
  sub_1020f780(local_3b4);
  local_8._0_1_ = 0x1a;
  local_e8 = 0x404ccccd;
  local_e4 = 0x40600000;
  local_e0 = 0x40600000;
  sub_1020f550(local_304,&local_e8,&local_dc);
  sub_1020f780(local_3a8);
  local_8._0_1_ = 0x1b;
  local_34 = 0x40000000;
  local_30 = 0x40000000;
  sub_1020f550(local_1dc,&local_34,&local_2c);
  sub_1020f780(local_39c);
  local_8._0_1_ = 0x1c;
  local_3c = 0x40133333;
  local_38 = 0x40000000;
  sub_1020f550(local_1e4,&local_3c,&local_34);
  sub_1020f780(local_390);
  local_8._0_1_ = 0x1d;
  local_1c = 0x40200000;
  sub_1020f550(local_234,&local_1c,&local_18);
  sub_1020f780(local_384);
  local_8._0_1_ = 0x1e;
  local_44 = 0x40000000;
  local_40 = 0x40000000;
  sub_1020f550(local_1f4,&local_44,&local_3c);
  sub_1020f780(local_378);
  local_8._0_1_ = 0x1f;
  local_f4 = 0x40200000;
  local_f0 = 0x40000000;
  local_ec = 0x40000000;
  sub_1020f550(local_1fc,&local_f4,&local_e8);
  sub_1020f780(local_36c);
  local_8._0_1_ = 0x20;
  local_100 = 0x400ccccd;
  local_fc = 0x402ccccd;
  local_f8 = 0x40200000;
  sub_1020f550(local_204,&local_100,&local_f4);
  sub_1020f780(local_360);
  local_8._0_1_ = 0x21;
  local_4c = 0x40133333;
  local_48 = 0x40200000;
  sub_1020f550(local_20c,&local_4c,&local_44);
  sub_1020f780(local_354);
  local_8._0_1_ = 0x22;
  local_1c4 = 0x40000000;
  uStack_1c0 = 0x40000000;
  uStack_1bc = 0x40000000;
  uStack_1b8 = 0x40000000;
  sub_1020f550(local_214,&local_1c4,&local_1b4);
  sub_1020f780(local_348);
  local_8._0_1_ = 0x23;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  sub_1020f550(local_21c,&local_58,&local_4c);
  sub_1020f780(local_33c);
  local_8 = CONCAT31(local_8._1_3_,0x24);
  local_1d4 = 0x40400000;
  uStack_1d0 = 0x40400000;
  uStack_1cc = 0x40400000;
  uStack_1c8 = 0x40200000;
  sub_1020f550(local_224,&local_1d4,&local_1c4);
  sub_1020f780(local_330);
  local_8 = 0x25;
  sub_1020f550(local_22c,local_4ec,&local_324);
  sub_1020f7f0((uint32_t *)&DAT_104e3430);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031dbe0);
  ExceptionList = local_10;
  return;
}


// 0x10139510  (ghidra: FUN_10139510)  [range]
void functions_HelperFunctions_init_10139510(void)

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
  sub_1020f420((uint64_t *)&DAT_104e34e4);
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
  sub_1020f730((uint32_t *)&DAT_104e34e4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_1031dbf0);
  ExceptionList = local_10;
  return;
}


// 0x10139890  (ghidra: FUN_10139890)  [range]
void functions_HelperFunctions_init_10139890(void)

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
  sub_1020f410((uint64_t *)&DAT_104e348c);
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
  sub_1020f6a0(&DAT_104e348c);
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
  _atexit((_func_4879 *)&LAB_1031dc00);
  ExceptionList = local_10;
  return;
}


// 0x10139dc0  (ghidra: FUN_10139dc0)  [range]
void functions_HelperFunctions_init_10139dc0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e35e0);
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
  sub_10210100(&DAT_10376ce8,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10376ce0,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10376ce4,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104e35e0);
  _atexit((_func_4879 *)&LAB_1031dc10);
  return;
}


// 0x10139f70  (ghidra: FUN_10139f70)  [range]
void functions_HelperFunctions_init_10139f70(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e3420);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e3420);
  _atexit((_func_4879 *)&LAB_1031dc20);
  return;
}


// 0x10139fd0  (ghidra: FUN_10139fd0)  [range]
void functions_HelperFunctions_init_10139fd0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e34c8);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e34c8);
  _atexit((_func_4879 *)&LAB_1031dc30);
  return;
}


// 0x1013a030  (ghidra: FUN_1013a030)  [range]
void functions_HelperFunctions_init_1013a030(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e346c);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e346c);
  _atexit((_func_4879 *)&LAB_1031dc40);
  return;
}


// 0x1013a090  (ghidra: FUN_1013a090)  [range]
void functions_HelperFunctions_init_1013a090(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e3518);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e3518);
  _atexit((_func_4879 *)&LAB_1031dc50);
  return;
}


// 0x1013a0f0  (ghidra: FUN_1013a0f0)  [range]
void functions_HelperFunctions_init_1013a0f0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e33d8);
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
  sub_1020f570(&DAT_104e33d8);
  _atexit((_func_4879 *)&LAB_1031dc60);
  return;
}


// 0x1013aad0  (ghidra: FUN_1013aad0)  [range]
void functions_HelperFunctions_InitPtr_D2Common_DAT_6fde9e1c_1013aad0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde9e1c();
  p_D2Common_DAT_6fde9e1c = *puVar1;
  return;
}


// 0x1013aae0  (ghidra: FUN_1013aae0)  [range]
void functions_HelperFunctions_InitPtr_D2Common_DAT_6fde9e1c_10279cd0_1013aae0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde9e1c_10279cd0();
  p_D2Common_DAT_6fde9e1c_10279cd0 = *puVar1;
  return;
}


// 0x1013aaf0  (ghidra: FUN_1013aaf0)  [range]
void functions_HelperFunctions_InitPtr_D2Common_DAT_6fdefa58_1013aaf0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fdefa58();
  p_D2Common_DAT_6fdefa58 = *puVar1;
  return;
}


// 0x1013b000  (ghidra: FUN_1013b000)  [range]
void functions_HelperFunctions_InitPtr_D2Game_DAT_6fd18be0_1013b000(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd18be0();
  p_D2Game_DAT_6fd18be0 = *puVar1;
  return;
}


// 0x1013c3a0  (ghidra: FUN_1013c3a0)  [range]
void functions_HelperFunctions_InitPtr_D2Game_DAT_6fd31c08_1028cba0_1013c3a0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Game_DAT_6fd31c08_1028cba0();
  p_D2Game_DAT_6fd31c08_1028cba0 = *puVar1;
  return;
}


// 0x1013cbc0  (ghidra: FUN_1013cbc0)  [range]
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbc995c_1013cbc0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc995c();
  p_D2Client_DAT_6fbc995c = *puVar1;
  return;
}


// 0x1013cbd0  (ghidra: FUN_1013cbd0)  [range]
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbc9960_1013cbd0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc9960();
  p_D2Client_DAT_6fbc9960 = *puVar1;
  return;
}


// 0x1013d230  (ghidra: FUN_1013d230)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcbbfc_1013d230(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbbfc();
  p_D2Client_DAT_6fbcbbfc = *puVar1;
  return;
}


// 0x1013d2d0  (ghidra: FUN_1013d2d0)  [range]
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcc3ec_1013d2d0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3ec();
  p_D2Client_DAT_6fbcc3ec = *puVar1;
  return;
}


// 0x1013e050  (ghidra: FUN_1013e050)  [range]
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbaade4_1013e050(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbaade4();
  p_D2Client_DAT_6fbaade4 = *puVar1;
  return;
}


// 0x1013e140  (ghidra: FUN_1013e140)  [range]
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcc418_1013e140(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc418();
  p_D2Client_DAT_6fbcc418 = *puVar1;
  return;
}


// 0x1013e600  (ghidra: FUN_1013e600)  [range]
void functions_HelperFunctions_InitPtr_D2Client_DAT_6fbcc3e8_1013e600(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3e8();
  p_D2Client_DAT_6fbcc3e8 = *puVar1;
  return;
}


// 0x1013ea40  (ghidra: FUN_1013ea40)  [range]
void functions_HelperFunctions_init_1013ea40(void)

{
  uint32_t extraout_ECX;
  
  functions_HelperFunctions_102d0010();
  functions_HelperFunctions_102d3300(extraout_ECX);
  _atexit(FUN_1031dc70);
  return;
}


// 0x1013ea60  (ghidra: FUN_1013ea60)  [range]
void functions_HelperFunctions_init_1013ea60(void)

{
  sub_10255e10(&DAT_104e33f0);
  _atexit(FUN_1031dc80);
  return;
}


// 0x1013ea80  (ghidra: FUN_1013ea80)  [range]
void functions_HelperFunctions_init_1013ea80(void)

{
  sub_1020f990(&DAT_104e344c,"\\/:?\"<>|");
  _atexit(FUN_1031dc90);
  return;
}


// 0x102ce520  (ghidra: FUN_102ce520)  [range]
uint32_t __fastcall functions_HelperFunctions_102ce520(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  
  puVar3 = *(uint32_t **)(*p_D2Common_DAT_6fde9e1c + 0xb98);
  if (puVar3 == (uint32_t *)0x0) {
    return 0;
  }
  uVar1 = *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xba0);
  uVar2 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    while (*(ushort *)(puVar3 + 0x20) != param_1) {
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x8f;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    uVar4 = *puVar3;
  }
  return uVar4;
}


// 0x102ce580  (ghidra: FUN_102ce580)  [range]
int __fastcall functions_HelperFunctions_102ce580(int param_1)

{
  if ((-1 < param_1) && (*(int *)(*p_D2Common_DAT_6fde9e1c_10279cd0 + 0x14fc) != 0)) {
    return param_1 * 0x34 + *(int *)(*p_D2Common_DAT_6fde9e1c_10279cd0 + 0x14fc);
  }
  return 0;
}


// 0x102ce5a0  (ghidra: FUN_102ce5a0)  [range]
int __fastcall functions_HelperFunctions_102ce5a0(uint param_1)

{
  int iVar1;
  
  if (((-1 < (int)param_1) && (param_1 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xba0))) &&
     (iVar1 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xb98), iVar1 != 0)) {
    return param_1 * 0x23c + iVar1;
  }
  return 0;
}


// 0x102ce5d0  (ghidra: FUN_102ce5d0)  [range]
int __fastcall functions_HelperFunctions_102ce5d0(uint param_1)

{
  int iVar1;
  
  if (((-1 < (int)param_1) && (param_1 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xb94))) &&
     (iVar1 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xb8c), iVar1 != 0)) {
    return param_1 * 0x120 + iVar1;
  }
  return 0;
}


// 0x102ce600  (ghidra: FUN_102ce600)  [range]
int __fastcall functions_HelperFunctions_102ce600(uint param_1)

{
  int iVar1;
  
  if (((-1 < (int)param_1) && (param_1 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xb6c))) &&
     (iVar1 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xb64), iVar1 != 0)) {
    return param_1 * 0x1a4 + iVar1;
  }
  return 0;
}


// 0x102ce630  (ghidra: FUN_102ce630)  [range]
int __fastcall functions_HelperFunctions_102ce630(uint param_1)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && (param_1 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xc5c))) &&
      (iVar1 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xc58), iVar1 != 0)) && (param_1 != 0)) {
    return param_1 * 0x220 + iVar1;
  }
  return 0;
}


// 0x102ce660  (ghidra: FUN_102ce660)  [range]
int __fastcall functions_HelperFunctions_102ce660(uint param_1)

{
  int iVar1;
  
  if (((-1 < (int)param_1) && (param_1 < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xa80))) &&
     (iVar1 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xa78), iVar1 != 0)) {
    return param_1 * 0x1a8 + iVar1;
  }
  return 0;
}


// 0x102ce690  (ghidra: FUN_102ce690)  [range]
uint64_t __fastcall functions_HelperFunctions_102ce690(uint param_1)

{
  int iVar1;
  int iVar2;
  uint extraout_EDX;
  
  iVar1 = *p_D2Common_DAT_6fde9e1c;
  iVar2 = functions_HelperFunctions_102ce660(param_1);
  if (((iVar2 != 0) && ((uint)*(ushort *)(iVar2 + 0x18) < *(uint *)(iVar1 + 0xa98))) &&
     (iVar1 = *(int *)(iVar1 + 0xa90), iVar1 != 0)) {
    return CONCAT44(extraout_EDX,(uint)*(ushort *)(iVar2 + 0x18) * 0x134 + iVar1);
  }
  return (ulonglong)extraout_EDX << 0x20;
}


// 0x102ce6d0  (ghidra: FUN_102ce6d0)  [range]
int __fastcall functions_HelperFunctions_102ce6d0(uint param_1)

{
  uint uVar1;
  
  if (((-1 < (int)param_1) && (uVar1 = *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xbd4), param_1 < uVar1)) &&
     (uVar1 != 0)) {
    return param_1 * 0x150 + *(int *)(*p_D2Common_DAT_6fde9e1c + 0xbcc);
  }
  return 0;
}


// 0x102ce700  (ghidra: FUN_102ce700)  [range]
int __fastcall functions_HelperFunctions_102ce700(int *param_1)

{
  int iVar1;
  uint64_t uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 4)) {
    uVar2 = D2Common_10695(param_1[1]);
    iVar1 = (int)uVar2;
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x80) == 0x206b6274) || (*(int *)(iVar1 + 0x80) == 0x20637374)) {
        iVar1 = D2Common_11065(0);
        return iVar1;
      }
      if ((*(int *)(iVar1 + 0x80) == 0x206b6269) || (*(int *)(iVar1 + 0x80) == 0x20637369)) {
        iVar1 = D2Common_11065(1);
        return iVar1;
      }
      if ((*(short *)(iVar1 + 0xfa) != 0) && (1 < *(uint *)(iVar1 + 0xb0))) {
        iVar1 = D2Common_11065(*(uint *)(iVar1 + 0xb0));
        return iVar1;
      }
    }
  }
  return 0;
}


// 0x102ce780  (ghidra: FUN_102ce780)  [range]
int __fastcall functions_HelperFunctions_102ce780(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 4)) {
    iVar1 = *p_D2Common_DAT_6fde9e1c;
    uVar2 = D2Common_11088_10275940(param_1);
    if ((0 < (int)uVar2) && (uVar2 < *(uint *)(iVar1 + 0xbfc))) {
      return uVar2 * 0xe4 + *(int *)(iVar1 + 0xbf8);
    }
  }
  return 0;
}


// 0x102ce7c0  (ghidra: FUN_102ce7c0)  [range]
bool __fastcall functions_HelperFunctions_102ce7c0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  void *this;
  uint64_t uVar4;
  uint8_t local_10 [4];
  uint8_t local_c [4];
  uint local_8;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 4)) {
    uVar4 = D2Common_10695(param_1[1]);
    if ((int)uVar4 != 0) {
      uVar1 = (int)uVar4 + 0x80;
      local_8 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 * 0x1000000;
      functions_HelperFunctions_102d3470(local_c,&local_8);
      piVar3 = (int *)functions_HelperFunctions_102d3490(local_10);
      bVar2 = sub_1023d8f0(this,piVar3);
      return bVar2;
    }
  }
  return false;
}


// 0x102ce840  (ghidra: FUN_102ce840)  [range]
uint64_t __fastcall functions_HelperFunctions_102ce840(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  uint32_t in_XMM2_Da;
  uint32_t in_XMM2_Db;
  
  uVar1 = 1;
  if (1 < param_2) {
    uVar1 = param_2;
  }
  iVar2 = 0x7fffffff;
  dVar3 = ((double)param_1 * (double)CONCAT44(in_XMM2_Db,in_XMM2_Da)) /
          ((double)(int)uVar1 + (double)(&DAT_103804e0)[-((int)uVar1 >> 0x1f)]);
  if (dVar3 <= 2147483647.0) {
    iVar2 = (int)dVar3;
  }
  return CONCAT44(param_2,iVar2);
}


// 0x102ce890  (ghidra: FUN_102ce890)  [range]
bool __fastcall functions_HelperFunctions_102ce890(int param_1)

{
  return (bool)('\x01' - (0x40 < param_1 - 0x89U));
}


// 0x102ce8b0  (ghidra: FUN_102ce8b0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool functions_HelperFunctions_102ce8b0(void)

{
  bool bVar1;
  int *piVar2;
  void *this;
  uint8_t local_14 [4];
  uint8_t local_10 [4];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10228040(&DAT_104e3540,local_10,&local_c);
  piVar2 = (int *)sub_102280a0(&DAT_104e3540,local_14);
  bVar1 = sub_1023d8f0(this,piVar2);
  return bVar1;
}


// 0x102ce900  (ghidra: FUN_102ce900)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool functions_HelperFunctions_102ce900(void)

{
  bool bVar1;
  int *piVar2;
  void *this;
  uint8_t local_14 [4];
  uint8_t local_10 [4];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10228040(&DAT_104e352c,local_10,&local_c);
  piVar2 = (int *)sub_102280a0(&DAT_104e352c,local_14);
  bVar1 = sub_1023d8f0(this,piVar2);
  return bVar1;
}


// 0x102ce950  (ghidra: FUN_102ce950)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool functions_HelperFunctions_102ce950(void)

{
  bool bVar1;
  int *piVar2;
  void *this;
  uint8_t local_14 [4];
  uint8_t local_10 [4];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10228040(&DAT_104e3484,local_10,&local_c);
  piVar2 = (int *)sub_102280a0(&DAT_104e3484,local_14);
  bVar1 = sub_1023d8f0(this,piVar2);
  return bVar1;
}


// 0x102ce9a0  (ghidra: FUN_102ce9a0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool functions_HelperFunctions_102ce9a0(void)

{
  bool bVar1;
  int *piVar2;
  void *this;
  uint8_t local_14 [4];
  uint8_t local_10 [4];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10228040(&DAT_104e34d4,local_10,&local_c);
  piVar2 = (int *)sub_102280a0(&DAT_104e34d4,local_14);
  bVar1 = sub_1023d8f0(this,piVar2);
  return bVar1;
}


// 0x102ce9f0  (ghidra: FUN_102ce9f0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool functions_HelperFunctions_102ce9f0(void)

{
  bool bVar1;
  int *piVar2;
  void *this;
  uint8_t local_14 [4];
  uint8_t local_10 [4];
  int local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  sub_10228040(&DAT_104e3568,local_10,&local_c);
  piVar2 = (int *)sub_102280a0(&DAT_104e3568,local_14);
  bVar1 = sub_1023d8f0(this,piVar2);
  return bVar1;
}


// 0x102cea40  (ghidra: FUN_102cea40)  [range]
uint32_t __fastcall functions_HelperFunctions_102cea40(int param_1)

{
  if ((((param_1 != 1) && (param_1 != 0x28)) && (param_1 != 0x4b)) &&
     ((param_1 != 0x67 && (param_1 != 0x6d)))) {
    return 0;
  }
  return 1;
}


// 0x102cea70  (ghidra: FUN_102cea70)  [range]
uint32_t __fastcall functions_HelperFunctions_102cea70(int param_1)

{
  if (((param_1 != 0x9d) && (param_1 != 0x9f)) && (param_1 != 0xa6)) {
    return 0;
  }
  return 1;
}


// 0x102ceaa0  (ghidra: FUN_102ceaa0)  [range]
bool __fastcall functions_HelperFunctions_102ceaa0(int param_1)

{
  return param_1 == 0xa6;
}


// 0x102ceab0  (ghidra: FUN_102ceab0)  [range]
void __fastcall functions_HelperFunctions_102ceab0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = D2Common_10749(param_1);
  if (iVar1 != 0) {
    *param_2 = *(int *)(iVar1 + 0x24) * 5;
    *param_3 = *(int *)(iVar1 + 0x28) * 5;
  }
  return;
}


// 0x102ceae0  (ghidra: FUN_102ceae0)  [range]
uint32_t __fastcall functions_HelperFunctions_102ceae0(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x1c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0 && (iVar1 = *(int *)(iVar1 + 0x58), iVar1 != 0))))
  {
    uVar2 = functions_HelperFunctions_102cea70(*(int *)(iVar1 + 0x1d0));
    return uVar2;
  }
  return 0;
}


// 0x102ceb10  (ghidra: FUN_102ceb10)  [range]
bool __fastcall functions_HelperFunctions_102ceb10(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x1c), iVar1 != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0 && (iVar1 = *(int *)(iVar1 + 0x58), iVar1 != 0))))
  {
    bVar2 = functions_HelperFunctions_102ceaa0(*(int *)(iVar1 + 0x1d0));
    return bVar2;
  }
  return false;
}


// 0x102ceb40  (ghidra: FUN_102ceb40)  [range]
longlong __fastcall functions_HelperFunctions_102ceb40(int param_1)

{
  bool bVar1;
  uint32_t extraout_var;
  uint extraout_EDX;
  
  bVar1 = functions_HelperFunctions_102ce890(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    switch(extraout_EDX) {
    case 0x89:
      return CONCAT44(extraout_EDX,0x616d6364);
    case 0x8b:
      return CONCAT44(extraout_EDX,0x20333274);
    case 0x8d:
      return CONCAT44(extraout_EDX,0x20353274);
    case 0x8e:
      return CONCAT44(extraout_EDX,0x20323174);
    case 0x8f:
      return CONCAT44(extraout_EDX,0x20313174);
    case 0x90:
      return CONCAT44(extraout_EDX,0x20313374);
    case 0x91:
      return CONCAT44(extraout_EDX,0x20313274);
    case 0x92:
      return CONCAT44(extraout_EDX,0x20343374);
    case 0x93:
      return CONCAT44(extraout_EDX,0x20393374);
    case 0x94:
      return CONCAT44(extraout_EDX,0x20323274);
    case 0x95:
      return CONCAT44(extraout_EDX,0x20333174);
    case 0x96:
      return CONCAT44(extraout_EDX,0x20323374);
    case 0x97:
      return CONCAT44(extraout_EDX,0x20343274);
    case 0x98:
      return CONCAT44(extraout_EDX,0x20313474);
    case 0x9a:
      return CONCAT44(extraout_EDX,0x20353374);
    case 0x9b:
      return CONCAT44(extraout_EDX,0x20363374);
    case 0x9c:
      return CONCAT44(extraout_EDX,0x20373374);
    case 0x9d:
      return CONCAT44(extraout_EDX,0x20323674);
    case 0x9e:
      return CONCAT44(extraout_EDX,0x20333374);
    case 0x9f:
      return CONCAT44(extraout_EDX,0x20313674);
    case 0xa0:
      return CONCAT44(extraout_EDX,0x20383374);
    case 0xa1:
      return CONCAT44(extraout_EDX,0x616d7472);
    case 0xa4:
      return CONCAT44(extraout_EDX,0x20323474);
    case 0xa7:
      return CONCAT44(extraout_EDX,0x20343174);
    case 0xa8:
      return CONCAT44(extraout_EDX,0x20616275);
    case 0xa9:
      return CONCAT44(extraout_EDX,0x20363274);
    case 0xaa:
      return CONCAT44(extraout_EDX,0x20353174);
    case 0xab:
      return CONCAT44(extraout_EDX,0x20333474);
    case 0xae:
      return CONCAT44(extraout_EDX,0x36317400);
    case 0xaf:
      return CONCAT44(extraout_EDX,0x20613374);
    case 0xb0:
      return CONCAT44(extraout_EDX,0x20313574);
    case 0xb4:
      return CONCAT44(extraout_EDX,0x20353574);
    case 0xb5:
      return CONCAT44(extraout_EDX,0x20323574);
    case 0xb7:
      return CONCAT44(extraout_EDX,0x20333574);
    case 0xb9:
      return CONCAT44(extraout_EDX,0x6d746275);
    case 0xba:
      return CONCAT44(extraout_EDX,0x20343474);
    case 0xbc:
      return CONCAT44(extraout_EDX,0x6163756c);
    case 0xbe:
      return CONCAT44(extraout_EDX,0x20373274);
    case 0xbf:
      return CONCAT44(extraout_EDX,0x20383274);
    case 0xc0:
      return CONCAT44(extraout_EDX,0x20343574);
    case 0xc1:
      return CONCAT44(extraout_EDX,0x20373174);
    case 0xc3:
      return CONCAT44(extraout_EDX,0x20363574);
    case 0xc5:
      return CONCAT44(extraout_EDX,0x20373574);
    case 200:
      return CONCAT44(extraout_EDX,0x20383574);
    case 0xc9:
      return CONCAT44(extraout_EDX,0x20623374);
    }
  }
  return (ulonglong)extraout_EDX << 0x20;
}


// 0x102ced80  (ghidra: FUN_102ced80)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall functions_HelperFunctions_102ced80(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint32_t extraout_ECX;
  uint64_t uVar3;
  int local_30;
  int local_2c;
  uint32_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  int local_18;
  int local_14;
  uint32_t local_10;
  uint16_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_3)) && (0 < param_4)) {
    local_20 = 8;
    local_28 = 0;
    local_18 = param_3;
    local_14 = param_4;
    local_1c = 0;
    local_10 = 0xffffffff;
    local_c = 0x40;
    local_30 = param_1;
    local_2c = param_2;
    piVar2 = sub_6fd0ef10(&local_30);
    if (piVar2 != (int *)0x0) {
      D2Common_10310(param_2);
      iVar1 = *(int *)(piVar2[5] + 0x28);
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 1;
      *(int *)(iVar1 + 0xc) = piVar2[3];
      *(uint32_t *)(iVar1 + 0x10) = 1;
      *(int *)(iVar1 + 0x28) = param_1;
      *(byte *)(piVar2[5] + 0x16) = *(byte *)(piVar2[5] + 0x16) | 1;
      *(byte *)(piVar2[5] + 0x16) = *(byte *)(piVar2[5] + 0x16) | 8;
      uVar3 = sub_6fc43ca0(param_1,piVar2,0);
      sub_102ed810(extraout_ECX,(int)((ulonglong)uVar3 >> 0x20));
    }
    return (int)piVar2;
  }
  return 0;
}


// 0x102cee80  (ghidra: FUN_102cee80)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall functions_HelperFunctions_102cee80(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint32_t uVar4;
  uint32_t extraout_ECX;
  uint64_t uVar5;
  int local_30;
  int local_2c;
  uint32_t local_28;
  uint32_t local_20;
  uint32_t local_1c;
  int local_18;
  int local_14;
  uint32_t local_10;
  uint16_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_3)) && (0 < param_4)) {
    local_18 = param_3;
    local_20 = 8;
    local_28 = 0;
    local_14 = param_4;
    local_1c = 0;
    local_10 = 0xffffffff;
    local_c = 0x40;
    local_30 = param_1;
    local_2c = param_2;
    piVar2 = sub_6fd0ef10(&local_30);
    if (piVar2 != (int *)0x0) {
      uVar3 = D2Common_10310(param_2);
      iVar1 = *(int *)(piVar2[5] + 0x28);
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 1;
      *(int *)(iVar1 + 0xc) = piVar2[3];
      *(uint32_t *)(iVar1 + 0x10) = 1;
      *(int *)(iVar1 + 0x28) = param_1;
      *(byte *)(piVar2[5] + 0x16) = *(byte *)(piVar2[5] + 0x16) | 1;
      *(byte *)(piVar2[5] + 0x16) = *(byte *)(piVar2[5] + 0x16) | 4;
      *(byte *)(piVar2[5] + 0x16) = *(byte *)(piVar2[5] + 0x16) | 8;
      uVar4 = sub_102ed7d0(param_1,piVar2);
      uVar5 = sub_102ed7f0(piVar2,uVar4);
      sub_102ed810(extraout_ECX,(int)((ulonglong)uVar5 >> 0x20));
      sub_102ed7b0(param_1,piVar2,uVar3);
    }
    return (int)piVar2;
  }
  return 0;
}


// 0x102cef90  (ghidra: FUN_102cef90)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __fastcall functions_HelperFunctions_102cef90(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int local_30;
  int local_2c;
  uint32_t local_28;
  uint32_t local_1c;
  int local_18;
  int local_14;
  uint32_t local_10;
  uint16_t local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_3)) && (0 < param_4)) {
    local_18 = param_3;
    local_28 = 0;
    local_14 = param_4;
    local_1c = 0;
    local_10 = 0xffffffff;
    local_c = 0;
    local_30 = param_1;
    local_2c = param_2;
    piVar1 = sub_6fd0ef10(&local_30);
    return piVar1;
  }
  return (int *)0;
}


// 0x102cf020  (ghidra: FUN_102cf020)  [range]
void __fastcall
functions_HelperFunctions_102cf020(uint32_t param_1,uint32_t param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  void *_Memory;
  char cVar3;
  uint16_t extraout_var;
  uint16_t extraout_var_00;
  uint16_t extraout_var_01;
  uint8_t uVar4;
  
  iVar2 = functions_HelperFunctions_102ce6d0(param_3);
  _Memory = malloc(0x200);
  if (param_5 == 0) {
    D2Lang_10003(CONCAT22(extraout_var,*(uint16_t *)(iVar2 + 0x38)));
    D2Lang_10003(CONCAT22(extraout_var_01,*(uint16_t *)(iVar2 + 0x3c)));
    uVar4 = *(uint8_t *)(iVar2 + 0x36);
    cVar3 = *(char *)(iVar2 + 0x37);
  }
  else {
    if (param_4 < 0) {
      uVar1 = *(ushort *)(iVar2 + 0x42);
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0x44);
    }
    D2Lang_10003((uint)uVar1);
    D2Lang_10003(CONCAT22(extraout_var_00,*(uint16_t *)(iVar2 + 0x46)));
    uVar4 = *(uint8_t *)(iVar2 + 0x40);
    cVar3 = *(char *)(iVar2 + 0x41);
  }
  switch(uVar4) {
  case 0:
    goto switchD_102cf0a9_caseD_0;
  default:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"+%d %s\n");
      }
      else if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s +%d\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    break;
  case 2:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d%% %s\n");
        goto switchD_102cf0a9_caseD_0;
      }
      goto joined_r0x102cf3fa;
    }
    break;
  case 3:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d %s\n");
        goto switchD_102cf0a9_caseD_0;
      }
joined_r0x102cf1a2:
      if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s %d\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    break;
  case 4:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"+%d%% %s\n");
      }
      else if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s +%d%%\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    break;
  case 5:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d %s\n");
        goto switchD_102cf0a9_caseD_0;
      }
      goto joined_r0x102cf1a2;
    }
    break;
  case 6:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"+%d %s %s\n");
      }
      else if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s +%d %s\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    goto LAB_102cf226;
  case 7:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d%% %s %s\n");
        goto switchD_102cf0a9_caseD_0;
      }
joined_r0x102cf32c:
      if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s %d%% %s\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    goto LAB_102cf226;
  case 8:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"+%d%% %s %s\n");
      }
      else if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s +%d%% %s\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    goto LAB_102cf226;
  case 9:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d %s %s\n");
      }
      else if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s %d %s\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
    goto LAB_102cf226;
  case 10:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d%% %s %s\n");
        goto switchD_102cf0a9_caseD_0;
      }
      goto joined_r0x102cf32c;
    }
LAB_102cf226:
    sub_10219580(param_1,param_2,L"%s %s\n");
    goto switchD_102cf0a9_caseD_0;
  case 0x13:
    if (cVar3 == '\0') {
      if (_Memory == (void *)0x0) {
        return;
      }
      sub_10219580(_Memory,0x100,&DAT_1037e61c);
      sub_10219580(param_1,param_2,_Memory);
      free(_Memory);
      return;
    }
    if (cVar3 == '\x01') {
      sub_10219580(param_1,param_2,L"%d%% %s\n");
      goto switchD_102cf0a9_caseD_0;
    }
joined_r0x102cf3fa:
    if (cVar3 == '\x02') {
      sub_10219580(param_1,param_2,L"%s %d%%\n");
    }
    goto switchD_102cf0a9_caseD_0;
  case 0x14:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d%% %s\n");
        goto switchD_102cf0a9_caseD_0;
      }
      goto joined_r0x102cf3fa;
    }
    break;
  case 0x15:
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        sub_10219580(param_1,param_2,L"%d %s\n");
      }
      else if (cVar3 == '\x02') {
        sub_10219580(param_1,param_2,L"%s %d\n");
      }
      goto switchD_102cf0a9_caseD_0;
    }
  }
  sub_10219580(param_1,param_2,&DAT_1037e61c);
switchD_102cf0a9_caseD_0:
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return;
}


// 0x102cf530  (ghidra: FUN_102cf530)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t functions_HelperFunctions_102cf530(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint64_t uVar4;
  uint8_t auStack_e8 [8];
  uint32_t uStack_e0;
  uint8_t local_c8;
  char local_c7 [65];
  char local_86 [66];
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0x0000001c;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10314e45;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  bVar2 = sub_1023e070((int)&stack0x0000001c);
  if (!bVar2) {
    uStack_e0 = 0x102cf585;
    memset(local_c7,0,0x82);
    local_c8 = 0x56;
    functions_D2ServerFunctions_1026cf70(auStack_e8,(int)&stack0x00000004,(int)&stack0x0000001c);
    sub_IntegrityCheck_ModuleScan_102e79d0(local_44);
    local_8 = CONCAT31(local_8._1_3_,2);
    uVar4 = thunk_FUN_1020fe30((int)local_44);
    pcVar3 = (char *)uVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar3[(int)(local_c7 + (-1 - (int)(char *)uVar4))] = cVar1;
    } while (cVar1 != '\0');
    functions_D2ServerFunctions_1026cf70(auStack_e8,(int)&stack0x00000004,(int)&stack0x0000001c);
    sub_IntegrityCheck_ModuleScan_102e7dd0(local_2c);
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar4 = thunk_FUN_1020fe30((int)local_2c);
    pcVar3 = (char *)uVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar3[(int)(local_c7 + (0x40 - (int)(char *)uVar4))] = cVar1;
    } while (cVar1 != '\0');
    sub_102ed200(&local_c8);
    thunk_FUN_1020fc60(local_2c);
    thunk_FUN_1020fc60(local_44);
  }
  thunk_FUN_1020fc60((uint32_t *)&stack0x00000004);
  uVar4 = thunk_FUN_1020fc60((uint32_t *)&stack0x0000001c);
  ExceptionList = local_10;
  return uVar4;
}


// 0x102cf660  (ghidra: FUN_102cf660)  [range]
void __fastcall functions_HelperFunctions_102cf660(uint32_t *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[0x15] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  return;
}


// 0x102cf710  (ghidra: FUN_102cf710)  [range]
uint64_t __fastcall functions_HelperFunctions_102cf710(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  
  if (param_1 == 0x9d) {
    if (0x2a < param_2 - 0x50b0U) goto LAB_102cf759;
    bVar1 = param_3 - 0x281cU < 0x36;
    bVar2 = param_3 - 0x281cU == 0x36;
  }
  else {
    if ((param_1 != 0x9f) || (0x2c < param_2 - 0x4ff9U)) goto LAB_102cf759;
    bVar1 = param_3 - 0x2d79U < 0x1f;
    bVar2 = param_3 - 0x2d79U == 0x1f;
  }
  if (bVar1 || bVar2) {
    return CONCAT44(param_2,1);
  }
LAB_102cf759:
  return (ulonglong)(uint)param_2 << 0x20;
}


// 0x102cf760  (ghidra: FUN_102cf760)  [range]
uint32_t __fastcall functions_HelperFunctions_102cf760(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != 0)) {
    uVar2 = D2Common_10331(param_1);
    uVar2 = D2Common_10826((int)uVar2);
    iVar1 = functions_HelperFunctions_102cea70((int)uVar2);
    if ((iVar1 != 0) && (iVar1 = param_1[0xb], iVar1 != 0)) {
      if ((*param_1 == 0) && ((param_1[5] != 0 && (*(int *)(param_1[5] + 400) != 0)))) {
        return 1;
      }
      uVar2 = functions_HelperFunctions_102cf710((int)uVar2,(uint)*(ushort *)(iVar1 + 2),(uint)*(ushort *)(iVar1 + 6));
      if ((int)uVar2 != 0) {
        return 1;
      }
    }
    uVar2 = D2Common_10331(param_2);
    uVar2 = D2Common_10826((int)uVar2);
    iVar1 = functions_HelperFunctions_102cea70((int)uVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = param_2[0xb];
    if (iVar1 != 0) {
      if (((*param_2 == 0) && (param_2[5] != 0)) && (*(int *)(param_2[5] + 400) != 0)) {
        return 1;
      }
      uVar2 = functions_HelperFunctions_102cf710((int)uVar2,(uint)*(ushort *)(iVar1 + 2),(uint)*(ushort *)(iVar1 + 6));
      if ((int)uVar2 != 0) {
        return 1;
      }
    }
    if ((*(int *)(param_3 + 0x1df4) == 0x3d) &&
       (*(uint *)(param_3 + 0xa8) <= *(int *)(param_3 + 0x2628) + 12000U)) {
      return 1;
    }
  }
  return 0;
}


// 0x102cf850  (ghidra: FUN_102cf850)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_HelperFunctions_102cf850(void)

{
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  uint32_t extraout_ECX;
  uint8_t local_d4 [8];
  locale local_cc [8];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_c4 [176];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10314e93;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  functions_D2NewFunctions_102ce360(local_d4);
  local_8._0_1_ = 1;
  std::locale::global(local_cc);
  sub_10238470((int)local_cc);
  local_8._0_1_ = 0;
  sub_10238470((int)local_d4);
  sub_1023b040(local_c4);
  functions_HelperFunctions_102d33a0(local_c4,extraout_ECX,8);
  local_8 = CONCAT31(local_8._1_3_,2);
  pbVar1 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
           functions_HelperFunctions_102d3590(local_c4,(int)&stack0x00000004);
  functions_HelperFunctions_102d35c0(pbVar1);
  functions_HelperFunctions_102d3340((int *)local_c4);
  functions_HelperFunctions_102cf930((int)local_c4);
  thunk_FUN_102250f0((uint32_t *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// 0x102cf930  (ghidra: FUN_102cf930)  [range]
void __fastcall functions_HelperFunctions_102cf930(int param_1)

{
  functions_HelperFunctions_102d3370(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x102cf93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::~basic_ios<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 0x68));
  return;
}


// 0x102cf950  (ghidra: FUN_102cf950)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_HelperFunctions_102cf950(void)

{
  uint32_t extraout_ECX;
  uint8_t local_d4 [8];
  locale local_cc [8];
  int local_c4 [44];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314edb;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  functions_D2NewFunctions_102ce360(local_d4);
  local_8 = 0;
  std::locale::global(local_cc);
  sub_10238470((int)local_cc);
  local_8 = 0xffffffff;
  sub_10238470((int)local_d4);
  sub_1023b040(local_c4);
  functions_HelperFunctions_102d33a0(local_c4,extraout_ECX,0x12);
  local_8 = 1;
  functions_HelperFunctions_102d3340(local_c4);
  functions_HelperFunctions_102cf930((int)local_c4);
  ExceptionList = local_10;
  return;
}


// 0x102cfa20  [range]
/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}


// 0x102cfa30  (ghidra: FUN_102cfa30)  [range]
void __fastcall
functions_HelperFunctions_102cfa30(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int *param_7,
            int *param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 - param_3;
  iVar3 = param_2 - param_4;
  iVar1 = iVar3 * iVar3 + iVar4 * iVar4;
  iVar2 = iVar1;
  if (iVar1 < 4) {
    iVar4 = iVar4 * 4;
    iVar2 = iVar1 * iVar1 + iVar4 * iVar4;
    iVar3 = iVar1;
  }
  iVar1 = iVar4 * 2;
  if (0xf < iVar2) {
    iVar1 = iVar4;
  }
  iVar1 = -iVar1;
  iVar4 = iVar3 * 2;
  if (0xf < iVar2) {
    iVar4 = iVar3;
  }
  iVar2 = iVar4 * iVar4 + iVar1 * iVar1;
  while (3 < iVar2) {
    iVar1 = iVar1 / 2;
    iVar4 = iVar4 / 2;
    iVar2 = iVar4 * iVar4 + iVar1 * iVar1;
  }
  *param_5 = param_3 - (iVar4 * param_9) / 2;
  *param_6 = param_4 - (iVar1 * param_9) / 2;
  *param_7 = iVar4;
  *param_8 = iVar1;
  return;
}


// 0x102cfaf0  (ghidra: FUN_102cfaf0)  [range]
uint64_t __fastcall functions_HelperFunctions_102cfaf0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (param_2 - param_4) * (param_2 - param_4);
  return CONCAT44(iVar1,(param_1 - param_3) * (param_1 - param_3) + iVar1);
}


// 0x102cfb10  (ghidra: FUN_102cfb10)  [range]
void __fastcall
functions_HelperFunctions_102cfb10(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7)

{
  double in_XMM0_Qa;
  uint64_t uVar1;
  
  uVar1 = functions_HelperFunctions_102cfaf0(param_1,param_2,param_3,param_4);
  sub_10218a80((int)uVar1);
  if (in_XMM0_Qa != 0.0) {
    *param_5 = (int)(((double)(param_3 - param_1) * (double)param_7) / in_XMM0_Qa + (double)param_1)
    ;
    *param_6 = (int)(((double)(param_4 - param_2) * (double)param_7) / in_XMM0_Qa + (double)param_2)
    ;
  }
  return;
}


// 0x102cfbb0  (ghidra: FUN_102cfbb0)  [range]
uint32_t __fastcall
functions_HelperFunctions_102cfbb0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  bool bVar1;
  bool bVar2;
  
  if ((((param_1 < param_5) || (param_6 <= param_1)) &&
      ((param_2 < param_5 || (param_6 <= param_2)))) &&
     ((param_5 <= param_1 || (param_2 < param_6)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((param_3 < param_7) || (param_8 <= param_3)) &&
      ((param_4 < param_7 || (param_8 <= param_4)))) &&
     ((param_7 <= param_3 || (param_4 < param_8)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar1) && (bVar2)) {
    return 1;
  }
  return 0;
}


// 0x102cfc20  (ghidra: FUN_102cfc20)  [range]
uint64_t __fastcall functions_HelperFunctions_102cfc20(int *param_1,uint *param_2,uint *param_3,uint *reg_EAX)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 2) {
      *param_2 = *(uint *)(param_1[0xb] + 0xc);
      *param_3 = *(uint *)(param_1[0xb] + 0x10);
      return CONCAT44(param_2,param_3);
    }
    *param_2 = (uint)*(ushort *)(param_1[0xb] + 2);
    *param_3 = (uint)*(ushort *)(param_1[0xb] + 6);
    reg_EAX = param_3;
  }
  return CONCAT44(param_2,reg_EAX);
}


// 0x102cfc60  (ghidra: FUN_102cfc60)  [range]
int functions_HelperFunctions_102cfc60(uint32_t param_1,uint32_t param_2,uint32_t param_3,int param_4,int reg_ECX)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *this;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  uint64_t uVar6;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  puStack_c = &LAB_10314f1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar6 = D2Common_10973(reg_ECX,0x69,0);
  iVar1 = (int)uVar6;
  iVar2 = sub_10218980(&param_1);
  iVar2 = iVar2 + -1;
  piVar3 = (int *)sub_10218970(this,iVar2);
  if (iVar1 < *piVar3) {
    iVar4 = 0;
    iVar5 = param_4;
    if (0 < iVar2) {
      do {
        piVar3 = (int *)sub_10218970(&param_1,iVar4);
        iVar4 = extraout_EDX;
        if ((*piVar3 <= iVar1) &&
           (piVar3 = (int *)sub_10218970(&param_1,extraout_EDX + 1), iVar4 = extraout_EDX_00,
           iVar1 < *piVar3)) {
          iVar5 = (param_4 - extraout_EDX_00) + -1;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = param_4;
      } while (iVar4 < iVar2);
    }
  }
  else {
    iVar5 = (param_4 - iVar2) + -1;
  }
  thunk_FUN_1020fb40(&param_1);
  ExceptionList = local_10;
  return iVar5;
}


// 0x102cfd10  (ghidra: FUN_102cfd10)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t __fastcall functions_HelperFunctions_102cfd10(int param_1,uint8_t param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  uint32_t *_Memory;
  char *pcVar4;
  int extraout_EDX;
  char *extraout_EDX_00;
  char *pcVar5;
  uint32_t uVar6;
  uint64_t uVar7;
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10314f55;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    if (*(int *)(param_1 + 0x10) == 0x11) {
      uVar7 = D2Common_10494_10277e30((int *)param_1,7);
      if ((int)uVar7 != 0) goto LAB_102cfe46;
    }
    iVar2 = *(int *)(*(char **)(param_1 + 0x14) + 0x9c);
    if ((iVar2 != 0) && ((*(int *)(iVar2 + 4) == 4 || (*(int *)(iVar2 + 4) == 5)))) {
      sub_1020f990(local_2c,*(char **)(param_1 + 0x14));
      local_8 = CONCAT31(local_8._1_3_,1);
      client_DrawHoverItem_10224f20((int)local_2c);
      iVar3 = client_DrawHoverItem_10224f20((int)&stack0x00000004);
      _Size = iVar3 + extraout_EDX + 0xc;
      _Memory = malloc(_Size);
      if (_Memory != (uint32_t *)0x0) {
        *_Memory = 0x2000426;
        _Memory[1] = 0;
        *(uint8_t *)(_Memory + 2) = param_2;
        *(uint8_t *)((int)_Memory + 9) = 0x36;
        uVar7 = thunk_FUN_1020fe30((int)local_2c);
        pcVar4 = (char *)uVar7;
        pcVar5 = (char *)((int)_Memory + 10);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        thunk_FUN_1020fe30((int)&stack0x00000004);
        iVar3 = client_DrawHoverItem_10224f20((int)local_2c);
        pcVar4 = (char *)(iVar3 + 0xb + (int)_Memory);
        pcVar5 = extraout_EDX_00;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        sub_102ecd00(iVar2,_Memory,_Size);
        free(_Memory);
        thunk_FUN_1020fc60(local_2c);
        uVar6 = 1;
        goto LAB_102cfe48;
      }
      thunk_FUN_1020fc60(local_2c);
    }
  }
LAB_102cfe46:
  uVar6 = 0;
LAB_102cfe48:
  thunk_FUN_1020fc60((uint32_t *)&stack0x00000004);
  ExceptionList = local_10;
  return uVar6;
}


// 0x102cfe70  (ghidra: FUN_102cfe70)  [range]
int __fastcall functions_HelperFunctions_102cfe70(int param_1,uint8_t param_2)

{
  int *piVar1;
  int iVar2;
  uint32_t *puVar3;
  uint64_t uVar4;
  uint8_t auStack_44 [12];
  uint32_t uStack_38;
  int local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  puStack_c = &LAB_10314f8d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    local_14 = 0;
    puVar3 = (uint32_t *)(param_1 + 0x1120);
    iVar2 = 0x80;
    do {
      piVar1 = (int *)*puVar3;
      if (piVar1 != (int *)0x0) {
        if (piVar1[4] == 0x11) {
          uStack_38 = 0x102cfeca;
          uVar4 = D2Common_10494_10277e30(piVar1,7);
          if ((int)uVar4 != 0) goto LAB_102cfef2;
        }
        if (piVar1[5] != 0) {
          sub_1020f9c0(auStack_44,(uint)&stack0x00000004);
          functions_HelperFunctions_102cfd10((int)piVar1,param_2);
          local_14 = local_14 + 1;
        }
      }
LAB_102cfef2:
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  thunk_FUN_1020fc60((uint32_t *)&stack0x00000004);
  ExceptionList = local_10;
  return local_14;
}


// 0x102cff20  (ghidra: FUN_102cff20)  [range]
int __fastcall functions_HelperFunctions_102cff20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint8_t *_Memory;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0xbc + param_2 * 4);
  iVar2 = *(int *)(iVar1 + 4);
  _Memory = malloc(10);
  if (_Memory != (uint8_t *)0x0) {
    *_Memory = 0x53;
    *(int *)(_Memory + 1) = param_2;
    *(uint32_t *)(_Memory + 5) = 5;
    _Memory[9] = (char)param_3;
  }
  piVar5 = (int *)(param_1 + 0x1120);
  local_10 = 0x80;
  do {
    if ((((*piVar5 != 0) && (iVar3 = *(int *)(*piVar5 + 0x14), iVar4 = local_8, iVar3 != 0)) &&
        (iVar3 = *(int *)(iVar3 + 0x9c), iVar3 != 0)) && (*(int *)(iVar3 + 4) == 4)) {
      iVar4 = *(int *)(iVar2 + 0x30);
      if (param_3 == 0) {
        if (iVar4 != 0) {
          D2Common_10895(iVar1);
        }
      }
      else if (iVar4 == 0) {
        D2Common_10337(iVar1);
      }
      sub_102ecd00(iVar3,_Memory,10);
      local_8 = local_8 + 1;
      iVar4 = local_8;
    }
    piVar5 = piVar5 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  free(_Memory);
  return iVar4;
}


// 0x102d0000  [range]
void __fastcall thunk_FUN_102d3320(uint32_t param_1)

{
  uint32_t uVar1;
  void *this;
  uint32_t extraout_ECX;
  
  uVar1 = thunk_FUN_1020fe80(param_1);
  this = (void *)thunk_FUN_1020fe80(extraout_ECX);
  functions_HelperFunctions_102d38a0(this,uVar1);
  return;
}


// 0x102d0010  (ghidra: FUN_102d0010)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void functions_HelperFunctions_102d0010(void)

{
  DAT_104e34dc = 0;
  return;
}


// 0x102d0020  (ghidra: FUN_102d0020)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0020(uint32_t param_1,int param_2,int param_3)

{
  short *psVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    for (psVar1 = *(short **)(param_2 + 0xdc); psVar1 != (short *)0x0;
        psVar1 = *(short **)(psVar1 + 0x12)) {
      if (*psVar1 == 2) {
        if (param_3 != 0) {
          sub_102ec990();
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// 0x102d0070  (ghidra: FUN_102d0070)  [range]
int __fastcall functions_HelperFunctions_102d0070(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint64_t uVar3;
  
  if (param_1 != 0) {
    iVar2 = functions_HelperFunctions_102ce5a0(param_2);
    if (iVar2 != 0) {
      sVar1 = *(short *)(iVar2 + 0x54);
      uVar3 = D2Common_10871(param_1,(uint)*(ushort *)(iVar2 + 0x80));
      if ((int)uVar3 != 0) {
        iVar2 = D2Common_10680((int)uVar3,(int)sVar1,0);
        return iVar2;
      }
      return 0;
    }
  }
  return 0;
}


// 0x102d00b0  (ghidra: FUN_102d00b0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d00b0(int *param_1)

{
  uint uVar1;
  uint64_t uVar2;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 4)) && ((int *)param_1[5] != (int *)0x0)) &&
     (*(int *)param_1[5] == 2)) {
    uVar1 = D2Common_10048(param_1);
    if (uVar1 != 0) {
      uVar1 = D2Common_10711(param_1);
      if (uVar1 == 0) {
        uVar2 = D2Common_10744((int)param_1,0x38);
        if ((int)uVar2 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


// 0x102d0100  (ghidra: FUN_102d0100)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0100(int *param_1)

{
  uint64_t uVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 4)) && ((int *)param_1[5] != (int *)0x0)) &&
     (*(int *)param_1[5] == 2)) {
    uVar1 = D2Common_10744((int)param_1,0x14);
    if (((int)uVar1 == 0) && (uVar1 = D2Common_10744((int)param_1,0x4a), (int)uVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}


// 0x102d0140  (ghidra: FUN_102d0140)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0140(int *param_1)

{
  uint64_t uVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 4)) && ((int *)param_1[5] != (int *)0x0)) &&
     (*(int *)param_1[5] == 2)) {
    uVar1 = D2Common_10744((int)param_1,0x7f);
    if (((int)uVar1 == 0) && (uVar1 = D2Common_10744((int)param_1,0x89), (int)uVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}


// 0x102d0180  (ghidra: FUN_102d0180)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0180(int param_1)

{
  if ((param_1 != -1) && (param_1 - 7U < 0x118)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(uint8_t *)((int)&switchD_102d0197::switchdataD_102d01a8 + param_1 + 1)) {
    case 0:
      return 1;
    }
  }
  return 0;
}


// 0x102d02d0  (ghidra: FUN_102d02d0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d02d0(int param_1,int param_2,int *param_3,ushort *param_4,int param_5)

{
  void *this;
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  
  if (((((param_1 == 0) || (param_3 == (int *)0x0)) || (param_4 == (ushort *)0x0)) ||
      ((param_2 == 0 || (*(int *)(param_2 + 0x14) == 0)))) ||
     ((*(int *)(*(int *)(param_2 + 0x14) + 0x9c) == 0 || (*param_4 == 9999)))) {
    return 0;
  }
  iVar2 = functions_HelperFunctions_102d0100(param_3);
  uVar4 = D2Common_10744((int)param_3,0x4e);
  if (((int)uVar4 == 0) && (iVar2 == 0)) {
    uVar4 = D2Common_10973((int)param_3,0x46,0);
    iVar3 = (int)uVar4;
  }
  else {
    iVar3 = 1;
  }
  uVar1 = *param_4;
  this = (void *)(iVar3 + (uint)uVar1);
  if ((9999 < (int)this) && (iVar2 == 0)) {
    iVar2 = (int)this + -9999;
    *param_4 = (uVar1 - (short)iVar2) + (short)iVar3;
    D2Common_10887(param_3,0x46,iVar2,0);
    sub_102ede30(param_3,0,*(uint32_t *)(*(int *)(param_2 + 0x14) + 0x9c),1,0x46,iVar2);
    return 1;
  }
  *param_4 = (short)iVar3 + uVar1;
  if (param_5 != 0) {
    sub_102effe0(param_2,param_3,param_1);
    return 1;
  }
  sub_102eccc0(this,param_3,param_2,param_1);
  return 1;
}


// 0x102d0400  (ghidra: FUN_102d0400)  [range]
void __fastcall functions_HelperFunctions_102d0400(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)uVar1 - param_2;
  if ((-1 < (int)uVar2) && (uVar2 <= uVar1)) {
    *param_1 = uVar1 - (short)param_2;
    return;
  }
  *param_1 = 0;
  return;
}


// 0x102d0430  (ghidra: FUN_102d0430)  [range]
int __fastcall functions_HelperFunctions_102d0430(int param_1)

{
  int iVar1;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) ||
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x50e), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}


// 0x102d0450  (ghidra: FUN_102d0450)  [range]
void __fastcall functions_HelperFunctions_102d0450(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) &&
     (uVar2 = *(uint *)(iVar1 + 0x50e), uVar2 != 0)) {
    if ((-1 < (int)(uVar2 - param_2)) && (uVar2 - param_2 <= uVar2)) {
      *(uint *)(iVar1 + 0x50e) = uVar2 - param_2;
      return;
    }
    *(uint32_t *)(iVar1 + 0x50e) = 0;
  }
  return;
}


// 0x102d0490  (ghidra: FUN_102d0490)  [range]
void __fastcall functions_HelperFunctions_102d0490(int param_1,int param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0x50e);
    *piVar1 = *piVar1 + param_2;
  }
  return;
}


// 0x102d04b0  (ghidra: FUN_102d04b0)  [range]
int __fastcall functions_HelperFunctions_102d04b0(int param_1,int param_2)

{
  if ((param_2 != -1) && (param_2 - 7U < 0x118)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(uint8_t *)((int)&PTR_caseD_62_102d09d4 + param_2 + 1)) {
    case 0:
      return *(int *)(param_1 + 0x14) + 0x4c6;
    case 1:
      return *(int *)(param_1 + 0x14) + 0x4c8;
    case 2:
      return *(int *)(param_1 + 0x14) + 0x47c;
    case 3:
      return *(int *)(param_1 + 0x14) + 0x48a;
    case 4:
      return *(int *)(param_1 + 0x14) + 0x478;
    case 5:
      return *(int *)(param_1 + 0x14) + 0x486;
    case 6:
      return *(int *)(param_1 + 0x14) + 0x47e;
    case 7:
      return *(int *)(param_1 + 0x14) + 0x48c;
    case 8:
      return *(int *)(param_1 + 0x14) + 0x480;
    case 9:
      return *(int *)(param_1 + 0x14) + 0x48e;
    case 10:
      return *(int *)(param_1 + 0x14) + 0x482;
    case 0xb:
      return *(int *)(param_1 + 0x14) + 0x490;
    case 0xc:
      return *(int *)(param_1 + 0x14) + 0x47a;
    case 0xd:
      return *(int *)(param_1 + 0x14) + 0x488;
    case 0xe:
      return *(int *)(param_1 + 0x14) + 0x484;
    case 0xf:
      return *(int *)(param_1 + 0x14) + 0x492;
    case 0x10:
      return *(int *)(param_1 + 0x14) + 0x436;
    case 0x11:
      return *(int *)(param_1 + 0x14) + 0x438;
    case 0x12:
      return *(int *)(param_1 + 0x14) + 0x43a;
    case 0x13:
      return *(int *)(param_1 + 0x14) + 0x43c;
    case 0x14:
      return *(int *)(param_1 + 0x14) + 0x43e;
    case 0x15:
      return *(int *)(param_1 + 0x14) + 0x440;
    case 0x16:
      return *(int *)(param_1 + 0x14) + 0x442;
    case 0x17:
      return *(int *)(param_1 + 0x14) + 0x444;
    case 0x18:
      return *(int *)(param_1 + 0x14) + 0x446;
    case 0x19:
      return *(int *)(param_1 + 0x14) + 0x448;
    case 0x1a:
      return *(int *)(param_1 + 0x14) + 0x44a;
    case 0x1b:
      return *(int *)(param_1 + 0x14) + 0x44c;
    case 0x1c:
      return *(int *)(param_1 + 0x14) + 0x44e;
    case 0x1d:
      return *(int *)(param_1 + 0x14) + 0x450;
    case 0x1e:
      return *(int *)(param_1 + 0x14) + 0x452;
    case 0x1f:
      return *(int *)(param_1 + 0x14) + 0x454;
    case 0x20:
      return *(int *)(param_1 + 0x14) + 0x456;
    case 0x21:
      return *(int *)(param_1 + 0x14) + 0x458;
    case 0x22:
      return *(int *)(param_1 + 0x14) + 0x45a;
    case 0x23:
      return *(int *)(param_1 + 0x14) + 0x45c;
    case 0x24:
      return *(int *)(param_1 + 0x14) + 0x45e;
    case 0x25:
      return *(int *)(param_1 + 0x14) + 0x460;
    case 0x26:
      return *(int *)(param_1 + 0x14) + 0x462;
    case 0x27:
      return *(int *)(param_1 + 0x14) + 0x464;
    case 0x28:
      return *(int *)(param_1 + 0x14) + 0x466;
    case 0x29:
      return *(int *)(param_1 + 0x14) + 0x468;
    case 0x2a:
      return *(int *)(param_1 + 0x14) + 0x46a;
    case 0x2b:
      return *(int *)(param_1 + 0x14) + 0x46c;
    case 0x2c:
      return *(int *)(param_1 + 0x14) + 0x46e;
    case 0x2d:
      return *(int *)(param_1 + 0x14) + 0x470;
    case 0x2e:
      return *(int *)(param_1 + 0x14) + 0x472;
    case 0x2f:
      return *(int *)(param_1 + 0x14) + 0x474;
    case 0x30:
      return *(int *)(param_1 + 0x14) + 0x476;
    case 0x31:
      return *(int *)(param_1 + 0x14) + 0x4a2;
    case 0x32:
      return *(int *)(param_1 + 0x14) + 0x4a4;
    case 0x33:
      return *(int *)(param_1 + 0x14) + 0x4a6;
    case 0x34:
      return *(int *)(param_1 + 0x14) + 0x4ac;
    case 0x35:
      return *(int *)(param_1 + 0x14) + 0x4aa;
    case 0x36:
      return *(int *)(param_1 + 0x14) + 0x4a8;
    case 0x37:
      return *(int *)(param_1 + 0x14) + 0x4d6;
    case 0x38:
      return *(int *)(param_1 + 0x14) + 0x4d8;
    case 0x39:
      return *(int *)(param_1 + 0x14) + 0x4da;
    case 0x3a:
      return *(int *)(param_1 + 0x14) + 0x4dc;
    case 0x3b:
      return *(int *)(param_1 + 0x14) + 0x4de;
    case 0x3c:
      return *(int *)(param_1 + 0x14) + 0x4d0;
    case 0x3d:
      return *(int *)(param_1 + 0x14) + 0x4f2;
    case 0x3e:
      return *(int *)(param_1 + 0x14) + 0x4ca;
    case 0x3f:
      return *(int *)(param_1 + 0x14) + 0x4f6;
    case 0x40:
      return *(int *)(param_1 + 0x14) + 0x4f8;
    case 0x41:
      return *(int *)(param_1 + 0x14) + 0x4f0;
    case 0x42:
      return *(int *)(param_1 + 0x14) + 0x4f4;
    case 0x43:
      return *(int *)(param_1 + 0x14) + 0x4e2;
    case 0x44:
      return *(int *)(param_1 + 0x14) + 0x4ee;
    case 0x45:
      return *(int *)(param_1 + 0x14) + 0x4ec;
    case 0x46:
      return *(int *)(param_1 + 0x14) + 0x4d2;
    case 0x47:
      return *(int *)(param_1 + 0x14) + 0x4b4;
    case 0x48:
      return *(int *)(param_1 + 0x14) + 0x4b8;
    case 0x49:
      return *(int *)(param_1 + 0x14) + 0x4b6;
    case 0x4a:
      return *(int *)(param_1 + 0x14) + 0x4ce;
    case 0x4b:
      return *(int *)(param_1 + 0x14) + 0x4ba;
    case 0x4c:
      return *(int *)(param_1 + 0x14) + 0x4cc;
    case 0x4d:
      return *(int *)(param_1 + 0x14) + 0x4bc;
    case 0x4e:
      return *(int *)(param_1 + 0x14) + 0x4ae;
    case 0x4f:
      return *(int *)(param_1 + 0x14) + 0x4b0;
    case 0x50:
      return *(int *)(param_1 + 0x14) + 0x4b2;
    case 0x51:
      return *(int *)(param_1 + 0x14) + 0x4d4;
    case 0x52:
      return *(int *)(param_1 + 0x14) + 0x4e0;
    case 0x53:
      return *(int *)(param_1 + 0x14) + 0x4be;
    case 0x54:
      return *(int *)(param_1 + 0x14) + 0x4e4;
    case 0x56:
      return *(int *)(param_1 + 0x14) + 0x4e8;
    case 0x57:
      return *(int *)(param_1 + 0x14) + 0x4ea;
    case 0x58:
      return *(int *)(param_1 + 0x14) + 0x4e6;
    case 0x59:
      return *(int *)(param_1 + 0x14) + 0x49e;
    case 0x5a:
      return *(int *)(param_1 + 0x14) + 0x498;
    case 0x5b:
      return *(int *)(param_1 + 0x14) + 0x49c;
    case 0x5c:
      return *(int *)(param_1 + 0x14) + 0x49a;
    case 0x5d:
      return *(int *)(param_1 + 0x14) + 0x4a0;
    case 0x5e:
      return *(int *)(param_1 + 0x14) + 0x494;
    case 0x5f:
      return *(int *)(param_1 + 0x14) + 0x496;
    case 0x60:
      return *(int *)(param_1 + 0x14) + 0x4c0;
    case 0x61:
      return *(int *)(param_1 + 0x14) + 0x4c2;
    case 0x62:
      return *(int *)(param_1 + 0x14) + 0x4c4;
    }
  }
  return 0;
}


// 0x102d0b00  (ghidra: FUN_102d0b00)  [range]
int __fastcall functions_HelperFunctions_102d0b00(int param_1)

{
  uint uVar1;
  
  if (((p_D2Common_DAT_6fdefa58 != 0) && (param_1 != 0)) &&
     (uVar1 = *(uint *)(param_1 + 4), uVar1 <= *(uint *)(p_D2Common_DAT_6fdefa58 + 0x13c))) {
    if ((uint)(*(int *)(p_D2Common_DAT_6fdefa58 + 0x148) + *(int *)(p_D2Common_DAT_6fdefa58 + 0x150)) <= uVar1) {
      return (uVar1 - *(int *)(p_D2Common_DAT_6fdefa58 + 0x148)) - *(int *)(p_D2Common_DAT_6fdefa58 + 0x150);
    }
  }
  return -1;
}


// 0x102d0b40  (ghidra: FUN_102d0b40)  [range]
int functions_HelperFunctions_102d0b40(void)

{
  if ((p_D2Common_DAT_6fdefa58 != 0) && (DAT_103d6014 <= *(uint *)(p_D2Common_DAT_6fdefa58 + 0x13c))) {
    if ((uint)(*(int *)(p_D2Common_DAT_6fdefa58 + 0x148) + *(int *)(p_D2Common_DAT_6fdefa58 + 0x150)) <= DAT_103d6014) {
      return (DAT_103d6014 - *(int *)(p_D2Common_DAT_6fdefa58 + 0x148)) - *(int *)(p_D2Common_DAT_6fdefa58 + 0x150);
    }
  }
  return -1;
}


// 0x102d0b80  (ghidra: FUN_102d0b80)  [range]
int __fastcall functions_HelperFunctions_102d0b80(int param_1)

{
  if (p_D2Common_DAT_6fdefa58 == 0) {
    return -1;
  }
  return *(int *)(p_D2Common_DAT_6fdefa58 + 0x150) + *(int *)(p_D2Common_DAT_6fdefa58 + 0x148) + param_1;
}


// 0x102d0ba0  (ghidra: FUN_102d0ba0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0ba0(int *param_1)

{
  uint32_t uVar1;
  uint64_t uVar2;
  uint32_t local_8;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 4)) && ((int *)param_1[5] != (int *)0x0)) &&
     (*(int *)param_1[5] == 2)) {
    uVar2 = D2Common_10744((int)param_1,0x7f);
    if (((int)uVar2 == 0) && (uVar2 = D2Common_10744((int)param_1,0x89), (int)uVar2 == 0)) {
      return 0xffffffff;
    }
    uVar2 = D2Common_10695(param_1[1]);
    if ((int)uVar2 != 0) {
      local_8 = CONCAT13(0x20,*(uint32_t *)((int)uVar2 + 0x80));
      uVar1 = D2Common_10814(local_8);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x102d0c20  (ghidra: FUN_102d0c20)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0c20(int *param_1)

{
  uint32_t uVar1;
  uint64_t uVar2;
  uint32_t local_8;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 4)) && ((int *)param_1[5] != (int *)0x0)) &&
     (*(int *)param_1[5] == 2)) {
    uVar2 = D2Common_10744((int)param_1,0x14);
    if (((int)uVar2 == 0) && (uVar2 = D2Common_10744((int)param_1,0x4a), (int)uVar2 == 0)) {
      return 0xffffffff;
    }
    uVar2 = D2Common_10695(param_1[1]);
    if ((int)uVar2 != 0) {
      local_8 = CONCAT13(0x73,*(uint32_t *)((int)uVar2 + 0x80));
      uVar1 = D2Common_10814(local_8);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x102d0ca0  (ghidra: FUN_102d0ca0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0ca0(int param_1,int *param_2,uint32_t param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
     ((param_2[5] != 0 &&
      (puVar1 = *(uint **)(param_2[5] + 0x10 + (uint)*(byte *)(param_1 + 0x6d) * 4),
      puVar1 != (uint *)0x0)))) {
    switch(param_3) {
    case 0:
      return 1;
    case 1:
      uVar2 = D2Common_10174(puVar1,7,0);
      return uVar2;
    case 2:
      uVar2 = D2Common_10174(puVar1,0xf,0);
      return uVar2;
    case 3:
      uVar2 = D2Common_10174(puVar1,0x17,0);
      return uVar2;
    case 4:
      uVar2 = D2Common_10174(puVar1,0x1c,0);
      return uVar2;
    }
  }
  return 0;
}


// 0x102d0d30  (ghidra: FUN_102d0d30)  [range]
int __fastcall functions_HelperFunctions_102d0d30(int param_1,int param_2)

{
  int iVar1;
  uint32_t in_XMM2_Da;
  uint32_t in_XMM2_Db;
  double dVar2;
  
  if ((double)CONCAT44(in_XMM2_Db,in_XMM2_Da) != 0.0) {
    iVar1 = param_2 - param_1;
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        dVar2 = ceil((double)-iVar1 / (double)CONCAT44(in_XMM2_Db,in_XMM2_Da));
        if (param_2 <= param_1 - (int)dVar2) {
          return param_1 - (int)dVar2;
        }
      }
    }
    else {
      dVar2 = ceil((double)iVar1 / (double)CONCAT44(in_XMM2_Db,in_XMM2_Da));
      if ((int)dVar2 + param_1 <= param_2) {
        return (int)dVar2 + param_1;
      }
    }
  }
  return param_2;
}


// 0x102d0dd0  (ghidra: FUN_102d0dd0)  [range]
void __fastcall functions_HelperFunctions_102d0dd0(int param_1,uint16_t param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint32_t *puVar3;
  uint *puVar4;
  uint64_t uVar5;
  int local_c;
  
  if (param_1 != 0) {
    puVar3 = (uint32_t *)(param_1 + 0x1120);
    local_c = 0x80;
    do {
      puVar1 = (uint *)*puVar3;
      if (puVar1 != (uint *)0x0) {
        iVar2 = *(int *)(puVar1[5] + 0x9c);
        puVar4 = param_3;
        if (param_3 == (uint *)0x0) {
          puVar4 = puVar1;
        }
        if (iVar2 != 0) {
          if (0 < param_4) {
            uVar5 = D2Common_10331((int *)puVar1);
            uVar5 = D2Common_10826((int)uVar5);
            if ((int)uVar5 != param_4) goto LAB_102d0e35;
          }
          functions_HelperFunctions_102d0e50(iVar2,param_2,puVar4);
        }
      }
LAB_102d0e35:
      puVar3 = puVar3 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


// 0x102d0e50  (ghidra: FUN_102d0e50)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0e50(int param_1,uint16_t param_2,uint *param_3)

{
  uint uVar1;
  uint8_t *_Memory;
  
  if ((((param_1 != 0) && (param_3 != (uint *)0x0)) && (*param_3 < 0xf0)) &&
     (*(int *)(param_1 + 4) == 4)) {
    _Memory = malloc(8);
    if (_Memory != (uint8_t *)0x0) {
      _Memory[1] = (char)*param_3 + -0x10;
      uVar1 = param_3[3];
      *_Memory = 0x2c;
      *(uint *)(_Memory + 2) = uVar1;
      *(uint16_t *)(_Memory + 6) = param_2;
      sub_102ecd00(param_1,_Memory,8);
      free(_Memory);
      return 1;
    }
  }
  return 0;
}


// 0x102d0ed0  (ghidra: FUN_102d0ed0)  [range]
void __fastcall functions_HelperFunctions_102d0ed0(uint *param_1)

{
  int iVar1;
  
  if (((param_1 != (uint *)0x0) && (param_1[5] != 0)) &&
     (iVar1 = *(int *)(param_1[5] + 0x9c), iVar1 != 0)) {
    switch(param_1[1]) {
    case 0:
      functions_HelperFunctions_102d0e50(iVar1,0xb8c,param_1);
      return;
    case 1:
      functions_HelperFunctions_102d0e50(iVar1,0xcc4,param_1);
      return;
    case 2:
      functions_HelperFunctions_102d0e50(iVar1,0xc28,param_1);
      return;
    case 3:
      functions_HelperFunctions_102d0e50(iVar1,0xc76,param_1);
      return;
    case 4:
      functions_HelperFunctions_102d0e50(iVar1,0xbda,param_1);
      return;
    case 5:
      functions_HelperFunctions_102d0e50(iVar1,0xd60,param_1);
      return;
    case 6:
      functions_HelperFunctions_102d0e50(iVar1,0xd12,param_1);
    }
  }
  return;
}


// 0x102d0fa0  (ghidra: FUN_102d0fa0)  [range]
void functions_HelperFunctions_102d0fa0(int reg_ECX,int reg_EDX)

{
  D2Lang_10003(reg_ECX + reg_EDX);
  return;
}


// 0x102d0fb0  [range]
uint __fastcall D2Lang_10011_102d0fb0(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (p_D2Lang_10011_102d0fb0 == (FARPROC)0x0) {
    iVar1 = sub_GameVersionIndex_10253fc0();
    p_D2Lang_10011_102d0fb0 = sub_GetDllOffset_102f10f0(3,*(int *)(&DAT_103c69b0 + iVar1 * 4));
  }
                    /* WARNING: Could not recover jumptable at 0x1028de46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*p_D2Lang_10011_102d0fb0)();
  return uVar2;
}


// 0x102d0fc0  (ghidra: FUN_102d0fc0)  [range]
int __fastcall functions_HelperFunctions_102d0fc0(int param_1)

{
  int iVar1;
  
  iVar1 = functions_HelperFunctions_102ce660(0x3c7);
  return (uint)*(ushort *)(iVar1 + 0x86) + param_1;
}


// 0x102d0fe0  (ghidra: FUN_102d0fe0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d0fe0(int param_1)

{
  if (((param_1 != 0x98) && (param_1 != 0x99)) && (param_1 != 0xff)) {
    return 0;
  }
  return 1;
}


// 0x102d1010  (ghidra: FUN_102d1010)  [range]
void functions_HelperFunctions_102d1010(int *reg_ECX,int reg_EDX)

{
  uint64_t uVar1;
  
  uVar1 = D2Common_10871((int)reg_ECX,reg_EDX);
  if ((void *)uVar1 != (void *)0x0) {
    D2Common_11108((void *)uVar1);
    D2Common_10158(reg_ECX);
  }
  return;
}


// 0x102d1030  (ghidra: FUN_102d1030)  [range]
void __fastcall functions_HelperFunctions_102d1030(uint32_t param_1,int param_2)

{
  if (param_2 != 0) {
    functions_HelperFunctions_102d1010(param_1,0x10);
    functions_HelperFunctions_102d1010(param_1,0xbc);
    functions_HelperFunctions_102d1010(param_1,0x1f);
    functions_HelperFunctions_102d1010(param_1,0x1a);
    functions_HelperFunctions_102d1010(param_1,0x20);
    functions_HelperFunctions_102d1010(param_1,0x33);
    functions_HelperFunctions_102d1010(param_1,0x8b);
    functions_HelperFunctions_102d1010(param_1,0x8c);
    functions_HelperFunctions_102d1010(param_1,0x9f);
    functions_HelperFunctions_102d1010(param_1,0x9d);
    functions_HelperFunctions_102d1010(param_1,0x1e);
    functions_HelperFunctions_102d1010(param_1,0x58);
    functions_HelperFunctions_102d1010(param_1,0x14);
    functions_HelperFunctions_102d1010(param_1,0xe);
    functions_HelperFunctions_102d1010(param_1,0x97);
    functions_HelperFunctions_102d1010(param_1,0x9e);
    functions_HelperFunctions_102d1010(param_1,0x65);
    functions_HelperFunctions_102d1010(param_1,0xe9);
    functions_HelperFunctions_102d1010(param_1,0x26);
    functions_HelperFunctions_102d1010(param_1,0xb3);
    functions_HelperFunctions_102d1010(param_1,0xb2);
    functions_HelperFunctions_102d1010(param_1,0x80);
    functions_HelperFunctions_102d1010(param_1,0x81);
    functions_HelperFunctions_102d1010(param_1,0x89);
    functions_HelperFunctions_102d1010(param_1,0x87);
    functions_HelperFunctions_102d1010(param_1,0x84);
    functions_HelperFunctions_102d1010(param_1,0x83);
    functions_HelperFunctions_102d1010(param_1,0x82);
    functions_HelperFunctions_102d1010(param_1,0x85);
    functions_HelperFunctions_102d1010(param_1,0x86);
    functions_HelperFunctions_102d1010(param_1,0x88);
    functions_HelperFunctions_102d1010(param_1,0xb0);
  }
  functions_HelperFunctions_102d1010(param_1,0x59);
  functions_HelperFunctions_102d1010(param_1,0x3e);
  functions_HelperFunctions_102d1010(param_1,1);
  functions_HelperFunctions_102d1010(param_1,0xb);
  functions_HelperFunctions_102d1010(param_1,0x72);
  return;
}


// 0x102d1200  (ghidra: FUN_102d1200)  [range]
uint32_t __fastcall functions_HelperFunctions_102d1200(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((iVar1 != 0x10f) && (iVar1 != 0x152)) && (iVar1 != 0x167)) &&
     (((iVar1 != 0x420 && (iVar1 != 0x230)) && (iVar1 != 0x231)))) {
    return 0;
  }
  return 1;
}


// 0x102d1240  (ghidra: FUN_102d1240)  [range]
uint32_t functions_HelperFunctions_102d1240(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint unused_ECX;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  ulonglong uVar12;
  
  uVar10 = D2Common_10705(param_1);
  if ((int)uVar10 == 0) {
    return 0;
  }
  uVar10 = D2Common_10695(param_1[1]);
  iVar6 = (int)uVar10;
  iVar7 = D2Common_11088_10275940(param_1);
  if (iVar6 == 0) {
    return 0;
  }
  if (iVar7 == 0x4a) {
    return 0;
  }
  if (iVar7 == 0x89) {
    return 0;
  }
  if (iVar7 == 0x94) {
    return 0;
  }
  iVar8 = sub_102384f0();
  if (iVar8 != 0) {
    return 1;
  }
  piVar1 = (int *)(iVar6 + 0x80);
  if (*(char *)(iVar6 + 0x132) != '\0') {
    uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_10378138);
    if ((int)uVar10 == 0) {
      uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_10378130);
      bVar2 = false;
      if ((int)uVar10 == 0) goto LAB_102d12e0;
    }
    bVar2 = true;
LAB_102d12e0:
    uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e170);
    if ((((((int)uVar10 == 0) &&
          (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e168), (int)uVar10 == 0)) &&
         (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e754), (int)uVar10 == 0)) &&
        ((uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e774), (int)uVar10 == 0 &&
         (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e76c), (int)uVar10 == 0)))) &&
       (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e764), (int)uVar10 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e188);
    uVar11 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e75c);
    if ((((int)uVar11 == 0) &&
        (uVar11 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e794), (int)uVar11 == 0)) &&
       ((uVar11 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e78c), (int)uVar11 == 0 &&
        (uVar11 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e784), (int)uVar11 == 0)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((((iVar7 == 0x2a) || (iVar7 == 0x2b)) || (iVar7 == 0x2c)) ||
        ((iVar7 == 0x57 || (iVar7 == 0x30)))) || ((iVar7 == 0x26 || (iVar7 == 0x38)))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (((!bVar2) && (!bVar3)) && (((int)uVar10 == 0 && ((!bVar4 && (!bVar5)))))) {
      return 0;
    }
    return 1;
  }
  uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e77c);
  if ((((int)uVar10 == 0) && (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e198), (int)uVar10 == 0))
     && (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e218), (int)uVar10 == 0)) {
    uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e7b4);
    bVar2 = false;
    if ((int)uVar10 != 0) goto LAB_102d1448;
  }
  else {
LAB_102d1448:
    bVar2 = true;
  }
  uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e178);
  if (((int)uVar10 == 0) && (uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e1b0), (int)uVar10 == 0))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e180);
  uVar9 = (uint32_t)((ulonglong)uVar10 >> 0x20);
  unused_ECX = extraout_ECX;
  if ((int)uVar10 == 0) {
    uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e7ac);
    uVar9 = (uint32_t)((ulonglong)uVar10 >> 0x20);
    unused_ECX = extraout_ECX_00;
    if ((int)uVar10 == 0) {
      uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e7a4);
      uVar9 = (uint32_t)((ulonglong)uVar10 >> 0x20);
      unused_ECX = extraout_ECX_01;
      if ((int)uVar10 == 0) goto LAB_102d14ad;
    }
  }
  uVar10 = CONCAT44(uVar9,1);
LAB_102d14ad:
  if (bVar2) {
    return 0;
  }
  if (bVar3) {
    return 0;
  }
  if ((int)uVar10 != 0) {
    return 0;
  }
  uVar12 = D2Common_10106(unused_ECX,(uint)((ulonglong)uVar10 >> 0x20),param_1);
  iVar6 = (int)uVar12;
  uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e79c);
  if (((int)uVar10 == 0) || (bVar2 = true, iVar6 != 7)) {
    bVar2 = false;
  }
  uVar10 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e828);
  if (((int)uVar10 == 0) || (iVar6 != 7)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((iVar7 == 0xd3) && (iVar6 == 7)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (!bVar3) {
    if (bVar2) {
      return 0;
    }
    if (!bVar4) {
      return 1;
    }
    return 0;
  }
  return 0;
}


// 0x102d1550  (ghidra: FUN_102d1550)  [range]
void functions_HelperFunctions_102d1550(int param_1,uint32_t param_2,uint32_t param_3)

{
  void *this;
  int iVar1;
  
  if (param_1 == 0) {
    *p_D2Game_DAT_6fd31c08_1028cba0 = 0xffffffff;
    return;
  }
  this = *(void **)(param_1 + 0xc);
  *p_D2Game_DAT_6fd31c08_1028cba0 = this;
  iVar1 = *(int *)(param_1 + 4);
  if ((((iVar1 == 0x94) || (iVar1 == 0xb0)) || (iVar1 == 0xb2)) ||
     (((iVar1 == 0xff || (iVar1 == 0x195)) || (iVar1 == 0x201)))) {
    sub_102eea50(this,param_3,param_2,param_1);
  }
  return;
}


// 0x102d15b0  (ghidra: FUN_102d15b0)  [range]
int functions_HelperFunctions_102d15b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0xfd) {
    iVar1 = (uint)(0xfd < param_1) * 2 + -1;
  }
  return iVar1;
}


// 0x102d15e0  (ghidra: FUN_102d15e0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d15e0(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = sub_102ed030();
    return uVar1;
  }
  return 0;
}


// 0x102d1600  (ghidra: FUN_102d1600)  [range]
uint32_t __fastcall functions_HelperFunctions_102d1600(int param_1,int *param_2)

{
  int iVar1;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
     (((param_2[4] != 0xc && (*(int **)(param_2[5] + 0x44) != (int *)0x0)) &&
      ((iVar1 = **(int **)(param_2[5] + 0x44) + 0x24, iVar1 != 0 &&
       (*(int *)(*p_D2Common_DAT_6fde9e1c + 0xbe8) != -0x2a0)))))) {
    sub_102ed5d0(param_1,param_2,iVar1,0,0);
    return 1;
  }
  return 0;
}


// 0x102d1660  (ghidra: FUN_102d1660)  [range]
int __fastcall functions_HelperFunctions_102d1660(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
      ((param_2[4] != 0xc && (param_2[5] != 0)))) && (*(int *)(param_2[5] + 0x44) != 0)) {
    iVar3 = 0;
    iVar2 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xbf0);
    if (0 < iVar2) {
      do {
        if (((iVar3 != 3) || (param_3 != 0)) &&
           (iVar1 = **(int **)(param_2[5] + 0x44) + iVar3 * 0xc, iVar1 != 0)) {
          sub_102ed5d0(param_1,param_2,iVar1,(uint)(iVar3 == 7),(uint)(iVar3 == 7));
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    return iVar4;
  }
  return 0;
}


// 0x102d1700  (ghidra: FUN_102d1700)  [range]
uint32_t __fastcall functions_HelperFunctions_102d1700(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint32_t extraout_ECX;
  int *piVar3;
  
  if (((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
      ((param_2[4] != 0xc && (*(int **)(param_2[5] + 0x44) != (int *)0x0)))) &&
     ((piVar3 = (int *)(**(int **)(param_2[5] + 0x44) + 0x54), piVar3 != (int *)0x0 &&
      (*(int *)(*p_D2Common_DAT_6fde9e1c + 0xbe8) != -0x620)))) {
    for (iVar1 = *piVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      iVar2 = sub_102ecd40();
      if ((iVar2 != 0) && (iVar2 = functions_HelperFunctions_102d1200(iVar2), iVar2 != 0)) {
        return extraout_ECX;
      }
    }
  }
  return 0;
}


// 0x102d1770  (ghidra: FUN_102d1770)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_HelperFunctions_102d1770(int param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint8_t local_10;
  uint32_t local_f;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) {
    uVar2 = D2Common_11017((int *)param_2[0x18]);
    iVar1 = (int)uVar2;
    if (((iVar1 != 0) && (uVar2 = D2Common_10331(param_2), (int)uVar2 != 0)) &&
       ((*(int *)(param_2[5] + 0x9c) != 0 && (param_2[0x18] != 0)))) {
      *(uint32_t *)(*(int *)(iVar1 + 0x14) + 0x14) = 0;
      local_f = *(uint32_t *)(iVar1 + 0xc);
      local_10 = 0x17;
      sub_102e1ac0(&local_10);
      D2Common_10466((int *)param_2[0x18],(int *)0x0);
    }
  }
  return;
}


// 0x102d1800  (ghidra: FUN_102d1800)  [range]
uint32_t __fastcall functions_HelperFunctions_102d1800(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint32_t extraout_var;
  void *this;
  uint64_t uVar5;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 0)) &&
     ((iVar3 = functions_HelperFunctions_102d1700(param_1,param_2), iVar3 != 0 && (*(int *)(iVar3 + 0x60) != 0)))) {
    iVar1 = param_2[0x1b];
    *(uint16_t *)(param_2 + 0x1b) = 0;
    uVar5 = D2Common_11017((int *)param_2[0x18]);
    if ((int)uVar5 != 0) {
      functions_HelperFunctions_102d1770(param_1,param_2);
    }
    piVar4 = (int *)D2Common_10460(*(int **)(iVar3 + 0x60));
    while (piVar4 != (int *)0x0) {
      cVar2 = sub_102d4390((int)piVar4);
      uVar5 = D2Common_10464(piVar4);
      piVar4 = (int *)uVar5;
      if (CONCAT31(extraout_var,cVar2) != 0) {
        sub_102ecfa0(this,CONCAT31(extraout_var,cVar2),iVar3,param_1,param_2);
        functions_HelperFunctions_102d1770(param_1,param_2);
      }
    }
    *(short *)(param_2 + 0x1b) = (short)iVar1;
    return 1;
  }
  return 0;
}


// 0x102d18c0  (ghidra: FUN_102d18c0)  [range]
int __fastcall functions_HelperFunctions_102d18c0(int *param_1,int param_2)

{
  int iVar1;
  uint32_t *puVar2;
  int *piVar3;
  int extraout_ECX;
  int *extraout_EDX;
  int *piVar4;
  int iVar5;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar5 = -1;
    puVar2 = (uint32_t *)functions_D2NewFunctions_102cbdc0(&DAT_104e3584,param_1[1]);
    sub_1020faf0(puVar2);
    piVar3 = (int *)sub_1020fae0(extraout_ECX);
    piVar4 = extraout_EDX;
    iVar1 = 0;
    if (extraout_EDX != piVar3) {
      while (iVar5 = iVar1, param_2 != *piVar4) {
        piVar4 = piVar4 + 1;
        iVar1 = iVar5 + 1;
        if (piVar4 == piVar3) {
          return -1;
        }
      }
    }
    return iVar5;
  }
  return -1;
}


// 0x102d1920  (ghidra: FUN_102d1920)  [range]
uint32_t functions_HelperFunctions_102d1920(int param_1)

{
  if ((((param_1 != 0x96) && (param_1 != 0xc6)) && (param_1 != 0xfc)) &&
     ((param_1 != 0x203 && (param_1 != 0x16f)))) {
    return 0;
  }
  return 1;
}


// 0x102d1960  (ghidra: FUN_102d1960)  [range]
LPWSTR __fastcall functions_HelperFunctions_102d1960(int *param_1,int param_2)

{
  int iVar1;
  LPWSTR pWVar2;
  int *extraout_ECX;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      if ((LPCSTR)param_1[5] != (LPCSTR)0x0) {
        pWVar2 = sub_102376c0((LPCSTR)param_1[5]);
        return pWVar2;
      }
    }
    else if (iVar1 == 1) {
      iVar1 = param_1[5];
      if (iVar1 != 0) {
        piVar3 = param_1;
        if ((param_2 != 0) && ((*(byte *)(iVar1 + 0x16) & 2) != 0)) {
          iVar1 = D2Common_10038((uint)*(ushort *)(iVar1 + 0x26));
          piVar3 = extraout_ECX;
          if (iVar1 != 0) {
            pWVar2 = (LPWSTR)D2Lang_10003(CONCAT22((short)((uint)extraout_ECX >> 0x10),
                                                   *(uint16_t *)(iVar1 + 2)));
            return pWVar2;
          }
        }
        if (*(int *)param_1[5] != 0) {
          pWVar2 = (LPWSTR)D2Lang_10003(CONCAT22((short)((uint)piVar3 >> 0x10),
                                                 *(uint16_t *)(*(int *)param_1[5] + 6)));
          return pWVar2;
        }
      }
    }
    else if ((iVar1 == 2) && (param_1[5] != 0)) {
      iVar1 = D2Common_10688(param_1[1]);
      if (iVar1 != 0) {
        return (LPWSTR)(iVar1 + 0x40);
      }
    }
  }
  return (LPWSTR)0x0;
}


// 0x102d19e0  (ghidra: FUN_102d19e0)  [range]
int __fastcall functions_HelperFunctions_102d19e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar4 = 0;
    piVar3 = (int *)(param_2 + 0x1120);
    iVar2 = 0x80;
    do {
      if (((*piVar3 != 0) && (iVar1 = *(int *)(*piVar3 + 0x14), iVar1 != 0)) &&
         (iVar1 = *(int *)(iVar1 + 0x9c), *(int *)(iVar1 + 4) == 4)) {
        sub_6fc9b0a0(param_2,(int *)param_1,iVar1);
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return iVar4;
  }
  return 0;
}


// 0x102d1a50  (ghidra: FUN_102d1a50)  [range]
uint __fastcall functions_HelperFunctions_102d1a50(int param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    return *(uint *)(param_1 + 0x1b24 + (param_2 >> 5) * 4) &
           *(uint *)(*p_D2Game_DAT_6fd18be0 + (param_2 & 0x1f) * 4);
  }
  return 0;
}


// 0x102d1a80  (ghidra: FUN_102d1a80)  [range]
uint64_t __fastcall functions_HelperFunctions_102d1a80(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar3 = param_2 >> 5;
  uVar2 = *(uint *)(*p_D2Game_DAT_6fd18be0 + (param_2 & 0x1f) * 4);
  if (param_3 != 0) {
    puVar1 = (uint *)(param_1 + 0x1b24 + uVar3 * 4);
    *puVar1 = *puVar1 | uVar2;
    return CONCAT44(uVar3,1);
  }
  puVar1 = (uint *)(param_1 + 0x1b24 + uVar3 * 4);
  *puVar1 = *puVar1 & ~uVar2;
  return CONCAT44(uVar3,1);
}


// 0x102d1ad0  (ghidra: FUN_102d1ad0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * __fastcall functions_HelperFunctions_102d1ad0(uint32_t param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint64_t uVar6;
  int local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_c = 0;
  uVar6 = D2Common_10331(param_2);
  if ((uint *)uVar6 == (uint *)0x0) {
    return (int *)0x0;
  }
  D2Common_10383((uint *)uVar6,&local_10,&local_c);
  piVar4 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = 0;
  iVar5 = 999999;
  uVar3 = local_c;
  if (0 < (int)local_c) {
    do {
      for (piVar1 = *(int **)(*(int *)(local_10 + local_18 * 4) + 0x74); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[0x3a]) {
        if ((((piVar1 != param_2) && (piVar1[1] == 0xfe)) && (*piVar1 == 2)) &&
           (iVar2 = D2Common_10522(param_2,piVar1), piVar4 = local_14, iVar2 < iVar5)) {
          piVar4 = piVar1;
          iVar5 = iVar2;
          local_14 = piVar1;
        }
        uVar3 = local_c;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar3);
  }
  return piVar4;
}


// 0x102d1ba0  (ghidra: FUN_102d1ba0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall
functions_HelperFunctions_102d1ba0(int param_1,int *param_2,int *param_3,uint32_t *param_4,int *param_5,
            uint32_t *param_6,int *param_7,uint32_t *param_8,int *param_9)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint64_t uVar9;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  uVar8 = D2Common_10331(param_2);
  puVar2 = (uint *)uVar8;
  if (puVar2 != (uint *)0x0) {
    D2Common_10383(puVar2,&local_14,&local_10);
    local_18 = 0;
    local_c = 0;
    uVar9 = D2Common_10826((int)puVar2);
    uVar3 = D2Common_10459((int)uVar9);
    uVar8 = D2Common_11010(*(int *)(param_1 + 0xbc + uVar3 * 4),*param_3,param_3[1]);
    if ((uint *)uVar8 != (uint *)0x0) {
      D2Common_10383((uint *)uVar8,&local_18,&local_c);
      iVar7 = 999999;
      local_24 = 999999;
      local_20 = 0;
      iVar6 = 999999;
      local_1c = 999999;
      uVar3 = local_10;
      if (0 < (int)(local_c + local_10)) {
        do {
          uVar4 = local_14;
          iVar5 = local_20;
          if ((int)uVar3 <= local_20) {
            uVar4 = local_18;
            iVar6 = local_1c;
            iVar5 = local_20 - uVar3;
          }
          for (piVar1 = *(int **)(*(int *)(uVar4 + iVar5 * 4) + 0x74); piVar1 != (int *)0x0;
              piVar1 = (int *)piVar1[0x3a]) {
            if ((piVar1 != param_2) && (*piVar1 == 2)) {
              iVar5 = piVar1[1];
              if (iVar5 == 0x265) {
                iVar5 = D2Common_10522(param_2,piVar1);
                iVar6 = local_1c;
                if (iVar5 < local_24) {
                  *param_4 = piVar1;
                  *param_5 = iVar5;
                  local_24 = iVar5;
                }
              }
              else if (iVar5 == 0x266) {
                iVar5 = D2Common_10522(param_2,piVar1);
                iVar6 = local_1c;
                if (iVar5 < iVar7) {
                  *param_6 = piVar1;
                  *param_7 = iVar5;
                  iVar7 = iVar5;
                }
              }
              else if ((iVar5 == 0x267) &&
                      (iVar5 = D2Common_10522(param_2,piVar1), iVar6 = local_1c, iVar5 < local_1c))
              {
                *param_8 = piVar1;
                *param_9 = iVar5;
                iVar6 = iVar5;
                local_1c = iVar5;
              }
            }
            uVar3 = local_10;
          }
          local_20 = local_20 + 1;
        } while (local_20 < (int)(local_c + uVar3));
        if ((local_24 < iVar7) && (local_24 < iVar6)) {
          return CONCAT44(uVar3,*param_4);
        }
        if (iVar7 < iVar6) {
          return CONCAT44(uVar3,*param_6);
        }
      }
      return CONCAT44(uVar3,*param_8);
    }
  }
  return uVar8 & 0xffffffff00000000;
}


// 0x102d1d90  (ghidra: FUN_102d1d90)  [range]
uint32_t __fastcall functions_HelperFunctions_102d1d90(uint32_t param_1)

{
  switch(param_1) {
  case 0x20:
    return 4;
  default:
    return 0;
  case 0x46:
    return 1;
  case 0x4b:
    return 5;
  case 0x50:
    return 2;
  case 0x55:
    return 6;
  case 0x59:
    return 3;
  case 0x5e:
    return 7;
  case 0xde:
    return 0xe;
  case 0xe2:
    return 0xd;
  case 0xe3:
    return 8;
  case 0xe7:
    return 0xf;
  case 0xec:
    return 0xb;
  case 0xed:
    return 9;
  case 0xf1:
    return 0x10;
  case 0xf6:
    return 0xc;
  case 0xf7:
    return 10;
  case 0x10c:
    return 0x11;
  case 0x117:
    return 0x12;
  }
}


// 0x102d1f60  (ghidra: FUN_102d1f60)  [range]
uint32_t __fastcall functions_HelperFunctions_102d1f60(uint32_t param_1)

{
  switch(param_1) {
  case 1:
    return 0x46;
  case 2:
    return 0x50;
  case 3:
    return 0x59;
  case 4:
    return 0x20;
  case 5:
    return 0x4b;
  case 6:
    return 0x55;
  case 7:
    return 0x5e;
  case 8:
    return 0xe3;
  case 9:
    return 0xed;
  case 10:
    return 0xf7;
  case 0xb:
    return 0xec;
  case 0xc:
    return 0xf6;
  case 0xd:
    return 0xe2;
  case 0xe:
    return 0xde;
  case 0xf:
    return 0xe7;
  case 0x10:
    return 0xf1;
  case 0x11:
    return 0x10c;
  case 0x12:
    return 0x117;
  default:
    return 0;
  }
}


// 0x102d2030  (ghidra: FUN_102d2030)  [range]
uint32_t __fastcall functions_HelperFunctions_102d2030(int param_1,int param_2,uint32_t *param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  if ((param_1 != 0) && (-1 < param_2)) {
    iVar2 = D2Common_10749(param_2);
    iVar1 = *(int *)(param_1 + 4);
    uVar3 = 0;
    if (*(int *)(iVar2 + 0x68) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x48);
      *param_3 = 0;
    }
    if (*(int *)(iVar2 + 0x6c) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x4c);
      *param_3 = 1;
    }
    if (*(int *)(iVar2 + 0x70) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x50);
      *param_3 = 2;
    }
    if (*(int *)(iVar2 + 0x74) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x54);
      *param_3 = 3;
    }
    if (*(int *)(iVar2 + 0x78) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x58);
      *param_3 = 4;
    }
    if (*(int *)(iVar2 + 0x7c) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x5c);
      *param_3 = 5;
    }
    if (*(int *)(iVar2 + 0x80) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 0x60);
      *param_3 = 6;
    }
    if (*(int *)(iVar2 + 0x84) == iVar1) {
      uVar3 = *(uint32_t *)(iVar2 + 100);
      *param_3 = 7;
    }
    return uVar3;
  }
  return 0;
}


// 0x102d20e0  (ghidra: FUN_102d20e0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d20e0(int param_1,int *param_2)

{
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 == 2)) && (param_2[5] != 0)) {
    D2Common_11090((uint *)param_2,1);
    sub_6fcaea80(param_1,param_2,1,
                 *(int *)(param_1 + 0xa8) + 1 + (*(uint *)(*(int *)param_2[5] + 0xdd) >> 8),0,0,0);
    D2Common_10408(param_2);
    return 1;
  }
  return 0;
}


// 0x102d2140  (ghidra: FUN_102d2140)  [range]
void __fastcall functions_HelperFunctions_102d2140(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    uVar1 = param_1[0x33];
    if (uVar1 != 0) {
      iVar2 = 1;
      if (uVar1 >> 0x14 < 0xfff) {
        iVar2 = (uVar1 >> 0x14) + 1;
      }
      uVar1 = functions_HelperFunctions_102d21b0((uVar1 & 0xfffff) + iVar2 * 0x100000);
      param_1[0x33] = (uVar1 & 0xfffff) + iVar2 * 0x100000;
      return;
    }
    uVar1 = functions_HelperFunctions_102d21a0(*param_1,param_1[3]);
    param_1[0x33] = uVar1 & 0xfffff;
  }
  return;
}


// 0x102d21a0  (ghidra: FUN_102d21a0)  [range]
uint __fastcall functions_HelperFunctions_102d21a0(int param_1,uint param_2)

{
  return param_2 & 0xfffffff ^ param_1 << 0x1c;
}


// 0x102d21b0  (ghidra: FUN_102d21b0)  [range]
int __fastcall functions_HelperFunctions_102d21b0(int param_1)

{
  return param_1 * 0x6ac690c6;
}


// 0x102d21c0  (ghidra: FUN_102d21c0)  [range]
int __fastcall functions_HelperFunctions_102d21c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_1 >> 0x14 < 0xfff) {
    iVar2 = (param_1 >> 0x14) + 1;
  }
  uVar1 = functions_HelperFunctions_102d21b0((param_1 & 0xfffff) + iVar2 * 0x100000);
  return (uVar1 & 0xfffff) + iVar2 * 0x100000;
}


// 0x102d21f0  (ghidra: FUN_102d21f0)  [range]
uint32_t * __fastcall functions_HelperFunctions_102d21f0(int param_1,uint param_2)

{
  uint32_t *puVar1;
  
  if (param_1 != 0) {
    for (puVar1 = (uint32_t *)D2Common_10947(param_1); puVar1 != (uint32_t *)0x0;
        puVar1 = (uint32_t *)puVar1[1]) {
      if (*(ushort *)*puVar1 == param_2) {
        return puVar1;
      }
    }
  }
  return (uint32_t *)0x0;
}


// 0x102d2220  (ghidra: FUN_102d2220)  [range]
uint32_t __fastcall functions_HelperFunctions_102d2220(int param_1,uint param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  
  iVar1 = functions_HelperFunctions_102ce5a0(param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  puVar2 = functions_HelperFunctions_102d21f0(param_1,param_2);
  if (puVar2 == (uint32_t *)0x0) {
    return 0;
  }
  uVar3 = D2Common_10306(param_1,(int)puVar2,1);
  uVar4 = D2Common_10786(param_1,*(uint *)(iVar1 + 0xc0),param_2,uVar3);
  return (int)uVar4;
}


// 0x102d2270  (ghidra: FUN_102d2270)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t __fastcall functions_HelperFunctions_102d2270(int param_1)

{
  uint local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    return 0;
  }
  local_c = 0;
  D2Common_10607(param_1,&local_c);
  return local_c == 0;
}


// 0x102d22c0  (ghidra: FUN_102d22c0)  [range]
uint32_t __fastcall functions_HelperFunctions_102d22c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  uint64_t uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = **(int **)(param_1 + 0x14);
    if (iVar1 == 0) {
      return 0;
    }
    D2Common_10887((int *)param_1,0x27,(uint)*(ushort *)(iVar1 + 0x154),0);
    D2Common_10887((int *)param_1,0x2b,(uint)*(ushort *)(iVar1 + 0x160),0);
    D2Common_10887((int *)param_1,0x29,(uint)*(ushort *)(iVar1 + 0x15a),0);
    D2Common_10887((int *)param_1,0x2d,(uint)*(ushort *)(iVar1 + 0x166),0);
    D2Common_10887((int *)param_1,0x25,(uint)*(ushort *)(iVar1 + 0x14e),0);
    D2Common_10887((int *)param_1,0x24,(uint)*(ushort *)(iVar1 + 0x148),0);
    if (param_3 != 0) {
      D2Common_10945((int *)param_1,8,0);
    }
  }
  else {
    D2Common_10887((int *)param_1,0x27,200,0);
    D2Common_10887((int *)param_1,0x2b,200,0);
    D2Common_10887((int *)param_1,0x29,200,0);
    D2Common_10887((int *)param_1,0x2d,200,0);
    D2Common_10887((int *)param_1,0x25,200,0);
    D2Common_10887((int *)param_1,0x24,200,0);
    if (param_3 != 0) {
      D2Common_10945((int *)param_1,8,1);
    }
    uVar3 = D2Common_10871(param_1,2);
    pvVar2 = (void *)uVar3;
    if (pvVar2 != (void *)0x0) {
      D2Common_11111(param_1,pvVar2);
      D2Common_11108_102a3820(pvVar2);
    }
    uVar3 = D2Common_10871(param_1,0x3e);
    pvVar2 = (void *)uVar3;
    if (pvVar2 != (void *)0x0) {
      D2Common_11111(param_1,pvVar2);
      D2Common_11108_102a3820(pvVar2);
      D2Common_10158((int *)param_1);
      return 1;
    }
  }
  D2Common_10158((int *)param_1);
  return 1;
}


// 0x102d2430  (ghidra: FUN_102d2430)  [range]
uint32_t __fastcall functions_HelperFunctions_102d2430(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  if (param_2 == 0) {
    if ((uVar1 & 2) != 0) {
      *(uint *)(param_1 + 0xc4) = uVar1 & 0xfffffff1;
      D2Common_10158((int *)param_1);
      return 1;
    }
  }
  else if ((uVar1 & 2) == 0) {
    *(uint *)(param_1 + 0xc4) = uVar1 | 0xe;
    D2Common_10158((int *)param_1);
    return 1;
  }
  return 0;
}


// 0x102d2480  (ghidra: FUN_102d2480)  [range]
uint32_t __fastcall
functions_HelperFunctions_102d2480(int param_1,int param_2,int param_3,uint32_t reg_ESI,uint32_t reg_EDI)

{
  void *pvVar1;
  uint *puVar2;
  uint64_t uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = D2Common_10871(param_2,0x92);
    pvVar1 = (void *)uVar3;
    if (param_3 == 0) {
      if (pvVar1 != (void *)0x0) {
        D2Common_11111_102a37f0(param_2,pvVar1);
        D2Common_11108(pvVar1);
        D2Common_10993((int *)param_2,reg_EDI,reg_ESI);
        D2Common_10945((int *)param_2,0x92,0);
        D2Common_10158((int *)param_2);
        return 1;
      }
    }
    else if (pvVar1 == (void *)0x0) {
      puVar2 = D2Common_11013(*(uint *)(param_1 + 0x1c),8,0,*(uint32_t *)param_2,
                              *(uint32_t *)(param_2 + 0xc));
      D2Common_10785((int)puVar2,0x92);
      D2Common_10188(puVar2,0x59,-100,0);
      D2Common_10807(param_2,puVar2,1);
      D2Common_10911((int)puVar2,0x1027dd70);
      D2Common_10945((int *)param_2,0x92,1);
      D2Common_10158((int *)param_2);
    }
  }
  return 0;
}


// 0x102d2540  (ghidra: FUN_102d2540)  [range]
void __fastcall functions_HelperFunctions_102d2540(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 0)) && (param_1[5] != 0)) {
    D2Common_10945(param_1,0xd3,0);
    D2Common_10945(param_1,0xd2,0);
    D2Common_10945(param_1,0xed,0);
    D2Common_10945(param_1,0xd1,0);
    D2Common_10945(param_1,0xe2,0);
    D2Common_10945(param_1,0xda,0);
    D2Common_10945(param_1,0xe3,0);
    D2Common_10945(param_1,0xea,0);
    D2Common_10945(param_1,0xef,0);
    D2Common_10945(param_1,0xf0,0);
    iVar1 = param_1[5];
    uVar2 = *(uint *)(iVar1 + 0x1bc);
    if (((uVar2 & 1) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 1) != 0)) {
      D2Common_10945(param_1,0xd3,1);
      return;
    }
    if (((uVar2 & 4) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 4) != 0)) {
      D2Common_10945(param_1,0xed,1);
      return;
    }
    if (((uVar2 & 0x20) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 0x20) != 0)) {
      D2Common_10945(param_1,0xe2,1);
      return;
    }
    if (((uVar2 & 0x40) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 0x40) != 0)) {
      D2Common_10945(param_1,0xe3,1);
      return;
    }
    if (((uVar2 & 2) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 2) != 0)) {
      D2Common_10945(param_1,0xd2,1);
      return;
    }
    if (((uVar2 & 8) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 8) != 0)) {
      D2Common_10945(param_1,0xd1,1);
      return;
    }
    if (((uVar2 & 0x10) != 0) && ((*(byte *)(iVar1 + 0x1b0) & 0x10) != 0)) {
      D2Common_10945(param_1,0xda,1);
      return;
    }
    if (((char)uVar2 < '\0') && ((*(byte *)(iVar1 + 0x1b0) & 0x80) != 0)) {
      D2Common_10945(param_1,0xea,1);
      return;
    }
    if (((uVar2 & 0x200) != 0) && ((*(uint *)(iVar1 + 0x1b0) & 0x200) != 0)) {
      D2Common_10945(param_1,0xf0,1);
      return;
    }
    if (((uVar2 & 0x100) != 0) && ((*(uint *)(iVar1 + 0x1b0) & 0x100) != 0)) {
      D2Common_10945(param_1,0xef,1);
    }
  }
  return;
}


// 0x102d2720  (ghidra: FUN_102d2720)  [range]
uint32_t __fastcall functions_HelperFunctions_102d2720(int param_1,int param_2)

{
  if (param_1 == 0x7b) {
    if (param_2 == 0x1d8) {
      return 1;
    }
  }
  else if ((param_1 == 0x1d8) && (param_2 == 0x7b)) {
    return 1;
  }
  return 0;
}


// 0x102d2750  (ghidra: FUN_102d2750)  [range]
void __fastcall functions_HelperFunctions_102d2750(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = D2gfx_10013();
  if (uVar2 == 0) {
    uVar2 = D2Common_10651(param_1);
    uVar3 = D2Common_11142(param_1);
    iVar1 = *p_D2Client_DAT_6fbc995c;
    *param_2 = (uVar2 - *p_D2Client_DAT_6fbc9960) + *p_D2Client_DAT_6fbcc418;
    *param_3 = (uVar3 - iVar1) + 8;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}


// 0x102d27c0  (ghidra: FUN_102d27c0)  [range]
bool __fastcall functions_HelperFunctions_102d27c0(uint32_t *param_1,int *reg_EDX)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != (uint32_t *)0x0) && ((ushort *)*param_1 != (ushort *)0x0)) {
    uVar2 = (uint)*(ushort *)*param_1;
    switch(uVar2) {
    case 0:
      uVar2 = D2Common_10889(reg_EDX);
      return SUB41(uVar2,0);
    default:
      iVar1 = functions_HelperFunctions_102ce5a0(uVar2);
      return *(char *)(iVar1 + 0x14) != '\x01';
    case 0x6b:
    case 0x83:
    case 0x8e:
    case 0x96:
    case 0xf2:
      return true;
    }
  }
  return false;
}


// 0x102d2910  (ghidra: FUN_102d2910)  [range]
uint32_t functions_HelperFunctions_102d2910(int reg_ECX)

{
  int *piVar1;
  uint64_t uVar2;
  
  uVar2 = D2Common_10973(reg_ECX,10,0);
  piVar1 = (int *)uVar2;
  if ((0 < (int)(int *)uVar2) &&
     ((piVar1 = p_D2Client_DAT_6fbcc3e8, *p_D2Client_DAT_6fbcc3e8 != 0 || (piVar1 = p_D2Client_DAT_6fbcc3ec, *p_D2Client_DAT_6fbcc3ec != 0)))) {
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}


// 0x102d2940  (ghidra: FUN_102d2940)  [range]
uint __fastcall functions_HelperFunctions_102d2940(int param_1,int *reg_EAX)

{
  int *piVar1;
  uint64_t uVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x60) + 0xc);
    while (piVar1 != (int *)0x0) {
      uVar2 = D2Common_10695(piVar1[1]);
      if (((int)uVar2 != 0) &&
         (uVar2 = functions_D2NewFunctions_102ce500((int *)((int)uVar2 + 0x80),(int *)&DAT_10377484), (int)uVar2 != 0)) {
        reg_EAX = p_D2Client_DAT_6fbaade4;
        if ((*p_D2Client_DAT_6fbaade4 != 0) ||
           (reg_EAX = (int *)piVar1[5], *(char *)((int)reg_EAX + 0x45) == '\0')) {
          return CONCAT31((int3)((uint)reg_EAX >> 8),1);
        }
        break;
      }
      uVar2 = D2Common_10464(piVar1);
      piVar1 = (int *)uVar2;
      reg_EAX = piVar1;
    }
  }
  return (uint)reg_EAX & 0xffffff00;
}


// 0x102d29a0  (ghidra: FUN_102d29a0)  [range]
void functions_HelperFunctions_102d29a0(void)

{
  return;
}


// 0x102d29d0  (ghidra: FUN_102d29d0)  [range]
int __fastcall functions_HelperFunctions_102d29d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint64_t uVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x60) + 0xc);
    while ((piVar2 != (int *)0x0 && (piVar2[5] != 0))) {
      if (*(char *)(piVar2[5] + 0x45) == '\0') {
        uVar3 = D2Common_10695(piVar2[1]);
        if ((int)uVar3 != 0) {
          piVar1 = (int *)((int)uVar3 + 0x80);
          uVar3 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_1037e7ac);
          if (((int)uVar3 != 0) ||
             ((uVar3 = functions_D2NewFunctions_102ce500(piVar1,(int *)&DAT_10378130), (int)uVar3 != 0 &&
              (uVar3 = D2Common_10973((int)piVar2,0x46,0), 0 < (int)uVar3)))) {
            return (int)piVar2;
          }
        }
      }
      uVar3 = D2Common_10464(piVar2);
      piVar2 = (int *)uVar3;
    }
  }
  return 0;
}


// 0x102d2a50  (ghidra: FUN_102d2a50)  [range]
bool __fastcall
functions_HelperFunctions_102d2a50(void *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  double in_XMM0_Qa;
  
  iVar2 = param_4 - param_2;
  iVar3 = param_5 - param_3;
  sub_10218a80(iVar3 * iVar3 + iVar2 * iVar2);
  uVar1 = D2Common_10573(param_1,(int)(((float)iVar2 / (float)in_XMM0_Qa) * (float)(int)param_6 +
                                      (float)param_2),
                         (int)(((float)iVar3 / (float)in_XMM0_Qa) * (float)(int)param_6 +
                              (float)param_3),param_6,0x806);
  return uVar1 != 0;
}


// 0x102d2af0  (ghidra: FUN_102d2af0)  [range]
void __fastcall functions_HelperFunctions_102d2af0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_ECX;
  void *this;
  void *this_00;
  int iVar6;
  uint64_t uVar7;
  longlong lVar8;
  int local_1c;
  int local_18 [3];
  uint local_c [2];
  
  if ((param_2 != 0) && (param_1 != 0)) {
    local_c[0] = *(uint *)(param_2 + 4);
    sub_10228040(&DAT_104e3508,local_18,(int *)local_c);
    piVar2 = (int *)sub_102280a0(&DAT_104e3508,&local_1c);
    bVar1 = sub_1023d8f0(this,piVar2);
    if ((bVar1) &&
       (puVar3 = D2Common_11013(*(uint *)(param_1 + 0x1c),8,0,*(uint32_t *)param_2,
                                *(uint32_t *)(param_2 + 0xc)), puVar3 != (uint *)0x0)) {
      local_c[0] = *(uint *)(param_2 + 4);
      sub_10228040(&DAT_104e34c0,local_18,(int *)local_c);
      piVar2 = (int *)sub_102280a0(&DAT_104e34c0,&local_1c);
      bVar1 = sub_1023d8f0(this_00,piVar2);
      D2Common_10785((int)puVar3,0xf1);
      local_1c = 0;
      if (*(byte *)(param_1 + 0x2628) != 0) {
        local_1c = *(byte *)(param_1 + 0x2628) - 1;
      }
      uVar7 = D2Common_10973(param_2,7,0);
      uVar5 = (uint)uVar7;
      if (param_3 < 1) {
        lVar8 = __alldiv(uVar5 * 3,(uint)CARRY4(uVar5,uVar5 * 2) - ((int)uVar5 >> 0x1f),2,0);
      }
      else {
        uVar4 = 4;
        if (!bVar1) {
          uVar4 = 3;
        }
        lVar8 = __allmul(uVar5,0,uVar4,0);
      }
      local_18[0] = (int)((ulonglong)lVar8 >> 0x20);
      uVar7 = functions_HelperFunctions_102ce840((int)lVar8,100);
      uVar5 = (int)uVar7 * param_3;
      local_c[0] = uVar5 + extraout_ECX;
      iVar6 = ((int)uVar5 >> 0x1f) + local_18[0] + (uint)CARRY4(uVar5,extraout_ECX);
      if ((iVar6 < 0) || ((-1 < iVar6 && ((0 < iVar6 || (0x7fffffff < local_c[0])))))) {
        local_c[0] = 0x7fffffff;
        local_18[1] = 0;
      }
      D2Common_10188(puVar3,0x7f,param_3 * 4,0);
      if (bVar1) {
        iVar6 = param_3 * 7 + local_1c * 2;
        D2Common_10188(puVar3,0x8e,iVar6,0);
        D2Common_10188(puVar3,0x94,iVar6,0);
        D2Common_10188(puVar3,0x90,iVar6,0);
        D2Common_10188(puVar3,0x92,param_3 * 3 + local_1c * 2,0);
        D2Common_10188(puVar3,0x24,local_1c * 3,0);
        D2Common_10188(puVar3,0x6e,local_1c + param_3 * 3,0);
      }
      D2Common_10887((int *)param_2,7,local_c[0],0);
      D2Common_10807(param_2,puVar3,1);
      D2Common_10911((int)puVar3,0x1027dd70);
      D2Common_10158((int *)param_2);
      D2Common_10945((int *)param_2,0xf1,1);
    }
  }
  return;
}


// 0x102d2d30  (ghidra: FUN_102d2d30)  [range]
void __cdecl
functions_HelperFunctions_102d2d30(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
            uint32_t param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12,
            uint32_t param_13,double param_14,double param_15)

{
  double dVar1;
  double *pdVar2;
  uint32_t *puVar3;
  uint32_t in_XMM0_Da;
  uint32_t in_XMM0_Db;
  double dVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint64_t uVar9;
  double local_58 [2];
  uint8_t local_48 [16];
  double local_38 [2];
  double local_28 [2];
  uint8_t local_18 [20];
  
  functions_D2NewFunctions_102ce4b0();
  local_58[0] = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  functions_D2NewFunctions_102ce4b0();
  dVar1 = param_14 * param_14;
  dVar4 = dVar1;
  functions_D2NewFunctions_102ce4b0();
  local_38[0] = dVar4 * (param_15 * param_15 - dVar1) + dVar1;
  if (local_38[0] < 0.0) {
    libm_sse2_sqrt_precise();
  }
  else {
    local_38[0] = SQRT(local_38[0]);
  }
  if (local_58[0] < 0.0) {
    libm_sse2_sqrt_precise();
  }
  functions_D2NewFunctions_102ce460(local_58,(double)CONCAT44(param_7,param_6),(double)CONCAT44(param_9,param_8),
               (double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4));
  pdVar2 = (double *)
           functions_D2NewFunctions_102ce460(local_28,(double)CONCAT44(param_11,param_10),
                        (double)CONCAT44(param_13,param_12),(double)CONCAT44(param_3,param_2),
                        (double)CONCAT44(param_5,param_4));
  uVar9 = functions_D2NewFunctions_102ce490((uint8_t (*) [16])local_28,*pdVar2,pdVar2[1]);
  pdVar2 = (double *)((ulonglong)uVar9 >> 0x20);
  puVar3 = (uint32_t *)uVar9;
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  pdVar2 = (double *)functions_D2NewFunctions_102ce490(&local_48,*pdVar2,pdVar2[1]);
  pdVar2 = (double *)
           functions_D2NewFunctions_102ce430(local_58,*pdVar2,pdVar2[1],(double)CONCAT44(uVar6,uVar5),
                        (double)CONCAT44(uVar8,uVar7));
  pdVar2 = (double *)functions_D2NewFunctions_102ce490((uint8_t (*) [16])local_18,*pdVar2,pdVar2[1]);
  puVar3 = (uint32_t *)
           functions_D2NewFunctions_102ce430(local_38,(double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4)
                        ,*pdVar2,pdVar2[1]);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *param_1 = *puVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  return;
}


// 0x102d2ea0  (ghidra: FUN_102d2ea0)  [range]
void __fastcall functions_HelperFunctions_102d2ea0(int param_1,int *param_2)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar2;
  uint64_t uVar3;
  int local_8;
  
  local_8 = param_1;
  uVar1 = functions_D2NewFunctions_102c5d10(param_2);
  local_8 = 0x20202020;
  uVar1 = uVar1 & 7;
  if (uVar1 == 0) {
    uVar3 = functions_HelperFunctions_102ceb40(0xb0);
    functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
    uVar2 = 0x1b0;
LAB_102d2ed9:
    functions_HelperFunctions_102d1a80(param_1,uVar2,0);
    functions_D2NewFunctions_102c5510(extraout_ECX,param_2,&local_8,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,1,3,
                 param_2);
LAB_102d2f04:
    if (uVar1 == 4) {
      uVar3 = functions_HelperFunctions_102ceb40(0xc0);
      functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
      uVar2 = 0x1c4;
      goto LAB_102d2f8e;
    }
    if (uVar1 == 5) {
      uVar3 = functions_HelperFunctions_102ceb40(0xc3);
      functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
      uVar1 = 0x1d8;
      goto LAB_102d3018;
    }
  }
  else {
    if (uVar1 == 1) {
      uVar3 = functions_HelperFunctions_102ceb40(0xb5);
      functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
      uVar2 = 0x1b1;
      goto LAB_102d2ed9;
    }
    if (uVar1 == 2) {
      uVar3 = functions_HelperFunctions_102ceb40(0xb7);
      functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
      uVar2 = 0x1b4;
      goto LAB_102d2ed9;
    }
    if (uVar1 != 3) goto LAB_102d2f04;
    uVar3 = functions_HelperFunctions_102ceb40(0xb4);
    functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
    uVar2 = 0x1c5;
LAB_102d2f8e:
    functions_HelperFunctions_102d1a80(param_1,uVar2,0);
    functions_D2NewFunctions_102c5510(extraout_ECX_00,param_2,&local_8,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,1,3,
                 param_2);
  }
  if (uVar1 == 6) {
    uVar3 = functions_HelperFunctions_102ceb40(0xc5);
    functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
    uVar1 = 0x1de;
  }
  else {
    if (uVar1 != 7) {
      return;
    }
    uVar3 = functions_HelperFunctions_102ceb40(200);
    functions_D2NewFunctions_102ce4e0((int)uVar3,(uint8_t *)&local_8);
    uVar1 = 0x1e2;
  }
LAB_102d3018:
  functions_HelperFunctions_102d1a80(param_1,uVar1,0);
  functions_D2NewFunctions_102c5510(extraout_ECX_01,param_2,&local_8,7,0x83,(uint32_t *)0x0,(uint32_t *)0x0,1,3,
               param_2);
  return;
}


// 0x102d3050  (ghidra: FUN_102d3050)  [range]
uint32_t __fastcall functions_HelperFunctions_102d3050(int *param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = D2Common_10360(param_1);
  if (uVar1 != 0) {
    uVar2 = sub_102bb8d0((int)param_1,uVar1);
    if ((char)uVar2 != '\0') {
      uVar1 = D2Common_10326(param_1);
      iVar3 = 1;
      iVar4 = 2;
      if (uVar1 != 0) {
        iVar4 = 4;
        iVar3 = 2;
      }
      uVar1 = functions_D2NewFunctions_102c5d10(param_1);
      uVar1 = uVar1 % ((iVar4 - iVar3) + 1U) + iVar3;
      if (0 < (int)uVar1) {
        D2Common_10599(param_1,uVar1);
        return 1;
      }
    }
  }
  return 0;
}


// 0x102d30b0  (ghidra: FUN_102d30b0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint8_t * __fastcall functions_HelperFunctions_102d30b0(uint8_t *param_1,uint param_2,uint32_t reg_EDI)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint64_t uVar7;
  uint8_t auStack_124 [4];
  uint local_120;
  uint8_t *local_11c;
  int *local_118;
  int iStack_114;
  ushort auStack_110 [2];
  int aiStack_10c [64];
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_124;
  local_11c = (uint8_t *)0x0;
  if ((param_1 != (uint8_t *)0x0) &&
     (local_120 = param_2, local_118 = (int *)param_1,
     piVar1 = (int *)D2Common_10061_102776e0(*(int **)(param_1 + 0x60)), piVar1 != (int *)0x0)) {
    memset(auStack_110,0,0x100);
    uVar2 = D2Common_10702((int)param_1,local_120,auStack_110,0x20);
    iVar6 = 0;
    local_120 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar3 = (uint)auStack_110[iVar6 * 4];
        if (uVar3 != 0) {
          iStack_114 = aiStack_10c[iVar6 * 2];
          uVar7 = D2Common_10744((int)piVar1,uVar3);
          if ((int)uVar7 == 0) {
            uVar4 = D2Common_10747(local_118);
            uVar2 = local_120;
            if (((uVar4 != 0) && (uVar3 == 0x74)) &&
               (uVar7 = D2Common_10744((int)piVar1,0x72), uVar2 = local_120, (int)uVar7 != 0)) {
LAB_102d31cf:
              uVar2 = D2Common_10417(piVar1);
              piVar5 = (int *)D2Common_11139((int *)local_118[0x18],((char)uVar2 == '\x04') + 4);
              uVar7 = D2Common_10744((int)piVar1,0x72);
              uVar2 = local_120;
              if ((int)uVar7 == 0) {
                if (piVar5 == (int *)0x0) goto LAB_102d3210;
              }
              else if (piVar5 == (int *)0x0) goto LAB_102d3174;
              if (piVar5 != piVar1) goto LAB_102d3210;
            }
          }
          else {
            if (uVar3 == 0x72) {
              uVar2 = D2Common_10417(piVar1);
              piVar5 = (int *)D2Common_11139((int *)local_118[0x18],((char)uVar2 == '\x04') + 4);
              if (piVar5 != (int *)0x0) {
                uVar2 = local_120;
                if (piVar5 == piVar1) {
                  local_11c = local_11c + iStack_114;
                }
                goto LAB_102d3174;
              }
            }
            else if (uVar3 == 0x74) goto LAB_102d31cf;
LAB_102d3210:
            local_11c = local_11c + iStack_114;
            uVar2 = local_120;
          }
        }
LAB_102d3174:
        iVar6 = iVar6 + 1;
        if ((int)uVar2 <= iVar6) {
          return local_11c;
        }
      } while( true );
    }
  }
  return (uint8_t *)0x0;
}


// 0x102d3240  (ghidra: FUN_102d3240)  [range]
void __fastcall functions_HelperFunctions_102d3240(uint32_t param_1,uint32_t *param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_3 + 0x14) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_3 + 0x14) + 0x28), iVar1 != 0)) {
    *(uint32_t *)(iVar1 + 0x2c) = param_2[3];
    *(uint32_t *)(*(int *)(*(int *)(param_3 + 0x14) + 0x28) + 0x30) = *param_2;
  }
  sub_102ed790(param_2,param_3,param_1);
  return;
}


// 0x102d3280  (ghidra: FUN_102d3280)  [anchor] refs functions/HelperFunctions.cpp
void __fastcall functions_HelperFunctions_102d3280(int param_1,int *param_2)

{
  int iVar1;
  int *pMemory;
  int *piVar2;
  int *piVar3;
  
  if ((((param_2 != (int *)0x0) && (piVar3 = functions_D2NewFunctions_102cb180(param_2,1), piVar3 != (int *)0x0)) &&
      (*piVar3 == 1)) && ((piVar3[5] != 0 && (iVar1 = *(int *)(piVar3[5] + 0x28), iVar1 != 0)))) {
    piVar2 = *(int **)(iVar1 + 0x34);
    piVar3 = (int *)0x0;
    while (pMemory = piVar2, pMemory != (int *)0x0) {
      if (*pMemory == param_2[3]) {
        if (piVar3 == (int *)0x0) {
          *(int *)(iVar1 + 0x34) = pMemory[1];
        }
        else {
          piVar3[1] = pMemory[1];
        }
        Fog_10046(*(void **)(param_1 + 0x1c),pMemory,
                  "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\HelperFunctions.cpp"
                  ,0x13f4,0);
      }
      piVar3 = pMemory;
      piVar2 = (int *)pMemory[1];
    }
  }
  return;
}


// 0x102d3300  (ghidra: FUN_102d3300)  [range]
uint8_t * __fastcall functions_HelperFunctions_102d3300(uint32_t param_1)

{
  functions_HelperFunctions_102d34e0(param_1);
  return &DAT_104e34dc;
}


// 0x102d3320  (ghidra: FUN_102d3320)  [range]
void __fastcall functions_HelperFunctions_102d3320(uint32_t param_1)

{
  uint32_t uVar1;
  void *this;
  uint32_t extraout_ECX;
  
  uVar1 = thunk_FUN_1020fe80(param_1);
  this = (void *)thunk_FUN_1020fe80(extraout_ECX);
  functions_HelperFunctions_102d38a0(this,uVar1);
  return;
}


// 0x102d3340  (ghidra: FUN_102d3340)  [range]
void __fastcall functions_HelperFunctions_102d3340(int *param_1)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  
  pbVar1 = sub_1025f560((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + 1));
  if (pbVar1 == (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (*(int *)(*param_1 + 4) + (int)param_1),2,false);
  }
  return;
}


// 0x102d3370  (ghidra: FUN_102d3370)  [range]
void __fastcall functions_HelperFunctions_102d3370(int param_1)

{
  int iVar1;
  
  *(uint8_t ***)(*(int *)(*(int *)(param_1 + -0x68) + 4) + -0x68 + param_1) =
       std::basic_ofstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  iVar1 = *(int *)(*(int *)(param_1 + -0x68) + 4);
  *(int *)(iVar1 + -0x6c + param_1) = iVar1 + -0x68;
  sub_1025e960((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + -100));
                    /* WARNING: Could not recover jumptable at 0x102d339a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_ostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)(param_1 + -0x60));
  return;
}


// 0x102d33a0  (ghidra: FUN_102d33a0)  [range]
basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __thiscall
functions_HelperFunctions_102d33a0(void *this,uint32_t param_1,uint param_2)

{
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar1;
  uint32_t extraout_ECX;
  bool bVar2;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10314fe9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(uint8_t **)this = &DAT_1037a198;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)((int)this + 0x68));
  local_8 = 0;
  bVar2 = false;
  pbVar1 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)sub_1020fe80((int)this + 4);
  std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_ostream<wchar_t,std::char_traits<wchar_t>_>(this,pbVar1,bVar2);
  local_8 = 1;
  *(uint8_t ***)((int)this + *(int *)(*(int *)this + 4)) =
       std::basic_ofstream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x68;
  sub_1025f660((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)((int)this + 4));
  local_8 = CONCAT31(local_8._1_3_,2);
  pbVar1 = sub_1025f5b0((void *)((int)this + 4),extraout_ECX,param_2 | 2);
  if (pbVar1 == (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0) {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (*(int *)(*(int *)this + 4) + (int)this),2,false);
  }
  ExceptionList = local_10;
  return this;
}


// 0x102d3470  (ghidra: FUN_102d3470)  [range]
uint32_t functions_HelperFunctions_102d3470(void *param_1,uint *param_2)

{
  uint32_t uVar1;
  uint32_t extraout_ECX;
  
  uVar1 = functions_HelperFunctions_102d38c0(param_2);
  sub_10218cd0(param_1,uVar1);
  return extraout_ECX;
}


// 0x102d3490  (ghidra: FUN_102d3490)  [range]
uint32_t functions_HelperFunctions_102d3490(void *param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e35b4);
  sub_10218cd0(param_1,*puVar1);
  return extraout_ECX;
}


// 0x102d34b0  [range]
/* Library Function - Single Match
    public: virtual void * __thiscall std::basic_stringstream<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2019 Release */

void * __thiscall
std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = this + -0x68;
  functions_HelperFunctions_102cf930((int)pbVar1);
  if ((param_1 & 1) != 0) {
    FUN_1030207a(pbVar1);
  }
  return pbVar1;
}


// 0x102d34e0  (ghidra: FUN_102d34e0)  [range]
uint8_t * __fastcall functions_HelperFunctions_102d34e0(uint32_t param_1)

{
  uint32_t local_9;
  uint8_t local_5;
  
  functions_HelperFunctions_102d3910(local_9,param_1,&local_5);
  functions_HelperFunctions_102d3510();
  return &DAT_104e34dc;
}


// 0x102d3510  (ghidra: FUN_102d3510)  [range]
void functions_HelperFunctions_102d3510(void)

{
  uint32_t *puVar1;
  uint32_t extraout_EDX;
  
  sub_102107d0();
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e34dc);
  *puVar1 = extraout_EDX;
  return;
}


// 0x102d3530  (ghidra: FUN_102d3530)  [range]
void * __fastcall functions_HelperFunctions_102d3530(void *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint32_t extraout_ECX;
  uint64_t uVar5;
  
  sVar1 = client_DrawHoverItem_10224f20(param_2);
  iVar2 = sub_1020fe50(param_3);
  uVar3 = sub_1020fe80(iVar2);
  uVar4 = sub_1020ffe0();
  if (uVar3 <= uVar4 - sVar1) {
    uVar5 = thunk_FUN_1020fe30(param_2);
    sub_10260da0(param_1,uVar3,extraout_ECX,(void *)uVar5,sVar1,param_3,
                 (size_t)((ulonglong)uVar5 >> 0x20));
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_1020f3f0();
}


// 0x102d3590  (ghidra: FUN_102d3590)  [range]
void __fastcall functions_HelperFunctions_102d3590(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,int param_2)

{
  uint uVar1;
  int extraout_ECX;
  uint64_t uVar2;
  
  uVar1 = client_DrawHoverItem_10224f20(param_2);
  uVar2 = thunk_FUN_10225280(extraout_ECX);
  functions_HelperFunctions_102d3940(param_1,(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)uVar2,uVar1);
  return;
}


// 0x102d35c0  (ghidra: FUN_102d35c0)  [range]
/* WARNING: Removing unreachable block (ram,0x102d3630) */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __fastcall
functions_HelperFunctions_102d35c0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1)

{
  char cVar1;
  bool bVar2;
  wchar_t wVar3;
  ushort uVar4;
  locale *plVar5;
  _Facet_base *p_Var6;
  uint uVar7;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar8;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar9;
  int iVar10;
  int iVar11;
  int reg_EDI;
  __int64 _Var12;
  uint uStack_5c;
  uint8_t local_4c [8];
  int local_44 [2];
  uint64_t local_3c;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_34;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_30;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *local_2c;
  char *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint8_t *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10315025;
  local_10 = ExceptionList;
  uStack_5c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = (uint8_t *)&uStack_5c;
  ExceptionList = &local_10;
  iVar11 = 0;
  local_28 = "\n";
  local_1c = 0;
  local_20 = 1;
  local_24 = 0;
  local_2c = param_1;
  _Var12 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  if (((_Var12 < 0) || (_Var12 == 0)) ||
     (_Var12 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4))),
     _Var12 < 2)) {
    local_3c = 0;
    local_3c._4_4_ = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
    local_3c._0_4_ = 0;
    local_18 = (int)local_3c._4_4_;
    iVar10 = (int)local_3c;
  }
  else {
    _Var12 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
    local_18 = (int)((ulonglong)_Var12 >> 0x20) - (uint)((int)_Var12 == 0);
    iVar10 = (int)_Var12 + -1;
  }
  sub_10237ee0(local_44,param_1);
  local_8 = 0;
  cVar1 = sub_10237e70((int)local_44);
  if (cVar1 == '\0') {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (param_1 + *(int *)(*(int *)param_1 + 4)),4,false);
    sub_10237e80(local_44);
    ExceptionList = local_10;
    return param_1;
  }
  local_8._0_1_ = 1;
  plVar5 = (locale *)std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  local_8._0_1_ = 2;
  p_Var6 = sub_102605b0(plVar5);
  local_3c = CONCAT44(p_Var6,(int)local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  sub_10238470((int)local_4c);
  uVar7 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  if ((uVar7 & 0x1c0) != 0x40) {
    while( true ) {
      if ((local_18 < 0) || ((local_18 < 1 && (iVar10 == 0)))) goto LAB_102d3735;
      local_30 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(int *)param_1 + 4)));
      wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                        ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                         (param_1 + *(int *)(*(int *)param_1 + 4)));
      uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(local_30,wVar3);
      local_30 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uint)uVar4;
      uVar7 = sub_10237ae0();
      local_34 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uVar7 & 0xffff);
      bVar2 = sub_10237b20((short *)&local_34,(short *)&local_30);
      if (bVar2) break;
      bVar2 = iVar10 != 0;
      iVar10 = iVar10 + -1;
      local_18 = local_18 + -1 + (uint)bVar2;
    }
    local_1c = 4;
    iVar11 = local_1c;
  }
LAB_102d3735:
  reg_EDI = iVar11;
  if (reg_EDI == 0) {
    if ((local_24 < 0) || ((local_24 < 1 && (local_20 == 0)))) goto LAB_102d37c4;
    local_34 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                         ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                          (param_1 + *(int *)(*(int *)param_1 + 4)));
    wVar3 = std::ctype<wchar_t>::widen((ctype<wchar_t> *)local_3c._4_4_,*local_28);
    uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(local_34,wVar3);
    local_34 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uint)uVar4;
    uVar7 = sub_10237ae0();
    bVar2 = local_20 != 0;
    local_20 = local_20 + -1;
    local_30 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uVar7 & 0xffff);
    local_24 = local_24 + -1 + (uint)bVar2;
    local_28 = local_28 + 1;
    bVar2 = sub_10237b20((short *)&local_30,(short *)&local_34);
    local_1c = 4;
    iVar11 = local_1c;
    if (!bVar2) {
      local_1c = 0;
      iVar11 = reg_EDI;
    }
    goto LAB_102d3735;
  }
LAB_102d3823:
  std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)),0);
  pbVar9 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)functions_HelperFunctions_102d3864(param_1,reg_EDI);
  return pbVar9;
LAB_102d37c4:
  if ((local_18 < 0) || ((local_18 < 1 && (iVar10 == 0)))) goto LAB_102d3823;
  pbVar8 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                      (param_1 + *(int *)(*(int *)param_1 + 4)));
  local_3c._4_4_ = pbVar8;
  wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                    ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                     (param_1 + *(int *)(*(int *)param_1 + 4)));
  uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(local_3c._4_4_,wVar3);
  local_3c = (ulonglong)CONCAT24(uVar4,(int)local_3c);
  uVar7 = sub_10237ae0();
  local_34 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uVar7 & 0xffff);
  bVar2 = sub_10237b20((short *)&local_34,(short *)((int)&local_3c + 4));
  if (bVar2) {
    reg_EDI = 4;
    local_1c = 4;
    goto LAB_102d3823;
  }
  bVar2 = iVar10 != 0;
  iVar10 = iVar10 + -1;
  local_18 = local_18 + -1 + (uint)bVar2;
  goto LAB_102d37c4;
}


// 0x102d3844  [range]
uint8_t * Catch_All_102d3844(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + (int)*(int **)(unaff_EBP + -0x28)),4,
             true);
  return &DAT_102d385e;
}


// 0x102d3864  (ghidra: FUN_102d3864)  [range]
int * functions_HelperFunctions_102d3864(int *reg_ESI,int reg_EDI)

{
  int unaff_EBP;
  
  *(uint32_t *)(unaff_EBP + -4) = 0;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*reg_ESI + 4) + (int)reg_ESI),reg_EDI,false);
  sub_10237e80((int *)(unaff_EBP + -0x40));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return reg_ESI;
}


// 0x102d38a0  (ghidra: FUN_102d38a0)  [range]
void __thiscall functions_HelperFunctions_102d38a0(void *this,uint32_t param_1)

{
  uint32_t extraout_ECX;
  
  functions_HelperFunctions_102d3b50(param_1,*(uint32_t **)(*(int *)this + 4));
  sub_10210fd0(extraout_ECX,*(void **)this);
  return;
}


// 0x102d38c0  (ghidra: FUN_102d38c0)  [range]
uint32_t functions_HelperFunctions_102d38c0(uint *param_1)

{
  int *reg_EAX;
  uint32_t uVar1;
  uint32_t *puVar2;
  uint32_t extraout_EDX;
  int local_10 [2];
  int local_8;
  
  reg_EAX = sub_10212850(&DAT_104e35b4,local_10,param_1);
  uVar1 = sub_102128b0(local_8,param_1,reg_EAX);
  if ((char)uVar1 != '\0') {
    return extraout_EDX;
  }
  puVar2 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e35b4);
  return *puVar2;
}


// 0x102d3910  (ghidra: FUN_102d3910)  [linked]
uint8_t * functions_HelperFunctions_102d3910(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_1020fe80(param_3);
  functions_HelperFunctions_102d3930();
  return &DAT_104e34dc;
}


// 0x102d3930  (ghidra: FUN_102d3930)  [linked]
uint8_t * functions_HelperFunctions_102d3930(void)

{
  functions_HelperFunctions_102d3bb0();
  return &DAT_104e34dc;
}


// 0x102d3940  (ghidra: FUN_102d3940)  [linked]
basic_ostream<wchar_t,std::char_traits<wchar_t>_> * __fastcall
functions_HelperFunctions_102d3940(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,
            basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  wchar_t wVar3;
  ushort uVar4;
  uint uVar5;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *this;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar6;
  int iVar7;
  uint32_t reg_EDI;
  __int64 _Var8;
  uint16_t uVar9;
  uint16_t uVar10;
  int local_34 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_2c;
  uint local_28;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_24;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *local_20;
  uint32_t local_1c;
  uint8_t *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xffffffb8;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1031505d;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  uVar9 = (uint16_t)(DAT_1039800c ^ (uint)&stack0xfffffffc);
  uVar10 = (uint16_t)((DAT_1039800c ^ (uint)&stack0xfffffffc) >> 0x10);
  ExceptionList = &local_10;
  reg_EDI = 0;
  local_1c = 0;
  local_2c = param_2;
  local_20 = param_1;
  _Var8 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  if (((_Var8 < 0) || (_Var8 == 0)) ||
     (_Var8 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4))),
     (uint)_Var8 <= param_3)) {
    iVar7 = 0;
  }
  else {
    _Var8 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
    iVar7 = (int)_Var8 - param_3;
  }
  sub_10237ee0(local_34,param_1);
  local_8 = 0;
  cVar1 = sub_10237e70((int)local_34);
  if (cVar1 == '\0') {
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
               (param_1 + *(int *)(*(int *)param_1 + 4)),4,false);
    sub_10237e80(local_34);
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar5 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)));
  if ((uVar5 & 0x1c0) != 0x40) {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      local_24 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(int *)param_1 + 4)));
      wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                        ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                         (param_1 + *(int *)(*(int *)param_1 + 4)));
      uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(local_24,wVar3);
      local_24 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uint)uVar4;
      local_28 = sub_10237ae0();
      local_28 = local_28 & 0xffff;
      bVar2 = sub_10237b20((short *)&local_28,(short *)&local_24);
      if (bVar2) {
        reg_EDI = 4;
        local_1c = 4;
        goto LAB_102d3a80;
      }
    }
  }
  this = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                   ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                    (param_1 + *(int *)(*(int *)param_1 + 4)));
  _Var8 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputn
                    (this,(wchar_t *)local_2c,(ulonglong)CONCAT22(uVar10,uVar9) << 0x20);
  if (((uint)_Var8 == param_3) && ((int)((ulonglong)_Var8 >> 0x20) == 0)) {
LAB_102d3a80:
    do {
      if (iVar7 == 0) goto LAB_102d3ae3;
      local_2c = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(int *)param_1 + 4)));
      wVar3 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::fill
                        ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
                         (param_1 + *(int *)(*(int *)param_1 + 4)));
      uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc(local_2c,wVar3);
      local_2c = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(uint)uVar4;
      local_28 = sub_10237ae0();
      local_28 = local_28 & 0xffff;
      bVar2 = sub_10237b20((short *)&local_28,(short *)&local_2c);
      if (bVar2) break;
      iVar7 = iVar7 + -1;
    } while( true );
  }
  reg_EDI = 4;
  local_1c = reg_EDI;
LAB_102d3ae3:
  std::ios_base::width((ios_base *)(param_1 + *(int *)(*(int *)param_1 + 4)),0);
  pbVar6 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)functions_HelperFunctions_102d3b16(param_1,reg_EDI);
  return pbVar6;
}


// 0x102d3af6  [inferred]
uint8_t * Catch_All_102d3af6(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + (int)*(int **)(unaff_EBP + -0x1c)),4,
             true);
  return &DAT_102d3b10;
}


// 0x102d3b16  (ghidra: FUN_102d3b16)  [linked]
int * functions_HelperFunctions_102d3b16(int *reg_ESI,int reg_EDI)

{
  int unaff_EBP;
  
  *(uint32_t *)(unaff_EBP + -4) = 0;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*reg_ESI + 4) + (int)reg_ESI),reg_EDI,false);
  sub_10237e80((int *)(unaff_EBP + -0x30));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return reg_ESI;
}


// 0x102d3b50  (ghidra: FUN_102d3b50)  [linked]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_HelperFunctions_102d3b50(uint32_t param_1,uint32_t *param_2)

{
  char cVar1;
  void *pvVar2;
  uint32_t extraout_ECX;
  uint32_t *local_c;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  cVar1 = *(char *)((int)param_2 + 0xd);
  while (cVar1 == '\0') {
    local_c = param_2;
    functions_HelperFunctions_102d3b50(param_1,(uint32_t *)param_2[2]);
    pvVar2 = (void *)sub_10211940(&local_c,param_2);
    functions_HelperFunctions_102d3bd0(extraout_ECX,pvVar2);
    param_2 = local_c;
    cVar1 = *(char *)((int)local_c + 0xd);
  }
  return;
}


// 0x102d3bb0  (ghidra: FUN_102d3bb0)  [linked]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * functions_HelperFunctions_102d3bb0(void)

{
  DAT_104e34dc = 0;
  DAT_104e34e0 = 0;
  return &DAT_104e34dc;
}


// 0x102d3bd0  (ghidra: FUN_102d3bd0)  [linked]
void __fastcall functions_HelperFunctions_102d3bd0(uint32_t param_1,void *param_2)

{
  int iVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  
  iVar1 = sub_1020fe80((int)param_2 + 0x10);
  functions_HelperFunctions_102d3bf0(extraout_ECX,iVar1);
  sub_10210fd0(extraout_ECX_00,param_2);
  return;
}


// 0x102d3bf0  (ghidra: FUN_102d3bf0)  [linked]
void __fastcall functions_HelperFunctions_102d3bf0(uint32_t param_1,int param_2)

{
  functions_HelperFunctions_102d3c00(param_2);
  return;
}


// 0x102d3c00  (ghidra: FUN_102d3c00)  [linked]
int __fastcall functions_HelperFunctions_102d3c00(int param_1)

{
  functions_HelperFunctions_102d3c10(param_1);
  return param_1;
}


// 0x102d3c10  (ghidra: FUN_102d3c10)  [linked]
void __fastcall functions_HelperFunctions_102d3c10(int param_1)

{
  thunk_FUN_1020fb40((uint32_t *)(param_1 + 4));
  return;
}

