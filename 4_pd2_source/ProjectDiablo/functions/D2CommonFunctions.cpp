/*
 * functions/D2CommonFunctions.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x100d6c60 - 0x1026c6c0
 * Functions     : 208
 * Attribution   : range=204, anchor=3, nearest=1
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x100d6c60  (ghidra: FUN_100d6c60)  [range]
void functions_D2CommonFunctions_init_100d6c60(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104e1898);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_1031b580);
  return;
}


// 0x100d6c80  (ghidra: FUN_100d6c80)  [range]
void functions_D2CommonFunctions_init_100d6c80(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e19b0);
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
  sub_1020f900(&DAT_104e19b0);
  _atexit((_func_4879 *)&LAB_1031b590);
  return;
}


// 0x100d6d70  (ghidra: FUN_100d6d70)  [range]
void functions_D2CommonFunctions_init_100d6d70(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1884);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e1884);
  _atexit((_func_4879 *)&LAB_1031b5a0);
  return;
}


// 0x100d6dd0  (ghidra: FUN_100d6dd0)  [range]
void functions_D2CommonFunctions_init_100d6dd0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1980);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e1980);
  _atexit((_func_4879 *)&LAB_1031b5b0);
  return;
}


// 0x100d6e30  (ghidra: FUN_100d6e30)  [range]
void functions_D2CommonFunctions_init_100d6e30(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e18d8);
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
  sub_1020f900(&DAT_104e18d8);
  _atexit((_func_4879 *)&LAB_1031b5c0);
  return;
}


// 0x100d6ea0  (ghidra: FUN_100d6ea0)  [range]
void functions_D2CommonFunctions_init_100d6ea0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1910);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1910);
  _atexit((_func_4879 *)&LAB_1031b5d0);
  return;
}


// 0x100d6f00  (ghidra: FUN_100d6f00)  [range]
void functions_D2CommonFunctions_init_100d6f00(void)

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
  
  sub_1020f420((uint64_t *)&DAT_104e192c);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104e192c);
  _atexit((_func_4879 *)&LAB_1031b5e0);
  return;
}


// 0x100d6f60  (ghidra: FUN_100d6f60)  [range]
void functions_D2CommonFunctions_init_100d6f60(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1940);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1940);
  _atexit((_func_4879 *)&LAB_1031b5f0);
  return;
}


// 0x100d6fd0  (ghidra: FUN_100d6fd0)  [range]
void functions_D2CommonFunctions_init_100d6fd0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1864);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1864);
  _atexit((_func_4879 *)&LAB_1031b600);
  return;
}


// 0x100d7040  (ghidra: FUN_100d7040)  [range]
void functions_D2CommonFunctions_init_100d7040(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1950);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1950);
  _atexit((_func_4879 *)&LAB_1031b610);
  return;
}


// 0x100d70b0  (ghidra: FUN_100d70b0)  [range]
void functions_D2CommonFunctions_init_100d70b0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e18e0);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e18e0);
  _atexit((_func_4879 *)&LAB_1031b620);
  return;
}


// 0x100d7110  (ghidra: FUN_100d7110)  [range]
void functions_D2CommonFunctions_init_100d7110(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1924);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1924);
  _atexit((_func_4879 *)&LAB_1031b630);
  return;
}


// 0x100d7170  (ghidra: FUN_100d7170)  [range]
void functions_D2CommonFunctions_init_100d7170(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e19c0);
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
  sub_1020f900(&DAT_104e19c0);
  _atexit((_func_4879 *)&LAB_1031b640);
  return;
}


// 0x100d71e0  (ghidra: FUN_100d71e0)  [range]
void functions_D2CommonFunctions_init_100d71e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1818);
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
  sub_1020f900(&DAT_104e1818);
  _atexit((_func_4879 *)&LAB_1031b650);
  return;
}


// 0x100d7250  (ghidra: FUN_100d7250)  [range]
void functions_D2CommonFunctions_init_100d7250(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e18d0);
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
  sub_1020f900(&DAT_104e18d0);
  _atexit((_func_4879 *)&LAB_1031b660);
  return;
}


// 0x100d72c0  (ghidra: FUN_100d72c0)  [range]
void functions_D2CommonFunctions_init_100d72c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e19a0);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e19a0);
  _atexit((_func_4879 *)&LAB_1031b670);
  return;
}


// 0x100d7320  (ghidra: FUN_100d7320)  [range]
void functions_D2CommonFunctions_init_100d7320(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1850);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1850);
  _atexit((_func_4879 *)&LAB_1031b680);
  return;
}


// 0x100d7380  (ghidra: FUN_100d7380)  [range]
void functions_D2CommonFunctions_init_100d7380(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e19a8);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e19a8);
  _atexit((_func_4879 *)&LAB_1031b690);
  return;
}


// 0x100d73e0  (ghidra: FUN_100d73e0)  [range]
void functions_D2CommonFunctions_init_100d73e0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1988);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e1988);
  _atexit((_func_4879 *)&LAB_1031b6a0);
  return;
}


// 0x100d7440  (ghidra: FUN_100d7440)  [range]
void functions_D2CommonFunctions_init_100d7440(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e19dc);
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
  sub_1020f900(&DAT_104e19dc);
  _atexit((_func_4879 *)&LAB_1031b6b0);
  return;
}


// 0x100d74c0  (ghidra: FUN_100d74c0)  [range]
void functions_D2CommonFunctions_init_100d74c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1848);
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
  sub_1020f900(&DAT_104e1848);
  _atexit((_func_4879 *)&LAB_1031b6c0);
  return;
}


// 0x100d7530  (ghidra: FUN_100d7530)  [range]
void functions_D2CommonFunctions_init_100d7530(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e18f0);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e18f0);
  _atexit((_func_4879 *)&LAB_1031b6d0);
  return;
}


// 0x100d7590  (ghidra: FUN_100d7590)  [range]
void functions_D2CommonFunctions_init_100d7590(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1948);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104e1948);
  _atexit((_func_4879 *)&LAB_1031b6e0);
  return;
}


// 0x100d75f0  (ghidra: FUN_100d75f0)  [range]
void functions_D2CommonFunctions_init_100d75f0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1918);
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
  sub_1020f900(&DAT_104e1918);
  _atexit((_func_4879 *)&LAB_1031b6f0);
  return;
}


// 0x100d7690  (ghidra: FUN_100d7690)  [range]
void functions_D2CommonFunctions_init_100d7690(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1908);
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
  sub_1020f900(&DAT_104e1908);
  _atexit((_func_4879 *)&LAB_1031b700);
  return;
}


// 0x100d7700  (ghidra: FUN_100d7700)  [range]
void functions_D2CommonFunctions_init_100d7700(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e18bc);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e18bc);
  _atexit((_func_4879 *)&LAB_1031b710);
  return;
}


// 0x100d7760  (ghidra: FUN_100d7760)  [range]
void functions_D2CommonFunctions_init_100d7760(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e186c);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e186c);
  _atexit((_func_4879 *)&LAB_1031b720);
  return;
}


// 0x100d77c0  (ghidra: FUN_100d77c0)  [range]
void functions_D2CommonFunctions_init_100d77c0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e19cc);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e19cc);
  _atexit((_func_4879 *)&LAB_1031b730);
  return;
}


// 0x100d7820  (ghidra: FUN_100d7820)  [range]
void functions_D2CommonFunctions_init_100d7820(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1820);
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
  sub_1020f900(&DAT_104e1820);
  _atexit((_func_4879 *)&LAB_1031b740);
  return;
}


// 0x100d78b0  (ghidra: FUN_100d78b0)  [range]
void functions_D2CommonFunctions_init_100d78b0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e18e8);
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
  sub_1020f900(&DAT_104e18e8);
  _atexit((_func_4879 *)&LAB_1031b750);
  return;
}


// 0x100d7970  (ghidra: FUN_100d7970)  [range]
void functions_D2CommonFunctions_init_100d7970(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e18a8);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e18a8);
  _atexit((_func_4879 *)&LAB_1031b760);
  return;
}


// 0x100d79e0  (ghidra: FUN_100d79e0)  [range]
void functions_D2CommonFunctions_init_100d79e0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e187c);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e187c);
  _atexit((_func_4879 *)&LAB_1031b770);
  return;
}


// 0x100d7a50  (ghidra: FUN_100d7a50)  [range]
void functions_D2CommonFunctions_init_100d7a50(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e1840);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104e1840);
  _atexit((_func_4879 *)&LAB_1031b780);
  return;
}


// 0x100d7aa0  (ghidra: FUN_100d7aa0)  [range]
void functions_D2CommonFunctions_init_100d7aa0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e196c);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e196c);
  _atexit((_func_4879 *)&LAB_1031b790);
  return;
}


// 0x100d7b00  (ghidra: FUN_100d7b00)  [range]
void functions_D2CommonFunctions_init_100d7b00(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1998);
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
  sub_1020f880(&DAT_104e1998);
  _atexit((_func_4879 *)&LAB_1031b7a0);
  return;
}


// 0x100d7b90  (ghidra: FUN_100d7b90)  [range]
void functions_D2CommonFunctions_init_100d7b90(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1990);
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
  sub_1020f880(&DAT_104e1990);
  _atexit((_func_4879 *)&LAB_1031b7b0);
  return;
}


// 0x100d7c90  (ghidra: FUN_100d7c90)  [range]
void functions_D2CommonFunctions_init_100d7c90(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1974);
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
  sub_1020f900(&DAT_104e1974);
  _atexit((_func_4879 *)&LAB_1031b7c0);
  return;
}


// 0x100d7d10  (ghidra: FUN_100d7d10)  [range]
void functions_D2CommonFunctions_init_100d7d10(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1958);
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
  sub_1020f900(&DAT_104e1958);
  _atexit((_func_4879 *)&LAB_1031b7d0);
  return;
}


// 0x100d7da0  (ghidra: FUN_100d7da0)  [range]
void functions_D2CommonFunctions_init_100d7da0(void)

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
  sub_1020f420((uint64_t *)&DAT_104e1960);
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
  sub_1020f7f0((uint32_t *)&DAT_104e1960);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031b7e0);
  ExceptionList = local_10;
  return;
}


// 0x100d8360  (ghidra: FUN_100d8360)  [range]
void functions_D2CommonFunctions_init_100d8360(void)

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
  sub_1020f420((uint64_t *)&DAT_104e188c);
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
  sub_1020f840((uint32_t *)&DAT_104e188c);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_1031b7f0);
  ExceptionList = local_10;
  return;
}


// 0x100d8d30  (ghidra: FUN_100d8d30)  [range]
void functions_D2CommonFunctions_init_100d8d30(void)

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
  sub_1020f420((uint64_t *)&DAT_104e1834);
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
  sub_1020f7f0((uint32_t *)&DAT_104e1834);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031b800);
  ExceptionList = local_10;
  return;
}


// 0x100d9730  (ghidra: FUN_100d9730)  [range]
void functions_D2CommonFunctions_init_100d9730(void)

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
  sub_1020f420((uint64_t *)&DAT_104e18c4);
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
  sub_1020f730((uint32_t *)&DAT_104e18c4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_1031b810);
  ExceptionList = local_10;
  return;
}


// 0x100d9ab0  (ghidra: FUN_100d9ab0)  [range]
void functions_D2CommonFunctions_init_100d9ab0(void)

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
  sub_1020f410((uint64_t *)&DAT_104e1874);
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
  sub_1020f6a0(&DAT_104e1874);
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
  _atexit((_func_4879 *)&LAB_1031b820);
  ExceptionList = local_10;
  return;
}


// 0x100d9fe0  (ghidra: FUN_100d9fe0)  [range]
void functions_D2CommonFunctions_init_100d9fe0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e19b8);
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
  sub_10210100(&DAT_10367eb4,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10367eac,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10367eb0,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104e19b8);
  _atexit((_func_4879 *)&LAB_1031b830);
  return;
}


// 0x100da190  (ghidra: FUN_100da190)  [range]
void functions_D2CommonFunctions_init_100da190(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e1828);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e1828);
  _atexit((_func_4879 *)&LAB_1031b840);
  return;
}


// 0x100da1f0  (ghidra: FUN_100da1f0)  [range]
void functions_D2CommonFunctions_init_100da1f0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e18b0);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e18b0);
  _atexit((_func_4879 *)&LAB_1031b850);
  return;
}


// 0x100da250  (ghidra: FUN_100da250)  [range]
void functions_D2CommonFunctions_init_100da250(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e1858);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e1858);
  _atexit((_func_4879 *)&LAB_1031b860);
  return;
}


// 0x100da2b0  (ghidra: FUN_100da2b0)  [range]
void functions_D2CommonFunctions_init_100da2b0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104e18f8);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104e18f8);
  _atexit((_func_4879 *)&LAB_1031b870);
  return;
}


// 0x100da310  (ghidra: FUN_100da310)  [range]
void functions_D2CommonFunctions_init_100da310(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1810);
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
  sub_1020f570(&DAT_104e1810);
  _atexit((_func_4879 *)&LAB_1031b880);
  return;
}


// 0x100dacf0  (ghidra: FUN_100dacf0)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fde9e1c_100dacf0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde9e1c();
  p_D2Common_DAT_6fde9e1c = *puVar1;
  return;
}


// 0x100dd450  (ghidra: FUN_100dd450)  [range]
void functions_D2CommonFunctions_InitPtr_D2Client_DAT_6fbcbbfc_100dd450(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbbfc();
  p_D2Client_DAT_6fbcbbfc = *puVar1;
  return;
}


// 0x100dd940  (ghidra: FUN_100dd940)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdf1420_100dd940(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fdf1420();
  p_D2Common_DAT_6fdf1420 = *puVar1;
  return;
}


// 0x100dd950  (ghidra: FUN_100dd950)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdf1424_100dd950(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fdf1424();
  p_D2Common_DAT_6fdf1424 = *puVar1;
  return;
}


// 0x100de0f0  (ghidra: FUN_100de0f0)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fde4608_100de0f0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fde4608();
  p_D2Common_DAT_6fde4608 = *puVar1;
  return;
}


// 0x100de180  (ghidra: FUN_100de180)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdefa58_102a45a0_100de180(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fdefa58_102a45a0();
  p_D2Common_DAT_6fdefa58_102a45a0 = *puVar1;
  return;
}


// 0x100de1b0  (ghidra: FUN_100de1b0)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdeefe4_100de1b0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fdeefe4();
  p_D2Common_DAT_6fdeefe4 = *puVar1;
  return;
}


// 0x100de1c0  (ghidra: FUN_100de1c0)  [range]
void functions_D2CommonFunctions_InitPtr_D2Common_DAT_6fdeefe8_100de1c0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Common_DAT_6fdeefe8();
  p_D2Common_DAT_6fdeefe8 = *puVar1;
  return;
}


// 0x100dec60  (ghidra: FUN_100dec60)  [range]
void functions_D2CommonFunctions_init_100dec60(void)

{
  uint32_t extraout_ECX;
  uint32_t extraout_ECX_00;
  uint32_t extraout_ECX_01;
  uint32_t extraout_ECX_02;
  uint32_t extraout_ECX_03;
  uint8_t local_498 [28];
  uint8_t local_47c [28];
  uint8_t local_460 [28];
  uint8_t local_444 [28];
  uint8_t local_428 [28];
  uint8_t local_40c [28];
  uint8_t local_3f0 [28];
  uint8_t local_3d4 [28];
  uint8_t local_3b8 [28];
  uint8_t local_39c [28];
  uint8_t local_380 [28];
  uint8_t local_364 [28];
  uint8_t local_348 [28];
  uint8_t local_32c [28];
  uint8_t local_310 [28];
  uint8_t local_2f4 [28];
  uint8_t local_2d8 [28];
  uint8_t local_2bc [28];
  uint8_t local_2a0 [28];
  uint8_t local_284 [28];
  uint8_t local_268 [28];
  uint8_t local_24c [28];
  uint8_t local_230 [28];
  uint8_t local_214 [28];
  uint8_t local_1f8 [28];
  uint8_t local_1dc [28];
  uint8_t local_1c0 [28];
  uint8_t local_1a4 [28];
  uint8_t local_188 [28];
  uint8_t local_16c [28];
  uint8_t local_150 [28];
  uint8_t local_134 [28];
  uint8_t local_118 [28];
  uint8_t local_fc [28];
  uint8_t local_e0 [28];
  uint8_t local_c4 [28];
  uint8_t local_a8 [8];
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
  puStack_c = &LAB_1030779c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  functions_D2CommonFunctions_10267fd0();
  local_14 = 0;
  functions_D2CommonFunctions_1026b8d0(local_498,extraout_ECX,&local_14);
  local_8 = 0;
  local_18 = 1;
  sub_102416a0(local_47c,"1 Town",&local_18);
  local_8._0_1_ = 1;
  local_1c = 2;
  functions_D2CommonFunctions_1026b910(local_460,extraout_ECX_00,&local_1c);
  local_8._0_1_ = 2;
  local_20 = 3;
  sub_102416a0(local_444,"1 Cave",&local_20);
  local_8._0_1_ = 3;
  local_24 = 4;
  sub_102416a0(local_428,"1 Crypt",&local_24);
  local_8._0_1_ = 4;
  local_28 = 5;
  sub_102416a0(local_40c,"1 Monestary",&local_28);
  local_8._0_1_ = 5;
  local_2c = 6;
  sub_102416a0(local_3f0,"1 Courtyard",&local_2c);
  local_8._0_1_ = 6;
  local_30 = 7;
  sub_102416a0(local_3d4,"1 Barracks",&local_30);
  local_8._0_1_ = 7;
  local_34 = 8;
  sub_102416a0(local_3b8,"1 Jail",&local_34);
  local_8._0_1_ = 8;
  local_38 = 9;
  sub_102416a0(local_39c,"1 Cathedral",&local_38);
  local_8._0_1_ = 9;
  local_3c = 10;
  sub_102416a0(local_380,"1 Catacombs",&local_3c);
  local_8._0_1_ = 10;
  local_40 = 0xb;
  sub_102416a0(local_364,"1 Tristram",&local_40);
  local_8._0_1_ = 0xb;
  local_44 = 0xc;
  sub_102416a0(local_348,"2 Town",&local_44);
  local_8._0_1_ = 0xc;
  local_48 = 0xd;
  sub_102416a0(local_32c,"2 Sewer",&local_48);
  local_8._0_1_ = 0xd;
  local_4c = 0xe;
  sub_102416a0(local_310,"2 Harem",&local_4c);
  local_8._0_1_ = 0xe;
  local_50 = 0xf;
  sub_102416a0(local_2f4,"2 Basement",&local_50);
  local_8._0_1_ = 0xf;
  local_54 = 0x10;
  sub_102416a0(local_2d8,"2 Desert",&local_54);
  local_8._0_1_ = 0x10;
  local_58 = 0x11;
  sub_102416a0(local_2bc,"2 Tomb",&local_58);
  local_8._0_1_ = 0x11;
  local_5c = 0x12;
  sub_102416a0(local_2a0,"2 Lair",&local_5c);
  local_8._0_1_ = 0x12;
  local_60 = 0x13;
  sub_102416a0(local_284,"2 Arcane",&local_60);
  local_8._0_1_ = 0x13;
  local_64 = 0x14;
  sub_102416a0(local_268,"3 Town",&local_64);
  local_8._0_1_ = 0x14;
  local_68 = 0x15;
  sub_102416a0(local_24c,"3 Jungle",&local_68);
  local_8._0_1_ = 0x15;
  local_6c = 0x16;
  sub_102416a0(local_230,"3 Kurast",&local_6c);
  local_8._0_1_ = 0x16;
  local_70 = 0x17;
  sub_102416a0(local_214,"3 Spider",&local_70);
  local_8._0_1_ = 0x17;
  local_74 = 0x18;
  functions_D2CommonFunctions_1026b950(local_1f8,extraout_ECX_01,&local_74);
  local_8._0_1_ = 0x18;
  local_78 = 0x19;
  sub_102416a0(local_1dc,"3 Sewer",&local_78);
  local_8._0_1_ = 0x19;
  local_7c = 0x1a;
  sub_102416a0(local_1c0,"4 Town",&local_7c);
  local_8._0_1_ = 0x1a;
  local_80 = 0x1b;
  sub_102416a0(local_1a4,"4 Mesa",&local_80);
  local_8._0_1_ = 0x1b;
  local_84 = 0x1c;
  sub_102416a0(local_188,"4 Lava",&local_84);
  local_8._0_1_ = 0x1c;
  local_88 = 0x1d;
  sub_102416a0(local_16c,"5 Town",&local_88);
  local_8._0_1_ = 0x1d;
  local_8c = 0x1e;
  sub_102416a0(local_150,"5 Siege",&local_8c);
  local_8._0_1_ = 0x1e;
  local_90 = 0x1f;
  sub_102416a0(local_134,"5 Barricade",&local_90);
  local_8._0_1_ = 0x1f;
  local_94 = 0x20;
  sub_102416a0(local_118,"5 Temple",&local_94);
  local_8._0_1_ = 0x20;
  local_98 = 0x21;
  functions_D2CommonFunctions_1026b990(local_fc,extraout_ECX_02,&local_98);
  local_8._0_1_ = 0x21;
  local_9c = 0x22;
  sub_102416a0(local_e0,"5 Baal",&local_9c);
  local_8 = CONCAT31(local_8._1_3_,0x22);
  local_a0 = 0x23;
  sub_102416a0(local_c4,"5 Lava",&local_a0);
  local_8 = 0x23;
  sub_1020f550(local_a8,local_498,local_a8);
  functions_D2CommonFunctions_1026b770(extraout_ECX_03);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_498,0x1c,0x24,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_1031b890);
  ExceptionList = local_10;
  return;
}


// 0x100df170  (ghidra: FUN_100df170)  [range]
void functions_D2CommonFunctions_init_100df170(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104e1b30);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_1031b8a0);
  return;
}


// 0x100df190  (ghidra: FUN_100df190)  [range]
void functions_D2CommonFunctions_init_100df190(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d7c);
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
  sub_1020f900(&DAT_104e1d7c);
  _atexit((_func_4879 *)&LAB_1031b8b0);
  return;
}


// 0x100df280  (ghidra: FUN_100df280)  [range]
void functions_D2CommonFunctions_init_100df280(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1afc);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e1afc);
  _atexit((_func_4879 *)&LAB_1031b8c0);
  return;
}


// 0x100df2e0  (ghidra: FUN_100df2e0)  [range]
void functions_D2CommonFunctions_init_100df2e0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1d4c);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e1d4c);
  _atexit((_func_4879 *)&LAB_1031b8d0);
  return;
}


// 0x100df340  (ghidra: FUN_100df340)  [range]
void functions_D2CommonFunctions_init_100df340(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1ba8);
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
  sub_1020f900(&DAT_104e1ba8);
  _atexit((_func_4879 *)&LAB_1031b8e0);
  return;
}


// 0x100df3b0  (ghidra: FUN_100df3b0)  [range]
void functions_D2CommonFunctions_init_100df3b0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1c24);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1c24);
  _atexit((_func_4879 *)&LAB_1031b8f0);
  return;
}


// 0x100df410  (ghidra: FUN_100df410)  [range]
void functions_D2CommonFunctions_init_100df410(void)

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
  
  sub_1020f420((uint64_t *)&DAT_104e1ca0);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104e1ca0);
  _atexit((_func_4879 *)&LAB_1031b900);
  return;
}


// 0x100df470  (ghidra: FUN_100df470)  [range]
void functions_D2CommonFunctions_init_100df470(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1ccc);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1ccc);
  _atexit((_func_4879 *)&LAB_1031b910);
  return;
}


// 0x100df4e0  (ghidra: FUN_100df4e0)  [range]
void functions_D2CommonFunctions_init_100df4e0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1ab8);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1ab8);
  _atexit((_func_4879 *)&LAB_1031b920);
  return;
}


// 0x100df550  (ghidra: FUN_100df550)  [range]
void functions_D2CommonFunctions_init_100df550(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1cdc);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1cdc);
  _atexit((_func_4879 *)&LAB_1031b930);
  return;
}


// 0x100df5c0  (ghidra: FUN_100df5c0)  [range]
void functions_D2CommonFunctions_init_100df5c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1bb0);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1bb0);
  _atexit((_func_4879 *)&LAB_1031b940);
  return;
}


// 0x100df620  (ghidra: FUN_100df620)  [range]
void functions_D2CommonFunctions_init_100df620(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1c98);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1c98);
  _atexit((_func_4879 *)&LAB_1031b950);
  return;
}


// 0x100df680  (ghidra: FUN_100df680)  [range]
void functions_D2CommonFunctions_init_100df680(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d8c);
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
  sub_1020f900(&DAT_104e1d8c);
  _atexit((_func_4879 *)&LAB_1031b960);
  return;
}


// 0x100df6f0  (ghidra: FUN_100df6f0)  [range]
void functions_D2CommonFunctions_init_100df6f0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1a2c);
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
  sub_1020f900(&DAT_104e1a2c);
  _atexit((_func_4879 *)&LAB_1031b970);
  return;
}


// 0x100df760  (ghidra: FUN_100df760)  [range]
void functions_D2CommonFunctions_init_100df760(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1ba0);
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
  sub_1020f900(&DAT_104e1ba0);
  _atexit((_func_4879 *)&LAB_1031b980);
  return;
}


// 0x100df7d0  (ghidra: FUN_100df7d0)  [range]
void functions_D2CommonFunctions_init_100df7d0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d6c);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1d6c);
  _atexit((_func_4879 *)&LAB_1031b990);
  return;
}


// 0x100df830  (ghidra: FUN_100df830)  [range]
void functions_D2CommonFunctions_init_100df830(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1aa4);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104e1aa4);
  _atexit((_func_4879 *)&LAB_1031b9a0);
  return;
}


// 0x100df890  (ghidra: FUN_100df890)  [range]
void functions_D2CommonFunctions_init_100df890(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1d74);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e1d74);
  _atexit((_func_4879 *)&LAB_1031b9b0);
  return;
}


// 0x100df8f0  (ghidra: FUN_100df8f0)  [range]
void functions_D2CommonFunctions_init_100df8f0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1d54);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e1d54);
  _atexit((_func_4879 *)&LAB_1031b9c0);
  return;
}


// 0x100df950  (ghidra: FUN_100df950)  [range]
void functions_D2CommonFunctions_init_100df950(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1dfc);
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
  sub_1020f900(&DAT_104e1dfc);
  _atexit((_func_4879 *)&LAB_1031b9d0);
  return;
}


// 0x100df9d0  (ghidra: FUN_100df9d0)  [range]
void functions_D2CommonFunctions_init_100df9d0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1a7c);
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
  sub_1020f900(&DAT_104e1a7c);
  _atexit((_func_4879 *)&LAB_1031b9e0);
  return;
}


// 0x100dfa40  (ghidra: FUN_100dfa40)  [range]
void functions_D2CommonFunctions_init_100dfa40(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e1bc0);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e1bc0);
  _atexit((_func_4879 *)&LAB_1031b9f0);
  return;
}


// 0x100dfaa0  (ghidra: FUN_100dfaa0)  [range]
void functions_D2CommonFunctions_init_100dfaa0(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1cd4);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104e1cd4);
  _atexit((_func_4879 *)&LAB_1031ba00);
  return;
}


// 0x100dfb00  (ghidra: FUN_100dfb00)  [range]
void functions_D2CommonFunctions_init_100dfb00(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1c2c);
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
  sub_1020f900(&DAT_104e1c2c);
  _atexit((_func_4879 *)&LAB_1031ba10);
  return;
}


// 0x100dfba0  (ghidra: FUN_100dfba0)  [range]
void functions_D2CommonFunctions_init_100dfba0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1bfc);
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
  sub_1020f900(&DAT_104e1bfc);
  _atexit((_func_4879 *)&LAB_1031ba20);
  return;
}


// 0x100dfc10  (ghidra: FUN_100dfc10)  [range]
void functions_D2CommonFunctions_init_100dfc10(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1b4c);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e1b4c);
  _atexit((_func_4879 *)&LAB_1031ba30);
  return;
}


// 0x100dfc70  (ghidra: FUN_100dfc70)  [range]
void functions_D2CommonFunctions_init_100dfc70(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1ac0);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104e1ac0);
  _atexit((_func_4879 *)&LAB_1031ba40);
  return;
}


// 0x100dfcd0  (ghidra: FUN_100dfcd0)  [range]
void functions_D2CommonFunctions_init_100dfcd0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1dd4);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104e1dd4);
  _atexit((_func_4879 *)&LAB_1031ba50);
  return;
}


// 0x100dfd30  (ghidra: FUN_100dfd30)  [range]
void functions_D2CommonFunctions_init_100dfd30(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1a34);
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
  sub_1020f900(&DAT_104e1a34);
  _atexit((_func_4879 *)&LAB_1031ba60);
  return;
}


// 0x100dfdc0  (ghidra: FUN_100dfdc0)  [range]
void functions_D2CommonFunctions_init_100dfdc0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1bb8);
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
  sub_1020f900(&DAT_104e1bb8);
  _atexit((_func_4879 *)&LAB_1031ba70);
  return;
}


// 0x100dfe80  (ghidra: FUN_100dfe80)  [range]
void functions_D2CommonFunctions_init_100dfe80(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1b38);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1b38);
  _atexit((_func_4879 *)&LAB_1031ba80);
  return;
}


// 0x100dfef0  (ghidra: FUN_100dfef0)  [range]
void functions_D2CommonFunctions_init_100dfef0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104e1af4);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104e1af4);
  _atexit((_func_4879 *)&LAB_1031ba90);
  return;
}


// 0x100dff60  (ghidra: FUN_100dff60)  [range]
void functions_D2CommonFunctions_init_100dff60(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e1a74);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104e1a74);
  _atexit((_func_4879 *)&LAB_1031baa0);
  return;
}


// 0x100dffb0  (ghidra: FUN_100dffb0)  [range]
void functions_D2CommonFunctions_init_100dffb0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104e1d3c);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104e1d3c);
  _atexit((_func_4879 *)&LAB_1031bab0);
  return;
}


// 0x100e0010  (ghidra: FUN_100e0010)  [range]
void functions_D2CommonFunctions_init_100e0010(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d64);
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
  sub_1020f880(&DAT_104e1d64);
  _atexit((_func_4879 *)&LAB_1031bac0);
  return;
}


// 0x100e00a0  (ghidra: FUN_100e00a0)  [range]
void functions_D2CommonFunctions_init_100e00a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d5c);
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
  sub_1020f880(&DAT_104e1d5c);
  _atexit((_func_4879 *)&LAB_1031bad0);
  return;
}


// 0x100e01a0  (ghidra: FUN_100e01a0)  [range]
void functions_D2CommonFunctions_init_100e01a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d44);
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
  sub_1020f900(&DAT_104e1d44);
  _atexit((_func_4879 *)&LAB_1031bae0);
  return;
}


// 0x100e0220  (ghidra: FUN_100e0220)  [range]
void functions_D2CommonFunctions_init_100e0220(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104e1d04);
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
  sub_1020f900(&DAT_104e1d04);
  _atexit((_func_4879 *)&LAB_1031baf0);
  return;
}


// 0x100e02b0  (ghidra: FUN_100e02b0)  [range]
void functions_D2CommonFunctions_init_100e02b0(void)

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
  sub_1020f420((uint64_t *)&DAT_104e1d0c);
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
  sub_1020f7f0((uint32_t *)&DAT_104e1d0c);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031bb00);
  ExceptionList = local_10;
  return;
}


// 0x100e0870  (ghidra: FUN_100e0870)  [range]
void functions_D2CommonFunctions_init_100e0870(void)

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
  sub_1020f420((uint64_t *)&DAT_104e1b04);
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
  sub_1020f840((uint32_t *)&DAT_104e1b04);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_1031bb10);
  ExceptionList = local_10;
  return;
}


// 0x100e1240  (ghidra: FUN_100e1240)  [range]
void functions_D2CommonFunctions_init_100e1240(void)

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
  sub_1020f420((uint64_t *)&DAT_104e1a68);
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
  sub_1020f7f0(&DAT_104e1a68);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_1031bb20);
  ExceptionList = local_10;
  return;
}


// 0x10266e90  (ghidra: FUN_10266e90)  [anchor] refs functions/D2CommonFunctions.cpp
void functions_D2CommonFunctions_Hook_sub_6fc58620_10266e90(int param_1)

{
  uint uVar1;
  int *piVar2;
  void *_Dst;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint8_t local_10 [12];
  
  if (param_1 == 0) {
    pcVar7 = "Could not allocate player data on null unit";
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      _Dst = Fog_10045(*(void **)(param_1 + 8),0x596,
                       "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2CommonFunctions.cpp"
                       ,0x170,0);
      memset(_Dst,0,0x596);
      *(void **)(param_1 + 0x14) = _Dst;
      uVar3 = D2Common_10939(*(uint32_t *)(param_1 + 8));
      *(uint *)(*(int *)(param_1 + 0x14) + 0x10) = uVar3;
      uVar3 = D2Common_10939(*(uint32_t *)(param_1 + 8));
      *(uint *)(*(int *)(param_1 + 0x14) + 0x14) = uVar3;
      uVar3 = D2Common_10939(*(uint32_t *)(param_1 + 8));
      *(uint *)(*(int *)(param_1 + 0x14) + 0x18) = uVar3;
      uVar4 = D2Common_10309(*(uint32_t *)(param_1 + 8));
      *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x1c) = uVar4;
      uVar4 = D2Common_10309(*(uint32_t *)(param_1 + 8));
      *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x20) = uVar4;
      uVar4 = D2Common_10309(*(uint32_t *)(param_1 + 8));
      *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x24) = uVar4;
      piVar2 = (int *)*p_D2Common_DAT_6fdf1420;
      uVar3 = *p_D2Common_DAT_6fdf1424;
      uVar5 = 0;
      if (uVar3 != 0) {
        iVar6 = *piVar2;
        while (iVar6 != 1) {
          uVar1 = uVar5 + 1;
          piVar2 = piVar2 + 1;
          uVar5 = 0;
          if (uVar1 != uVar3) {
            uVar5 = uVar1;
          }
          if (uVar3 <= uVar5) goto LAB_10266f72;
          iVar6 = *piVar2;
        }
        uVar5 = 1 << ((byte)uVar5 & 0x1f);
      }
LAB_10266f72:
      *(uint *)(*(int *)(param_1 + 0x14) + 0x2c) = uVar5;
      *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x4c) = 0;
      if (*(int *)(param_1 + 0x80) != 0) {
        *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x188) =
             *(uint32_t *)(*(int *)(param_1 + 0x80) + 0xa8);
      }
      iVar6 = 0;
      do {
        *(uint16_t *)(iVar6 + 0x512 + *(int *)(param_1 + 0x14)) = 0xffff;
        *(uint32_t *)(iVar6 + 0x516 + *(int *)(param_1 + 0x14)) = 0xffffffff;
        *(uint16_t *)(iVar6 + 0x514 + *(int *)(param_1 + 0x14)) = 0;
        iVar6 = iVar6 + 8;
      } while (iVar6 < 0x80);
      *(uint16_t *)(*(int *)(param_1 + 0x14) + 600) = 0xffff;
      *(uint16_t *)(*(int *)(param_1 + 0x14) + 0x25a) = 0xffff;
      return;
    }
    pcVar7 = "Could not allocate player data because it is already allocated";
  }
  sub_10238300(local_10,pcVar7);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_10393db0);
}


// 0x10267010  (ghidra: FUN_10267010)  [anchor] refs functions/D2CommonFunctions.cpp
void functions_D2CommonFunctions_Hook_sub_6fd01d90_10267010(void *param_1,int *param_2)

{
  void *_Dst;
  uint8_t local_10 [12];
  
  if ((param_2 != (int *)0x0) && (*param_2 == 4)) {
    _Dst = Fog_10045(param_1,0x80,
                     "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2CommonFunctions.cpp"
                     ,0x1af,0);
    if (_Dst == (void *)0x0) {
      sub_10238300(local_10,"Could not allocate item data");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_10,(ThrowInfo *)&DAT_10393db0);
    }
    memset(_Dst,0,0x80);
    *(uint32_t *)((int)_Dst + 0xc) = 0xffffffff;
    param_2[5] = (int)_Dst;
  }
  return;
}


// 0x10267090  (ghidra: FUN_10267090)  [range]
void functions_D2CommonFunctions_10267090(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  sub_102ed450(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// 0x102670a0  (ghidra: FUN_102670a0)  [range]
int functions_D2CommonFunctions_102670a0(int param_1,int param_2,uint32_t param_3)

{
  double dVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int3 extraout_var;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_2 >> 0x10;
  if (iVar4 == 0xb7) {
    piVar5 = *(int **)(param_1 + 0x44);
    if ((piVar5 != (int *)0x0) &&
       (((*piVar5 == 0 || (*piVar5 == 1)) && ((int *)piVar5[0x18] != (int *)0x0)))) {
      iVar4 = 0;
      for (piVar5 = (int *)D2Common_10460((int *)piVar5[0x18]); piVar5 != (int *)0x0;
          piVar5 = (int *)D2Common_10464(piVar5)) {
        cVar2 = *(char *)(piVar5[5] + 0x45);
        cVar3 = sub_102d4390((int)piVar5);
        if (((CONCAT31(extraout_var,cVar3) != 0 && -1 < extraout_var) &&
            ((cVar2 == '\x01' || (cVar2 == -1)))) && (uVar6 = D2Common_10225(piVar5), uVar6 != 0)) {
          iVar4 = iVar4 + 1;
        }
      }
      return iVar4;
    }
    return 0;
  }
  if (iVar4 == 0x1de) {
    piVar5 = *(int **)(param_1 + 0x44);
    if ((piVar5 != (int *)0x0) &&
       (((*piVar5 == 0 || (*piVar5 == 1)) &&
        (iVar4 = D2Common_10973((int)piVar5,0x1e9,0), 0 < iVar4)))) {
      iVar7 = D2Common_10973((int)piVar5,0xb8,0);
      iVar8 = sub_102edd20(param_1,param_2,param_3);
      if ((0 < iVar7) && (0 < iVar8)) {
        iVar7 = iVar7 * iVar4;
        if (0x28 < iVar7) {
          iVar7 = 0x28;
        }
        return iVar8 + iVar7;
      }
    }
  }
  else if (iVar4 == 0xb8) {
    piVar5 = *(int **)(param_1 + 0x44);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    if ((*piVar5 != 0) && (*piVar5 != 1)) {
      return 0;
    }
    iVar4 = D2Common_10973((int)piVar5,6,0);
    dVar1 = (double)(&DAT_103804e0)[-(iVar4 >> 0x1f)];
    iVar7 = D2Common_10973((int)piVar5,7,0);
    if ((double)iVar7 + (double)(&DAT_103804e0)[-(iVar7 >> 0x1f)] == 0.0) {
      return 0;
    }
    return (int)((1.0 - ((double)iVar4 + dVar1) /
                        ((double)iVar7 + (double)(&DAT_103804e0)[-(iVar7 >> 0x1f)])) * 100.0);
  }
  iVar4 = sub_102edd20(param_1,param_2,param_3);
  return iVar4;
}


// 0x10267270  (ghidra: FUN_10267270)  [range]
int functions_D2CommonFunctions_10267270(int param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = sub_102edd20(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x44) == 0) {
    return iVar1;
  }
  switch(param_2 >> 0x10) {
  case 0x30:
  case 0x31:
    iVar3 = 0x149;
    break;
  case 0x32:
  case 0x33:
    iVar3 = 0x14a;
    break;
  case 0x34:
  case 0x35:
    iVar3 = 0x165;
    break;
  case 0x36:
  case 0x37:
    iVar3 = 0x14b;
    break;
  default:
    goto switchD_102672b6_caseD_38;
  case 0x39:
  case 0x3a:
    iVar3 = 0x14c;
  }
  D2Common_10973(*(int *)(param_1 + 0x44),iVar3,0);
switchD_102672b6_caseD_38:
  uVar2 = functions_HelperFunctions_102ce840(iVar1,100);
  return (int)uVar2 + iVar1;
}


// 0x10267340  (ghidra: FUN_10267340)  [range]
void functions_D2CommonFunctions_Hook_sub_6fb05b20_10267340(int param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    puVar2 = *(ushort **)(param_2 + 0x24);
    puVar1 = puVar2 + *(short *)(param_2 + 0x28) * 4;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 4) {
      D2Common_10245_102a37c0((uint *)param_1,(uint)puVar2[1],*(int *)(puVar2 + 2),(uint)*puVar2);
    }
  }
  return;
}


// 0x10267390  (ghidra: FUN_10267390)  [range]
uint32_t __fastcall functions_D2CommonFunctions_Hook_Stats_StatsEx_6fd89ce0_10267390(int param_1,uint param_2,ushort *param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint32_t extraout_var;
  
  iVar3 = Stats_StatsEx_6fd89ce0((void *)param_1,param_2,param_3,(uint)param_4);
  sub_102ed480(param_2,iVar3,param_3,param_4);
  if ((param_4 != (int *)0x0) && (*param_4 == 4)) {
    if (((((param_2 & 0xffff0000) == 0x150000) ||
         ((((param_2 & 0xffff0000) == 0x160000 || ((param_2 & 0xffff0000) == 0x170000)) ||
          ((param_2 & 0xffff0000) == 0x180000)))) ||
        (((param_2 & 0xffff0000) == 0x9f0000 || ((param_2 & 0xffff0000) == 0xa00000)))) &&
       ((*(int *)(param_1 + 8) == 4 &&
        (((uVar4 = D2Common_10744((int)param_4,0x3a), uVar4 != 0 &&
          (piVar1 = *(int **)(param_4[0x17] + 4), piVar1 != (int *)0x0)) &&
         ((*piVar1 == 4 && (uVar4 = D2Common_10744((int)piVar1,0x2d), uVar4 == 0)))))))) {
      return 0;
    }
    piVar1 = *(int **)(param_1 + 0x44);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) &&
       (piVar6 = (int *)piVar1[0x18], piVar6 != (int *)0x0)) {
      iVar5 = functions_HelperFunctions_102ce6d0(0xb7);
      iVar5 = functions_D2CommonFunctions_102670a0(piVar1[0x17],0xb70000,iVar5);
      for (piVar6 = (int *)D2Common_10460(piVar6); piVar6 != (int *)0x0;
          piVar6 = (int *)D2Common_10464(piVar6)) {
        cVar2 = sub_102d4390((int)piVar6);
        if ((CONCAT31(extraout_var,cVar2) != 0) &&
           (uVar4 = functions_D2CommonFunctions_102674f0(piVar6[0x17],0x1e40000,piVar6), 0 < (int)uVar4)) {
          sub_102ede30(piVar6,0,*(uint32_t *)(piVar1[5] + 0x9c),1,0x1e4,iVar5);
        }
      }
    }
  }
  return iVar3;
}


// 0x102674f0  (ghidra: FUN_102674f0)  [range]
uint __fastcall functions_D2CommonFunctions_102674f0(int param_1,int param_2,uint32_t reg_ESI)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint reg_ESI_00;
  void *this;
  int iVar9;
  uint *puVar10;
  uint local_2c;
  short local_10;
  byte bStack_b;
  
  uVar3 = param_2 >> 0x10 & 0xffff;
  iVar4 = functions_HelperFunctions_102ce6d0(uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = sub_102ed4c0(this,param_2,param_1,iVar4);
  reg_ESI_00 = uVar5;
  if (*(char *)(iVar4 + 0x52) != '\0') {
    iVar9 = 0;
    puVar10 = (uint *)(iVar4 + 0xde);
    local_2c = uVar5;
    do {
      uVar8 = *puVar10;
      cVar2 = (char)(short)puVar10[1];
      local_10 = (short)uVar8;
      bStack_b = (byte)((ushort)(short)puVar10[1] >> 8);
      switch(cVar2) {
      case '\0':
        goto switchD_1026756b_caseD_0;
      case '\x01':
        piVar1 = *(int **)(param_1 + 0x44);
        if (piVar1 != (int *)0x0) {
          if (*piVar1 == 4) {
            local_2c = 0;
            uVar5 = 0;
            if (piVar1[0x17] == 0) break;
            uVar5 = D2Common_10587((int)piVar1,uVar3,0);
            local_2c = uVar5;
          }
          if (uVar5 != 0) {
            reg_ESI_00 = uVar8 >> 0x10;
            uVar8 = functions_D2CommonFunctions_102674f0(param_1,reg_ESI_00 << 0x10,reg_ESI_00);
            uVar5 = local_2c;
            if (uVar8 != 0) {
              reg_ESI_00 = reg_ESI_00 + ((int)uVar8 / 100) * local_2c;
            }
          }
        }
        break;
      case '\x02':
      case '\x03':
        if (((*(int *)(param_1 + 8) == 0) || (*(int *)(param_1 + 8) == 1)) &&
           ((local_10 != -1 &&
            ((((iVar4 = functions_HelperFunctions_102ce6d0(uVar8 & 0xffff), uVar5 = local_2c, iVar4 != 0 &&
               (iVar7 = sub_102ed4a0(), iVar7 != 0)) && (iVar7 != -1)) &&
             ((uVar6 = *(uint *)(iVar7 + 4) >> (*(byte *)(iVar4 + 0x18) & 0x1f), 0 < (int)uVar6 &&
              (uVar8 = functions_D2CommonFunctions_102674f0(param_1,uVar8 & 0xffff0000,reg_ESI_00), uVar8 != 0)))))))) {
          iVar4 = (int)(uVar8 * uVar6) >> (bStack_b & 0x1f);
          if (cVar2 == '\x02') {
            reg_ESI_00 = reg_ESI_00 + iVar4;
          }
          else {
LAB_10267697:
            reg_ESI_00 = (uint)((double)(int)(iVar4 * local_2c) / 100.0 + (double)(int)reg_ESI_00);
            uVar5 = local_2c;
          }
        }
        break;
      case '\x04':
      case '\x05':
        piVar1 = *(int **)(param_1 + 4);
        if (((piVar1 != (int *)0x0) && (((*piVar1 == 0 || (*piVar1 == 1)) && (local_10 != -1)))) &&
           ((iVar4 = functions_HelperFunctions_102ce6d0(uVar8 & 0xffff), uVar5 = local_2c, iVar4 != 0 &&
            (piVar1[0x17] != 0)))) {
          iVar7 = functions_D2CommonFunctions_102670a0(piVar1[0x17],uVar8 << 0x10,iVar4);
          iVar7 = iVar7 >> (*(byte *)(iVar4 + 0x18) & 0x1f);
          if ((0 < iVar7) &&
             (uVar8 = functions_D2CommonFunctions_102674f0(param_1,uVar8 & 0xffff0000,reg_ESI_00), uVar8 != 0)) {
            iVar4 = (int)(uVar8 * iVar7) >> (bStack_b & 0x1f);
            if (cVar2 != '\x04') goto LAB_10267697;
            reg_ESI_00 = reg_ESI_00 + iVar4;
          }
        }
        break;
      default:
        reg_ESI_00 = Stats_StatsEx_6fd89530((void *)param_1,param_2);
        uVar5 = local_2c;
      }
      iVar9 = iVar9 + 1;
      puVar10 = (uint *)((int)puVar10 + 6);
    } while (iVar9 < 0x10);
  }
switchD_1026756b_caseD_0:
  return reg_ESI_00;
}


// 0x102677b0  (ghidra: FUN_102677b0)  [range]
void functions_D2CommonFunctions_Hook_SKILLS_SkillNec_6fc70250_102677b0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if ((((iVar2 != 0) && (uVar1 = D2Common_10033(*(uint *)(param_1 + 0x14)), uVar1 != 0)) &&
        ((iVar2 = D2Common_10973(iVar2,0x1f8,0), 0x4b < iVar2 || (iVar2 != 0)))) && (param_3 != 0))
    {
      uVar3 = functions_HelperFunctions_102ce840(param_3,100);
      param_3 = (int)uVar3;
    }
    if (((*(int *)(param_1 + 0x14) == 0x3c) && (param_2 == 0x69)) &&
       (iVar2 = D2Common_10973(*(int *)(param_1 + 4),0x69,0), iVar2 + param_3 < 0)) {
      param_3 = -iVar2;
    }
  }
  D2Common_10188((uint *)param_1,param_2,param_3,param_4);
  return;
}


// 0x10267860  (ghidra: FUN_10267860)  [range]
void __cdecl functions_D2CommonFunctions_Hook_D2Common_10454_10267860(char *param_1,char *param_2,size_t param_3)

{
  uint8_t local_c;
  size_t local_b;
  
  local_c = 0x2b;
  local_b = param_3;
  sub_102ed200(&local_c);
  _strncpy(param_1,param_2,param_3);
  return;
}


// 0x102678a0  (ghidra: FUN_102678a0)  [range]
void functions_D2CommonFunctions_Hook_D2Common_10887_102678a0(int param_1,int param_2,int param_3,uint param_4)

{
  if (param_1 == 0) {
    return;
  }
  D2Common_10261(*(uint **)(param_1 + 0x5c),param_2,param_3,param_4);
  return;
}


// 0x102678d0  (ghidra: FUN_102678d0)  [range]
void functions_D2CommonFunctions_Hook_sub_6fcdd330_102678d0(int param_1,int param_2)

{
  functions_HelperFunctions_102d1030(param_1,0);
  D2Common_10871(param_1,param_2);
  return;
}


// 0x102678f0  (ghidra: FUN_102678f0)  [range]
uint32_t functions_D2CommonFunctions_Hook_sub_6fb26b20_102678f0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  
  uVar2 = D2Common_10826(param_1);
  iVar3 = functions_HelperFunctions_102cea70(uVar2);
  if (((iVar3 != 0) && (*p_D2Client_DAT_6fbcbbfc != 0)) && (iVar3 = *(int *)(*p_D2Client_DAT_6fbcbbfc + 0x2c), iVar3 != 0)
     ) {
    uVar1 = *(ushort *)(iVar3 + 6);
    uVar5 = functions_HelperFunctions_102cf710(uVar2,(uint)*(ushort *)(iVar3 + 2),(uint)uVar1);
    if ((int)uVar5 == 0) {
      if (uVar2 != 0xa6) goto LAB_10267962;
      if ((0x19 < (int)((ulonglong)uVar5 >> 0x20) - 0x5152U) || (0x19 < uVar1 - 0x330c)) {
        return 0;
      }
    }
    return 1;
  }
LAB_10267962:
  uVar4 = D2Common_10057(param_1);
  return uVar4;
}


// 0x10267970  (ghidra: FUN_10267970)  [range]
uint32_t functions_D2CommonFunctions_10267970(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  int extraout_ECX;
  uint64_t uVar5;
  
  uVar2 = D2Common_10826(param_1);
  iVar3 = functions_HelperFunctions_102cea70(uVar2);
  if (((iVar3 != 0) && (param_2 != (int *)0x0)) && (iVar3 = param_2[0xb], iVar3 != 0)) {
    uVar1 = *(ushort *)(iVar3 + 6);
    uVar5 = functions_HelperFunctions_102cf710(extraout_ECX,(uint)*(ushort *)(iVar3 + 2),(uint)uVar1);
    if ((int)uVar5 == 0) {
      if (uVar2 == 0xa6) {
        if ((0x19 < (int)((ulonglong)uVar5 >> 0x20) - 0x5152U) || (0x19 < uVar1 - 0x330c)) {
          return 0;
        }
      }
      else if (((*param_2 != 0) || (param_2[5] == 0)) || (*(int *)(param_2[5] + 400) == 0))
      goto LAB_102679f5;
    }
    return 1;
  }
LAB_102679f5:
  uVar4 = D2Common_10057(param_1);
  return uVar4;
}


// 0x10267a10  (ghidra: FUN_10267a10)  [range]
int functions_D2CommonFunctions_Hook_Ai_AiThink4_6fcc4a10_10267a10(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  
  uVar1 = D2Common_10331(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = D2Common_10826(uVar1);
  iVar3 = functions_HelperFunctions_102cea70(uVar2);
  if (((iVar3 != 0) && (param_1 != (int *)0x0)) && (iVar3 = param_1[0xb], iVar3 != 0)) {
    uVar4 = functions_HelperFunctions_102cf710(uVar2,(uint)*(ushort *)(iVar3 + 2),(uint)*(ushort *)(iVar3 + 6));
    if ((int)uVar4 != 0) {
      return 0;
    }
    if (((*param_1 == 0) && (param_1[5] != 0)) && (*(int *)(param_1[5] + 400) != 0)) {
      return 0;
    }
  }
  return uVar1;
}


// 0x10267a80  (ghidra: FUN_10267a80)  [range]
uint8_t functions_D2CommonFunctions_10267a80(uint param_1)

{
  int iVar1;
  
  iVar1 = functions_HelperFunctions_102ce630(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint8_t *)(iVar1 + 3);
}


// 0x10267aa0  (ghidra: FUN_10267aa0)  [range]
uint __fastcall functions_D2CommonFunctions_10267aa0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x15) {
    uVar1 = param_1 - 1U;
  }
  return uVar1;
}


// 0x10267ab0  (ghidra: FUN_10267ab0)  [range]
uint32_t functions_D2CommonFunctions_Hook_ENGINE_Gfx_6fb1b5a0_10267ab0(int *param_1,int *param_2,uint8_t *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  uint uVar10;
  uint unused_ECX;
  uint uVar11;
  uint reg_EDX;
  void *this;
  ulonglong uVar12;
  char cStack_1c;
  uint8_t local_8 [4];
  
  iVar2 = param_4;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 4) {
    iVar4 = D2Common_10695(param_2[1]);
    iVar5 = D2Common_10973((int)param_2,0x10e,0);
    if ((iVar4 != 0) && (0 < iVar5)) {
      uVar12 = D2Common_10106(unused_ECX,reg_EDX,param_2);
      if ((int)uVar12 == 7) {
        sub_1025e010(&param_4,(uint *)(param_2[5] + 0x28));
        piVar6 = (int *)sub_1025e030(local_8);
        bVar3 = sub_1023d8f0(this,piVar6);
        if (bVar3) {
          iVar7 = sub_1025dfd0((uint *)(param_2[5] + 0x28));
          uVar10 = *(uint *)(iVar7 + 0x44);
          puVar1 = (uint *)(iVar7 + 0x4c);
          if (iVar2 != 0) {
            puVar1 = (uint *)(iVar7 + 0x48);
          }
          uVar11 = *puVar1;
          if (uVar11 != 0xff) {
            cStack_1c = (char)uVar10;
            *param_3 = (char)uVar11;
            uVar8 = 8;
            if (cStack_1c != '\0') {
              uVar8 = uVar10 & 0xff;
            }
            puVar9 = D2CMP_10091(uVar8,uVar11 & 0xff);
            return puVar9;
          }
        }
      }
    }
    iVar7 = D2Common_10973((int)param_2,0x1dd,0);
    if ((iVar4 != 0) && (0 < iVar7)) {
      uVar10 = functions_D2CommonFunctions_10267aa0(iVar7);
      *param_3 = (char)uVar10;
      if (0 < iVar5) {
        puVar9 = D2CMP_10091(8,uVar10);
        return puVar9;
      }
      if (iVar2 != 0) {
        puVar9 = D2CMP_10091((uint)*(byte *)(iVar4 + 0x142),uVar10);
        return puVar9;
      }
      puVar9 = D2CMP_10091((uint)*(byte *)(iVar4 + 0x141),uVar10);
      return puVar9;
    }
  }
  uVar10 = D2Common_10893(param_1,param_2,param_3,iVar2);
  return uVar10;
}


// 0x10267c50  (ghidra: FUN_10267c50)  [range]
uint functions_D2CommonFunctions_10267c50(byte param_1)

{
  uint uVar1;
  
  uVar1 = D2Win_10065((uint)param_1);
  if (4 < param_1) {
    Sound_SoundHdr_6fb0f090();
    sub_6fb6e860();
  }
  return uVar1;
}


// 0x10267c80  (ghidra: FUN_10267c80)  [range]
uint32_t functions_D2CommonFunctions_Hook_sub_6fcb8680_10267c80(int param_1)

{
  uint uVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x98) != 0)) && (*(int *)(param_1 + 0x94) == 0)) {
    return 0;
  }
  uVar1 = D2Common_10501((int *)param_1);
  return uVar1;
}


// 0x10267cb0  (ghidra: FUN_10267cb0)  [range]
void functions_D2CommonFunctions_Hook_sub_6fc71340_10267cb0(int param_1)

{
  uint uVar1;
  
  uVar1 = D2Common_10494((int *)param_1,0x60);
  if ((uVar1 != 0) && (2 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44))) {
    *(uint32_t *)(*(int *)(param_1 + 0x2c) + 0x44) = 2;
  }
  D2Common_10704((int *)param_1);
  return;
}


// 0x10267ce0  (ghidra: FUN_10267ce0)  [range]
uint32_t functions_D2CommonFunctions_10267ce0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 4) == 0x10f) {
      uVar1 = D2Common_10744(param_2,5);
      if (uVar1 != 0) {
        return 1;
      }
      uVar1 = 6;
    }
    else {
      if (*(int *)(param_1 + 4) != 0x167) {
        return 0;
      }
      uVar1 = D2Common_10744(param_2,2);
      if (uVar1 != 0) {
        return 1;
      }
      uVar1 = 0x46;
    }
    uVar1 = D2Common_10744(param_2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// 0x10267d40  (ghidra: FUN_10267d40)  [range]
uint32_t functions_D2CommonFunctions_10267d40(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = D2Common_10744(param_1,4);
  if ((((uVar1 == 0) && (uVar1 = D2Common_10744(param_1,9), uVar1 == 0)) &&
      (uVar1 = D2Common_10744(param_1,0x16), uVar1 == 0)) &&
     ((uVar1 = D2Common_10744(param_1,0x26), uVar1 == 0 &&
      (uVar1 = D2Common_10744(param_1,0x29), uVar1 == 0)))) {
    return 0;
  }
  return 1;
}


// 0x10267da0  (ghidra: FUN_10267da0)  [range]
int functions_D2CommonFunctions_10267da0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = p_D2Common_DAT_6fde4608;
  if ((((*(int *)(param_2 + 0x5c) == 0) ||
       (iVar3 = *(int *)(p_D2Common_DAT_6fde4608 + 8 + param_1 * 0xc), iVar3 < 0)) ||
      (*(int *)(*p_D2Common_DAT_6fde9e1c + 0xbd4) <= iVar3)) ||
     (iVar2 = *(int *)(*p_D2Common_DAT_6fde9e1c + 0xbcc) + iVar3 * 0x150, iVar2 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = sub_102edd20(*(int *)(param_2 + 0x5c),iVar3 << 0x10,iVar2);
  }
  if ((*(int *)(iVar1 + param_1 * 0xc) == 1) && (iVar3 != 0)) {
    iVar1 = *(int *)(iVar1 + 4 + param_1 * 0xc);
    if ((iVar1 != 0) && (iVar1 + iVar3 != 0)) {
      return (iVar1 * iVar3) / (iVar1 + iVar3);
    }
    return 0;
  }
  return iVar3;
}


// 0x10267e40  (ghidra: FUN_10267e40)  [range]
int functions_D2CommonFunctions_10267e40(int *param_1,uint8_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return -1;
  }
  iVar1 = *param_1;
  iVar2 = -1;
  if (iVar1 == 0) {
    switch(param_2) {
    case 1:
      return 6;
    case 2:
      return 7;
    case 3:
      return 9;
    case 4:
      return (uint)(param_3 != 0) * 4 + 8;
    case 5:
      goto switchD_10267e63_caseD_5;
    default:
      iVar1 = 0;
      if (*p_D2Common_DAT_6fdeefe4 != 0) {
        iVar2 = *p_D2Common_DAT_6fdeefe8;
        while (param_1[1] != iVar2) {
          iVar1 = iVar1 + 1;
          if (*p_D2Common_DAT_6fdeefe4 <= iVar1) {
            return -1;
          }
          iVar2 = p_D2Common_DAT_6fdeefe8[iVar1 * 2];
        }
        iVar2 = p_D2Common_DAT_6fdeefe8[iVar1 * 2 + 1];
      }
      return iVar2;
    }
  }
  if (iVar1 == 1) {
    return 5;
  }
  if (iVar1 == 2) {
    if (param_1[1] == 0x152) {
switchD_10267e63_caseD_5:
      return 10;
    }
    if (param_1[1] != 0x153) {
      return -1;
    }
    return 0xb;
  }
  return -1;
}


// 0x10267f30  (ghidra: FUN_10267f30)  [range]
uint32_t
functions_D2CommonFunctions_10267f30(int param_1,int param_2,int param_3,int param_4,int param_5,uint32_t param_6,
            byte param_7)

{
  int *piVar1;
  uint32_t uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_5 == 10) || (param_5 == (*p_D2Common_DAT_6fdefa58_102a45a0 >> 1) + 10)) && (param_7 == 5)) {
    if (*(int *)(param_2 + 0x80) == 0) {
      uVar3 = D2Common_10133((int *)param_1,(int *)param_2,param_5,0,5,0,0);
      return uVar3;
    }
    piVar1 = sub_102d3f60((uint)*(byte *)(*(int *)(param_2 + 0x14) + 0x44));
    param_3 = param_3 + *piVar1;
    param_4 = param_4 + piVar1[1];
    FUN_1030207a(piVar1);
  }
  uVar2 = sub_102edde0(param_1,param_2,param_3,param_4,param_7 + 2,param_5);
  return uVar2;
}


// 0x10267fd0  (ghidra: FUN_10267fd0)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void functions_D2CommonFunctions_10267fd0(void)

{
  DAT_104e19d4 = 0;
  return;
}


// 0x10267fe0  (ghidra: FUN_10267fe0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint32_t functions_D2CommonFunctions_10267fe0(char *param_1)

{
  bool bVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  uint uStack_4c;
  uint32_t local_38 [6];
  uint8_t local_20 [4];
  int local_1c;
  uint local_18;
  uint8_t *local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_103077cd;
  local_10 = ExceptionList;
  uStack_4c = DAT_1039800c ^ (uint)&stack0xfffffffc;
  local_14 = (uint8_t *)&uStack_4c;
  ExceptionList = &local_10;
  local_18 = uStack_4c;
  sub_102401f0(&local_1c);
  sub_1020f990(local_38,param_1);
  functions_D2CommonFunctions_1026b7d0(&local_1c,local_38);
  thunk_FUN_1020fc60(local_38);
  piVar2 = (int *)functions_D2CommonFunctions_1026b7f0(local_20);
  bVar1 = sub_10228020(&local_1c,piVar2);
  if (bVar1) {
    local_8 = 0;
    sub_1020f990(local_38,param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = sub_102541d0((int)local_38);
    thunk_FUN_1020fc60(local_38);
  }
  else {
    iVar4 = functions_D2CommonFunctions_1026b760(&local_1c);
    uVar3 = *(uint32_t *)(iVar4 + 0x18);
  }
  ExceptionList = local_10;
  return uVar3;
}


// 0x1026807a  [range]
uint8_t * Catch_1026807a(void)

{
  int unaff_EBP;
  
  *(uint32_t *)(unaff_EBP + -0x18) = 1;
  return &DAT_10268087;
}


// 0x102680c0  (ghidra: FUN_102680c0)  [range]
void functions_D2CommonFunctions_Hook_D2Common_10803_102680c0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    Fog_10024("","D2COMMON_10890_ITEMMODS_ApplyEthereal_INTERCEPT",0x5e4);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  uVar2 = D2Common_10225_102787e0(param_1);
  if (uVar2 == 0) {
    if ((*param_1 == 4) && (param_1[5] != 0)) {
      puVar1 = (uint *)(param_1[5] + 0x18);
      *puVar1 = *puVar1 | 0x400000;
    }
    uVar2 = D2Common_10744((int)param_1,0x2d);
    if (uVar2 == 0) {
      iVar3 = D2Common_10587((int)param_1,0x1f,0);
      D2Common_10887_10273d40(param_1,0x1f,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
      return;
    }
    iVar3 = D2Common_10587((int)param_1,0x15,0);
    D2Common_10887_10273d40(param_1,0x15,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
    iVar3 = D2Common_10587((int)param_1,0x16,0);
    D2Common_10887_10273d40(param_1,0x16,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
    iVar3 = D2Common_10587((int)param_1,0x17,0);
    D2Common_10887_10273d40(param_1,0x17,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
    iVar3 = D2Common_10587((int)param_1,0x18,0);
    D2Common_10887_10273d40(param_1,0x18,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
    iVar3 = D2Common_10587((int)param_1,0x9f,0);
    D2Common_10887_10273d40(param_1,0x9f,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
    iVar3 = D2Common_10587((int)param_1,0xa0,0);
    D2Common_10887_10273d40(param_1,0xa0,(int)(iVar3 * 5 + (iVar3 * 5 >> 0x1f & 3U)) >> 2,0);
  }
  return;
}


// 0x10268220  (ghidra: FUN_10268220)  [range]
uint8_t * __fastcall functions_D2CommonFunctions_10268220(int param_1,uint8_t *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint8_t *puVar3;
  int iVar4;
  
  if (((param_1 != 0) && (iVar4 = *(int *)(param_1 + 0x14), iVar4 != 0)) &&
     (param_2 != (uint8_t *)0x0)) {
    uVar1 = *(ushort *)(iVar4 + 10);
    uVar2 = *(ushort *)(iVar4 + 0xc);
    puVar3 = functions_HelperFunctions_102d30b0(param_2,0x159,param_2);
    iVar4 = D2Common_10653((uint)param_2,(uint)uVar1,(uint)uVar2);
    return puVar3 + iVar4;
  }
  return (uint8_t *)0x0;
}


// 0x10268270  (ghidra: FUN_10268270)  [range]
int functions_D2CommonFunctions_Hook_sub_6fc9a5e0_10268270(int *param_1,uint param_2)

{
  int *piVar1;
  uint16_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint8_t local_18;
  uint16_t local_17;
  uint16_t local_15;
  uint16_t local_13;
  uint32_t local_11;
  uint8_t local_d;
  int local_c;
  uint local_8;
  
  piVar1 = param_1;
  iVar3 = D2Common_10871((int)param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return iVar3;
  }
  if (param_1[5] == 0) {
    return iVar3;
  }
  if (*param_1 != 0) {
    return iVar3;
  }
  local_8 = D2Common_10959(iVar3);
  uVar4 = *(uint *)(iVar3 + 0x1c);
  param_1 = *(int **)(iVar3 + 0x20);
  if (uVar4 == 0) {
    uVar4 = D2Common_10680(iVar3,0x15e,0);
    param_1 = (int *)D2Common_10680(iVar3,0x15f,0);
    if (uVar4 == 0) {
      uVar4 = functions_HelperFunctions_102ce520(param_2);
    }
  }
  local_13 = SUB42(param_1,0);
  local_17 = *(uint16_t *)(iVar3 + 0x14);
  local_11 = 0;
  local_18 = 0x83;
  local_15 = (uint16_t)uVar4;
  if (local_8 <= *(uint *)(piVar1[0x20] + 0xa8)) {
    if ((param_2 != 0xe) && (param_2 != 0x97)) {
      return iVar3;
    }
    local_d = 4;
    iVar5 = D2Common_10680(iVar3,0x84,0);
    local_c = (int)(iVar5 + (iVar5 >> 0x1f & 0xffU)) >> 8;
    goto switchD_10268347_caseD_5f;
  }
  local_c = local_8 - *(uint *)(piVar1[0x20] + 0xa8);
  local_d = 1;
  local_8 = 0;
  switch(param_2) {
  case 0x5e:
    local_d = 3;
    iVar5 = functions_HelperFunctions_102ce5a0(uVar4);
    if (iVar5 == 0) break;
    uVar4 = D2Common_10786_102769a0((uint)piVar1,*(uint *)(iVar5 + 0x144),uVar4,(uint)param_1);
    uVar2 = (uint16_t)uVar4;
    goto LAB_10268443;
  case 0x75:
  case 0x78:
    local_d = 3;
    iVar5 = functions_HelperFunctions_102ce5a0(uVar4);
    if (iVar5 == 0) break;
    uVar4 = D2Common_10786((uint)piVar1,*(uint *)(iVar5 + 0x13c),uVar4,(uint)param_1);
    uVar2 = (uint16_t)uVar4;
LAB_10268443:
    iVar5 = D2Common_10680(iVar3,0xa9,0);
    local_11 = CONCAT22(uVar2,(short)iVar5);
    break;
  case 0x7a:
    local_d = 2;
    iVar5 = D2Common_10680(iVar3,0x13e,0);
    local_11 = CONCAT22(3,(short)iVar5);
    break;
  case 0x7b:
    local_d = 2;
    iVar5 = D2Common_10680(iVar3,0x13f,0);
    local_11 = CONCAT22(3,(short)iVar5);
    break;
  case 0x7c:
    local_d = 2;
    iVar5 = D2Common_10680(iVar3,0x140,0);
    local_11 = CONCAT22(3,(short)iVar5);
    break;
  case 0x7d:
    local_d = 2;
    iVar5 = D2Common_10680(iVar3,0x141,0);
    local_11 = CONCAT22(3,(short)iVar5);
    break;
  case 0x7e:
    local_d = 2;
    iVar5 = D2Common_10680(iVar3,0x142,0);
    local_11 = CONCAT22(3,(short)iVar5);
    break;
  case 0x7f:
    local_d = 2;
    iVar5 = D2Common_10680(iVar3,0x143,0);
    local_11 = CONCAT22(3,(short)iVar5);
    break;
  case 0xee:
    local_d = 3;
    iVar5 = functions_HelperFunctions_102ce5a0(uVar4);
    if (iVar5 != 0) {
      local_8 = *(uint *)(iVar5 + 0x15c);
    }
    iVar5 = D2Common_10680(iVar3,0xd0,0);
    local_11 = CONCAT22((short)local_8,(short)iVar5);
  }
switchD_10268347_caseD_5f:
  sub_102ecd00(*(uint32_t *)(piVar1[5] + 0x9c),&local_18,0x10);
  return iVar3;
}


// 0x102685c0  (ghidra: FUN_102685c0)  [range]
uint32_t functions_D2CommonFunctions_Hook_UI_panel_6fad8bc0_102685c0(uint32_t *param_1)

{
  uint uVar1;
  
  if (param_1 == (uint32_t *)0x0) {
    return 0;
  }
  if ((*(short *)*param_1 != 0x201) && (*(short *)*param_1 != 0x202)) {
    uVar1 = D2Common_10353((int)param_1);
    return uVar1;
  }
  return 99;
}


// 0x10268600  (ghidra: FUN_10268600)  [range]
void functions_D2CommonFunctions_Hook_UNIT_SUnitDmg_6fcfb570_10268600(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (param_2 == 6) {
    iVar1 = D2Common_10973((int)param_1,6,param_4);
    iVar2 = D2Common_10973((int)param_1,7,param_4);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar3 = D2Common_10973((int)param_1,0x1e8,0);
    dVar4 = (100.0 - ((double)iVar3 + (double)(&DAT_103804e0)[-(iVar3 >> 0x1f)])) / 100.0;
    if (((double)param_3 / ((double)iVar2 + (double)(&DAT_103804e0)[-(iVar2 >> 0x1f)]) < dVar4) ||
       (((double)iVar1 + (double)(&DAT_103804e0)[-(iVar1 >> 0x1f)]) /
        ((double)iVar2 + (double)(&DAT_103804e0)[-(iVar2 >> 0x1f)]) < dVar4)) {
      D2Common_10887(param_1,6,param_3,param_4);
      return;
    }
  }
  else {
    D2Common_10887(param_1,param_2,param_3,param_4);
  }
  return;
}


// 0x102686f0  (ghidra: FUN_102686f0)  [range]
uint32_t functions_D2CommonFunctions_Hook_sub_6fc96bf0_102686f0(int *param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 1)) && (param_1[1] == 0x3df)) {
    puVar1 = (uint32_t *)D2Common_10511((int)param_1);
    if (((puVar1 != (uint32_t *)0x0) && ((short *)*puVar1 != (short *)0x0)) &&
       (*(short *)*puVar1 == 0x8f)) {
      uVar2 = D2Common_10397((int)puVar1);
      if ((uVar2 & 0x100) != 0) {
        return 0;
      }
    }
  }
  uVar2 = D2Common_10426((int)param_1);
  return uVar2;
}


// 0x10268750  (ghidra: FUN_10268750)  [range]
void functions_D2CommonFunctions_Hook_sub_6fc96f43_10268750(int *param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  
  if (((((param_1 != (int *)0x0) && (*param_1 == 1)) && (param_1[1] == 0x3df)) &&
      ((puVar1 = (uint32_t *)D2Common_10511((int)param_1), puVar1 != (uint32_t *)0x0 &&
       ((short *)*puVar1 != (short *)0x0)))) &&
     ((*(short *)*puVar1 == 0x8f &&
      ((uVar2 = D2Common_10397((int)puVar1), (uVar2 & 0x100) != 0 && (param_1[0xe] == 0x800)))))) {
    return;
  }
  functions_D2NewFunctions_Hook_sub_6fc95900_102cd250(param_1);
  return;
}


// 0x102687b0  (ghidra: FUN_102687b0)  [range]
void functions_D2CommonFunctions_102687b0(int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 0xc);
  sub_102ee440();
  iVar1 = *(int *)(param_3 + 0xc);
  if ((*p_D2Client_DAT_6fbcbbfc != 0) && (0x88 < param_1)) {
    iVar2 = D2Common_10749(param_1);
    if (*(int *)(param_3 + 0x30) == 0) {
      if (*(byte *)(iVar2 + 0x88) != 0) {
        iVar3 = functions_HelperFunctions_102d0d30(iVar3,(uint)*(byte *)(iVar2 + 0x88));
        *(int *)(param_3 + 0xc) = iVar3;
        return;
      }
      iVar3 = functions_HelperFunctions_102d0d30(iVar3,iVar1);
      *(int *)(param_3 + 0xc) = iVar3;
      return;
    }
    iVar3 = functions_HelperFunctions_102d0d30(iVar3,0);
    *(int *)(param_3 + 0xc) = iVar3;
  }
  return;
}


// 0x10268850  (ghidra: FUN_10268850)  [range]
void functions_D2CommonFunctions_10268850(uint param_1)

{
  switch(param_1) {
  case 0:
    functions_HelperFunctions_102d0fa0(0xf9b,0);
    return;
  case 1:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescfarw");
    return;
  case 2:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDesccarw");
    return;
  case 3:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDesccomb");
    return;
  case 4:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescdef ");
    return;
  case 5:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescoff ");
    return;
  case 6:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescfire");
    return;
  case 7:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDesccold");
    return;
  case 8:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescltng");
    return;
  case 9:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescmght");
    return;
  case 10:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescfrnz");
    return;
  case 0xb:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescwwnd");
    return;
  case 0xc:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescascd");
    return;
  case 0xd:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescascl");
    return;
  case 0xe:
    functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"MercDescparw");
    return;
  default:
    D2Common_10091(param_1);
    return;
  }
}


// 0x10268980  (ghidra: FUN_10268980)  [range]
uint32_t * __fastcall functions_D2CommonFunctions_10268980(int param_1,uint param_2)

{
  uint32_t *puVar1;
  
  if (param_1 != 0) {
    for (puVar1 = (uint32_t *)D2Common_10947(param_1); puVar1 != (uint32_t *)0x0;
        puVar1 = (uint32_t *)puVar1[1]) {
      if (((ushort *)*puVar1 != (ushort *)0x0) && (*(ushort *)*puVar1 == param_2)) {
        return puVar1;
      }
    }
  }
  return (uint32_t *)0x0;
}


// 0x102689b0  (ghidra: FUN_102689b0)  [range]
int functions_D2CommonFunctions_Hook_PLAYER_PlrModes_6fc97bb0_102689b0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int extraout_EDX;
  
  D2Common_10973(param_1,param_2,param_3);
  iVar1 = functions_HelperFunctions_102ceae0(param_1);
  if ((iVar1 != 0) && (0x1e < extraout_EDX)) {
    iVar1 = D2Common_10871(param_1,0xcd);
    if (iVar1 != 0) {
      iVar1 = D2Common_10680(iVar1,param_2,0);
      return iVar1;
    }
    return 0x1e;
  }
  return extraout_EDX;
}


// 0x10268a10  (ghidra: FUN_10268a10)  [range]
void functions_D2CommonFunctions_10268a10(int param_1,int param_2)

{
  int iVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  if (param_2 == 3) {
    iVar1 = D2Common_10973(param_1,0x165,0);
    if (iVar1 != 0) {
      sub_102eeaf0(extraout_ECX,extraout_EDX);
      return;
    }
  }
  sub_102eeac0();
  return;
}


// 0x10268a50  (ghidra: FUN_10268a50)  [range]
void functions_D2CommonFunctions_10268a50(int param_1,int param_2)

{
  int iVar1;
  uint32_t extraout_ECX;
  uint32_t extraout_EDX;
  
  if (param_2 == 3) {
    iVar1 = D2Common_10973(param_1,0x165,0);
    if (iVar1 != 0) {
      sub_102eeaf0(extraout_ECX,extraout_EDX);
      return;
    }
  }
  sub_102eea80();
  return;
}


// 0x10268a90  (ghidra: FUN_10268a90)  [range]
int functions_D2CommonFunctions_10268a90(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = D2Common_10973((int)param_2,0x44,0);
  iVar2 = D2Common_10973((int)param_3,0x44,0);
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    iVar3 = D2Common_10973((int)param_2,0x5d,0);
    iVar4 = D2Common_10973((int)param_3,0x5d,0);
    D2Common_10164((int)param_1,param_2,0);
    D2Common_10164((int)param_1,param_3,0);
    piVar5 = param_2;
    if (iVar1 + iVar3 <= iVar2 + iVar4) {
      piVar5 = param_3;
    }
    D2Common_10164((int)param_1,piVar5,1);
    iVar6 = sub_102edd60(0,param_1);
    iVar7 = D2Common_10973((int)param_1,0x44,0);
    if (iVar1 + iVar3 <= iVar2 + iVar4) {
      D2Common_10164((int)param_1,param_3,0);
      D2Common_10164((int)param_1,param_2,1);
    }
    return iVar6 + iVar7;
  }
  return ((iVar2 + iVar1) / 2 - iVar1) + param_4;
}


// 0x10268b60  (ghidra: FUN_10268b60)  [range]
int __fastcall functions_D2CommonFunctions_10268b60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_102edd60(0,param_1);
  iVar2 = D2Common_10973(param_1,0x44,0);
  return iVar2 + iVar1;
}


// 0x10268b80  (ghidra: FUN_10268b80)  [range]
bool functions_D2CommonFunctions_10268b80(int *param_1,uint32_t *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 0)) && (param_1[5] != 0)) &&
     ((param_2 != (uint32_t *)0x0 && ((short *)*param_2 != (short *)0x0)))) {
    sVar1 = *(short *)*param_2;
    if ((sVar1 == 0xe4) || ((sVar1 == 0xdf || (sVar1 == 0x184)))) {
      D2Common_10331(param_1);
    }
    else {
      uVar2 = D2Common_10331(param_1);
      if (uVar2 != 0) {
        iVar3 = D2Common_10057(uVar2);
        if (iVar3 != 0) {
          return true;
        }
      }
    }
    piVar4 = (int *)functions_HelperFunctions_102ce5a0((uint)*(ushort *)*param_2);
    if (piVar4 != (int *)0x0) {
      iVar3 = functions_HelperFunctions_102d18c0(param_1,*piVar4);
      if ((iVar3 != -1) && (piVar4[3] == param_1[1])) {
        return *(int *)(param_1[5] + 0x1d0 + iVar3 * 4) == 0;
      }
      return *(int *)(param_1[5] + 0x1cc) == 0;
    }
  }
  return false;
}


// 0x10268c60  (ghidra: FUN_10268c60)  [range]
void functions_D2CommonFunctions_10268c60(int param_1,int param_2,int param_3,uint param_4)

{
  if ((((param_1 != 0) && (-1 < param_2)) && (param_3 != 0)) &&
     (*(uint **)(param_1 + 0x5c) != (uint *)0x0)) {
    D2Common_10245_102a37c0(*(uint **)(param_1 + 0x5c),param_2,param_3,param_4);
    return;
  }
  return;
}


// 0x10268ca0  (ghidra: FUN_10268ca0)  [range]
uint32_t functions_D2CommonFunctions_10268ca0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0;
  }
  param_1[0x3a] = *(int *)(param_2 + 0x74);
  *(int **)(param_2 + 0x74) = param_1;
  D2Common_10158(param_1);
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return 1;
    }
    iVar1 = D2Common_10830(param_1);
    if (iVar1 != 2) {
      return 1;
    }
  }
  *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  return 1;
}


// 0x10268d00  (ghidra: FUN_10268d00)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int functions_D2CommonFunctions_10268d00(int param_1,uint32_t param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint32_t extraout_var;
  int iVar3;
  int *piVar4;
  void *this;
  uint8_t auStack_20 [4];
  uint8_t auStack_1c [4];
  uint8_t auStack_18 [4];
  uint64_t uStack_14;
  uint local_c;
  
  iVar3 = param_4;
  local_c = DAT_1039800c ^ (uint)auStack_20;
  iVar2 = D2Common_10894(param_1,(byte)param_2,param_3);
  if (iVar3 != 0) {
    bVar1 = functions_HelperFunctions_102ce890(param_1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar3 = sub_102dba30(iVar3,1);
      return iVar2 + iVar3;
    }
    sub_1020f410(&uStack_14);
    iVar3 = functions_D2CommonFunctions_1026b810(&DAT_104e188c,*(uint *)(iVar3 + 0x26f2));
    sub_10212a90(&uStack_14,iVar3);
    sub_10228040(&uStack_14,auStack_1c,&param_1);
    piVar4 = (int *)sub_102280a0(&uStack_14,auStack_18);
    bVar1 = sub_1023d8f0(this,piVar4);
    if (bVar1) {
      iVar2 = 0x55;
    }
    thunk_FUN_1020f8e0(&uStack_14);
  }
  return iVar2;
}


// 0x10268de0  (ghidra: FUN_10268de0)  [range]
int __fastcall functions_D2CommonFunctions_10268de0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      iVar1 = D2Common_10973_10273ce0((int)param_1,0xc,0);
    }
    else if (*param_1 == 0) {
      iVar1 = D2Common_10587((int)param_1,0xc,0);
    }
    else {
      uVar2 = D2Common_10331_102753f0(param_1);
      uVar2 = D2Common_10826_10276680(uVar2);
      iVar1 = param_1[0x20];
      iVar1 = functions_D2CommonFunctions_10268d00(uVar2,(uint)*(byte *)(iVar1 + 0x6d),*(uint32_t *)(iVar1 + 0x70),iVar1);
    }
    if (1 < iVar1) {
      return iVar1;
    }
  }
  return 1;
}


// 0x10268e40  (ghidra: FUN_10268e40)  [range]
uint32_t functions_D2CommonFunctions_10268e40(uint param_1)

{
  if (param_1 < 0x231) {
    if (param_1 == 0x230) {
      return 4;
    }
    if (param_1 == 0x10f) {
      return 1;
    }
    if (param_1 == 0x152) {
      return 2;
    }
    if (param_1 == 0x167) {
      return 3;
    }
  }
  else {
    if (param_1 == 0x231) {
      return 4;
    }
    if (param_1 == 0x420) {
      return 2;
    }
  }
  return 0;
}


// 0x10268ea0  (ghidra: FUN_10268ea0)  [range]
uint __fastcall functions_D2CommonFunctions_10268ea0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *extraout_EDX;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*param_1 == 0)) {
    iVar1 = functions_HelperFunctions_102ceae0(param_2);
    if (iVar1 != 0) {
      uVar2 = D2Common_11138(param_1,extraout_EDX,0);
      return uVar2;
    }
  }
  return 0;
}


// 0x10268ed0  (ghidra: FUN_10268ed0)  [range]
uint functions_D2CommonFunctions_Hook_D2Common_10244_10268ed0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14) == 0)) ||
     (*(char *)(*(int *)(param_1 + 0x14) + 0x45) != '\0')) {
    uVar2 = D2Common_10822((int *)param_1);
    return uVar2;
  }
  uVar2 = D2Common_10744(param_1,0xdd);
  if (uVar2 == 0) {
    uVar2 = D2Common_10744(param_1,0xd);
    if (uVar2 == 0) goto LAB_10268f83;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x5c);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = functions_HelperFunctions_102ceae0(*(int *)(iVar3 + 8));
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  }
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(uint *)(*(int *)(param_1 + 0x2c) + 0x10) < 4)) {
    return 0xffffffff;
  }
  if (**(int **)(param_1 + 0x14) == 7) {
    iVar3 = (*(int **)(param_1 + 0x14))[0x17];
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    for (piVar4 = *(int **)(iVar3 + 0xc); piVar4 != (int *)0x0;
        piVar4 = (int *)D2Common_10464(piVar4)) {
      piVar1 = (int *)piVar4[5];
      if (((*(char *)((int)piVar1 + 0x45) == '\0') && (piVar4 != (int *)param_1)) &&
         ((*piVar1 == 7 &&
          ((3 < *(uint *)(piVar4[0xb] + 0x10) &&
           (piVar1[10] == *(int *)(*(int *)(param_1 + 0x14) + 0x28))))))) {
        return 0xffffffff;
      }
    }
  }
LAB_10268f83:
  uVar2 = D2Common_10822((int *)param_1);
  return uVar2;
}


// 0x10268f90  (ghidra: FUN_10268f90)  [range]
uint8_t ** functions_D2CommonFunctions_10268f90(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint8_t **ppuVar4;
  
  if (((param_1 != (int *)0x0) &&
      (piVar1 = (int *)D2Common_10511((int)param_1), piVar1 != (int *)0x0)) &&
     (uVar2 = D2Common_10030(param_1,piVar1), 0 < (int)uVar2)) {
    if (*param_1 == 0) {
      iVar3 = sub_102ef8d0();
      switch(uVar2) {
      case 1:
        return &PTR_DAT_103c6238 + iVar3 * 3;
      case 6:
        return &PTR_DAT_103c6430 + iVar3 * 3;
      case 0x12:
        return &PTR_DAT_103c6388 + iVar3 * 3;
      case 0x17:
        return &PTR_DAT_103c62e0 + iVar3 * 3;
      }
    }
    ppuVar4 = (uint8_t **)sub_102ef8b0();
    return ppuVar4;
  }
  return (uint8_t **)0x0;
}


// 0x10269070  (ghidra: FUN_10269070)  [range]
uint32_t functions_D2CommonFunctions_10269070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint32_t uVar4;
  int *piVar5;
  int iVar6;
  void *this;
  uint8_t local_8 [4];
  
  if (((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x74), iVar1 != 0)) &&
     (iVar2 = *(int *)(iVar1 + 0x80), iVar2 != 0)) {
    iVar6 = *(int *)(iVar2 + 0x2600);
    while (iVar6 != 0) {
      iVar6 = 0;
      piVar5 = (int *)(iVar2 + 0x2600);
      do {
        if (iVar1 == *piVar5) {
          if (*(int *)(iVar2 + 0x26fe) == 0) {
            param_2 = *(int *)(iVar1 + 4);
            sub_10228040(&DAT_104e18e8,&param_1,&param_2);
            piVar5 = (int *)sub_102280a0(&DAT_104e18e8,local_8);
            bVar3 = sub_1023d8f0(this,piVar5);
            if (bVar3) {
              *(uint32_t *)(iVar2 + 0x26fe) = 0xf;
            }
          }
          return 0;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 10);
      iVar1 = *(int *)(iVar1 + 0xe8);
      iVar6 = iVar1;
    }
  }
  uVar4 = D2Common_10163(param_1,param_2);
  return uVar4;
}


// 0x10269130  (ghidra: FUN_10269130)  [range]
uint32_t functions_D2CommonFunctions_10269130(void)

{
  return 5000000;
}


// 0x10269140  (ghidra: FUN_10269140)  [range]
uint32_t __fastcall functions_D2CommonFunctions_10269140(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    piVar1 = *(int **)(param_1 + 0x48);
    do {
      if (*piVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x78));
  }
  return 1;
}


// 0x10269170  (ghidra: FUN_10269170)  [range]
void functions_D2CommonFunctions_10269170(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = functions_D2CommonFunctions_10269140(param_1), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x78);
    iVar3 = 0;
    if (iVar1 != 0) {
      piVar2 = *(int **)(param_1 + 0x48);
      do {
        if (*piVar2 == param_2) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar1);
      if (iVar3 < iVar1) {
        *(uint32_t *)(*(int *)(param_1 + 0x48) + iVar3 * 4) =
             *(uint32_t *)(*(int *)(param_1 + 0x48) + -4 + iVar1 * 4);
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
        sub_102efbc0();
      }
    }
  }
  return;
}


// 0x102691d0  (ghidra: FUN_102691d0)  [range]
void functions_D2CommonFunctions_102691d0(uint param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = D2Common_10450(param_1,param_2);
  if (iVar1 == 0) {
    D2Common_10450(0x206d6172,param_2);
    return;
  }
  return;
}


// 0x10269200  (ghidra: FUN_10269200)  [range]
void functions_D2CommonFunctions_Hook_SKILLS_SkilPal_6fcba1a0_10269200(int param_1,uint32_t param_2,uint32_t param_3)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = D2Common_10494_10277e30((int *)param_1,0x12), uVar1 != 0)) {
    return;
  }
  D2Common_10819((uint *)param_1,param_2,param_3);
  return;
}


// 0x10269230  (ghidra: FUN_10269230)  [range]
int __fastcall functions_D2CommonFunctions_10269230(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != 0) && (param_3 != (int *)0x0)) && (iVar1 = *(int *)(param_1 + 0x5c), iVar1 != 0)
      ) && (*(int *)(iVar1 + 0x10) < 0)) {
    for (iVar2 = *(int *)(iVar1 + 0x3c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
      if (((*(int *)(iVar2 + 0x14) == param_2) && (*(int *)(iVar2 + 8) == *param_3)) &&
         (*(int *)(iVar2 + 0xc) == param_3[3])) {
        return iVar2;
      }
    }
    for (iVar1 = *(int *)(iVar1 + 0x40); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      if (((*(int *)(iVar1 + 0x14) == param_2) && (*(int *)(iVar1 + 8) == *param_3)) &&
         (*(int *)(iVar1 + 0xc) == param_3[3])) {
        return iVar1;
      }
    }
  }
  return 0;
}


// 0x102692f0  (ghidra: FUN_102692f0)  [range]
int functions_D2CommonFunctions_102692f0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) < 0) {
      if ((param_2 & 0x2000) == 0) {
        param_1 = *(int *)(param_1 + 0x3c);
      }
      else {
        param_1 = *(int *)(param_1 + 0x40);
      }
      if (param_1 == 0) {
        return 0;
      }
    }
    do {
      if ((*(uint *)(param_1 + 0x10) & param_2 & 0xffffdfff) != 0) {
        return param_1;
      }
      param_1 = *(int *)(param_1 + 0x2c);
    } while (param_1 != 0);
  }
  return 0;
}


// 0x10269340  (ghidra: FUN_10269340)  [anchor] refs functions/D2CommonFunctions.cpp
void functions_D2CommonFunctions_10269340(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    Fog_10024("ptDrlgLevel",
              "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2CommonFunctions.cpp"
              ,0x2e3);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    Fog_10024("ptDrlgLevel->ptRoomFirst",
              "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\functions\\D2CommonFunctions.cpp"
              ,0x2e4);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  sub_102f0470();
  for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + *(int *)(param_1 + 0x1c);
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + *(int *)(param_1 + 0x20);
  }
  return;
}


// 0x10269400  (ghidra: FUN_10269400)  [range]
uint32_t functions_D2CommonFunctions_10269400(uint param_1)

{
  uint32_t *puVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *this;
  uint8_t local_c [4];
  uint8_t local_8 [4];
  
  uVar5 = param_1;
  if ((param_1 != 0) && (puVar1 = *(uint32_t **)(param_1 + 4), puVar1 != (uint32_t *)0x0)) {
    param_1 = (uint)*(ushort *)*puVar1;
    iVar3 = functions_HelperFunctions_102ce5a0(param_1);
    if (iVar3 != 0) {
      iVar3 = functions_HelperFunctions_102ce5d0(*(uint *)(iVar3 + 0x194));
      if (iVar3 != 0) {
        sub_10228040(&DAT_104e1950,local_8,(int *)&param_1);
        piVar4 = (int *)sub_102280a0(&DAT_104e1950,local_c);
        bVar2 = sub_1023d8f0(this,piVar4);
        if (!bVar2) goto LAB_1026946f;
      }
      return puVar1[1];
    }
  }
LAB_1026946f:
  uVar5 = D2Common_10273(uVar5);
  return uVar5;
}


// 0x10269480  (ghidra: FUN_10269480)  [range]
void functions_D2CommonFunctions_Hook_sub_6fd00f40_10269480(int param_1,int param_2,int param_3,uint32_t param_4,int *param_5,
                 uint32_t param_6)

{
  uint uVar1;
  int iVar2;
  
  D2Common_11003(param_1,(int *)param_2,param_3,param_4,param_5,param_6);
  if ((((param_5 != (int *)0x0) && (*param_5 == 3)) && (param_5[0xb] != 0)) &&
     ((param_2 != 0 && ((param_5[1] == 0x62 || (param_5[1] == 0xc0)))))) {
    uVar1 = D2Common_10826(param_2);
    iVar2 = functions_HelperFunctions_102cea70(uVar1);
    if (iVar2 != 0) {
      *(uint32_t *)(param_5[0xb] + 0x44) = 2;
    }
  }
  return;
}


// 0x102694f0  (ghidra: FUN_102694f0)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2CommonFunctions_102694f0(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint8_t uVar2;
  byte bVar3;
  int iVar4;
  uint32_t extraout_var;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  void *this;
  char *pcVar10;
  uchar local_10;
  uint8_t local_f;
  uint8_t local_e;
  uint8_t local_d;
  uint8_t local_c;
  uint8_t local_b;
  uint local_8;
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    for (piVar7 = *(int **)(*(int *)(param_1 + 0x60) + 0xc); piVar7 != (int *)0x0;
        piVar7 = (int *)D2Common_10464(piVar7)) {
      if (((*piVar7 == 4) && (piVar7[4] == 1)) && (iVar4 = D2Common_10695(piVar7[1]), iVar4 != 0)) {
        cVar1 = sub_102d4390((int)piVar7);
        iVar6 = CONCAT31(extraout_var,cVar1);
        if (((iVar6 == 1) || (iVar6 == 4)) || (iVar6 == 5)) {
          iVar4 = D2Common_11088_10275940(piVar7);
          if (iVar4 != 0x4b) {
            piVar8 = D2Common_10062(*(int **)(param_1 + 0x60),5);
            piVar9 = D2Common_10062(*(int **)(param_1 + 0x60),6);
            uVar5 = D2Common_10530(piVar7);
            bVar3 = (byte)uVar5;
            this = (void *)sub_102f0d90();
            if (this == (void *)0x0) {
              if (bVar3 < 0x10) {
                *(uint8_t *)((uVar5 & 0xff) + param_2) = 0xff;
                *(uint8_t *)((uVar5 & 0xff) + param_3) = 0xff;
              }
            }
            else {
              if (piVar7 == piVar8) {
                bVar3 = 5;
              }
              else if (piVar7 == piVar9) {
                bVar3 = 6;
              }
              else if (0xf < bVar3) goto LAB_10269632;
              *(char *)((uint)bVar3 + param_2) = (char)this;
              sub_102f0db0(this,piVar7,param_1,param_2,param_3);
              pcVar10 = (char *)((uint)bVar3 + param_3);
              iVar4 = functions_D2CommonFunctions_Hook_ENGINE_Gfx_6fb1b5a0_10267ab0(param_1,piVar7,pcVar10,0);
              if (iVar4 == 0) {
                *pcVar10 = -1;
              }
              else {
                *pcVar10 = *pcVar10 + '\x01';
              }
            }
          }
        }
        else if (iVar6 == 3) {
          local_10 = *(uchar *)(iVar4 + 0x116);
          local_f = *(uint8_t *)(iVar4 + 0x117);
          local_e = *(uint8_t *)(iVar4 + 0x118);
          local_d = *(uint8_t *)(iVar4 + 0x119);
          local_c = *(uint8_t *)(iVar4 + 0x11a);
          local_b = *(uint8_t *)(iVar4 + 0x11b);
          iVar4 = 0;
          do {
            if (((iVar4 == 1) || (iVar4 == 2)) ||
               ((iVar4 == 3 || (((iVar4 == 4 || (iVar4 == 8)) || (iVar4 == 9)))))) {
              uVar5 = D2Common_10673(iVar4,&local_10);
              functions_HelperFunctions_102ce580(uVar5 & 0xff);
              uVar2 = sub_102f0d90();
              pcVar10 = (char *)(param_3 + iVar4);
              if (piVar7[1] == 0) {
                *(uint8_t *)(param_2 + iVar4) = 0xff;
              }
              else {
                *(uint8_t *)(param_2 + iVar4) = uVar2;
                iVar6 = functions_D2CommonFunctions_Hook_ENGINE_Gfx_6fb1b5a0_10267ab0(param_1,piVar7,pcVar10,0);
                if (iVar6 != 0) {
                  *pcVar10 = *pcVar10 + '\x01';
                  goto LAB_10269629;
                }
              }
              *pcVar10 = -1;
            }
LAB_10269629:
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x10);
        }
      }
LAB_10269632:
    }
  }
  return;
}


// 0x10269710  (ghidra: FUN_10269710)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint64_t __fastcall functions_D2CommonFunctions_10269710(uint8_t *param_1,int *param_2)

{
  uint8_t *puVar1;
  uint32_t *puVar2;
  uint8_t *puVar3;
  uint32_t *puVar4;
  uint8_t *puVar5;
  void *pvVar6;
  int iVar7;
  uint64_t uVar8;
  char *pcVar9;
  uint32_t local_39c [6];
  uint32_t local_384 [6];
  uint32_t local_36c [6];
  uint32_t local_354 [6];
  uint32_t local_33c [6];
  uint32_t local_324 [6];
  uint32_t local_30c [6];
  uint32_t local_2f4 [6];
  uint32_t local_2dc [6];
  uint32_t local_2c4 [6];
  uint32_t local_2ac [6];
  uint32_t local_294 [6];
  uint32_t local_27c [6];
  uint32_t local_264 [6];
  uint32_t local_24c [6];
  uint32_t local_234 [6];
  uint32_t local_21c [6];
  uint32_t local_204 [6];
  uint32_t local_1ec [6];
  uint32_t local_1d4 [6];
  uint32_t local_1bc [6];
  uint32_t local_1a4 [6];
  uint32_t local_18c [6];
  uint32_t local_174 [6];
  uint32_t local_15c [6];
  uint32_t local_144 [6];
  uint32_t local_12c [6];
  uint32_t local_114 [6];
  uint32_t local_fc [6];
  uint32_t local_e4 [6];
  uint32_t local_cc [6];
  uint32_t local_b4 [6];
  uint32_t local_9c [6];
  uint32_t *local_84;
  uint32_t *local_80;
  uint32_t *local_7c;
  uint8_t *local_78;
  int local_74;
  int *local_70;
  uint8_t *local_6c;
  int *local_68;
  uint32_t *local_64;
  int *local_60;
  uint32_t local_5c [6];
  uint32_t local_44 [6];
  uint32_t local_2c [6];
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  uint8_t  stack0xfffffc24;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffc3c;   /* not traced by Ghidra: address of a stack slot */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307f6a;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_68 = (int *)0x0;
  local_74 = 0;
  local_78 = param_1;
  local_70 = param_2;
  sub_1020f990(local_2c,"");
  local_8 = 0;
  sub_1020f990(local_5c,"");
  local_8._0_1_ = 1;
  sub_1020f990(local_44,"");
  local_60 = (int *)&stack0xfffffc3c;
  local_8._0_1_ = 2;
  sub_1020f990(&stack0xfffffc3c,"");
  local_8._0_1_ = 3;
  sub_1020f990(&stack0xfffffc24,"pRemovedItem was NULL. Hit Halt #2568");
  local_8._0_1_ = 2;
  sub_10301680();
  if (param_1 == (uint8_t *)0x0) {
    local_60 = (int *)&stack0xfffffc3c;
    sub_1020f990(&stack0xfffffc3c,"");
    local_8._0_1_ = 0x14;
    sub_1020f990(&stack0xfffffc24,"2568: pInventory was NULL");
    local_8 = CONCAT31(local_8._1_3_,2);
    sub_10301680();
  }
  else {
    local_7c = sub_10266e50(local_114);
    local_8._0_1_ = 4;
    local_68 = sub_1020f990(local_fc,"=");
    local_8._0_1_ = 5;
    puVar1 = sub_10266e50(local_e4);
    local_8._0_1_ = 6;
    puVar2 = sub_1020f990(local_1a4,"=");
    local_8._0_1_ = 7;
    puVar3 = sub_10266e50(local_12c);
    local_8._0_1_ = 8;
    puVar4 = sub_1020f990(local_18c,"=");
    local_8._0_1_ = 9;
    puVar5 = sub_10231dc0(local_174,"pInventory->dwSignature",puVar4);
    local_8._0_1_ = 10;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_15c,puVar5,puVar3);
    local_8._0_1_ = 0xb;
    pvVar6 = client_Sound_Sound_10233cd0(local_144,pvVar6,";");
    local_8._0_1_ = 0xc;
    puVar3 = client_Sound_Sound_10233cd0(local_264,pvVar6,"pInventory->dwStoresCount");
    local_8._0_1_ = 0xd;
    puVar3 = functions_D2CommonFunctions_1026b9d0(local_24c,puVar3,(uint8_t *)puVar2);
    local_8._0_1_ = 0xe;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_2c4,puVar3,puVar1);
    local_8._0_1_ = 0xf;
    pvVar6 = client_Sound_Sound_10233cd0(local_2ac,pvVar6,";");
    local_8._0_1_ = 0x10;
    puVar1 = client_Sound_Sound_10233cd0(local_294,pvVar6,"pInventory->dwItemCount");
    local_8._0_1_ = 0x11;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_27c,puVar1,(uint8_t *)local_68);
    local_60 = (int *)&stack0xfffffc3c;
    local_8._0_1_ = 0x12;
    functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar1,(uint8_t *)local_7c);
    local_8._0_1_ = 0x13;
    sub_1020f990(&stack0xfffffc24,"2568 pInventory:");
    local_8._0_1_ = 0x12;
    sub_10301680();
    thunk_FUN_1020fc60(local_27c);
    thunk_FUN_1020fc60(local_294);
    thunk_FUN_1020fc60(local_2ac);
    thunk_FUN_1020fc60(local_2c4);
    thunk_FUN_1020fc60(local_24c);
    thunk_FUN_1020fc60(local_264);
    thunk_FUN_1020fc60(local_144);
    thunk_FUN_1020fc60(local_15c);
    thunk_FUN_1020fc60(local_174);
    thunk_FUN_1020fc60(local_18c);
    thunk_FUN_1020fc60(local_12c);
    thunk_FUN_1020fc60(local_1a4);
    thunk_FUN_1020fc60(local_e4);
    thunk_FUN_1020fc60(local_fc);
    local_8 = CONCAT31(local_8._1_3_,2);
    thunk_FUN_1020fc60(local_114);
    local_68 = *(int **)(local_78 + 8);
    param_2 = local_70;
    if (local_68 != (int *)0x0) {
      local_74 = local_68[0x20];
    }
  }
  if (param_2 == (int *)0x0) {
    local_60 = (int *)&stack0xfffffc3c;
    sub_1020f990(&stack0xfffffc3c,"");
    local_8._0_1_ = 0x3b;
    sub_1020f990(&stack0xfffffc24,"2568: pItem was NULL");
    local_8._0_1_ = 2;
    sub_10301680();
LAB_10269f73:
    if (local_68 != (int *)0x0) goto LAB_10269f7e;
LAB_1026a19a:
    local_60 = (int *)&stack0xfffffc3c;
    sub_1020f990(&stack0xfffffc3c,"");
    local_8._0_1_ = 0x4a;
    sub_1020f990(&stack0xfffffc24,"2568: pOwner was NULL");
    local_8._0_1_ = 2;
    sub_10301680();
  }
  else {
    puVar1 = sub_10266e50(local_144);
    local_8._0_1_ = 0x15;
    puVar2 = sub_1020f990(local_15c,"=");
    local_8._0_1_ = 0x16;
    puVar3 = sub_10266e50(local_174);
    local_8._0_1_ = 0x17;
    puVar4 = sub_1020f990(local_18c,"=");
    local_8._0_1_ = 0x18;
    puVar5 = sub_10231dc0(local_12c,"pItem->dwType",puVar4);
    local_8._0_1_ = 0x19;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_1a4,puVar5,puVar3);
    local_8._0_1_ = 0x1a;
    pvVar6 = client_Sound_Sound_10233cd0(local_e4,pvVar6,";");
    local_8._0_1_ = 0x1b;
    puVar3 = client_Sound_Sound_10233cd0(local_fc,pvVar6,"pItem->dwTxtFileNo");
    local_8._0_1_ = 0x1c;
    puVar3 = functions_D2CommonFunctions_1026b9d0(local_114,puVar3,(uint8_t *)puVar2);
    local_60 = (int *)&stack0xfffffc3c;
    local_8._0_1_ = 0x1d;
    functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar3,puVar1);
    local_8._0_1_ = 0x1e;
    sub_1020f990(&stack0xfffffc24,"2568 pItem:");
    local_8._0_1_ = 0x1d;
    sub_10301680();
    thunk_FUN_1020fc60(local_114);
    thunk_FUN_1020fc60(local_fc);
    thunk_FUN_1020fc60(local_e4);
    thunk_FUN_1020fc60(local_1a4);
    thunk_FUN_1020fc60(local_12c);
    thunk_FUN_1020fc60(local_18c);
    thunk_FUN_1020fc60(local_174);
    thunk_FUN_1020fc60(local_15c);
    local_8._0_1_ = 2;
    thunk_FUN_1020fc60(local_144);
    if ((*local_70 != 4) || (local_70[5] == 0)) goto LAB_10269f73;
    local_60 = sub_10266e30(local_cc);
    local_8._0_1_ = 0x1f;
    local_64 = sub_1020f990(local_b4,"=");
    local_8._0_1_ = 0x20;
    local_80 = sub_10266e30(local_9c);
    local_8._0_1_ = 0x21;
    local_84 = sub_1020f990(local_234,"=");
    local_8._0_1_ = 0x22;
    local_78 = sub_10266e50(local_21c);
    local_8._0_1_ = 0x23;
    local_7c = sub_1020f990(local_204,"=");
    local_8._0_1_ = 0x24;
    puVar1 = sub_10266e50(local_1ec);
    local_8._0_1_ = 0x25;
    puVar2 = sub_1020f990(local_1d4,"=");
    local_8._0_1_ = 0x26;
    puVar3 = sub_10266e50(local_1bc);
    local_8._0_1_ = 0x27;
    puVar4 = sub_1020f990(local_30c,"=");
    local_8._0_1_ = 0x28;
    puVar5 = sub_10231dc0(local_2f4,"pItemData->dwQuality",puVar4);
    local_8._0_1_ = 0x29;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_2dc,puVar5,puVar3);
    local_8._0_1_ = 0x2a;
    pvVar6 = client_Sound_Sound_10233cd0(local_27c,pvVar6,";");
    local_8._0_1_ = 0x2b;
    puVar3 = client_Sound_Sound_10233cd0(local_294,pvVar6,"pItemData->dwFileIndex");
    local_8._0_1_ = 0x2c;
    puVar3 = functions_D2CommonFunctions_1026b9d0(local_2ac,puVar3,(uint8_t *)puVar2);
    local_8._0_1_ = 0x2d;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_2c4,puVar3,puVar1);
    local_8._0_1_ = 0x2e;
    pvVar6 = client_Sound_Sound_10233cd0(local_24c,pvVar6,";");
    local_8._0_1_ = 0x2f;
    puVar1 = client_Sound_Sound_10233cd0(local_264,pvVar6,"pItemData->dwItemLevel");
    local_8._0_1_ = 0x30;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_144,puVar1,(uint8_t *)local_7c);
    local_8._0_1_ = 0x31;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_15c,puVar1,local_78);
    local_8._0_1_ = 0x32;
    pvVar6 = client_Sound_Sound_10233cd0(local_174,pvVar6,";");
    local_8._0_1_ = 0x33;
    puVar1 = client_Sound_Sound_10233cd0(local_18c,pvVar6,"pItemData->BodyLocation");
    local_8._0_1_ = 0x34;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_12c,puVar1,(uint8_t *)local_84);
    local_8._0_1_ = 0x35;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_1a4,puVar1,(uint8_t *)local_80);
    local_8._0_1_ = 0x36;
    pvVar6 = client_Sound_Sound_10233cd0(local_e4,pvVar6,";");
    local_8._0_1_ = 0x37;
    puVar1 = client_Sound_Sound_10233cd0(local_fc,pvVar6,"pItemData->ItemLocation");
    local_8._0_1_ = 0x38;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_114,puVar1,(uint8_t *)local_64);
    local_8._0_1_ = 0x39;
    local_64 = (uint32_t *)&stack0xfffffc3c;
    functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar1,(uint8_t *)local_60);
    local_8._0_1_ = 0x3a;
    sub_1020f990(&stack0xfffffc24,"2568 pItem->pItemData:");
    local_8._0_1_ = 0x39;
    sub_10301680();
    thunk_FUN_1020fc60(local_114);
    thunk_FUN_1020fc60(local_fc);
    thunk_FUN_1020fc60(local_e4);
    thunk_FUN_1020fc60(local_1a4);
    thunk_FUN_1020fc60(local_12c);
    thunk_FUN_1020fc60(local_18c);
    thunk_FUN_1020fc60(local_174);
    thunk_FUN_1020fc60(local_15c);
    thunk_FUN_1020fc60(local_144);
    thunk_FUN_1020fc60(local_264);
    thunk_FUN_1020fc60(local_24c);
    thunk_FUN_1020fc60(local_2c4);
    thunk_FUN_1020fc60(local_2ac);
    thunk_FUN_1020fc60(local_294);
    thunk_FUN_1020fc60(local_27c);
    thunk_FUN_1020fc60(local_2dc);
    thunk_FUN_1020fc60(local_2f4);
    thunk_FUN_1020fc60(local_30c);
    thunk_FUN_1020fc60(local_1bc);
    thunk_FUN_1020fc60(local_1d4);
    thunk_FUN_1020fc60(local_1ec);
    thunk_FUN_1020fc60(local_204);
    thunk_FUN_1020fc60(local_21c);
    thunk_FUN_1020fc60(local_234);
    thunk_FUN_1020fc60(local_9c);
    thunk_FUN_1020fc60(local_b4);
    local_8._0_1_ = 2;
    thunk_FUN_1020fc60(local_cc);
    if (local_68 == (int *)0x0) {
      local_68 = *(int **)(local_70[5] + 0x70);
      if (local_68 != (int *)0x0) {
        local_74 = local_68[0x20];
        goto LAB_10269f7e;
      }
      goto LAB_1026a19a;
    }
