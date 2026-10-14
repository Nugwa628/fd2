/*
 * client/Sound/SoundInstance.cpp
 * Reconstructed from Ghidra output of ProjectDiablo.dll (Project Diablo 2).
 * Address range : 0x10071080 - 0x10235760
 * Functions     : 106
 * Attribution   : range=102, anchor=4
 *   anchor     = function references this file's __FILE__ string
 *   range      = lies between two anchored functions of this file (objects are linked contiguously)
 *   linked     = lies between this file and a neighbour; its (earliest) callers are in this file
 *   inferred   = no call links, but sits between functions already placed in this file
 *   nearest    = no call links; short run placed with the nearest file (low confidence)
 *   gap        = file name not recoverable; grouped by position
 * Decompiler output, not original source: types, names and control flow are Ghidra's.
 */

#include "projectdiablo_decomp.h"


// 0x10071080  (ghidra: FUN_10071080)  [range]
void client_Sound_SoundInstance_init_10071080(void)

{
  uint32_t extraout_ECX;
  
  sub_1020f410((uint64_t *)&DAT_104de970);
  sub_1020f960(extraout_ECX);
  _atexit(FUN_10318d00);
  return;
}


// 0x100710a0  (ghidra: FUN_100710a0)  [range]
void client_Sound_SoundInstance_init_100710a0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104deac0);
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
  sub_1020f900(&DAT_104deac0);
  _atexit((_func_4879 *)&LAB_10318d10);
  return;
}


// 0x10071190  (ghidra: FUN_10071190)  [range]
void client_Sound_SoundInstance_init_10071190(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de95c);
  local_c = 0x84;
  local_1c = 6;
  uStack_18 = 0x42;
  uStack_14 = 0x4c;
  uStack_10 = 0x6a;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104de95c);
  _atexit((_func_4879 *)&LAB_10318d20);
  return;
}


// 0x100711f0  (ghidra: FUN_100711f0)  [range]
void client_Sound_SoundInstance_init_100711f0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dea80);
  local_c = 0x113;
  local_1c = 0;
  uStack_18 = 0xff;
  uStack_14 = 0x104;
  uStack_10 = 0x10e;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104dea80);
  _atexit((_func_4879 *)&LAB_10318d30);
  return;
}


// 0x10071250  (ghidra: FUN_10071250)  [range]
void client_Sound_SoundInstance_init_10071250(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de9c4);
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
  sub_1020f900(&DAT_104de9c4);
  _atexit((_func_4879 *)&LAB_10318d40);
  return;
}


// 0x100712c0  (ghidra: FUN_100712c0)  [range]
void client_Sound_SoundInstance_init_100712c0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea10);
  local_28 = 0x115;
  uStack_24 = 0x39;
  uStack_20 = 0xdb;
  uStack_1c = 0xdc;
  local_18 = 0x202;
  uStack_14 = 0xd9;
  uStack_10 = 0xda;
  uStack_c = 0x201;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dea10);
  _atexit((_func_4879 *)&LAB_10318d50);
  return;
}


// 0x10071320  (ghidra: FUN_10071320)  [range]
void client_Sound_SoundInstance_init_10071320(void)

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
  
  sub_1020f420((uint64_t *)&DAT_104dea2c);
  local_28 = 0x1d8;
  uStack_24 = 0x1d9;
  uStack_20 = 0x1da;
  uStack_1c = 0x1a0;
  local_18 = 0x1dc;
  uStack_14 = 0x1dd;
  uStack_10 = 0x1de;
  uStack_c = 0x1df;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f780((uint32_t *)&DAT_104dea2c);
  _atexit((_func_4879 *)&LAB_10318d60);
  return;
}


// 0x10071380  (ghidra: FUN_10071380)  [range]
void client_Sound_SoundInstance_init_10071380(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dea38);
  local_10 = 0x6b;
  local_c = 0x102;
  local_20 = 0x36;
  uStack_1c = 0x165;
  uStack_18 = 0x16f;
  uStack_14 = 0x172;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dea38);
  _atexit((_func_4879 *)&LAB_10318d70);
  return;
}


// 0x100713f0  (ghidra: FUN_100713f0)  [range]
void client_Sound_SoundInstance_init_100713f0(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de93c);
  local_10 = 0x8f;
  local_c = 0x6b;
  local_20 = 0x111;
  uStack_1c = 0x79;
  uStack_18 = 0x97;
  uStack_14 = 0x84;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de93c);
  _atexit((_func_4879 *)&LAB_10318d80);
  return;
}


// 0x10071460  (ghidra: FUN_10071460)  [range]
void client_Sound_SoundInstance_init_10071460(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dea50);
  local_10 = 0x22b;
  local_c = 0x22a;
  local_20 = 0x254;
  uStack_1c = 0x251;
  uStack_18 = 0x22c;
  uStack_14 = 0x22d;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104dea50);
  _atexit((_func_4879 *)&LAB_10318d90);
  return;
}


// 0x100714d0  (ghidra: FUN_100714d0)  [range]
void client_Sound_SoundInstance_init_100714d0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de9cc);
  local_28 = 0x92;
  uStack_24 = 0x94;
  uStack_20 = 0x97;
  uStack_1c = 0x9b;
  local_18 = 0x91;
  uStack_14 = 0xa9;
  uStack_10 = 0x8f;
  uStack_c = 0x9e;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de9cc);
  _atexit((_func_4879 *)&LAB_10318da0);
  return;
}


// 0x10071530  (ghidra: FUN_10071530)  [range]
void client_Sound_SoundInstance_init_10071530(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea24);
  local_28 = 0x35d;
  uStack_24 = 0x36f;
  uStack_20 = 0x366;
  uStack_1c = 0x37d;
  local_18 = 0x2ea;
  uStack_14 = 0x3e4;
  uStack_10 = 0x2ee;
  uStack_c = 0x393;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104dea24);
  _atexit((_func_4879 *)&LAB_10318db0);
  return;
}


// 0x10071590  (ghidra: FUN_10071590)  [range]
void client_Sound_SoundInstance_init_10071590(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dead4);
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
  sub_1020f900(&DAT_104dead4);
  _atexit((_func_4879 *)&LAB_10318dc0);
  return;
}


// 0x10071600  (ghidra: FUN_10071600)  [range]
void client_Sound_SoundInstance_init_10071600(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de8e8);
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
  sub_1020f900(&DAT_104de8e8);
  _atexit((_func_4879 *)&LAB_10318dd0);
  return;
}


// 0x10071670  (ghidra: FUN_10071670)  [range]
void client_Sound_SoundInstance_init_10071670(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de9b8);
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
  sub_1020f900(&DAT_104de9b8);
  _atexit((_func_4879 *)&LAB_10318de0);
  return;
}


// 0x100716e0  (ghidra: FUN_100716e0)  [range]
void client_Sound_SoundInstance_init_100716e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104deaa4);
  local_28 = 0x33a;
  uStack_24 = 0x3e6;
  uStack_20 = 0x373;
  uStack_1c = 0x329;
  local_18 = 0x461;
  uStack_14 = 0x462;
  uStack_10 = 0x2f3;
  uStack_c = 0x3c4;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104deaa4);
  _atexit((_func_4879 *)&LAB_10318df0);
  return;
}


// 0x10071740  (ghidra: FUN_10071740)  [range]
void client_Sound_SoundInstance_init_10071740(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de920);
  local_28 = 0x98;
  uStack_24 = 0x99;
  uStack_20 = 0xa4;
  uStack_1c = 0xa5;
  local_18 = 0xab;
  uStack_14 = 0xac;
  uStack_10 = 0xba;
  uStack_c = 0xbb;
  sub_1020f550(local_30,&local_28,local_8);
  sub_1020f900(&DAT_104de920);
  _atexit((_func_4879 *)&LAB_10318e00);
  return;
}


// 0x100717a0  (ghidra: FUN_100717a0)  [range]
void client_Sound_SoundInstance_init_100717a0(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104deab4);
  local_14 = 0x2eb;
  local_10 = 1000;
  local_c = 0x44f;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104deab4);
  _atexit((_func_4879 *)&LAB_10318e10);
  return;
}


// 0x10071800  (ghidra: FUN_10071800)  [range]
void client_Sound_SoundInstance_init_10071800(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dea88);
  local_14 = 0x2e7;
  local_10 = 0x450;
  local_c = 0x451;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104dea88);
  _atexit((_func_4879 *)&LAB_10318e20);
  return;
}


// 0x10071860  (ghidra: FUN_10071860)  [range]
void client_Sound_SoundInstance_init_10071860(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104deaf4);
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
  sub_1020f900(&DAT_104deaf4);
  _atexit((_func_4879 *)&LAB_10318e30);
  return;
}


// 0x100718e0  (ghidra: FUN_100718e0)  [range]
void client_Sound_SoundInstance_init_100718e0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de918);
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
  sub_1020f900(&DAT_104de918);
  _atexit((_func_4879 *)&LAB_10318e40);
  return;
}


// 0x10071950  (ghidra: FUN_10071950)  [range]
void client_Sound_SoundInstance_init_10071950(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de9e4);
  local_18 = 0x9d;
  local_14 = 0x9f;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104de9e4);
  _atexit((_func_4879 *)&LAB_10318e50);
  return;
}


// 0x100719b0  (ghidra: FUN_100719b0)  [range]
void client_Sound_SoundInstance_init_100719b0(void)

{
  uint8_t local_20 [8];
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104dea44);
  local_18 = 0x89;
  uStack_14 = 0xa1;
  uStack_10 = 0xa8;
  uStack_c = 0xbc;
  sub_1020f550(local_20,&local_18,local_8);
  sub_1020f900(&DAT_104dea44);
  _atexit((_func_4879 *)&LAB_10318e60);
  return;
}


// 0x10071a10  (ghidra: FUN_10071a10)  [range]
void client_Sound_SoundInstance_init_10071a10(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea18);
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
  sub_1020f900(&DAT_104dea18);
  _atexit((_func_4879 *)&LAB_10318e70);
  return;
}


// 0x10071ab0  (ghidra: FUN_10071ab0)  [range]
void client_Sound_SoundInstance_init_10071ab0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea08);
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
  sub_1020f900(&DAT_104dea08);
  _atexit((_func_4879 *)&LAB_10318e80);
  return;
}


