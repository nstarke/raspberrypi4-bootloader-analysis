
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000057d6(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  int unaff_gp;
  undefined8 uVar3;
  
  FUN_0000ba74();
  *(undefined4 *)(unaff_gp + 0x1e84) = 0xbadf00d;
  pcVar1 = s_tryboot_00002a6c + unaff_gp;
  pcVar1[0] = '\r';
  pcVar1[1] = -0x10;
  pcVar1[2] = -0x53;
  pcVar1[3] = '\v';
  FUN_00009fd2();
  FUN_0000d6ce();
  FUN_0000c1b2();
  FUN_0000a780();
  FUN_00009e74();
  iVar2 = FUN_0000a4d8();
  if (iVar2 != 0) {
    FUN_0000c3f8();
    FUN_0000b354(0);
    FUN_0000b6ca();
  }
  FUN_0000a48c(*(undefined4 *)(&DAT_00002d0c + unaff_gp),*(uint *)(&DAT_00002d10 + unaff_gp));
  FUN_0000ae2c();
  FUN_0000b3cc();
  if ((_DAT_7d200020 & 2) != 0) {
    *(uint *)(unaff_gp + 0x2d4) = *(uint *)(unaff_gp + 0x2d4) | 1;
  }
  FUN_00000a82();
  FUN_0000afa0(*(int *)(unaff_gp + 0x38),*(int *)(unaff_gp + 0x3c));
  uVar3 = FUN_00000a94();
  uVar3 = FUN_0000b3a0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),extraout_r2,extraout_r3,
                       extraout_r4,extraout_r5);
  uVar3 = FUN_00001bb8((int)uVar3,(uint)((ulonglong)uVar3 >> 0x20),extraout_r2_00);
  FUN_0000b3a0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),extraout_r2_01,extraout_r3_00,
               extraout_r4_00,extraout_r5_00);
  FUN_0000d044();
  return 0;
}