LAB_10269f7e:
    puVar1 = sub_10266e50(local_1bc);
    local_8._0_1_ = 0x3c;
    puVar2 = sub_1020f990(local_1d4,"=");
    local_8._0_1_ = 0x3d;
    puVar3 = sub_10266e50(local_1ec);
    local_8._0_1_ = 0x3e;
    puVar4 = sub_1020f990(local_204,"=");
    local_8._0_1_ = 0x3f;
    puVar5 = sub_10231dc0(local_21c,"pOwner->dwType",puVar4);
    local_8._0_1_ = 0x40;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_234,puVar5,puVar3);
    local_8._0_1_ = 0x41;
    pvVar6 = client_Sound_Sound_10233cd0(local_9c,pvVar6,";");
    local_8._0_1_ = 0x42;
    puVar3 = client_Sound_Sound_10233cd0(local_b4,pvVar6,"pOwner->dwTxtFileNo");
    local_8._0_1_ = 0x43;
    puVar3 = functions_D2CommonFunctions_1026b9d0(local_cc,puVar3,(uint8_t *)puVar2);
    local_60 = (int *)&stack0xfffffc3c;
    local_8._0_1_ = 0x44;
    functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar3,puVar1);
    local_8._0_1_ = 0x45;
    sub_1020f990(&stack0xfffffc24,"2568 pOwner:");
    local_8._0_1_ = 0x44;
    sub_10301680();
    thunk_FUN_1020fc60(local_cc);
    thunk_FUN_1020fc60(local_b4);
    thunk_FUN_1020fc60(local_9c);
    thunk_FUN_1020fc60(local_234);
    thunk_FUN_1020fc60(local_21c);
    thunk_FUN_1020fc60(local_204);
    thunk_FUN_1020fc60(local_1ec);
    thunk_FUN_1020fc60(local_1d4);
    local_8._0_1_ = 2;
    thunk_FUN_1020fc60(local_1bc);
    if (((*local_68 == 0) && (local_68[5] != 0)) &&
       (iVar7 = *(int *)(local_68[5] + 0x9c), iVar7 != 0)) {
      client_DrawHoverItem_102250e0(local_2c,(char *)(iVar7 + 0x1d));
      sub_1020f9c0(&stack0xfffffc3c,(uint)local_2c);
      puVar1 = sub_10266e70(local_9c);
      local_8._0_1_ = 0x46;
      puVar2 = sub_1020f990(local_b4,"=");
      local_8._0_1_ = 0x47;
      puVar3 = sub_10231dc0(local_cc,"szAccName",puVar2);
      local_60 = (int *)&stack0xfffffc3c;
      local_8._0_1_ = 0x48;
      functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar3,puVar1);
      local_8._0_1_ = 0x49;
      sub_1020f990(&stack0xfffffc24,"2568 pOwner->pPlayerData:");
      local_8._0_1_ = 0x48;
      sub_10301680();
      thunk_FUN_1020fc60(local_cc);
      thunk_FUN_1020fc60(local_b4);
      local_8._0_1_ = 2;
      thunk_FUN_1020fc60(local_9c);
    }
  }
  iVar7 = local_74;
  if (local_74 == 0) {
    local_6c = &stack0xfffffc3c;
    sub_1020f990(&stack0xfffffc3c,"");
    local_8._0_1_ = 0xb0;
    pcVar9 = "2568: pGame was NULL";
  }
  else {
    client_DrawHoverItem_102250e0(local_5c,(char *)(local_74 + 0x2a));
    client_DrawHoverItem_102250e0(local_44,(char *)(iVar7 + 0x3a));
    local_68 = sub_10266e50(local_39c);
    local_8._0_1_ = 0x4b;
    local_70 = sub_1020f990(local_384,"=");
    local_8._0_1_ = 0x4c;
    local_78 = sub_10266e50(local_36c);
    local_8._0_1_ = 0x4d;
    local_7c = sub_1020f990(local_354,"=");
    local_8._0_1_ = 0x4e;
    local_84 = sub_10266e30(local_33c);
    local_8._0_1_ = 0x4f;
    local_80 = sub_1020f990(local_324,"=");
    local_8._0_1_ = 0x50;
    local_64 = sub_10266e50(local_27c);
    local_8._0_1_ = 0x51;
    local_60 = sub_1020f990(local_294,"=");
    local_8._0_1_ = 0x52;
    sub_1020f9c0(&stack0xfffffc3c,(uint)local_44);
    puVar1 = sub_10266e70(local_2ac);
    local_8._0_1_ = 0x53;
    puVar2 = sub_1020f990(local_2c4,"=");
    local_8._0_1_ = 0x54;
    sub_1020f9c0(&stack0xfffffc3c,(uint)local_5c);
    puVar3 = sub_10266e70(local_24c);
    local_8._0_1_ = 0x55;
    puVar4 = sub_1020f990(local_264,"=");
    local_8._0_1_ = 0x56;
    puVar5 = sub_10231dc0(local_144,"szGameName",puVar4);
    local_8._0_1_ = 0x57;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_15c,puVar5,puVar3);
    local_8._0_1_ = 0x58;
    pvVar6 = client_Sound_Sound_10233cd0(local_174,pvVar6,";");
    local_8._0_1_ = 0x59;
    puVar3 = client_Sound_Sound_10233cd0(local_18c,pvVar6,"szGamePass");
    local_8._0_1_ = 0x5a;
    puVar3 = functions_D2CommonFunctions_1026b9d0(local_12c,puVar3,(uint8_t *)puVar2);
    local_8._0_1_ = 0x5b;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_1a4,puVar3,puVar1);
    local_8._0_1_ = 0x5c;
    pvVar6 = client_Sound_Sound_10233cd0(local_e4,pvVar6,";");
    local_8._0_1_ = 0x5d;
    puVar1 = client_Sound_Sound_10233cd0(local_fc,pvVar6,"pGame->dwInitSeed");
    local_8._0_1_ = 0x5e;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_114,puVar1,(uint8_t *)local_60);
    local_8._0_1_ = 0x5f;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_2dc,puVar1,(uint8_t *)local_64);
    local_8._0_1_ = 0x60;
    pvVar6 = client_Sound_Sound_10233cd0(local_2f4,pvVar6,";");
    local_8._0_1_ = 0x61;
    puVar1 = client_Sound_Sound_10233cd0(local_30c,pvVar6,"pGame->bGameEventId");
    local_8._0_1_ = 0x62;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_1bc,puVar1,(uint8_t *)local_80);
    local_8._0_1_ = 99;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_1d4,puVar1,(uint8_t *)local_84);
    local_8._0_1_ = 100;
    pvVar6 = client_Sound_Sound_10233cd0(local_1ec,pvVar6,";");
    local_8._0_1_ = 0x65;
    puVar1 = client_Sound_Sound_10233cd0(local_204,pvVar6,"pGame->nCorruptedZone");
    local_8._0_1_ = 0x66;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_21c,puVar1,(uint8_t *)local_7c);
    local_8._0_1_ = 0x67;
    pvVar6 = functions_D2CommonFunctions_1026b9d0(local_234,puVar1,local_78);
    local_8._0_1_ = 0x68;
    pvVar6 = client_Sound_Sound_10233cd0(local_9c,pvVar6,";");
    local_8._0_1_ = 0x69;
    puVar1 = client_Sound_Sound_10233cd0(local_b4,pvVar6,"pGame->nItemAllocation");
    local_8._0_1_ = 0x6a;
    puVar1 = functions_D2CommonFunctions_1026b9d0(local_cc,puVar1,(uint8_t *)local_70);
    local_6c = &stack0xfffffc3c;
    local_8._0_1_ = 0x6b;
    functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar1,(uint8_t *)local_68);
    local_8._0_1_ = 0x6c;
    sub_1020f990(&stack0xfffffc24,"2568 pGame:");
    local_8._0_1_ = 0x6b;
    sub_10301680();
    thunk_FUN_1020fc60(local_cc);
    thunk_FUN_1020fc60(local_b4);
    thunk_FUN_1020fc60(local_9c);
    thunk_FUN_1020fc60(local_234);
    thunk_FUN_1020fc60(local_21c);
    thunk_FUN_1020fc60(local_204);
    thunk_FUN_1020fc60(local_1ec);
    thunk_FUN_1020fc60(local_1d4);
    thunk_FUN_1020fc60(local_1bc);
    thunk_FUN_1020fc60(local_30c);
    thunk_FUN_1020fc60(local_2f4);
    thunk_FUN_1020fc60(local_2dc);
    thunk_FUN_1020fc60(local_114);
    thunk_FUN_1020fc60(local_fc);
    thunk_FUN_1020fc60(local_e4);
    thunk_FUN_1020fc60(local_1a4);
    thunk_FUN_1020fc60(local_12c);
    thunk_FUN_1020fc60(local_18c);
    thunk_FUN_1020fc60(local_174);
    thunk_FUN_1020fc60(local_15c);
    thunk_FUN_1020fc60(local_144);
    thunk_FUN_1020fc60(local_264);
    thunk_FUN_1020fc60(local_24c);
    thunk_FUN_1020fc60(local_2c4);
    thunk_FUN_1020fc60(local_2ac);
    thunk_FUN_1020fc60(local_294);
    thunk_FUN_1020fc60(local_27c);
    thunk_FUN_1020fc60(local_324);
    thunk_FUN_1020fc60(local_33c);
    thunk_FUN_1020fc60(local_354);
    thunk_FUN_1020fc60(local_36c);
    thunk_FUN_1020fc60(local_384);
    local_8._0_1_ = 2;
    thunk_FUN_1020fc60(local_39c);
    iVar7 = *(int *)(local_74 + 0x88);
    if (iVar7 != 0) {
      do {
        local_74 = iVar7;
        client_DrawHoverItem_102250e0(local_2c,(char *)(iVar7 + 0x1d));
        if (*(int *)(iVar7 + 0x1b4) != 0) {
          D2Common_10826(*(int *)(iVar7 + 0x1b4));
        }
        local_68 = sub_10266e30(local_27c);
        local_8._0_1_ = 0x6d;
        local_70 = sub_1020f990(local_294,"=");
        local_8._0_1_ = 0x6e;
        local_78 = sub_10266e30(local_2ac);
        local_8._0_1_ = 0x6f;
        local_7c = sub_1020f990(local_2c4,"=");
        local_8._0_1_ = 0x70;
        local_84 = sub_10266e30(local_24c);
        local_8._0_1_ = 0x71;
        local_80 = sub_1020f990(local_264,"=");
        local_8._0_1_ = 0x72;
        local_64 = sub_10266e50(local_144);
        local_8._0_1_ = 0x73;
        local_60 = sub_1020f990(local_15c,"=");
        local_8._0_1_ = 0x74;
        sub_1020f9c0(&stack0xfffffc3c,(uint)local_2c);
        puVar1 = sub_10266e70(local_174);
        local_8._0_1_ = 0x75;
        puVar2 = sub_1020f990(local_18c,"=");
        local_8._0_1_ = 0x76;
        puVar3 = sub_10266e50(local_12c);
        local_8._0_1_ = 0x77;
        puVar4 = sub_1020f990(local_1a4,"=");
        local_8._0_1_ = 0x78;
        puVar5 = sub_10231dc0(local_e4,"pClient->ClientNbr",puVar4);
        local_8._0_1_ = 0x79;
        pvVar6 = functions_D2CommonFunctions_1026b9d0(local_fc,puVar5,puVar3);
        local_8._0_1_ = 0x7a;
        pvVar6 = client_Sound_Sound_10233cd0(local_114,pvVar6,";");
        local_8._0_1_ = 0x7b;
        puVar3 = client_Sound_Sound_10233cd0(local_2dc,pvVar6,"szAccName");
        local_8._0_1_ = 0x7c;
        puVar3 = functions_D2CommonFunctions_1026b9d0(local_2f4,puVar3,(uint8_t *)puVar2);
        local_8._0_1_ = 0x7d;
        pvVar6 = functions_D2CommonFunctions_1026b9d0(local_30c,puVar3,puVar1);
        local_8._0_1_ = 0x7e;
        pvVar6 = client_Sound_Sound_10233cd0(local_1bc,pvVar6,";");
        local_8._0_1_ = 0x7f;
        puVar1 = client_Sound_Sound_10233cd0(local_1d4,pvVar6,"pClient->nAct");
        local_8._0_1_ = 0x80;
        puVar1 = functions_D2CommonFunctions_1026b9d0(local_1ec,puVar1,(uint8_t *)local_60);
        local_8._0_1_ = 0x81;
        pvVar6 = functions_D2CommonFunctions_1026b9d0(local_204,puVar1,(uint8_t *)local_64);
        local_8._0_1_ = 0x82;
        pvVar6 = client_Sound_Sound_10233cd0(local_21c,pvVar6,";");
        local_8._0_1_ = 0x83;
        puVar1 = client_Sound_Sound_10233cd0(local_234,pvVar6,"nLevelId");
        local_8._0_1_ = 0x84;
        puVar1 = functions_D2CommonFunctions_1026b9d0(local_9c,puVar1,(uint8_t *)local_80);
        local_8._0_1_ = 0x85;
        pvVar6 = functions_D2CommonFunctions_1026b9d0(local_b4,puVar1,(uint8_t *)local_84);
        local_8._0_1_ = 0x86;
        pvVar6 = client_Sound_Sound_10233cd0(local_cc,pvVar6,";");
        local_8._0_1_ = 0x87;
        puVar1 = client_Sound_Sound_10233cd0(local_324,pvVar6,"pClient->wXpos");
        local_8._0_1_ = 0x88;
        puVar1 = functions_D2CommonFunctions_1026b9d0(local_33c,puVar1,(uint8_t *)local_7c);
        local_8._0_1_ = 0x89;
        pvVar6 = functions_D2CommonFunctions_1026b9d0(local_354,puVar1,local_78);
        local_8._0_1_ = 0x8a;
        pvVar6 = client_Sound_Sound_10233cd0(local_36c,pvVar6,";");
        local_8._0_1_ = 0x8b;
        puVar1 = client_Sound_Sound_10233cd0(local_384,pvVar6,"pClient->wYpos");
        local_8._0_1_ = 0x8c;
        puVar1 = functions_D2CommonFunctions_1026b9d0(local_39c,puVar1,(uint8_t *)local_70);
        local_6c = &stack0xfffffc3c;
        local_8._0_1_ = 0x8d;
        functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar1,(uint8_t *)local_68);
        local_8._0_1_ = 0x8e;
        sub_1020f990(&stack0xfffffc24,"2568 pClient:");
        local_8._0_1_ = 0x8d;
        sub_10301680();
        thunk_FUN_1020fc60(local_39c);
        thunk_FUN_1020fc60(local_384);
        thunk_FUN_1020fc60(local_36c);
        thunk_FUN_1020fc60(local_354);
        thunk_FUN_1020fc60(local_33c);
        thunk_FUN_1020fc60(local_324);
        thunk_FUN_1020fc60(local_cc);
        thunk_FUN_1020fc60(local_b4);
        thunk_FUN_1020fc60(local_9c);
        thunk_FUN_1020fc60(local_234);
        thunk_FUN_1020fc60(local_21c);
        thunk_FUN_1020fc60(local_204);
        thunk_FUN_1020fc60(local_1ec);
        thunk_FUN_1020fc60(local_1d4);
        thunk_FUN_1020fc60(local_1bc);
        thunk_FUN_1020fc60(local_30c);
        thunk_FUN_1020fc60(local_2f4);
        thunk_FUN_1020fc60(local_2dc);
        thunk_FUN_1020fc60(local_114);
        thunk_FUN_1020fc60(local_fc);
        thunk_FUN_1020fc60(local_e4);
        thunk_FUN_1020fc60(local_1a4);
        thunk_FUN_1020fc60(local_12c);
        thunk_FUN_1020fc60(local_18c);
        thunk_FUN_1020fc60(local_174);
        thunk_FUN_1020fc60(local_15c);
        thunk_FUN_1020fc60(local_144);
        thunk_FUN_1020fc60(local_264);
        thunk_FUN_1020fc60(local_24c);
        thunk_FUN_1020fc60(local_2c4);
        thunk_FUN_1020fc60(local_2ac);
        thunk_FUN_1020fc60(local_294);
        local_8._0_1_ = 2;
        thunk_FUN_1020fc60(local_27c);
        local_60 = *(int **)(local_74 + 0x174);
        if (local_60 != (int *)0x0) {
          if (local_60[0xb] != 0) {
            puVar1 = sub_10266e30(local_9c);
            local_8._0_1_ = 0x8f;
            puVar2 = sub_1020f990(local_b4,"=");
            local_8._0_1_ = 0x90;
            puVar3 = sub_10266e30(local_cc);
            local_8._0_1_ = 0x91;
            puVar4 = sub_1020f990(local_324,"=");
            local_8._0_1_ = 0x92;
            puVar5 = sub_10231dc0(local_33c,"pPlayer->pPath->xPos",puVar4);
            local_8._0_1_ = 0x93;
            pvVar6 = functions_D2CommonFunctions_1026b9d0(local_354,puVar5,puVar3);
            local_8._0_1_ = 0x94;
            pvVar6 = client_Sound_Sound_10233cd0(local_36c,pvVar6,";");
            local_8._0_1_ = 0x95;
            puVar3 = client_Sound_Sound_10233cd0(local_384,pvVar6,"pPlayer->pPath->yPos");
            local_8._0_1_ = 0x96;
            puVar3 = functions_D2CommonFunctions_1026b9d0(local_39c,puVar3,(uint8_t *)puVar2);
            local_6c = &stack0xfffffc3c;
            local_8._0_1_ = 0x97;
            functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar3,puVar1);
            local_8._0_1_ = 0x98;
            sub_1020f990(&stack0xfffffc24,"2568 pClient->ptPlayer:");
            local_8._0_1_ = 0x97;
            sub_10301680();
            thunk_FUN_1020fc60(local_39c);
            thunk_FUN_1020fc60(local_384);
            thunk_FUN_1020fc60(local_36c);
            thunk_FUN_1020fc60(local_354);
            thunk_FUN_1020fc60(local_33c);
            thunk_FUN_1020fc60(local_324);
            thunk_FUN_1020fc60(local_cc);
            thunk_FUN_1020fc60(local_b4);
            local_8._0_1_ = 2;
            thunk_FUN_1020fc60(local_9c);
          }
          if ((*local_60 == 0) && (local_60[5] != 0)) {
            local_84 = sub_10266e50(local_e4);
            local_8._0_1_ = 0x99;
            local_80 = sub_1020f990(local_fc,"=");
            local_8._0_1_ = 0x9a;
            local_64 = sub_10266e50(local_114);
            local_8._0_1_ = 0x9b;
            local_60 = sub_1020f990(local_2dc,"=");
            local_8._0_1_ = 0x9c;
            puVar1 = sub_10266e50(local_2f4);
            local_8._0_1_ = 0x9d;
            puVar2 = sub_1020f990(local_30c,"=");
            local_8._0_1_ = 0x9e;
            sub_1020f9c0(&stack0xfffffc3c,(uint)local_2c);
            puVar3 = sub_10266e70(local_1bc);
            local_8._0_1_ = 0x9f;
            puVar4 = sub_1020f990(local_1d4,"=");
            local_8._0_1_ = 0xa0;
            puVar5 = sub_10231dc0(local_1ec,"szAccName",puVar4);
            local_8._0_1_ = 0xa1;
            pvVar6 = functions_D2CommonFunctions_1026b9d0(local_204,puVar5,puVar3);
            local_8._0_1_ = 0xa2;
            pvVar6 = client_Sound_Sound_10233cd0(local_21c,pvVar6,";");
            local_8._0_1_ = 0xa3;
            puVar3 = client_Sound_Sound_10233cd0(local_234,pvVar6,"pPlayerData->bBusy");
            local_8._0_1_ = 0xa4;
            puVar3 = functions_D2CommonFunctions_1026b9d0(local_9c,puVar3,(uint8_t *)puVar2);
            local_8._0_1_ = 0xa5;
            pvVar6 = functions_D2CommonFunctions_1026b9d0(local_b4,puVar3,puVar1);
            local_8._0_1_ = 0xa6;
            pvVar6 = client_Sound_Sound_10233cd0(local_cc,pvVar6,";");
            local_8._0_1_ = 0xa7;
            puVar1 = client_Sound_Sound_10233cd0(local_324,pvVar6,"pPlayerData->dwTradeState");
            local_8._0_1_ = 0xa8;
            puVar1 = functions_D2CommonFunctions_1026b9d0(local_33c,puVar1,(uint8_t *)local_60);
            local_8._0_1_ = 0xa9;
            pvVar6 = functions_D2CommonFunctions_1026b9d0(local_354,puVar1,(uint8_t *)local_64);
            local_8._0_1_ = 0xaa;
            pvVar6 = client_Sound_Sound_10233cd0(local_36c,pvVar6,";");
            local_8._0_1_ = 0xab;
            puVar1 = client_Sound_Sound_10233cd0(local_384,pvVar6,"pPlayerData->dwAcceptTradeTick");
            local_8._0_1_ = 0xac;
            puVar1 = functions_D2CommonFunctions_1026b9d0(local_39c,puVar1,(uint8_t *)local_80);
            local_6c = &stack0xfffffc3c;
            local_8._0_1_ = 0xad;
            functions_D2CommonFunctions_1026b9d0(&stack0xfffffc3c,puVar1,(uint8_t *)local_84);
            local_8._0_1_ = 0xae;
            sub_1020f990(&stack0xfffffc24,"2568 pClient->ptPlayer->pPlayerData:");
            local_8._0_1_ = 0xad;
            sub_10301680();
            thunk_FUN_1020fc60(local_39c);
            thunk_FUN_1020fc60(local_384);
            thunk_FUN_1020fc60(local_36c);
            thunk_FUN_1020fc60(local_354);
            thunk_FUN_1020fc60(local_33c);
            thunk_FUN_1020fc60(local_324);
            thunk_FUN_1020fc60(local_cc);
            thunk_FUN_1020fc60(local_b4);
            thunk_FUN_1020fc60(local_9c);
            thunk_FUN_1020fc60(local_234);
            thunk_FUN_1020fc60(local_21c);
            thunk_FUN_1020fc60(local_204);
            thunk_FUN_1020fc60(local_1ec);
            thunk_FUN_1020fc60(local_1d4);
            thunk_FUN_1020fc60(local_1bc);
            thunk_FUN_1020fc60(local_30c);
            thunk_FUN_1020fc60(local_2f4);
            thunk_FUN_1020fc60(local_2dc);
            thunk_FUN_1020fc60(local_114);
            thunk_FUN_1020fc60(local_fc);
            local_8._0_1_ = 2;
            thunk_FUN_1020fc60(local_e4);
          }
        }
        iVar7 = *(int *)(local_74 + 0x4a8);
      } while (iVar7 != 0);
      local_74 = 0;
      goto LAB_1026afdb;
    }
    local_6c = &stack0xfffffc3c;
    local_74 = iVar7;
    sub_1020f990(&stack0xfffffc3c,"");
    local_8._0_1_ = 0xaf;
    pcVar9 = "2568: pClient was NULL";
  }
  sub_1020f990(&stack0xfffffc24,pcVar9);
  local_8._0_1_ = 2;
  sub_10301680();