// 0x10071b20  (ghidra: FUN_10071b20)  [range]
void client_Sound_SoundInstance_init_10071b20(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de9a0);
  local_14 = 0x89;
  local_10 = 0xa1;
  local_c = 0xbc;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de9a0);
  _atexit((_func_4879 *)&LAB_10318e90);
  return;
}


// 0x10071b80  (ghidra: FUN_10071b80)  [range]
void client_Sound_SoundInstance_init_10071b80(void)

{
  uint8_t local_1c [8];
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de944);
  local_14 = 0x85;
  local_10 = 0x86;
  local_c = 0x87;
  sub_1020f550(local_1c,&local_14,local_8);
  sub_1020f900(&DAT_104de944);
  _atexit((_func_4879 *)&LAB_10318ea0);
  return;
}


// 0x10071be0  (ghidra: FUN_10071be0)  [range]
void client_Sound_SoundInstance_init_10071be0(void)

{
  uint8_t local_24 [8];
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104deae0);
  local_c = 0x220;
  local_1c = 0x9c;
  uStack_18 = 0xd3;
  uStack_14 = 0xf2;
  uStack_10 = 0xf3;
  sub_1020f550(local_24,&local_1c,local_8);
  sub_1020f900(&DAT_104deae0);
  _atexit((_func_4879 *)&LAB_10318eb0);
  return;
}


// 0x10071c40  (ghidra: FUN_10071c40)  [range]
void client_Sound_SoundInstance_init_10071c40(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de8f0);
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
  sub_1020f900(&DAT_104de8f0);
  _atexit((_func_4879 *)&LAB_10318ec0);
  return;
}


// 0x10071cd0  (ghidra: FUN_10071cd0)  [range]
void client_Sound_SoundInstance_init_10071cd0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de9dc);
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
  sub_1020f900(&DAT_104de9dc);
  _atexit((_func_4879 *)&LAB_10318ed0);
  return;
}


// 0x10071d90  (ghidra: FUN_10071d90)  [range]
void client_Sound_SoundInstance_init_10071d90(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de988);
  local_20 = 0x315;
  local_c = 0x458;
  local_1c = 0x3a5;
  uStack_18 = 0x3a6;
  uStack_14 = 0x3a7;
  uStack_10 = 0x3a8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de988);
  _atexit((_func_4879 *)&LAB_10318ee0);
  return;
}


// 0x10071e00  (ghidra: FUN_10071e00)  [range]
void client_Sound_SoundInstance_init_10071e00(void)

{
  uint8_t local_28 [8];
  uint32_t local_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t local_10;
  uint32_t local_c;
  uint8_t local_8 [4];
  
  sub_1020f410((uint64_t *)&DAT_104de954);
  local_10 = 0x2d9;
  local_c = 0x2da;
  local_20 = 0x2d5;
  uStack_1c = 0x2d6;
  uStack_18 = 0x2d7;
  uStack_14 = 0x2d8;
  sub_1020f550(local_28,&local_20,local_8);
  sub_1020f900(&DAT_104de954);
  _atexit((_func_4879 *)&LAB_10318ef0);
  return;
}


// 0x10071e70  (ghidra: FUN_10071e70)  [range]
void client_Sound_SoundInstance_init_10071e70(void)

{
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104de910);
  local_14 = 0x2c8;
  sub_1020f550(local_10,&local_14,local_10);
  sub_1020f900(&DAT_104de910);
  _atexit((_func_4879 *)&LAB_10318f00);
  return;
}


// 0x10071ec0  (ghidra: FUN_10071ec0)  [range]
void client_Sound_SoundInstance_init_10071ec0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint8_t local_10 [12];
  
  sub_1020f410((uint64_t *)&DAT_104dea6c);
  local_18 = 0x2db;
  local_14 = 0x2dc;
  sub_1020f550(local_10,&local_18,local_10);
  sub_1020f900(&DAT_104dea6c);
  _atexit((_func_4879 *)&LAB_10318f10);
  return;
}


// 0x10071f20  (ghidra: FUN_10071f20)  [range]
void client_Sound_SoundInstance_init_10071f20(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea9c);
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
  sub_1020f880(&DAT_104dea9c);
  _atexit((_func_4879 *)&LAB_10318f20);
  return;
}


// 0x10071fb0  (ghidra: FUN_10071fb0)  [range]
void client_Sound_SoundInstance_init_10071fb0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea90);
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
  sub_1020f880(&DAT_104dea90);
  _atexit((_func_4879 *)&LAB_10318f30);
  return;
}


// 0x100720b0  (ghidra: FUN_100720b0)  [range]
void client_Sound_SoundInstance_init_100720b0(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea78);
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
  sub_1020f900(&DAT_104dea78);
  _atexit((_func_4879 *)&LAB_10318f40);
  return;
}


// 0x10072130  (ghidra: FUN_10072130)  [range]
void client_Sound_SoundInstance_init_10072130(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104dea58);
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
  sub_1020f900(&DAT_104dea58);
  _atexit((_func_4879 *)&LAB_10318f50);
  return;
}


// 0x100721c0  (ghidra: FUN_100721c0)  [range]
void client_Sound_SoundInstance_init_100721c0(void)

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
  sub_1020f420((uint64_t *)&DAT_104dea60);
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
  sub_1020f7f0((uint32_t *)&DAT_104dea60);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_100,0xc,9,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_10318f60);
  ExceptionList = local_10;
  return;
}


// 0x10072780  (ghidra: FUN_10072780)  [range]
void client_Sound_SoundInstance_init_10072780(void)

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
  sub_1020f420((uint64_t *)&DAT_104de964);
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
  sub_1020f840((uint32_t *)&DAT_104de964);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_304,8,0x26,thunk_FUN_1020f8e0);
  _atexit((_func_4879 *)&DAT_10318f70);
  ExceptionList = local_10;
  return;
}


// 0x10073150  (ghidra: FUN_10073150)  [range]
void client_Sound_SoundInstance_init_10073150(void)

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
  sub_1020f420((uint64_t *)&DAT_104de904);
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
  sub_1020f7f0((uint32_t *)&DAT_104de904);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_4ec,0xc,0x26,thunk_FUN_1020fb40);
  _atexit((_func_4879 *)&LAB_10318f80);
  ExceptionList = local_10;
  return;
}


// 0x10073b50  (ghidra: FUN_10073b50)  [range]
void client_Sound_SoundInstance_init_10073b50(void)

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
  sub_1020f420((uint64_t *)&DAT_104de9ac);
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
  sub_1020f730((uint32_t *)&DAT_104de9ac);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_3a8,0x18,0x26,thunk_FUN_1020fc60);
  _atexit((_func_4879 *)&LAB_10318f90);
  ExceptionList = local_10;
  return;
}


// 0x10073ed0  (ghidra: FUN_10073ed0)  [range]
void client_Sound_SoundInstance_init_10073ed0(void)

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
  sub_1020f410((uint64_t *)&DAT_104de94c);
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
  sub_1020f6a0(&DAT_104de94c);
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
  _atexit((_func_4879 *)&LAB_10318fa0);
  ExceptionList = local_10;
  return;
}


// 0x10074400  (ghidra: FUN_10074400)  [range]
void client_Sound_SoundInstance_init_10074400(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104deacc);
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
  sub_10210100(&DAT_10367dd0,&local_6c);
  local_68 = 0x10;
  sub_10210100(&DAT_10367dc8,&local_68);
  local_64 = 0x13;
  sub_10210100(&DAT_10367dcc,&local_64);
  sub_1020f550(local_10,local_60,local_10);
  sub_1020f640(&DAT_104deacc);
  _atexit((_func_4879 *)&LAB_10318fb0);
  return;
}


// 0x100745b0  (ghidra: FUN_100745b0)  [range]
void client_Sound_SoundInstance_init_100745b0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de8f8);
  local_18 = 0x41503033;
  local_14 = 0x32484754;
  local_10 = 0x57375258;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de8f8);
  _atexit((_func_4879 *)&LAB_10318fc0);
  return;
}


// 0x10074610  (ghidra: FUN_10074610)  [range]
void client_Sound_SoundInstance_init_10074610(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de990);
  local_18 = 0x554f4e36;
  local_14 = 0x56383149;
  local_10 = 0x4a4d5942;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de990);
  _atexit((_func_4879 *)&LAB_10318fd0);
  return;
}


// 0x10074670  (ghidra: FUN_10074670)  [range]
void client_Sound_SoundInstance_init_10074670(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de92c);
  local_18 = 0x44513534;
  local_14 = 0x455a4b4c;
  local_10 = 0x46433953;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de92c);
  _atexit((_func_4879 *)&LAB_10318fe0);
  return;
}


// 0x100746d0  (ghidra: FUN_100746d0)  [range]
void client_Sound_SoundInstance_init_100746d0(void)

{
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint8_t local_c [8];
  
  sub_1020f420((uint64_t *)&DAT_104de9f0);
  local_18 = 0x35333130;
  local_14 = 0x4b4c4941;
  local_10 = 0x5553514f;
  sub_1020f550(local_c,&local_18,local_c);
  sub_1020f600((uint32_t *)&DAT_104de9f0);
  _atexit((_func_4879 *)&LAB_10318ff0);
  return;
}


// 0x10074730  (ghidra: FUN_10074730)  [range]
void client_Sound_SoundInstance_init_10074730(void)

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
  
  sub_1020f410((uint64_t *)&DAT_104de8e0);
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
  sub_1020f570(&DAT_104de8e0);
  _atexit((_func_4879 *)&LAB_10319000);
  return;
}


// 0x100772a0  (ghidra: FUN_100772a0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf78_100772a0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf78();
  p_D2Client_DAT_6fbcbf78 = *puVar1;
  return;
}


// 0x100772b0  (ghidra: FUN_100772b0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbc38f4_100772b0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc38f4();
  p_D2Client_DAT_6fbc38f4 = *puVar1;
  return;
}


// 0x10077870  (ghidra: FUN_10077870)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbbfc_10077870(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbbfc();
  p_D2Client_DAT_6fbcbbfc = *puVar1;
  return;
}


// 0x10077e90  (ghidra: FUN_10077e90)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc24c_10077e90(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc24c();
  p_D2Client_DAT_6fbcc24c = *puVar1;
  return;
}


