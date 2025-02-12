
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0000c242(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  undefined4 uVar2;
  int unaff_gp;
  
  if (0xbf < param_1) {
    FUN_00009cdc(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (*(int *)(unaff_gp + 0xf4) == 0) {
    FUN_0000cc94();
    _DAT_7d00f020 = param_1;
    FUN_0000bf1c(10);
    iVar1 = FUN_000098fe(0);
    uVar2 = _DAT_7d00f010;
    if (iVar1 != 0) {
      FUN_00009cdc(iVar1,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
      uVar2 = 0;
    }
    FUN_000026a0();
  }
  else {
    uVar2 = *(undefined4 *)(unaff_gp + 0x5854 + param_1 * 4);
    if ((0x3c < param_1) && (param_1 < 0x41)) {
      *(undefined4 *)(unaff_gp + 0x5854 + param_1 * 4) = 0;
    }
  }
  return uVar2;
}