LAB_1026afdb:
  thunk_FUN_1020fc60(local_44);
  thunk_FUN_1020fc60(local_5c);
  uVar8 = thunk_FUN_1020fc60(local_2c);
  ExceptionList = local_10;
  return uVar8;
}


// 0x1026b010  (ghidra: FUN_1026b010)  [range]
int functions_D2CommonFunctions_1026b010(uint8_t *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = D2Common_10646((int)param_1,param_2);
  if (piVar1 == (int *)0x0) {
    functions_D2CommonFunctions_10269710(param_1,param_2);
  }
  return (int)piVar1;
}


// 0x1026b040  (ghidra: FUN_1026b040)  [range]
void functions_D2CommonFunctions_Hook_sub_6fc950f0_1026b040(int param_1,uint32_t param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x30), piVar1 != (int *)0x0)) &&
     (*piVar1 == 1)) {
    uVar2 = D2Common_10494_10277e30(piVar1,0xbd);
    if (uVar2 != 0) {
      param_2._0_1_ = '\x0f';
    }
    D2Common_10527(param_1,(uchar)param_2);
    return;
  }
  D2Common_10527(param_1,(uchar)param_2);
  return;
}


// 0x1026b090  (ghidra: FUN_1026b090)  [range]
void functions_D2CommonFunctions_Hook_MISSILES_Missiles_6fc8f620_1026b090(uint *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  uint *puVar2;
  int *reg_EDI;
  uint uVar3;
  int *piVar4;
  uint32_t *puVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int extraout_ECX;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint local_b4 [31];
  int local_38;
  int local_34;
  uint32_t *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  reg_EDI = param_2;
  puVar2 = param_1;
  if ((((param_2 != (int *)0x0) && (param_4 != (int *)0x0)) && (*param_4 == 3)) &&
     ((param_4[5] != 0 && (param_1 != (uint *)0x0)))) {
    memset(local_b4,0,0x7c);
    puVar10 = local_b4;
    puVar11 = param_1;
    for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    local_c = param_4[1];
    if (((-1 < (int)local_c) && (local_c < *(uint *)(*p_D2Common_DAT_6fde9e1c + 0xb6c))) &&
       (iVar8 = functions_HelperFunctions_102ce600(local_c), iVar8 != 0)) {
      local_20 = (uint)*(ushort *)(param_4[5] + 10);
      local_8 = local_20;
      if ((*(uint *)(iVar8 + 4) & 0x8000) == 0) {
        local_8 = (int)*(short *)(iVar8 + 0x194);
      }
      local_10 = iVar8;
      local_30 = functions_HelperFunctions_102d21f0((int)param_2,local_20);
      local_14 = 0;
      local_18 = 0;
      if ((*(short *)(iVar8 + 0x194) < 1) && ((*(uint *)(iVar8 + 4) & 0x8000) == 0)) {
        local_8 = (uint)*(byte *)(iVar8 + 0x12d);
        local_1c = (uint)*(byte *)(iVar8 + 0x12e);
        local_34 = D2Common_10040(param_4,(uint)param_2,local_c,(int)param_5);
        local_38 = D2Common_10256(param_4,(uint)param_2,local_c,(int)param_5);
        local_24 = *(uint *)(local_10 + 0xe4);
        uVar3 = D2Common_10205(param_4,(uint)param_2,local_c,(int)param_5);
        piVar4 = (int *)D2Common_10532(param_4,(uint)param_2,local_c,(int)param_5);
        local_c = D2Common_10242((uint)param_4,(uint)param_2,local_c,(int)param_5);
        param_2 = piVar4;
        if ((*(uint *)(local_10 + 4) & 0x100) != 0) {
          iVar8 = sub_102eeac0();
          uVar3 = uVar3 + iVar8;
          iVar8 = sub_102eeac0();
          param_2 = (int *)((int)piVar4 + iVar8);
        }
      }
      else {
        iVar6 = functions_HelperFunctions_102ce5a0(local_8);
        if (iVar6 == 0) {
          return;
        }
        cVar1 = *(char *)(iVar8 + 0x12d);
        bVar7 = *(byte *)(iVar6 + 0x1a5);
        local_1c = 0;
        local_34 = D2Common_10567(param_2,extraout_ECX,(uint)param_5,0);
        local_38 = D2Common_10297(param_2,local_8,(uint)param_5,0);
        local_24 = (uint)*(ushort *)(iVar6 + 0x1dc);
        uVar3 = D2Common_10121_10276b50((int)param_2,local_8,(int)param_5,1);
        piVar4 = (int *)D2Common_11091_10276b80((int)param_2,local_8,(int)param_5,1);
        local_c = D2Common_10510((uint)param_2,local_8,(int)param_5,1);
        param_2 = piVar4;
        local_8 = 0;
        if (cVar1 != -1) {
          local_8 = (uint)bVar7;
        }
      }
      bVar7 = *(byte *)(local_10 + 0x12f);
      if ((bVar7 & 1) != 0) {
        *param_1 = *param_1 | 0x100;
        bVar7 = *(byte *)(local_10 + 0x12f);
      }
      if ((bVar7 & 2) != 0) {
        *param_1 = *param_1 | 0x200;
        bVar7 = *(byte *)(local_10 + 0x12f);
      }
      if ((bVar7 & 4) != 0) {
        *param_1 = *param_1 | 0x400;
      }
      local_2c = 0;
      param_5 = (int *)0x0;
      local_28 = 0;
      param_1 = (uint *)0x0;
      if (local_8 == 0) {
        if ((local_1c != 0) && (param_3 != (int *)0x0)) {
          puVar5 = functions_HelperFunctions_102d21f0((int)param_3,local_20);
          iVar8 = sub_10270d20(0,(uint8_t *)param_3,puVar5,reg_EDI);
          if (iVar8 != 0) {
            *puVar2 = *puVar2 | 2;
          }
          iVar8 = D2Common_10973_10273ce0((int)param_3,0x15,0);
          local_14 = (int)(((int)(iVar8 * local_1c) >> 0x1f & 0x7fU) + iVar8 * local_1c) >> 7;
          iVar8 = D2Common_10973_10273ce0((int)param_3,0x16,0);
          local_18 = (int)(((int)(iVar8 * local_1c) >> 0x1f & 0x7fU) + iVar8 * local_1c) >> 7;
          local_2c = D2Common_10973_10273ce0((int)param_3,0x19,0);
          local_28 = D2Common_10973_10273ce0((int)param_3,0x11,0);
          param_5 = (int *)D2Common_10973_10273ce0((int)param_3,0x12,0);
          iVar8 = D2Common_10973_10273ce0((int)param_3,0x79,0);
          puVar2[0x1b] = puVar2[0x1b] + iVar8;
          iVar8 = D2Common_10973_10273ce0((int)param_3,0x7a,0);
          puVar2[0x1c] = puVar2[0x1c] + iVar8;
          iVar8 = D2Common_10973_10273ce0((int)param_3,0x78,0);
          puVar2[0x1d] = puVar2[0x1d] + iVar8;
        }
      }
      else {
        *puVar2 = *puVar2 | 1;
        param_5 = (int *)0x0;
        if (*reg_EDI == 0) {
          param_5 = D2Common_10641_10277650(reg_EDI,1);
        }
        else if ((*reg_EDI == 1) && (reg_EDI[0x18] != 0)) {
          param_5 = (int *)D2Common_11100(reg_EDI);
        }
        iVar8 = sub_10270d20((int)param_5,(uint8_t *)reg_EDI,local_30,reg_EDI);
        if (iVar8 != 0) {
          *puVar2 = *puVar2 | 2;
        }
        if ((param_5 == (int *)0x0) || (*param_5 != 4)) {
          if ((*reg_EDI == 1) && (uVar9 = D2Common_11104(reg_EDI), uVar9 != 0)) {
            param_1 = (uint *)D2Common_10973_10273ce0((int)reg_EDI,2,0);
          }
          local_14 = D2Common_10973_10273ce0((int)reg_EDI,0x15,0);
          local_14 = local_14 << 8;
          local_18 = D2Common_10973_10273ce0((int)reg_EDI,0x16,0);
          local_18 = local_18 << 8;
        }
        else {
          if (((*(uint *)(local_10 + 4) & 0x4000) != 0) &&
             (uVar9 = D2Common_10326(param_5), uVar9 != 0)) {
            local_8 = local_8 >> 1;
          }
          param_1 = (uint *)sub_Hook_sub_6fc89b00_102727d0((uint8_t *)reg_EDI,(int)param_5,local_30,1,reg_EDI);
          iVar8 = D2Common_10213(param_5);
          local_20 = (uint)(short)iVar8;
          if (local_20 != 0) {
            iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0,0);
            param_1 = (uint *)((int)param_1 + (int)(iVar8 * local_20) / 100);
          }
          iVar8 = D2Common_10120(param_5);
          local_20 = (uint)(short)iVar8;
          if (local_20 != 0) {
            iVar8 = D2Common_10973_10273ce0((int)reg_EDI,2,0);
            param_1 = (uint *)((int)param_1 + (int)(iVar8 * local_20) / 100);
          }
          uVar9 = D2Common_10711(param_5);
          if (uVar9 == 0) {
            if (((int *)reg_EDI[0x18] == (int *)0x0) ||
               (uVar9 = D2Common_10051(reg_EDI,(int *)reg_EDI[0x18]), uVar9 != 2)) {
              local_10 = 0x16;
              iVar8 = 0x15;
            }
            else {
              local_10 = 0x18;
              iVar8 = 0x17;
            }
          }
          else {
            local_10 = 0xa0;
            iVar8 = 0x9f;
          }
          local_14 = D2Common_10973_10273ce0((int)reg_EDI,iVar8,0);
          local_14 = local_14 << 8;
          local_18 = D2Common_10973_10273ce0((int)reg_EDI,local_10,0);
          local_18 = local_18 << 8;
          uVar9 = D2Common_10744((int)param_5,0x39);
          if (uVar9 != 0) {
            puVar2[0x1c] = puVar2[0x1c] + 0x32;
          }
        }
        local_14 = (int)(local_14 * local_8) >> 7;
        local_18 = (int)(local_18 * local_8) >> 7;
        local_2c = D2Common_10973_10273ce0((int)reg_EDI,0x19,0);
        local_2c = local_2c + (int)param_1;
        local_28 = D2Common_10973_10273ce0((int)reg_EDI,0x11,0);
        param_5 = (int *)D2Common_10973_10273ce0((int)reg_EDI,0x12,0);
        iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0x79,0);
        puVar2[0x1b] = puVar2[0x1b] + iVar8;
        iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0x7a,0);
        puVar2[0x1c] = puVar2[0x1c] + iVar8;
        iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0x78,0);
        puVar2[0x1d] = puVar2[0x1d] + iVar8;
        iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0x67,0);
        if (iVar8 != 0) {
          *puVar2 = *puVar2 | 0x100;
        }
        iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0x68,0);
        if (iVar8 != 0) {
          *puVar2 = *puVar2 | 0x200;
        }
        iVar8 = D2Common_10973_10273ce0((int)reg_EDI,0x6a,0);
        if (iVar8 != 0) {
          *puVar2 = *puVar2 | 0x400;
        }
      }
      iVar8 = D2Common_10973_10273ce0((int)param_4,0x19,0);
      if ((int)param_5 <= local_28) {
        param_5 = (int *)local_28;
      }
      uVar9 = (int)param_5 + iVar8 + local_2c;
      if ((int)uVar9 < -0x59) {
        uVar9 = 0xffffffa6;
      }
      puVar2[1] = local_14 + local_34;
      puVar2[2] = local_18 + local_38;
      puVar2[0x1e] = uVar9;
      if (local_24 != 0) {
        switch(local_24) {
        case 1:
          puVar2[4] = (uint)param_2;
          puVar2[3] = uVar3;
          puVar2[5] = local_c;
          break;
        case 2:
          puVar2[6] = uVar3;
          puVar2[7] = (uint)param_2;
          break;
        case 3:
          puVar2[8] = uVar3;
          puVar2[9] = (uint)param_2;
          break;
        case 4:
        case 0xc:
          puVar2[0xb] = (uint)param_2;
          puVar2[10] = uVar3;
          puVar2[0xc] = local_c;
          break;
        case 5:
          puVar2[0xe] = (uint)param_2;
          puVar2[0xd] = uVar3;
          puVar2[0xf] = local_c;
          break;
        case 6:
          puVar2[0x11] = uVar3;
          puVar2[0x12] = (uint)param_2;
          break;
        case 7:
          puVar2[0x13] = uVar3;
          puVar2[0x14] = (uint)param_2;
          break;
        case 8:
          puVar2[0x15] = uVar3;
          puVar2[0x16] = (uint)param_2;
          break;
        case 9:
          puVar2[0x17] = local_c;
          break;
        case 0xb:
          puVar2[0x19] = (uint)param_2;
          puVar2[0x18] = uVar3;
          puVar2[0x1a] = local_c;
        }
      }
      if (local_8 == 0) {
        if (local_1c == 0) {
          return;
        }
        if (param_3 == (int *)0x0) {
          return;
        }
        bVar7 = 0;
      }
      else {
        D2Common_10932(reg_EDI,1);
        bVar7 = 8;
        param_3 = reg_EDI;
      }
      sub_10272bd0((int)puVar2,(int)param_3,bVar7);
      sub_102f10b0();
    }
  }
  return;
}