// 0x10077ea0  (ghidra: FUN_10077ea0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc250_10077ea0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc250();
  p_D2Client_DAT_6fbcc250 = *puVar1;
  return;
}


// 0x10077eb0  (ghidra: FUN_10077eb0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc254_10077eb0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc254();
  p_D2Client_DAT_6fbcc254 = *puVar1;
  return;
}


// 0x10077ec0  (ghidra: FUN_10077ec0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc258_10077ec0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc258();
  p_D2Client_DAT_6fbcc258 = *puVar1;
  return;
}


// 0x10077ed0  (ghidra: FUN_10077ed0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc25c_10077ed0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc25c();
  p_D2Client_DAT_6fbcc25c = *puVar1;
  return;
}


// 0x10077ee0  (ghidra: FUN_10077ee0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc260_10077ee0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc260();
  p_D2Client_DAT_6fbcc260 = *puVar1;
  return;
}


// 0x10077ef0  (ghidra: FUN_10077ef0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbc75b8_10077ef0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc75b8();
  p_D2Client_DAT_6fbc75b8 = *puVar1;
  return;
}


// 0x10077f00  (ghidra: FUN_10077f00)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc280_10077f00(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc280();
  p_D2Client_DAT_6fbcc280 = *puVar1;
  return;
}


// 0x100783b0  (ghidra: FUN_100783b0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc394_100783b0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc394();
  p_D2Client_DAT_6fbcc394 = *puVar1;
  return;
}


// 0x10078450  (ghidra: FUN_10078450)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc3b8_10078450(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3b8();
  p_D2Client_DAT_6fbcc3b8 = *puVar1;
  return;
}


// 0x10078670  (ghidra: FUN_10078670)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbaada4_102a4e90_10078670(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbaada4_102a4e90();
  p_D2Client_DAT_6fbaada4_102a4e90 = *puVar1;
  return;
}


// 0x10078680  (ghidra: FUN_10078680)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbaadac_102a4f40_10078680(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbaadac_102a4f40();
  p_D2Client_DAT_6fbaadac_102a4f40 = *puVar1;
  return;
}


// 0x10078750  (ghidra: FUN_10078750)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc3a0_10078750(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc3a0();
  p_D2Client_DAT_6fbcc3a0 = *puVar1;
  return;
}


// 0x10078820  (ghidra: FUN_10078820)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbc97f8_10078820(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbc97f8();
  p_D2Client_DAT_6fbc97f8 = *puVar1;
  return;
}


// 0x10078c80  (ghidra: FUN_10078c80)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc268_10078c80(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc268();
  p_D2Client_DAT_6fbcc268 = *puVar1;
  return;
}


// 0x10078c90  (ghidra: FUN_10078c90)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf34_10078c90(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf34();
  p_D2Client_DAT_6fbcbf34 = *puVar1;
  return;
}


// 0x10078ca0  (ghidra: FUN_10078ca0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf40_10078ca0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf40();
  p_D2Client_DAT_6fbcbf40 = *puVar1;
  return;
}


// 0x10078cb0  (ghidra: FUN_10078cb0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf30_10078cb0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf30();
  p_D2Client_DAT_6fbcbf30 = *puVar1;
  return;
}


// 0x10078cc0  (ghidra: FUN_10078cc0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc264_10078cc0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc264();
  p_D2Client_DAT_6fbcc264 = *puVar1;
  return;
}


// 0x10078cd0  (ghidra: FUN_10078cd0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcbf38_10078cd0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcbf38();
  p_D2Client_DAT_6fbcbf38 = *puVar1;
  return;
}


// 0x10078ce0  (ghidra: FUN_10078ce0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc34c_10078ce0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc34c();
  p_D2Client_DAT_6fbcc34c = *puVar1;
  return;
}


// 0x10078cf0  (ghidra: FUN_10078cf0)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc354_10078cf0(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc354();
  p_D2Client_DAT_6fbcc354 = *puVar1;
  return;
}


// 0x10078d00  (ghidra: FUN_10078d00)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc368_10078d00(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc368();
  p_D2Client_DAT_6fbcc368 = *puVar1;
  return;
}


// 0x10078d10  (ghidra: FUN_10078d10)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc36c_10078d10(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc36c();
  p_D2Client_DAT_6fbcc36c = *puVar1;
  return;
}


// 0x10078d20  (ghidra: FUN_10078d20)  [range]
void client_Sound_SoundInstance_InitPtr_D2Client_DAT_6fbcc370_10078d20(void)

{
  uint32_t *puVar1;
  
  puVar1 = GetPtr_D2Client_DAT_6fbcc370();
  p_D2Client_DAT_6fbcc370 = *puVar1;
  return;
}


// 0x102343f0  (ghidra: FUN_102343f0)  [range]
int * client_Sound_SoundInstance_Hook_sub_6fb2d850_102343f0(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  
  piVar3 = &DAT_103e2d60;
  do {
    if (*piVar3 == 0) {
      memset(piVar3 + 1,0,0x59);
      puVar2 = p_D2Client_DAT_6fbcbf30;
      *piVar3 = 1;
      D2sound_10034(puVar2,(uint)piVar3);
      piVar1 = p_D2Client_DAT_6fbcbf38;
      piVar3[2] = *p_D2Client_DAT_6fbcbf38 + 1;
      *piVar1 = *piVar1 + 1;
      return piVar3;
    }
    piVar3 = (int *)((int)piVar3 + 0x5d);
  } while ((int)piVar3 < 0x103e7608);
  return (int *)0x0;
}


// 0x10234440  (ghidra: FUN_10234440)  [anchor] refs client/Sound/SoundInstance.cpp
void __fastcall client_Sound_SoundInstance_10234440(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      D2sound_10063((int *)(param_1 + 0x28));
      return;
    }
    if (*piVar1 == 0) break;
    D2sound_10062((int *)(*piVar1 + 0x78),*(int *)(param_1 + 8));
    piVar1 = (int *)piVar1[1];
  }
  Fog_10024("",
            "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
            ,0xc2c);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x102344a0  (ghidra: FUN_102344a0)  [anchor] refs client/Sound/SoundInstance.cpp
void __fastcall client_Sound_SoundInstance_102344a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    piVar1 = *(int **)(param_1 + 0x2c);
    piVar3 = (int *)*piVar1;
    if (piVar3 != (int *)0x0) {
      if (piVar1[2] != 0) {
        uVar2 = D2sound_10032((int)piVar3);
        *(uint *)(piVar1[2] + 0x41) = uVar2;
        piVar3 = (int *)*piVar1;
      }
      D2sound_10006(piVar3);
    }
    if (piVar1[2] != 0) {
      *(uint32_t *)(piVar1[2] + 0x30) = 2;
      *(uint32_t *)(piVar1[2] + 0x2c) = 0;
      piVar1[2] = 0;
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  Fog_10024("",
            "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
            ,0x93);
                    /* WARNING: Subroutine does not return */
  _exit(-1);
}


// 0x10234520  (ghidra: FUN_10234520)  [anchor] refs client/Sound/SoundInstance.cpp
void __fastcall client_Sound_SoundInstance_10234520(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if ((param_2 == 0) || (param_1 == (float *)0x0)) {
    Fog_10024("",
              "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
              ,0x1a6);
                    /* WARNING: Subroutine does not return */
    _exit(-1);
  }
  fVar1 = *param_1;
  *(float *)(param_2 + 0x14) = param_1[2];
  fVar2 = param_1[1];
  *(float *)(param_2 + 0xc) = fVar1;
  *(float *)(param_2 + 0x10) = fVar2;
  if (-2000.0 < fVar1) {
    if (2000.0 <= fVar1) {
      fVar1 = 2000.0;
    }
  }
  else {
    fVar1 = -2000.0;
  }
  if (fVar2 <= -2000.0) {
    *(float *)(param_2 + 0x18) = fVar1 * fVar1 + 4e+06;
    return;
  }
  if (2000.0 <= fVar2) {
    fVar2 = 2000.0;
  }
  *(float *)(param_2 + 0x18) = fVar2 * fVar2 + fVar1 * fVar1;
  return;
}


// 0x102345b0  (ghidra: FUN_102345b0)  [range]
uint32_t __fastcall client_Sound_SoundInstance_102345b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 8) == param_1) {
        iVar2 = *(int *)(*piVar1 + 0x28);
        if (iVar2 == 0) {
          return 0;
        }
        if (*(int *)(iVar2 + 4) == 0) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}


// 0x102345f0  (ghidra: FUN_102345f0)  [range]
void __fastcall client_Sound_SoundInstance_102345f0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  float local_10;
  float local_c;
  uint32_t local_8;
  
  if ((param_1 != 0) && (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30, piVar1 != (int *)0x0)) {
    while (*(int *)(*piVar1 + 8) != param_1) {
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    local_10 = (float)param_2;
    local_8 = 0x44200000;
    local_c = (float)param_3;
    client_Sound_SoundInstance_10234520(&local_10,*piVar1);
  }
  return;
}


// 0x10234650  (ghidra: FUN_10234650)  [range]
void __fastcall client_Sound_SoundInstance_10234650(uint32_t param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = p_D2Client_DAT_6fbcc250;
  piVar1 = p_D2Client_DAT_6fbcc24c;
  if ((((param_2 != 0) && (*p_D2Client_DAT_6fbcc24c != 0)) && (-1 < param_2)) && (param_2 < *p_D2Client_DAT_6fbcc250)) {
    iVar3 = param_2 * 0x92 + *p_D2Client_DAT_6fbcc24c;
    iVar5 = *(int *)(iVar3 + 0x60);
    iVar3 = (uint)*(byte *)(iVar3 + 0x3d) + iVar5;
    if (iVar5 < iVar3) {
      iVar6 = iVar5 * 0x92;
      do {
        iVar4 = 0;
        if ((-1 < iVar5) && (iVar5 < *piVar2)) {
          iVar4 = *piVar1 + iVar6;
        }
        *(int *)(iVar4 + 0x8a) = *(int *)(iVar4 + 0x8a) + 1;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x92;
      } while (iVar5 < iVar3);
    }
  }
  return;
}


