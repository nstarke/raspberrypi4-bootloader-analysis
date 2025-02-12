
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000a3e8(uint param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  int unaff_gp;
  undefined8 uVar3;
  
  iVar1 = FUN_000009b4();
  if ((iVar1 == 0) && (*(int *)(unaff_gp + 0x84) == 0)) {
    *(undefined4 *)(unaff_gp + 0x84) = 1;
    uVar3 = FUN_0000a48c(1,0);
    FUN_0000e460((int)uVar3,(uint)((ulonglong)uVar3 >> 0x20),extraout_r2,extraout_r3,extraout_r4,
                 extraout_r5);
    pcVar2 = FUN_00003d9c(param_1);
    _write_to_stderr((byte *)s_BOOT_ERROR__code__x_____s__0000a44c,param_1,pcVar2,extraout_r3_00,
                     extraout_r4_00,extraout_r5_00);
    FUN_0000b2a4();
    iVar1 = _DAT_7c003004;
    do {
      do {
        FUN_0000a332(param_1,0);
      } while ((uint)(_DAT_7c003004 - iVar1) < 0x11e1a301);
      FUN_0000367e();
    } while( true );
  }
  return;
}