// 0x1026b760  (ghidra: FUN_1026b760)  [range]
void __fastcall functions_D2CommonFunctions_1026b760(int *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1025f2f0(param_1);
  thunk_FUN_1020fe80(iVar1);
  return;
}


// 0x1026b770  (ghidra: FUN_1026b770)  [range]
uint8_t * __fastcall functions_D2CommonFunctions_1026b770(uint32_t param_1)

{
  void *local_10;
  uint8_t *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1030557d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  functions_D2CommonFunctions_1026b870(param_1);
  local_8 = 0;
  functions_D2CommonFunctions_1026b850();
  ExceptionList = local_10;
  return &DAT_104e19d4;
}


// 0x1026b7d0  (ghidra: FUN_1026b7d0)  [range]
uint32_t functions_D2CommonFunctions_1026b7d0(void *param_1,void *param_2)

{
  int iVar1;
  uint32_t extraout_ECX;
  
  iVar1 = functions_D2CommonFunctions_1026b9f0(param_2);
  sub_1023e2e0(param_1,iVar1);
  return extraout_ECX;
}


// 0x1026b7f0  (ghidra: FUN_1026b7f0)  [range]
uint32_t functions_D2CommonFunctions_1026b7f0(void *param_1)

{
  uint32_t *puVar1;
  uint32_t extraout_ECX;
  
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e19d4);
  sub_1023e2e0(param_1,*puVar1);
  return extraout_ECX;
}