// 0x102346c0  (ghidra: FUN_102346c0)  [range]
void client_Sound_SoundInstance_Hook_sub_6faf4b50_102346c0(void)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  int *piVar3;
  
  client_Sound_SoundInstance_102347a0();
  puVar1 = (uint32_t *)*p_D2Client_DAT_6fbcbf30;
  piVar3 = p_D2Client_DAT_6fbcbf30;
  while (puVar1 != (uint32_t *)0x0) {
    puVar2 = (uint32_t *)*puVar1;
    if (puVar2 != (uint32_t *)0x0) {
      D2sound_10062(piVar3,(int)puVar2);
      client_Sound_SoundInstance_10234440((int)puVar2);
      client_Sound_SoundInstance_102344a0((int)puVar2);
      piVar3 = p_D2Client_DAT_6fbcbf30;
      *puVar2 = 0;
      puVar1 = (uint32_t *)*piVar3;
    }
  }
  *p_D2Client_DAT_6fbcbf34 = 1;
  return;
}


// 0x10234710  (ghidra: FUN_10234710)  [range]
void __fastcall client_Sound_SoundInstance_10234710(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = *(int *)(*piVar1 + 4);
    if ((((*p_D2Client_DAT_6fbcc24c == 0) || (iVar2 < 0)) || (*p_D2Client_DAT_6fbcc250 <= iVar2)) ||
       (iVar3 = iVar2 * 0x92 + *p_D2Client_DAT_6fbcc24c, iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x60);
    }
    if ((((iVar3 != param_1) && (iVar3 != param_2)) && (iVar2 - 0x34U < 0x14)) ||
       (((iVar3 != param_3 && (iVar3 != 0)) && (iVar2 - 0x48U < 0x82)))) {
      client_Sound_SoundInstance_10234ce0(*piVar1);
    }
  }
  return;
}


// 0x102347a0  (ghidra: FUN_102347a0)  [range]
void client_Sound_SoundInstance_102347a0(void)

{
  DAT_103e2d40 = 0;
  DAT_103e2d34 = 0;
  DAT_103e2d38 = 0;
  DAT_103e2d58 = 0;
  if (DAT_103e2d54 != 0) {
    client_Sound_SoundInstance_10234cb0(DAT_103e2d54);
    DAT_103e2d54 = 0;
  }
  DAT_103e2d50 = 0;
  if (DAT_103e2d4c != 0) {
    client_Sound_SoundInstance_10234cb0(DAT_103e2d4c);
    DAT_103e2d4c = 0;
  }
  DAT_103e2d30 = 0;
  return;
}


// 0x10234810  (ghidra: FUN_10234810)  [range]
void client_Sound_SoundInstance_10234810(uint32_t reg_EBX,uint32_t reg_ESI,int reg_ECX)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int iStack_1c;
  int iStack_18;
  
  if (*p_D2Client_DAT_6fbcc280 == 0) {
    return;
  }
  if ((int *)*p_D2Client_DAT_6fbcbbfc == (int *)0x0) {
    return;
  }
  if (DAT_104e2178 == 0) {
    if (DAT_103e2d3c != '\0') {
      return;
    }
    client_Sound_SoundInstance_102347a0();
    DAT_103e2d3c = 1;
    return;
  }
  DAT_103e2d3c = 0;
  uVar11 = D2Common_10331((int *)*p_D2Client_DAT_6fbcbbfc);
  if ((int)uVar11 == 0) {
    return;
  }
  uVar2 = D2Common_10826_10276680((int)uVar11);
  if (uVar2 == 0) {
    return;
  }
  iVar7 = 0;
  iStack_18 = 0;
  uVar3 = D2Common_10396(*p_D2Client_DAT_6fbcc3b8);
  iVar9 = 0;
  uVar11 = D2Common_10331((int *)*p_D2Client_DAT_6fbcbbfc);
  if ((int)uVar11 != 0) {
    iVar9 = D2Common_10014(uVar2);
    iVar9 = *(int *)(iVar9 + 0x21c);
  }
  iVar6 = 0;
  if (((*p_D2Client_DAT_6fbcc254 != 0) && (-1 < iVar9)) && (iVar9 < *p_D2Client_DAT_6fbcc258)) {
    iVar6 = iVar9 * 0x58 + *p_D2Client_DAT_6fbcc254;
    if (uVar3 - 1 < 3) {
      iStack_18 = *(int *)(iVar6 + 0xc);
      iVar7 = *(int *)(iVar6 + 4);
    }
    else {
      iStack_18 = *(int *)(iVar6 + 0x10);
      iVar7 = *(int *)(iVar6 + 8);
    }
  }
  iVar9 = 0;
  iVar10 = 0;
  iStack_1c = 0;
  if ((*p_D2Client_DAT_6fbcbf78 == 0) && ((int *)*p_D2Client_DAT_6fbcbbfc != (int *)0x0)) {
    uVar11 = D2Common_10331((int *)*p_D2Client_DAT_6fbcbbfc);
    uVar3 = D2Common_10826_10276680((int)uVar11);
    uVar3 = D2Common_10215(uVar3);
    if ((char)uVar3 == '\0') {
      iVar9 = 0;
    }
    else {
      iVar9 = 0x40;
      iStack_1c = 0x40;
      iVar10 = (int)(*p_D2Client_DAT_6fbc38f4 * 255.0);
    }
  }
  iVar4 = DAT_103e2d50;
  if (iVar7 != DAT_103e2d50) {
    if (((iVar7 == *(int *)(iVar6 + 4)) && (DAT_103e2d50 == *(int *)(iVar6 + 8))) ||
       ((iVar7 == *(int *)(iVar6 + 8) && (DAT_103e2d50 == *(int *)(iVar6 + 4))))) {
      bVar1 = true;
      client_Sound_SoundInstance_10234d40(0xfa,DAT_103e2d54,0);
    }
    else {
      bVar1 = false;
      client_Sound_SoundInstance_10234710(iVar7,iVar9,iStack_18);
    }
    if (iVar7 != DAT_103e2d50) {
      if (iVar7 == 0) {
        DAT_103e2d54 = 0;
        iVar4 = 0;
      }
      else {
        DAT_103e2d54 = client_Sound_Sound_10233980(iVar7,0,0,0,0);
        iVar4 = iVar7;
        if (bVar1) {
          client_Sound_SoundInstance_10235410(DAT_103e2d54,0);
          client_Sound_SoundInstance_10234d40(0xfa,DAT_103e2d54,0xff);
        }
      }
    }
  }
  DAT_103e2d50 = iVar4;
  if (iStack_1c == 0) {
    client_Sound_SoundInstance_10234cb0(DAT_103e2d4c);
    DAT_103e2d4c = 0;
    iStack_1c = 0;
  }
  else {
    iVar9 = DAT_103e2d4c;
    if (iVar10 == 0) {
      if (DAT_103e2d4c == 0) goto LAB_10234a9d;
    }
    else if (DAT_103e2d4c == 0) {
      iVar9 = client_Sound_Sound_10233980(DAT_103e2d30,0,0,0,0);
      DAT_103e2d4c = iVar9;
      if (iVar9 == 0) goto LAB_10234a9d;
      client_Sound_SoundInstance_10235410(iVar9,iVar10);
    }
    iVar7 = client_Sound_SoundInstance_10235440();
    if (iVar7 < iVar10) {
      iVar4 = iVar7 + 6;
      if (iVar10 <= iVar7 + 6) {
        iVar4 = iVar10;
      }
    }
    else {
      iVar4 = iVar7 + -6;
      if (iVar7 + -6 <= iVar10) {
        iVar4 = iVar10;
      }
    }
    if (iVar4 == 0) {
      client_Sound_SoundInstance_10234cb0(iVar9);
      DAT_103e2d4c = 0;
    }
    else {
      client_Sound_SoundInstance_10235410(iVar9,iVar4);
    }
  }
LAB_10234a9d:
  DAT_103e2d30 = iStack_1c;
  if (iStack_18 != 0) {
    uVar3 = DAT_103e2d38;
    if (iStack_18 != DAT_103e2d34) {
      uVar8 = *(uint *)(iVar6 + 0x14) / 3;
      uVar3 = sub_1025de90(uVar8 * 2 + 1);
      uVar3 = uVar3 + (*(int *)(iVar6 + 0x14) - uVar8);
      DAT_103e2d38 = uVar3;
      uVar8 = sub_1025de90(uVar3);
      DAT_103e2d58 = reg_ECX - uVar8;
      DAT_103e2d34 = iStack_18;
    }
    if ((uVar3 <= (uint)(reg_ECX - DAT_103e2d58)) &&
       (iVar9 = client_Sound_Sound_10233980(DAT_103e2d34,0,0,0,0), iVar9 != 0)) {
      uVar3 = sub_1025de90(0x12d);
      uVar8 = sub_1025de90(2);
      uVar5 = sub_1025de90(0xc9);
      client_Sound_SoundInstance_102345f0(iVar9,((uint)(uVar8 != 0) * 2 + -1) * (uVar3 + 0x1c2),uVar5 - 100);
      uVar8 = *(uint *)(iVar6 + 0x14) / 3;
      DAT_103e2d58 = reg_ECX;
      uVar3 = sub_1025de90(uVar8 * 2 + 1);
      DAT_103e2d38 = uVar3 + (*(int *)(iVar6 + 0x14) - uVar8);
    }
  }
  uVar3 = DAT_103e2d40;
  if (uVar2 != DAT_103e2d40) {
    iVar9 = *(int *)(iVar6 + 0x1c);
    iVar7 = *(int *)(iVar6 + 0x20);
    client_Sound_SoundInstance_10234c20();
    if (iVar9 != 0) {
      client_Sound_SoundInstance_10234bf0(iVar9);
    }
    uVar3 = uVar2;
    if (iVar7 != 0) {
      client_Sound_SoundInstance_10234bf0(iVar7);
    }
  }
  DAT_103e2d40 = uVar3;
  return;
}


// 0x10234bf0  (ghidra: FUN_10234bf0)  [range]
void __fastcall client_Sound_SoundInstance_10234bf0(int param_1)

{
  uint32_t extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 4 + 0xa9c;
  iVar2 = 3;
  do {
    client_Sound_SoundInstance_10234650(param_1,iVar1);
    client_Sound_SoundInstance_10234650(extraout_ECX,iVar1 + 0x18);
    iVar1 = iVar1 + 0x30;
    iVar2 = iVar2 + -1;
    param_1 = extraout_ECX_00;
  } while (iVar2 != 0);
  return;
}