// 0x1026b810  (ghidra: FUN_1026b810)  [range]
int __thiscall functions_D2CommonFunctions_1026b810(void *this,uint param_1)

{
  if (param_1 < (uint)(*(int *)((int)this + 4) - *(int *)this >> 3)) {
    return *(int *)this + param_1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  functions_D2CommonFunctions_1026b8a0();
}


// 0x1026b840  [range]
int __fastcall thunk_FUN_1025f2f0(int *param_1)

{
  return *param_1 + 0x10;
}


// 0x1026b850  (ghidra: FUN_1026b850)  [range]
void functions_D2CommonFunctions_1026b850(void)

{
  uint32_t uVar1;
  uint32_t *extraout_ECX;
  uint8_t  stack0x00000004;   /* not traced by Ghidra: address of a stack slot */
  
  sub_1020fae0((int)&stack0x00000004);
  uVar1 = sub_1020faf0(extraout_ECX);
  functions_D2CommonFunctions_1026ba30(uVar1);
  return;
}


// 0x1026b870  (ghidra: FUN_1026b870)  [range]
uint8_t * __fastcall functions_D2CommonFunctions_1026b870(uint32_t param_1)

{
  uint32_t local_9;
  uint8_t local_5;
  
  functions_D2CommonFunctions_1026baa0(local_9,param_1,&local_5);
  functions_D2CommonFunctions_1026b8b0();
  return &DAT_104e19d4;
}


// 0x1026b8a0  (ghidra: FUN_1026b8a0)  [range]
void functions_D2CommonFunctions_1026b8a0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid vector subscript");
}


// 0x1026b8b0  (ghidra: FUN_1026b8b0)  [range]
void functions_D2CommonFunctions_1026b8b0(void)

{
  uint32_t *puVar1;
  uint32_t extraout_EDX;
  
  sub_10243d70();
  puVar1 = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e19d4);
  *puVar1 = extraout_EDX;
  return;
}


// 0x1026b8d0  (ghidra: FUN_1026b8d0)  [range]
void * __thiscall functions_D2CommonFunctions_1026b8d0(void *this,uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  uint32_t *puVar2;
  
  pcVar1 = (char *)sub_1020fe80(&DAT_103787f8);
  sub_1020f990(this,pcVar1);
  puVar2 = (uint32_t *)sub_1020fe80(param_2);
  *(uint32_t *)((int)this + 0x18) = *puVar2;
  return this;
}


// 0x1026b910  (ghidra: FUN_1026b910)  [range]
void * __thiscall functions_D2CommonFunctions_1026b910(void *this,uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  uint32_t *puVar2;
  
  pcVar1 = (char *)sub_1020fe80("1 Wilderness");
  sub_1020f990(this,pcVar1);
  puVar2 = (uint32_t *)sub_1020fe80(param_2);
  *(uint32_t *)((int)this + 0x18) = *puVar2;
  return this;
}