// 0x10234c20  (ghidra: FUN_10234c20)  [range]
void client_Sound_SoundInstance_10234c20(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  piVar2 = p_D2Client_DAT_6fbcc250;
  piVar1 = p_D2Client_DAT_6fbcc24c;
  local_8 = 0xaa0;
  local_c = 0x60f40;
  do {
    iVar5 = *piVar1;
    if ((iVar5 != 0) && (local_8 < *piVar2)) {
      iVar3 = *(int *)(local_c + 0x60 + iVar5);
      iVar5 = (uint)*(byte *)(local_c + 0x3d + iVar5) + iVar3;
      if (iVar3 < iVar5) {
        iVar4 = iVar3 * 0x92;
        do {
          if ((-1 < iVar3) && (iVar3 < *piVar2)) {
            *(uint32_t *)(iVar4 + 0x8a + *piVar1) = 0;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x92;
        } while (iVar3 < iVar5);
      }
    }
    local_c = local_c + 0x248;
    local_8 = local_8 + 4;
  } while (local_c < 0x668ca);
  return;
}


// 0x10234cb0  (ghidra: FUN_10234cb0)  [range]
void __fastcall client_Sound_SoundInstance_10234cb0(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 8) == param_1) {
        client_Sound_SoundInstance_10234ce0(*piVar1);
        return;
      }
    }
  }
  return;
}


// 0x10234ce0  (ghidra: FUN_10234ce0)  [range]
void __fastcall client_Sound_SoundInstance_10234ce0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((*p_D2Client_DAT_6fbcc24c != 0) && (iVar1 = *(int *)(param_1 + 4), -1 < iVar1)) &&
     (iVar1 < *p_D2Client_DAT_6fbcc250)) {
    iVar2 = iVar1 * 0x92 + *p_D2Client_DAT_6fbcc24c;
  }
  *(uint32_t *)(param_1 + 0x3d) = 1;
  if (((iVar2 != 0) && (*(byte *)(iVar2 + 0x40) != 0)) && (*(int *)(param_1 + 0x30) == 1)) {
    client_Sound_SoundInstance_10234d40((uint)*(byte *)(iVar2 + 0x40),*(int *)(param_1 + 8),0);
  }
  return;
}


// 0x10234d40  (ghidra: FUN_10234d40)  [range]
void __fastcall client_Sound_SoundInstance_10234d40(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)*p_D2Client_DAT_6fbcbf30;
  if (piVar2 == (int *)0x0) {
    return;
  }
  while (iVar1 = *piVar2, *(int *)(iVar1 + 8) != param_2) {
    piVar2 = (int *)piVar2[1];
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  iVar3 = client_Sound_SoundInstance_102345b0(param_2);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *p_D2Client_DAT_6fbcc268;
  if ((((*p_D2Client_DAT_6fbcc24c != 0) && (iVar4 = *(int *)(iVar1 + 4), -1 < iVar4)) &&
      (iVar4 < *p_D2Client_DAT_6fbcc250)) && (iVar4 = iVar4 * 0x92 + *p_D2Client_DAT_6fbcc24c, iVar4 != 0)) {
    if (param_3 == 0xff) {
      if (param_1 < *(byte *)(iVar4 + 0x3f)) {
        param_1 = (uint)*(byte *)(iVar4 + 0x3f);
      }
    }
    else if ((param_3 == 0) && (param_1 < *(byte *)(iVar4 + 0x40))) {
      param_1 = (uint)*(byte *)(iVar4 + 0x40);
    }
  }
  if (*(int *)(iVar1 + 0x45) == 0) {
joined_r0x10234e04:
    if (param_3 != 0) goto LAB_10234e13;
  }
  else {
    if ((param_3 == *(int *)(iVar1 + 0x4d)) && (*(uint *)(iVar1 + 0x55) <= iVar3 + param_1)) {
      return;
    }
    if (*(int *)(iVar1 + 0x4d) != 0) goto joined_r0x10234e04;
    if (param_3 != 0) {
      return;
    }
  }
  *(uint32_t *)(iVar1 + 0x3d) = 1;
LAB_10234e13:
  if (param_1 == 0) {
    client_Sound_SoundInstance_10235410(param_2,param_3);
    return;
  }
  *(uint32_t *)(iVar1 + 0x49) = *(uint32_t *)(iVar1 + 0x1c);
  *(int *)(iVar1 + 0x51) = iVar3;
  *(int *)(iVar1 + 0x4d) = param_3;
  *(uint *)(iVar1 + 0x55) = iVar3 + param_1;
  *(uint32_t *)(iVar1 + 0x45) = 1;
  return;
}


// 0x10234e50  (ghidra: FUN_10234e50)  [range]
int __fastcall client_Sound_SoundInstance_10234e50(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *p_D2Client_DAT_6fbcc24c;
  if (((iVar2 != 0) && (-1 < param_1)) && (param_1 < *p_D2Client_DAT_6fbcc250)) {
    for (piVar3 = (int *)*p_D2Client_DAT_6fbcbf30; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      iVar4 = *piVar3;
      iVar5 = *(int *)(iVar4 + 4);
      if (((iVar5 < 0) || (*p_D2Client_DAT_6fbcc250 <= iVar5)) || (iVar5 = iVar5 * 0x92 + iVar2, iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0x60);
      }
      if (((iVar5 == *(int *)(param_1 * 0x92 + 0x60 + iVar2)) && (*(int *)(iVar4 + 0x3d) == 0)) &&
         ((sVar1 = *(short *)(param_1 * 0x92 + 0x45 + iVar2), sVar1 < 0 ||
          ((uint)(*p_D2Client_DAT_6fbcc268 - *(int *)(iVar4 + 0x34)) <= (uint)(int)sVar1)))) {
        return iVar4;
      }
    }
  }
  return 0;
}


// 0x10234ef0  (ghidra: FUN_10234ef0)  [range]
uint32_t __fastcall client_Sound_SoundInstance_10234ef0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*p_D2Client_DAT_6fbcbf30;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(*piVar1 + 4) == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return *(uint32_t *)(*piVar1 + 8);
}


// 0x10234f20  (ghidra: FUN_10234f20)  [range]
bool __fastcall client_Sound_SoundInstance_10234f20(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 8) == param_1) {
        return *(int *)(*piVar1 + 0x30) == 1;
      }
    }
  }
  return false;
}


// 0x10234f50  (ghidra: FUN_10234f50)  [range]
uint32_t client_Sound_SoundInstance_10234f50(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*p_D2Client_DAT_6fbcbf30;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (((*(int *)(*piVar1 + 0x30) != 2) && (iVar2 = *(int *)(*piVar1 + 4), 0xb75 < iVar2)) &&
       (iVar2 < 0x1231)) break;
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}


// 0x10234f90  (ghidra: FUN_10234f90)  [range]
uint32_t client_Sound_SoundInstance_10234f90(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*p_D2Client_DAT_6fbcbf30;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (((*(int *)(*piVar1 + 0x30) != 2) && (iVar2 = *(int *)(*piVar1 + 4), 0x1230 < iVar2)) &&
       (iVar2 < 0x125b)) break;
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}


// 0x10234fd0  (ghidra: FUN_10234fd0)  [range]
void client_Sound_SoundInstance_10234fd0(int param_1,uint32_t param_2,int param_3,int param_4,uint32_t param_5,
                 int param_6,uint32_t param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint32_t extraout_var;
  uint32_t uVar5;
  int iVar6;
  
  iVar3 = DAT_103da914;
  if (DAT_103da914 != 0) {
    iVar6 = 0;
    if (((*p_D2Client_DAT_6fbcc24c != 0) && (-1 < DAT_103da914)) && (DAT_103da914 < *p_D2Client_DAT_6fbcc250)) {
      iVar6 = DAT_103da914 * 0x92 + *p_D2Client_DAT_6fbcc24c;
    }
    for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 4) == DAT_103da914) {
        iVar2 = *(int *)(*piVar1 + 8);
        if ((iVar2 != 0) && (bVar4 = client_Sound_SoundInstance_10234f20(iVar2), CONCAT31(extraout_var,bVar4) != 0)) {
          DAT_103e2918 = *p_D2Client_DAT_6fbcc268;
          if ((param_1 == 0) || (iVar6 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint32_t *)(iVar6 + 0x50 + param_1 * 4);
          }
          *(uint32_t *)(*p_D2Client_DAT_6fbc75b8 + (iVar3 - *p_D2Client_DAT_6fbcc25c) * 4) = uVar5;
        }
        break;
      }
    }
  }
  client_Sound_SoundInstance_10235390();
  piVar1 = p_D2Client_DAT_6fbc97f8;
  DAT_103e2920 = param_2;
  DAT_103d9904 = 1;
  *p_D2Client_DAT_6fbcc354 = 1;
  iVar3 = *piVar1;
  DAT_103da910 = param_3 + iVar3;
  DAT_103d98fc = param_5;
  *p_D2Client_DAT_6fbcc368 = iVar3 + param_6;
  *p_D2Client_DAT_6fbcc36c = param_7;
  *p_D2Client_DAT_6fbcc370 = *piVar1 + param_4;
  return;
}


// 0x102350d0  (ghidra: FUN_102350d0)  [range]
void client_Sound_SoundInstance_Hook_sub_6faf4b50_102350d0(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint32_t *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  piVar2 = (int *)*p_D2Client_DAT_6fbcbf30;
  puVar6 = p_D2Client_DAT_6fbcbf30;
  do {
    if (piVar2 == (int *)0x0) {
      p_D2Client_DAT_6fbcbf30 = puVar6;
      return;
    }
    iVar7 = 0;
    iVar3 = *piVar2;
    if (((*p_D2Client_DAT_6fbcc24c != 0) && (iVar8 = *(int *)(iVar3 + 4), -1 < iVar8)) &&
       (iVar8 < *p_D2Client_DAT_6fbcc250)) {
      iVar7 = iVar8 * 0x92 + *p_D2Client_DAT_6fbcc24c;
    }
    p_D2Client_DAT_6fbcbf30 = puVar6;
    *(uint32_t *)(iVar3 + 0x3d) = 1;
    if (((iVar7 != 0) && (bVar1 = *(byte *)(iVar7 + 0x40), bVar1 != 0)) &&
       ((*(int *)(iVar3 + 0x30) == 1 && (iVar3 = *(int *)(iVar3 + 8), iVar3 != 0)))) {
      for (piVar4 = (int *)*puVar6; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
        iVar7 = *piVar4;
        if (*(int *)(iVar7 + 8) == iVar3) {
          iVar8 = client_Sound_SoundInstance_102345b0(iVar3);
          if (iVar8 == 0) {
            iVar8 = *p_D2Client_DAT_6fbcc268;
            iVar9 = 0;
            if (((*p_D2Client_DAT_6fbcc24c != 0) && (iVar5 = *(int *)(iVar7 + 4), -1 < iVar5)) &&
               (iVar5 < *p_D2Client_DAT_6fbcc250)) {
              iVar9 = iVar5 * 0x92 + *p_D2Client_DAT_6fbcc24c;
            }
            uVar10 = (uint)bVar1;
            if ((iVar9 != 0) && (uVar10 < *(byte *)(iVar9 + 0x40))) {
              uVar10 = (uint)*(byte *)(iVar9 + 0x40);
            }
            if (((*(int *)(iVar7 + 0x45) != 1) || (*(int *)(iVar7 + 0x4d) != 0)) ||
               (uVar10 + iVar8 < *(uint *)(iVar7 + 0x55))) {
              *(uint32_t *)(iVar7 + 0x3d) = 1;
              if (uVar10 == 0) {
                client_Sound_SoundInstance_10235410(iVar3,0);
              }
              else {
                *(uint32_t *)(iVar7 + 0x49) = *(uint32_t *)(iVar7 + 0x1c);
                *(int *)(iVar7 + 0x51) = iVar8;
                *(uint32_t *)(iVar7 + 0x4d) = 0;
                *(uint *)(iVar7 + 0x55) = uVar10 + iVar8;
                *(uint32_t *)(iVar7 + 0x45) = 1;
              }
            }
          }
          break;
        }
      }
    }
    piVar2 = (int *)piVar2[1];
    puVar6 = p_D2Client_DAT_6fbcbf30;
  } while( true );
}


// 0x10235230  (ghidra: FUN_10235230)  [range]
void client_Sound_SoundInstance_10235230(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  
  piVar2 = (int *)*p_D2Client_DAT_6fbcbf30;
  piVar10 = p_D2Client_DAT_6fbcc24c;
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar3 = *piVar2;
    iVar4 = *(int *)(iVar3 + 4);
    if (iVar4 == DAT_103e2920) {
      iVar7 = 0;
      if (((*piVar10 != 0) && (-1 < iVar4)) && (iVar4 < *p_D2Client_DAT_6fbcc250)) {
        iVar7 = iVar4 * 0x92 + *piVar10;
      }
      *(uint32_t *)(iVar3 + 0x3d) = 1;
      if (((iVar7 != 0) && (bVar1 = *(byte *)(iVar7 + 0x40), bVar1 != 0)) &&
         ((*(int *)(iVar3 + 0x30) == 1 && (iVar3 = *(int *)(iVar3 + 8), iVar3 != 0)))) {
        for (piVar5 = (int *)*p_D2Client_DAT_6fbcbf30; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
          iVar4 = *piVar5;
          if (*(int *)(iVar4 + 8) == iVar3) {
            iVar7 = client_Sound_SoundInstance_102345b0(iVar3);
            if (iVar7 == 0) {
              iVar7 = *p_D2Client_DAT_6fbcc268;
              iVar8 = 0;
              if (((*p_D2Client_DAT_6fbcc24c != 0) && (iVar6 = *(int *)(iVar4 + 4), -1 < iVar6)) &&
                 (iVar6 < *p_D2Client_DAT_6fbcc250)) {
                iVar8 = iVar6 * 0x92 + *p_D2Client_DAT_6fbcc24c;
              }
              uVar9 = (uint)bVar1;
              if ((iVar8 != 0) && (uVar9 < *(byte *)(iVar8 + 0x40))) {
                uVar9 = (uint)*(byte *)(iVar8 + 0x40);
              }
              if (((*(int *)(iVar4 + 0x45) != 1) || (*(int *)(iVar4 + 0x4d) != 0)) ||
                 (piVar10 = p_D2Client_DAT_6fbcc24c, uVar9 + iVar7 < *(uint *)(iVar4 + 0x55))) {
                *(uint32_t *)(iVar4 + 0x3d) = 1;
                if (uVar9 == 0) {
                  client_Sound_SoundInstance_10235410(iVar3,0);
                  piVar10 = p_D2Client_DAT_6fbcc24c;
                }
                else {
                  *(uint32_t *)(iVar4 + 0x49) = *(uint32_t *)(iVar4 + 0x1c);
                  *(int *)(iVar4 + 0x51) = iVar7;
                  *(uint32_t *)(iVar4 + 0x4d) = 0;
                  *(uint *)(iVar4 + 0x55) = uVar9 + iVar7;
                  *(uint32_t *)(iVar4 + 0x45) = 1;
                  piVar10 = p_D2Client_DAT_6fbcc24c;
                }
              }
            }
            break;
          }
        }
      }
    }
    piVar2 = (int *)piVar2[1];
  } while( true );
}


// 0x10235390  (ghidra: FUN_10235390)  [range]
void client_Sound_SoundInstance_10235390(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = *piVar1;
    iVar3 = *(int *)(iVar2 + 4);
    if ((*p_D2Client_DAT_6fbcc25c <= iVar3) && (iVar3 <= *p_D2Client_DAT_6fbcc260)) {
      iVar4 = 0;
      if ((*p_D2Client_DAT_6fbcc24c != 0) && ((-1 < iVar3 && (iVar3 < *p_D2Client_DAT_6fbcc250)))) {
        iVar4 = iVar3 * 0x92 + *p_D2Client_DAT_6fbcc24c;
      }
      *(uint32_t *)(iVar2 + 0x3d) = 1;
      if (((iVar4 != 0) && (*(byte *)(iVar4 + 0x40) != 0)) && (*(int *)(iVar2 + 0x30) == 1)) {
        client_Sound_SoundInstance_10234d40((uint)*(byte *)(iVar4 + 0x40),*(int *)(iVar2 + 8),0);
      }
    }
  }
  return;
}


// 0x10235410  (ghidra: FUN_10235410)  [range]
void __fastcall client_Sound_SoundInstance_10235410(int param_1,uint32_t param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30, piVar1 != (int *)0x0)) {
    while (*(int *)(*piVar1 + 8) != param_1) {
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    *(uint32_t *)(*piVar1 + 0x1c) = param_2;
  }
  return;
}


// 0x10235440  (ghidra: FUN_10235440)  [range]
uint32_t client_Sound_SoundInstance_10235440(void)

{
  int *piVar1;
  
  if (DAT_103e2d4c != 0) {
    for (piVar1 = (int *)*p_D2Client_DAT_6fbcbf30; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 8) == DAT_103e2d4c) {
        return *(uint32_t *)(*piVar1 + 0x1c);
      }
    }
  }
  return 0;
}


// 0x10235480  (ghidra: FUN_10235480)  [range]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall client_Sound_SoundInstance_10235480(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint32_t extraout_var;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint64_t uVar9;
  
  if ((int *)*p_D2Client_DAT_6fbcbbfc != (int *)0x0) {
    uVar9 = D2Common_10331((int *)*p_D2Client_DAT_6fbcbbfc);
    if (((int)uVar9 != 0) && (uVar1 = D2Common_10826_10276680((int)uVar9), uVar1 != 0)) {
      if (uVar1 != DAT_103e291c) {
        DAT_103d98f8 = param_1;
        DAT_103e291c = uVar1;
        *p_D2Client_DAT_6fbcc34c = uVar1;
      }
      iVar7 = 0;
      iVar2 = D2Common_10014(uVar1);
      if (((((*p_D2Client_DAT_6fbcc254 != 0) && (iVar2 = *(int *)(iVar2 + 0x21c), -1 < iVar2)) &&
           (iVar2 < *p_D2Client_DAT_6fbcc258)) &&
          ((piVar3 = (int *)(iVar2 * 0x58 + *p_D2Client_DAT_6fbcc254), piVar3 != (int *)0x0 &&
           (iVar7 = *piVar3, iVar7 != 0)))) && ((iVar7 < *p_D2Client_DAT_6fbcc25c || (*p_D2Client_DAT_6fbcc260 < iVar7))))
      {
        iVar7 = 0;
      }
      uVar1 = D2sound_10011();
      bVar8 = uVar1 == 0;
      uVar4 = param_1 - DAT_103d98f8;
      iVar2 = DAT_103da914;
      uVar1 = DAT_103e2918;
      if (((DAT_103da914 == iVar7) || (iVar2 = iVar7, uVar1 = param_1, 0x4a < uVar4)) ||
         ((uVar1 = param_1, bVar8 || (uVar1 = param_1, DAT_103da914 == 0)))) {
        DAT_103e2918 = uVar1;
        DAT_103da914 = iVar2;
        if (bVar8) {
          client_Sound_SoundInstance_10235390();
        }
        if (DAT_103da914 == 0) {
          client_Sound_SoundInstance_10235390();
        }
      }
      iVar7 = DAT_103da914;
      if (*p_D2Client_DAT_6fbcc354 != 0) {
        if ((DAT_103d9904 != 0) && (DAT_103da910 <= *p_D2Client_DAT_6fbc97f8)) {
          client_Sound_Sound_10233980(DAT_103e2920,0,0,0,0);
          DAT_103d9904 = 0;
        }
        iVar7 = DAT_103da914;
        if ((*p_D2Client_DAT_6fbcc36c != 0) && (*p_D2Client_DAT_6fbcc368 <= *p_D2Client_DAT_6fbc97f8)) {
          iVar2 = sub_102f00f0();
          if (iVar2 == 0) {
            client_Sound_Sound_10233980(DAT_103d98fc,0,0,0,0);
            iVar7 = DAT_103da914;
          }
          *p_D2Client_DAT_6fbcc36c = 0;
        }
        if (*p_D2Client_DAT_6fbc97f8 < *p_D2Client_DAT_6fbcc370) {
          return;
        }
        *p_D2Client_DAT_6fbcc354 = 0;
        if (!bVar8) {
          client_Sound_SoundInstance_10235230();
        }
      }
      if (((iVar7 != 0) && (!bVar8)) && (iVar2 = client_Sound_SoundInstance_10234ef0(iVar7), iVar2 == 0)) {
        iVar7 = *(int *)(*p_D2Client_DAT_6fbc75b8 + (iVar7 - *p_D2Client_DAT_6fbcc25c) * 4);
        iVar2 = client_Sound_SoundInstance_10234f90();
        if ((iVar2 == 0) && (iVar7 == 0)) {
          iVar2 = 2;
        }
        else {
          iVar2 = 0;
        }
        client_Sound_SoundInstance_10235390();
        client_Sound_Sound_10233980(DAT_103da914,0,0,iVar2,iVar7);
        iVar7 = DAT_103da914;
      }
      if ((DAT_103e291c != DAT_103d9908) && (0x3d < uVar4)) {
        client_Sound_Sound_102322a0();
        DAT_103d9908 = DAT_103e291c;
        iVar7 = DAT_103da914;
      }
      if ((iVar7 != 0) && (DAT_103e2918 + 0x7d < param_1)) {
        iVar2 = 0;
        if ((*p_D2Client_DAT_6fbcc24c != 0) && ((-1 < iVar7 && (iVar7 < *p_D2Client_DAT_6fbcc250)))) {
          iVar2 = iVar7 * 0x92 + *p_D2Client_DAT_6fbcc24c;
        }
        iVar7 = client_Sound_SoundInstance_10234ef0(iVar7);
        if (((iVar7 != 0) && (iVar2 != 0)) &&
           (bVar8 = client_Sound_SoundInstance_10234f20(iVar7), CONCAT31(extraout_var,bVar8) != 0)) {
          iVar7 = client_Sound_SoundSample_10235fd0(iVar7);
          if ((((-1 < iVar7) && (iVar5 = *(int *)(iVar2 + 0x54), iVar7 < iVar5)) ||
              ((iVar5 = 0, iVar7 < *(int *)(iVar2 + 0x54) ||
               (iVar6 = *(int *)(iVar2 + 0x58), iVar6 <= iVar7)))) &&
             ((iVar6 = iVar5, *(int *)(iVar2 + 0x58) <= iVar7 && (iVar7 < *(int *)(iVar2 + 0x5c)))))
          {
            iVar6 = *(int *)(iVar2 + 0x5c);
          }
          DAT_103e2918 = param_1;
          *(int *)(*p_D2Client_DAT_6fbc75b8 + (DAT_103da914 - *p_D2Client_DAT_6fbcc25c) * 4) = iVar6;
        }
      }
    }
  }
  return;
}