// 0x1026b950  (ghidra: FUN_1026b950)  [range]
void * __thiscall functions_D2CommonFunctions_1026b950(void *this,uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  uint32_t *puVar2;
  
  pcVar1 = (char *)sub_1020fe80("3 Dungeon");
  sub_1020f990(this,pcVar1);
  puVar2 = (uint32_t *)sub_1020fe80(param_2);
  *(uint32_t *)((int)this + 0x18) = *puVar2;
  return this;
}


// 0x1026b990  (ghidra: FUN_1026b990)  [range]
void * __thiscall functions_D2CommonFunctions_1026b990(void *this,uint32_t param_1,uint32_t param_2)

{
  char *pcVar1;
  uint32_t *puVar2;
  
  pcVar1 = (char *)sub_1020fe80("5 Ice");
  sub_1020f990(this,pcVar1);
  puVar2 = (uint32_t *)sub_1020fe80(param_2);
  *(uint32_t *)((int)this + 0x18) = *puVar2;
  return this;
}


// 0x1026b9d0  (ghidra: FUN_1026b9d0)  [range]
void * __fastcall functions_D2CommonFunctions_1026b9d0(void *param_1,uint8_t *param_2,uint8_t *param_3)

{
  functions_D2CommonFunctions_1026bad0(param_1,param_1,param_2,param_3);
  return param_1;
}


// 0x1026b9f0  (ghidra: FUN_1026b9f0)  [range]
int functions_D2CommonFunctions_1026b9f0(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int local_10 [2];
  int local_8;
  
  piVar1 = functions_D2CommonFunctions_1026bc40(local_10,(int)param_1);
  uVar2 = sub_10247710(local_8,param_1,piVar1);
  if ((char)uVar2 != '\0') {
    return local_8;
  }
  piVar1 = (int *)thunk_FUN_1026bd40();
  return *piVar1;
}


// 0x1026ba30  (ghidra: FUN_1026ba30)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2CommonFunctions_1026ba30(uint32_t param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint8_t auStack_14 [4];
  uint32_t local_10;
  uint local_c;
  uint8_t  stack0x00000008;   /* not traced by Ghidra: address of a stack slot */
  
  local_c = DAT_1039800c ^ (uint)auStack_14;
  local_10 = param_1;
  iVar2 = sub_1020faf0((uint32_t *)&stack0x00000008);
  piVar3 = (int *)thunk_FUN_1020fe80(&DAT_104e19d4);
  iVar1 = *piVar3;
  for (iVar4 = sub_1020faf0(&local_10); iVar4 != iVar2; iVar4 = iVar4 + 0x1c) {
    functions_D2CommonFunctions_1026bca0(iVar1,iVar4);
  }
  return;
}


// 0x1026baa0  (ghidra: FUN_1026baa0)  [range]
uint8_t * functions_D2CommonFunctions_1026baa0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  sub_1020fe80(param_3);
  functions_D2CommonFunctions_1026bc30();
  return &DAT_104e19d4;
}


// 0x1026bac0  [range]
uint8_t * thunk_FUN_1026bd40(void)

{
  return &DAT_104e19d4;
}


// 0x1026bad0  (ghidra: FUN_1026bad0)  [range]
uint32_t * __thiscall
functions_D2CommonFunctions_1026bad0(void *this,uint32_t param_1,uint8_t *param_2,uint8_t *param_3)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  size_t sVar5;
  int extraout_EDX;
  uint64_t uVar6;
  uint uVar7;
  uint32_t local_c;
  int local_8;
  
  sub_10210440(this);
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar7 = *(uint *)(param_2 + 0x10);
  local_8 = uVar1 + uVar7;
  if ((uVar1 <= *(int *)(param_2 + 0x14) - uVar7) &&
     (*(uint *)(param_3 + 0x14) <= *(uint *)(param_2 + 0x14))) {
    sub_10231cd0(param_2);
    sVar5 = uVar1 + 1;
    uVar6 = sub_1020fe30((int)param_3);
    pvVar3 = (void *)uVar6;
    uVar6 = sub_1020fe30((int)this);
    sub_1020fe60((void *)((int)uVar6 + uVar7),pvVar3,sVar5);
    *(uint *)((int)this + 0x10) = uVar1 + uVar7;
    return this;
  }
  cVar2 = functions_D2CommonFunctions_1026bd50();
  if ((cVar2 != '\0') && (uVar7 <= extraout_EDX - uVar1)) {
    sub_10231cd0(param_3);
    pvVar3 = (void *)sub_1020fe80(*(uint32_t *)this);
    sub_10210060((void *)((int)pvVar3 + uVar7),pvVar3,uVar1 + 1);
    uVar6 = sub_1020fe30((int)param_2);
    sub_1020fe60(pvVar3,(void *)uVar6,uVar7);
    *(int *)((int)this + 0x10) = local_8;
    return this;
  }
  uVar4 = sub_1020ffe0();
  if (uVar1 <= uVar4 - uVar7) {
    uVar4 = sub_10210d90(uVar1 + uVar7,0xf,uVar4);
    local_c = sub_10210080(-(uint)(0xfffffffe < uVar4) | uVar4 + 1);
    sub_10210750(this,&local_c);
    *(int *)((int)this + 0x10) = local_8;
    *(uint *)((int)this + 0x14) = uVar4;
    pvVar3 = (void *)sub_1020fe80(local_c);
    uVar4 = uVar7;
    uVar6 = sub_1020fe30((int)param_2);
    sub_1020fe60(pvVar3,(void *)uVar6,uVar4);
    sVar5 = uVar1 + 1;
    uVar6 = sub_1020fe30((int)param_3);
    sub_1020fe60((void *)((int)pvVar3 + uVar7),(void *)uVar6,sVar5);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  sub_stl_1020f3f0();
}


// 0x1026bc30  (ghidra: FUN_1026bc30)  [range]
uint8_t * functions_D2CommonFunctions_1026bc30(void)

{
  functions_D2CommonFunctions_1026bd60();
  return &DAT_104e19d4;
}


// 0x1026bc40  (ghidra: FUN_1026bc40)  [range]
int * functions_D2CommonFunctions_1026bc40(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  uint32_t *puVar4;
  int iVar5;
  
  piVar2 = (int *)thunk_FUN_1026bd40();
  iVar5 = *piVar2;
  param_1[1] = 0;
  param_1[2] = iVar5;
  puVar4 = *(uint32_t **)(iVar5 + 4);
  *param_1 = (int)puVar4;
  cVar1 = *(char *)((int)puVar4 + 0xd);
  while (cVar1 == '\0') {
    *param_1 = (int)puVar4;
    iVar5 = param_2;
    pvVar3 = (void *)sub_1020fe80(puVar4 + 4);
    cVar1 = sub_1024a750(pvVar3,iVar5);
    if (cVar1 == '\0') {
      param_1[2] = (int)puVar4;
      puVar4 = (uint32_t *)*puVar4;
    }
    else {
      puVar4 = (uint32_t *)puVar4[2];
    }
    param_1[1] = (uint)(cVar1 == '\0');
    cVar1 = *(char *)((int)puVar4 + 0xd);
  }
  return param_1;
}


// 0x1026bca0  (ghidra: FUN_1026bca0)  [range]
int * functions_D2CommonFunctions_1026bca0(int param_1,uint32_t param_2)

{
  uint64_t uVar1;
  uint32_t *this;
  void *pvVar2;
  int *piVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  int *local_1c;
  int iStack_18;
  int local_10;
  uint8_t local_c [8];
  
  this = (uint32_t *)thunk_FUN_1020fe80(&DAT_104e19d4);
  pvVar2 = (void *)sub_1020fe80(param_2);
  piVar3 = functions_D2CommonFunctions_1026bda0(&local_10,param_1,pvVar2);
  uVar1 = *(uint64_t *)piVar3;
  local_1c = (int *)uVar1;
  if ((char)piVar3[2] != '\0') {
    return local_1c;
  }
  functions_D2CommonFunctions_stl_1026bd80();
  uVar4 = sub_1020fe80(param_2);
  uVar6 = *this;
  uVar5 = thunk_FUN_1020fe80(&DAT_104e19d4);
  pvVar2 = sub_1024bf70(local_c,uVar5,uVar6,uVar4);
  piVar3 = (int *)sub_10211530((int)pvVar2);
  sub_102446d0((int)local_c);
  iStack_18 = (int)((ulonglong)uVar1 >> 0x20);
  piVar3 = sub_10211590(this,local_1c,iStack_18,piVar3);
  return piVar3;
}


// 0x1026bd40  (ghidra: FUN_1026bd40)  [range]
uint8_t * functions_D2CommonFunctions_1026bd40(void)

{
  return &DAT_104e19d4;
}


// 0x1026bd50  (ghidra: FUN_1026bd50)  [range]
uint8_t functions_D2CommonFunctions_1026bd50(void)

{
  return 1;
}


// 0x1026bd60  (ghidra: FUN_1026bd60)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t * functions_D2CommonFunctions_1026bd60(void)

{
  DAT_104e19d4 = 0;
  DAT_104e19d8 = 0;
  return &DAT_104e19d4;
}


// 0x1026bd80  (ghidra: FUN_1026bd80)  [range]
void functions_D2CommonFunctions_stl_1026bd80(void)

{
  int iVar1;
  int extraout_EDX;
  
  sub_10245680();
  iVar1 = thunk_FUN_1020fe80(&DAT_104e19d4);
  if (extraout_EDX != *(int *)(iVar1 + 4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}


// 0x1026bda0  (ghidra: FUN_1026bda0)  [range]
int * functions_D2CommonFunctions_1026bda0(int *param_1,int param_2,void *param_3)

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
  
  puVar3 = (uint32_t *)thunk_FUN_1026bd40();
  pvVar9 = param_3;
  piVar7 = (int *)*puVar3;
  if (*(char *)(param_2 + 0xd) != '\0') {
    if (*(char *)(piVar7[1] + 0xd) == '\0') {
      pvVar5 = param_3;
      pvVar4 = (void *)sub_1020fe80(piVar7[2] + 0x10);
      cVar2 = sub_1024a750(pvVar4,(int)pvVar5);
      if (cVar2 == '\0') goto LAB_1026bed1;
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
          if (cVar2 == '\0') goto LAB_1026bed1;
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
LAB_1026bed1:
  piVar7 = functions_D2CommonFunctions_1026bc40(&local_10,(int)pvVar9);
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


// 0x1026bf60  (ghidra: FUN_1026bf60)  [range]
__time64_t functions_D2CommonFunctions_1026bf60(void)

{
  __time64_t _Var1;
  
  _Var1 = _time64((__time64_t *)0x0);
  return _Var1;
}


// 0x1026bf70  (ghidra: FUN_1026bf70)  [range]
uint8_t * functions_D2CommonFunctions_1026bf70(void)

{
  return &DAT_104e1ac9;
}


// 0x1026bf80  (ghidra: FUN_1026bf80)  [range]
uint8_t * functions_D2CommonFunctions_1026bf80(void)

{
  return &DAT_104e1ac8;
}


// 0x1026bf90  (ghidra: FUN_1026bf90)  [range]
void __fastcall functions_D2CommonFunctions_1026bf90(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte local_7c [32];
  uint local_5c;
  uint local_30;
  int local_c;
  int local_8;
  
  uVar1 = D2Common_10331(param_2);
  if (uVar1 != 0) {
    uVar1 = D2Common_10826(uVar1);
    if (((*(char *)(param_1 + 0x262b) == '\x01') && (param_2[0xb] != 0)) &&
       ((uVar1 == 0xa1 || ((uVar1 == 0xa2 || (uVar1 == 0xa3)))))) {
      uVar2 = (uint)*(ushort *)(param_2[0xb] + 6);
      local_8 = 0;
      local_c = 0;
      sub_102b02d0(param_1,&local_8,&local_c);
      uVar1 = (uint)*(ushort *)(param_2[0xb] + 2);
      if ((((int)uVar1 < local_8 + -0xf) && (local_8 + -100 < (int)uVar1)) ||
         (((local_8 + 0xf < (int)uVar1 && ((int)uVar1 < local_8 + 100)) ||
          ((((int)uVar2 < local_c + -0xf && (local_c + -100 < (int)uVar2)) ||
           ((local_c + 0xf < (int)uVar2 && ((int)uVar2 < local_c + 100)))))))) {
        uVar1 = D2Common_10973((int)param_2,6,0);
        memset(local_7c,0,0x70);
        D2Common_10973((int)param_2,7,0);
        local_5c = FUN_103030b0();
        local_7c[0] = 0;
        local_7c[1] = 0x10;
        local_7c[2] = 0;
        local_7c[3] = 0;
        local_30 = local_5c;
        if (uVar1 <= local_5c + 0x200) {
          local_30 = uVar1 - 0x200;
        }
        sub_102ed2e0(param_2,param_1,param_2,0,local_7c);
        sub_1026edd0(param_2,param_1,param_2,local_7c);
      }
    }
  }
  return;
}


// 0x1026c0e0  (ghidra: FUN_1026c0e0)  [range]
void __fastcall functions_D2CommonFunctions_1026c0e0(uint32_t param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_2 + 0x14) + 0x379);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(int *)(param_2 + 0x14) + 0x3f5);
  *piVar1 = *piVar1 + 1;
  return;
}


// 0x1026c100  (ghidra: FUN_1026c100)  [range]
uint __fastcall functions_D2CommonFunctions_1026c100(int param_1,uint32_t reg_ESI)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int iVar6;
  uint32_t *puVar7;
  
  uVar3 = *(uint *)(param_1 + 0xa8);
  if (uVar3 % 0x19 == 0) {
    puVar7 = (uint32_t *)(param_1 + 0x1120);
    iVar5 = 0x80;
    iVar6 = param_1;
    do {
      piVar1 = (int *)*puVar7;
      if ((((piVar1 != (int *)0x0) && (piVar1[7] != 0)) && (*piVar1 == 0)) &&
         (((piVar1[5] != 0 && (iVar2 = *(int *)(piVar1[5] + 0x9c), iVar2 != 0)) &&
          (*(int *)(iVar2 + 4) == 4)))) {
        if (piVar1[4] == 0x11) {
          uVar3 = D2Common_10494_10277e30(piVar1,7);
          iVar6 = extraout_ECX;
          if (uVar3 != 0) goto LAB_1026c171;
        }
        functions_D2CommonFunctions_1026c0e0(iVar6,(int)piVar1);
        iVar6 = extraout_ECX_00;
      }
LAB_1026c171:
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar3 = *(uint *)(param_1 + 0xa8);
  }
  uVar4 = uVar3 / 0xc;
  if (uVar3 % 0xc == 0) {
    puVar7 = (uint32_t *)(param_1 + 0x1120);
    iVar6 = 0x80;
    do {
      piVar1 = (int *)*puVar7;
      if (((piVar1 != (int *)0x0) && (piVar1[7] != 0)) &&
         ((*piVar1 == 0 &&
          (((uVar4 = piVar1[5], uVar4 != 0 && (uVar4 = *(uint *)(uVar4 + 0x9c), uVar4 != 0)) &&
           (*(int *)(uVar4 + 4) == 4)))))) {
        if (piVar1[4] == 0x11) {
          uVar4 = D2Common_10494_10277e30(piVar1,7);
          if (uVar4 != 0) goto LAB_1026c1e9;
        }
        uVar4 = functions_D2CommonFunctions_1026bf90(param_1,piVar1);
      }
LAB_1026c1e9:
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar4;
}


// 0x1026c200  [range]
void __fastcall thunk_FUN_1026c210(int param_1)

{
  functions_D2CommonFunctions_1026c210(param_1);
  return;
}


// 0x1026c210  (ghidra: FUN_1026c210)  [range]
void __fastcall functions_D2CommonFunctions_1026c210(int param_1)

{
  thunk_FUN_1026cd70((int *)(param_1 + 0xc));
  thunk_FUN_1026ce40((uint32_t *)(param_1 + 4));
  return;
}


// 0x1026c230  (ghidra: FUN_1026c230)  [range]
void __fastcall functions_D2CommonFunctions_1026c230(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint8_t local_e4;
  uint32_t local_e3 [55];
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    local_e4 = 0x85;
    puVar2 = (uint32_t *)(*(int *)(param_2 + 0x14) + 0x436);
    puVar3 = local_e3;
    for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    sub_102ecd00(param_1,&local_e4,0xdd);
  }
  return;
}


// 0x1026c280  (ghidra: FUN_1026c280)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall functions_D2CommonFunctions_1026c280(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint3 uVar3;
  int iVar4;
  uint16_t local_2c;
  longlong local_2a;
  uint32_t uStack_22;
  uint32_t uStack_1e;
  int local_18;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  uint local_8;
  uint32_t _uStack_22;   /* not traced by Ghidra: value with no visible source */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  do {
    uVar1 = *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x512 + iVar4 * 8);
    uVar2 = *(uint32_t *)(*(int *)(param_1 + 0x14) + 0x516 + iVar4 * 8);
    uStack_12 = (uint16_t)uVar2;
    uStack_10 = (uint16_t)((uint)uVar2 >> 0x10);
    uStack_14 = (uint16_t)((uint)uVar1 >> 0x10);
    uVar3 = CONCAT21((short)uVar1,(char)iVar4);
    local_18 = (uint)uVar3 << 8;
    local_2c = 0x42e;
    local_2a = (ulonglong)CONCAT43(CONCAT22(uStack_12,uStack_14),uVar3) << 8;
    _uStack_22 = CONCAT44(uStack_c,CONCAT22(uStack_e,uStack_10));
    sub_102ecd00(param_2,&local_2c,0x12);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return;
}


// 0x1026c310  (ghidra: FUN_1026c310)  [range]
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void functions_D2CommonFunctions_Hook_GAME_Game_6fc4d9b0_1026c310(int param_1,int param_2)

{
  bool bVar1;
  LPCWSTR pWVar2;
  LPSTR pCVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  uint extraout_EDX;
  __time64_t _Var10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint8_t auStack_98 [4];
  uint32_t uStack_94;
  uint32_t local_70 [6];
  int local_58;
  int local_54;
  uint8_t local_50 [4];
  uint32_t local_4c [6];
  uint64_t local_34;
  uint16_t local_2c;
  uint8_t local_2a [2];
  uint8_t auStack_28 [10];
  uint32_t uStack_1e;
  int local_18;
  uint local_14;
  void *local_10;
  uint8_t *puStack_c;
  int local_8;
  uint32_t _local_2a;   /* not traced by Ghidra: value with no visible source */
  uint8_t  stack0xfffffffc;   /* not traced by Ghidra: address of a stack slot */
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10307fcd;
  local_10 = ExceptionList;
  local_14 = DAT_1039800c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = param_1;
  local_54 = param_2;
  if ((param_2 == 0) || (piVar6 = *(int **)(param_2 + 0x174), piVar6 == (int *)0x0)) {
    GAME_Game_6fc4c120(param_1,param_2);
    if (param_2 == 0) {
      ExceptionList = local_10;
      return;
    }
  }
  else {
    D2Common_10973((int)piVar6,0xc,0);
    functions_HelperFunctions_102d2540(piVar6);
    functions_D2CommonFunctions_1026c230(param_2,(int)piVar6);
    functions_D2CommonFunctions_1026c280((int)piVar6,param_2);
    GAME_Game_6fc4c120(param_1,param_2);
  }
  iVar5 = *(int *)(param_2 + 0x174);
  if (iVar5 != 0) {
    local_58 = iVar5;
    pWVar2 = (LPCWSTR)functions_HelperFunctions_JmpTo_D2Lang_10011_102d0fb0((byte *)"CorruptedZoneNotify");
    pCVar3 = sub_10237720(pWVar2);
    sub_1020f990(local_4c,pCVar3);
    local_8 = 0;
    if (*(uint *)(param_1 + 0x26f2) == 0) {
      if ((*(char *)(param_1 + 0x6d) == '\x02') &&
         (uVar4 = D2Common_10174(*(uint **)(*(int *)(iVar5 + 0x14) + 0x18),0x28,0), uVar4 != 0)) {
        _Var10 = functions_D2CommonFunctions_1026bf60();
        uStack_94 = 0x1026c407;
        uVar4 = (uint)((ulonglong)_Var10 >> 0x20);
        uVar11 = __alldiv((uint)_Var10,uVar4,900,0);
        uStack_94 = 0x1026c417;
        uVar12 = __alldiv((uint)_Var10,uVar4,0x15180,0);
        srand((int)uVar12 + (int)uVar11);
        iVar5 = functions_D2ServerFunctions_1026cd40();
        uVar4 = rand();
        param_1 = local_18;
        *(uint *)(local_18 + 0x26f2) = uVar4 % (iVar5 - 1U) + 1;
        sub_1020f410(&local_34);
        iVar5 = functions_D2CommonFunctions_1026b810(&DAT_104e1b04,extraout_EDX);
        sub_10212a90(&local_34,iVar5);
        local_8._0_1_ = 1;
        sub_1020f420((uint64_t *)(local_2a + 2));
        piVar6 = (int *)functions_D2ServerFunctions_1026cd10(*(uint *)(param_1 + 0x26f2));
        sub_10210b20(local_2a + 2,piVar6);
        local_8 = CONCAT31(local_8._1_3_,2);
        sub_1024b620(&local_18);
        uVar4 = 0;
        uVar11 = functions_D2ServerFunctions_1026cd50(&local_34,local_50);
        local_18 = *(int *)uVar11;
        piVar6 = (int *)sub_102280a0(&local_34,local_50);
        bVar1 = sub_1023d8f0(&local_18,piVar6);
        if (bVar1) {
          do {
            piVar6 = (int *)sub_1025f2f0(&local_18);
            iVar5 = *piVar6;
            functions_D2ServerFunctions_1026cce0(local_2a + 2,uVar4);
            *(uint32_t *)(*(int *)(param_1 + 0xf0 + iVar5 * 4) + 0x2dc) = 0x55;
            *(uint32_t *)(*(int *)(param_1 + 0xf0 + iVar5 * 4) + 0x2e0) = 0x55;
            iVar5 = *(int *)(param_1 + 0xf0 + iVar5 * 4);
            uVar7 = FUN_10303060();
            *(uint *)(iVar5 + 0x2b8) = uVar7;
            uVar4 = uVar4 + 1;
            sub_1025dfb0(&local_18);
            piVar6 = (int *)sub_102280a0(&local_34,local_50);
            bVar1 = sub_1023d8f0(&local_18,piVar6);
          } while (bVar1);
        }
        iVar5 = functions_D2ServerFunctions_1026ccb0(*(uint *)(param_1 + 0x26f2));
        pvVar8 = functions_D2ServerFunctions_1026cf70(local_70,(int)local_4c,iVar5);
        local_8._0_1_ = 3;
        client_Sound_Sound_10233cd0(auStack_98,pvVar8,"...");
        functions_HelperFunctions_102cfd10(local_58,0xb);
        thunk_FUN_1020fc60(local_70);
        _Var10 = functions_D2CommonFunctions_1026bf60();
        srand((uint)_Var10);
        thunk_FUN_1020fb40((uint32_t *)(local_2a + 2));
        local_8 = (uint)local_8._1_3_ << 8;
        thunk_FUN_1020f8e0(&local_34);
        param_2 = local_54;
      }
    }
    else {
      iVar9 = functions_D2ServerFunctions_1026ccb0(*(uint *)(param_1 + 0x26f2));
      pvVar8 = functions_D2ServerFunctions_1026cf70(local_70,(int)local_4c,iVar9);
      local_8._0_1_ = 4;
      client_Sound_Sound_10233cd0(auStack_98,pvVar8,"...");
      functions_HelperFunctions_102cfd10(iVar5,0xb);
      local_8 = (uint)local_8._1_3_ << 8;
      thunk_FUN_1020fc60(local_70);
    }
    _local_2a = *(uint32_t *)(param_1 + 0x26f2);
    auStack_28._2_4_ = 0;
    auStack_28._6_4_ = 0;
    uStack_1e = 0;
    local_2c = 0x12e;
    sub_102ecd00(param_2,&local_2c,0x12);
    sub_102d41d0(*(int *)(param_2 + 0x174));
    sub_102d3f00(*(int *)(param_2 + 0x174));
    local_2c = 0x2e;
    _local_2a = 0;
    auStack_28._2_4_ = 0;
    auStack_28._6_4_ = 0;
    uStack_1e = 0;
    sub_102ecd00(param_2,&local_2c,0x12);
    thunk_FUN_1020fc60(local_4c);
  }
  ExceptionList = local_10;
  return;
}


// 0x1026c6c0  (ghidra: FUN_1026c6c0)  [nearest]
longlong __fastcall functions_D2CommonFunctions_1026c6c0(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (byte *)0x0) {
    return (ulonglong)param_2 << 0x20;
  }
  iVar3 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      if (uVar2 - 0xc < 4) {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)*param_1;
      }
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
      iVar3 = (uVar1 - (iVar3 >> 0x1f)) + iVar3 * 2;
    } while (uVar2 < param_2);
  }
  return CONCAT44(uVar2,iVar3);
}