// 0x10235760  (ghidra: FUN_10235760)  [anchor] refs client/Sound/SoundInstance.cpp
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void client_Sound_SoundInstance_10235760(void)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint32_t uVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint8_t auStack_54 [7];
  byte local_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  float fStack_48;
  uint local_44;
  int iStack_40;
  uint uStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  uint *puStack_2c;
  float fStack_28;
  float fStack_24;
  uint32_t uStack_20;
  float fStack_1c;
  float fStack_18;
  uint32_t uStack_14;
  uint32_t *local_10;
  uint local_c;
  
  local_c = DAT_1039800c ^ (uint)auStack_54;
  if (*p_D2Client_DAT_6fbcbf34 != 0) {
    if ((*p_D2Client_DAT_6fbcbf40 != 0) && (uVar8 = *p_D2Client_DAT_6fbcc268 % 3, uVar8 == 0)) {
      uVar16 = uVar8;
      uVar5 = uVar8;
      uVar17 = uVar8;
      uVar4 = sub_1025de90(0x6bb);
      client_Sound_Sound_10233980(uVar4 + 0xb76,uVar8,uVar16,uVar5,uVar17);
    }
    do {
      bVar3 = '\x01';
      local_4d = '\x01';
      puVar11 = (uint *)*p_D2Client_DAT_6fbcbf30;
      if ((uint *)*p_D2Client_DAT_6fbcbf30 == (uint *)0x0) break;
      do {
        puVar9 = (uint *)puVar11[1];
        if (puVar9 != (uint *)0x0) {
          uVar8 = *puVar11;
          uVar16 = *puVar9;
          if (*(byte *)(uVar8 + 0x3c) < *(byte *)(uVar16 + 0x3c)) {
LAB_10235811:
            *puVar11 = uVar16;
            *puVar9 = uVar8;
            puVar9 = (uint *)puVar11[1];
            local_4d = '\0';
            bVar3 = '\0';
          }
          else {
            bVar3 = local_4d;
            if (*(byte *)(uVar8 + 0x3c) == *(byte *)(uVar16 + 0x3c)) {
              if ((*(float *)(uVar16 + 0x18) < *(float *)(uVar8 + 0x18)) ||
                 ((*(float *)(uVar16 + 0x18) == *(float *)(uVar8 + 0x18) &&
                  ((*(uint *)(uVar8 + 0x34) < *(uint *)(uVar16 + 0x34) ||
                   ((*(uint *)(uVar8 + 0x34) == *(uint *)(uVar16 + 0x34) && (uVar8 < uVar16))))))))
              goto LAB_10235811;
            }
          }
        }
        puVar11 = puVar9;
      } while (puVar9 != (uint *)0x0);
    } while (bVar3 == '\0');
    local_10 = (uint32_t *)0x0;
    uVar8 = D2sound_10001();
    local_4d = 0 < (int)uVar8;
    uVar8 = (uint)local_4d << 8;
    cStack_4c = '\0';
    for (puStack_2c = (uint *)*p_D2Client_DAT_6fbcbf30; puStack_2c != (uint *)0x0;
        puStack_2c = (uint *)puStack_2c[1]) {
      uVar16 = *puStack_2c;
      if ((*(int *)(uVar16 + 0x3d) != 0) &&
         ((*(int *)(uVar16 + 0x45) == 0 || (*(int *)(uVar16 + 0x4d) != 0)))) {
        if (*(int *)(uVar16 + 0x30) == 0) {
          *(uint32_t *)(uVar16 + 0x30) = 2;
        }
        else if (*(int *)(uVar16 + 0x30) == 1) {
          client_Sound_SoundInstance_102344a0(uVar16);
        }
      }
      iVar7 = *(int *)(uVar16 + 4);
      iStack_40 = 0;
      if (((*p_D2Client_DAT_6fbcc24c != 0) && (-1 < iVar7)) && (iVar7 < *p_D2Client_DAT_6fbcc250)) {
        iStack_40 = iVar7 * 0x92 + *p_D2Client_DAT_6fbcc24c;
      }
      iVar12 = iStack_40;
      uStack_3c = iVar7 - 0x1231;
      cStack_4b = (char)(uVar8 >> 8);
      cStack_4a = '\x01';
      if (((*p_D2Client_DAT_6fbcc25c <= iVar7) && (iVar7 <= *p_D2Client_DAT_6fbcc260)) &&
         (uVar5 = D2sound_10011(), uVar5 == 0)) {
        cStack_4b = '\0';
        cStack_4a = '\0';
      }
      if (*(int *)(uVar16 + 0x30) == 2) {
        if (*(int *)(uVar16 + 0x2c) != 0) {
          Fog_10024("",
                    "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
                    ,0x349);
                    /* WARNING: Subroutine does not return */
          _exit(-1);
        }
        if (((*(char *)(iVar12 + 0x3e) == '\0') || (*(short *)(iVar12 + 0x43) != 0)) ||
           (*(int *)(uVar16 + 0x3d) != 0)) {
          D2sound_10034((uint *)&local_10,uVar16);
        }
        else {
          if (*(int *)(uVar16 + 0x45) != 0) {
            *(uint32_t *)(uVar16 + 0x1c) = *(uint32_t *)(uVar16 + 0x4d);
            *(uint32_t *)(uVar16 + 0x45) = 0;
          }
          *(uint32_t *)(uVar16 + 0x30) = 0;
        }
LAB_10235c34:
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cStack_4c);
      }
      else {
        if (((*p_D2Client_DAT_6fbcc3a0 != 0) && (*(char *)(iVar12 + 0x51) != '\0')) &&
           (piVar6 = *(int **)(uVar16 + 0x28), piVar6 != (int *)0x0)) {
          fStack_30 = -1.0;
          fStack_1c = 0.0;
          fStack_18 = 0.0;
          uStack_14 = 0;
          fStack_28 = 0.0;
          fStack_24 = 0.0;
          uStack_20 = 0;
          iStack_34 = 0;
          fStack_48 = 0.0;
          fStack_38 = 0.0;
          do {
            iVar7 = *piVar6;
            if (iVar7 == 0) {
              Fog_10024("",
                        "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
                        ,0x36c);
                    /* WARNING: Subroutine does not return */
              _exit(-1);
            }
            sub_10236940(&fStack_28,*(int *)(uVar16 + 4),iVar7,uVar16,iVar7);
            fVar15 = fStack_24 * fStack_24 + fStack_28 * fStack_28;
            if ((iStack_34 == 0) || (fVar14 = fStack_30, fVar15 < fStack_30)) {
              fStack_1c = fStack_28;
              fStack_18 = fStack_24;
              uStack_14 = uStack_20;
              fVar14 = fStack_28;
              iStack_34 = iVar7;
              fStack_30 = fVar15;
            }
            sub_10236880(*(int *)(uVar16 + 4),iVar7);
            fStack_48 = fVar14 + fStack_48;
            piVar6 = (int *)piVar6[1];
            fStack_38 = fStack_38 + 1.0;
          } while (piVar6 != (int *)0x0);
          client_Sound_SoundInstance_10234520(&fStack_1c,uVar16);
          fStack_48 = fStack_48 / fStack_38;
          fVar15 = *(float *)(uVar16 + 0x20);
          if (fVar15 < fStack_48) {
            fVar15 = fVar15 + 0.05;
            bVar13 = fStack_48 < fVar15;
          }
          else {
            fVar15 = fVar15 - 0.05;
            bVar13 = fVar15 < fStack_48;
          }
          if (bVar13 || fVar15 == fStack_48) {
            fVar15 = fStack_48;
          }
          *(float *)(uVar16 + 0x20) = fVar15;
        }
        iVar7 = iStack_40;
        if (*(int *)(uVar16 + 0x45) != 0) {
          if (*(uint *)(uVar16 + 0x55) < local_44) {
            iVar12 = *(int *)(uVar16 + 0x4d);
            *(uint32_t *)(uVar16 + 0x45) = 0;
          }
          else {
            uVar8 = *(uint *)(uVar16 + 0x51);
            if (local_44 < uVar8) {
              iVar12 = *(int *)(uVar16 + 0x49);
            }
            else {
              iVar12 = (int)((*(int *)(uVar16 + 0x4d) - *(int *)(uVar16 + 0x49)) *
                            (local_44 - uVar8)) / (int)(*(uint *)(uVar16 + 0x55) - uVar8) +
                       *(int *)(uVar16 + 0x49);
            }
          }
          *(int *)(uVar16 + 0x1c) = iVar12;
        }
        switch(*(uint32_t *)(iStack_40 + 0x47)) {
        case 0:
          fStack_48 = 160000.0;
          break;
        default:
          fStack_48 = 490000.0;
          break;
        case 2:
          fStack_48 = 1e+06;
          break;
        case 3:
          fStack_48 = 2.25e+06;
          break;
        case 4:
          fStack_48 = 4e+06;
        }
        if (((*(int *)(uVar16 + 0x30) == 0) && (*(uint *)(uVar16 + 0x34) <= local_44)) &&
           (*(int *)(uVar16 + 0x1c) != 0)) {
          if ((((cStack_4b == '\0') || (uStack_3c < 0x2a)) &&
              ((cStack_4a == '\0' || (0x29 < uStack_3c)))) ||
             (fStack_48 < *(float *)(uVar16 + 0x18))) {
LAB_10235d75:
            if (((*(int *)(uVar16 + 0x2c) == 0) && (*(char *)(iVar7 + 0x3e) == '\0')) &&
               ((*(char *)(iVar7 + 0x4d) == '\0' || (*(int *)(iVar7 + 0x86) != 1)))) {
              D2sound_10034((uint *)&local_10,uVar16);
            }
            goto LAB_10235d9b;
          }
          if (*(int *)(uVar16 + 0x2c) != 0) {
            Fog_10024("",
                      "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
                      ,0x3a1);
                    /* WARNING: Subroutine does not return */
            _exit(-1);
          }
          piVar6 = *(int **)(uVar16 + 0x28);
          iVar12 = 0;
          if ((piVar6 != (int *)0x0) && (piVar6[1] == 0)) {
            iVar12 = *piVar6;
          }
          if (((*(float *)(uVar16 + 0xc) != 0.0) || (*(float *)(uVar16 + 0x10) != 0.0)) ||
             (cStack_49 = '\0', *(float *)(uVar16 + 0x14) != 0.0)) {
            cStack_49 = '\x01';
          }
          uVar8 = 0;
          if ((*(char *)(iStack_40 + 0x41) != '\0') || (*(char *)(iStack_40 + 0x42) != '\0')) {
            uVar8 = sub_102367e0(*(int *)(iStack_40 + 0x60),iVar12,uVar16);
          }
          if ((iVar12 != 0) && (*(int *)(uVar16 + 4) - 0xb76U < 0x6bb)) {
            uVar8 = sub_10236770(iVar12,uVar16);
          }
          if ((((*(char *)(iVar7 + 0x41) != '\0') && (*(int *)(uVar16 + 0x28) == 0)) &&
              (cStack_49 == '\0')) || (uVar8 == 0)) {
LAB_10235cd1:
            iVar12 = *(int *)(uVar16 + 0x41);
            if (iVar12 == 0) {
              uVar8 = 0;
              if (*(byte *)(iVar7 + 0x3f) == 0) {
                uVar10 = 0;
              }
              else if ((*(int *)(uVar16 + 0x45) == 0) && ((*(byte *)(uVar16 + 0x38) & 2) == 0)) {
                uVar10 = *(uint32_t *)(uVar16 + 0x1c);
                uVar8 = (uint)*(byte *)(iVar7 + 0x3f);
                *(uint32_t *)(uVar16 + 0x1c) = 0;
              }
              else {
                uVar10 = 0;
              }
            }
            else {
              uVar10 = *(uint32_t *)(uVar16 + 0x1c);
              uVar8 = 3;
              *(uint32_t *)(uVar16 + 0x41) = 0;
              *(int *)(uVar16 + 0x24) = iVar12;
              *(uint32_t *)(uVar16 + 0x1c) = 0;
            }
            piVar6 = client_Sound_Sound_Hook_WARDEN_WardenClient_6fb38dd0_10233840(uVar16);
            *(int **)(uVar16 + 0x2c) = piVar6;
            if ((piVar6 != (int *)0x0) && (*(uint32_t *)(uVar16 + 0x30) = 1, uVar8 != 0)) {
              *(uint32_t *)(uVar16 + 0x49) = *(uint32_t *)(uVar16 + 0x1c);
              *(uint *)(uVar16 + 0x51) = local_44;
              *(uint32_t *)(uVar16 + 0x4d) = uVar10;
              *(uint *)(uVar16 + 0x55) = local_44 + uVar8;
              *(uint32_t *)(uVar16 + 0x45) = 1;
            }
            iVar7 = 0;
            if (((*p_D2Client_DAT_6fbcc24c != 0) && (iVar12 = *(int *)(uVar16 + 4), -1 < iVar12)) &&
               (iVar12 < *p_D2Client_DAT_6fbcc250)) {
              iVar7 = iVar12 * 0x92 + *p_D2Client_DAT_6fbcc24c;
            }
            goto LAB_10235d75;
          }
          if (*(char *)(iVar7 + 0x42) != '\0') {
            *(uint32_t *)(uVar8 + 0x3d) = 1;
            D2sound_10034((uint *)&local_10,uVar8);
            goto LAB_10235cd1;
          }
          *(uint32_t *)(uVar16 + 0x3d) = 1;
          D2sound_10034((uint *)&local_10,uVar16);
LAB_10235c30:
          uVar8 = (uint)local_4d << 8;
          goto LAB_10235c34;
        }
LAB_10235d9b:
        if (*(int *)(uVar16 + 0x30) != 1) goto LAB_10235c30;
        if (*(int **)(uVar16 + 0x2c) == (int *)0x0) {
          Fog_10024("",
                    "C:\\projects\\Project-Diablo-2\\D2TemplateSource\\ProjectDiablo\\client\\Sound\\SoundInstance.cpp"
                    ,0x3f3);
                    /* WARNING: Subroutine does not return */
          _exit(-1);
        }
        if (((*(ushort *)(iVar7 + 0x43) == 0) ||
            (local_44 - *(int *)(uVar16 + 0x34) <= (uint)*(ushort *)(iVar7 + 0x43))) &&
           (((cStack_4b != '\0' || (uStack_3c < 0x2a)) && (*(float *)(uVar16 + 0x18) <= fStack_48)))
           ) {
          if ((cStack_4a == '\0') && (uStack_3c < 0x2a)) {
            client_Sound_SoundInstance_102344a0(uVar16);
          }
          else {
            client_Sound_Sound_10232420(*(int **)(uVar16 + 0x2c));
            if ((*(int *)(iVar7 + 0x86) == 2) &&
               (((iVar12 = *p_D2Client_DAT_6fbcc24c, iVar12 != 0 &&
                 (uVar8 = *(uint *)(uVar16 + 4), -1 < (int)uVar8)) && ((int)uVar8 < *p_D2Client_DAT_6fbcc250)))
               ) {
              if (*(uint *)(uVar8 * 0x92 + 0x7c + iVar12) != *p_D2Client_DAT_6fbcc268) {
                *(uint *)(uVar8 * 0x92 + 0x7c + iVar12) = *p_D2Client_DAT_6fbcc268;
                D2sound_10062(p_D2Client_DAT_6fbcc264,uVar8);
                D2sound_10018(p_D2Client_DAT_6fbcc264,uVar8);
              }
            }
            if (((cStack_4c == '\0') && (*(char *)(iVar7 + 0x52) != '\0')) &&
               ((*(int *)(uVar16 + 0x45) == 0 || (*(int *)(uVar16 + 0x4d) != 0)))) {
              uVar8 = CONCAT31((uint3)local_4d,1);
              cStack_4c = '\x01';
              goto LAB_10235c38;
            }
          }
          goto LAB_10235c30;
        }
        client_Sound_SoundInstance_102344a0(uVar16);
        uVar8 = (uint)CONCAT11(local_4d,cStack_4c);
      }
LAB_10235c38:
    }
    puStack_2c = (uint *)0x0;
    for (puVar2 = local_10; puVar2 != (uint32_t *)0x0; puVar2 = (uint32_t *)puVar2[1]) {
      puVar1 = (uint32_t *)*puVar2;
      if (puVar1 != (uint32_t *)0x0) {
        D2sound_10062(p_D2Client_DAT_6fbcbf30,(int)puVar1);
        client_Sound_SoundInstance_10234440((int)puVar1);
        client_Sound_SoundInstance_102344a0((int)puVar1);
        *puVar1 = 0;
      }
    }
    D2sound_10063((int *)&local_10);
    bVar13 = false;
    if ((*p_D2Client_DAT_6fbcc394 == 0) || (*p_D2Client_DAT_6fbcc394 == 1)) {
      if ((*p_D2Client_DAT_6fbaada4_102a4e90 == 0) && (*p_D2Client_DAT_6fbaadac_102a4f40 == 0)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
    }
    if (DAT_103e2d44 < local_44) {
      if (bVar13) {
        iVar7 = DAT_103e2d48 + -5;
        DAT_103e2d48 = 0;
        if (-1 < iVar7) {
          DAT_103e2d48 = iVar7;
        }
      }
      else {
        DAT_103e2d48 = DAT_103e2d48 + 5;
        if (100 < DAT_103e2d48) {
          DAT_103e2d48 = 100;
        }
      }
      if ((char)uVar8 == '\0') {
        DAT_103e292c = DAT_103e292c + 2;
        if (100 < DAT_103e292c) {
          DAT_103e292c = 100;
        }
      }
      else {
        DAT_103e292c = DAT_103e292c + -2;
        if (DAT_103e292c < 0x46) {
          DAT_103e292c = 0x46;
        }
      }
    }
    DAT_103e2d44 = local_44;
  }
  return;
}

