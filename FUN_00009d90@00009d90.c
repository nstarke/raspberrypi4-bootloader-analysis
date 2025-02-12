
void FUN_00009d90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int extraout_r5_00;
  int *piVar3;
  int unaff_gp;
  
  piVar3 = (int *)(unaff_gp + 0x124);
  iVar1 = (**(code **)(*piVar3 + 0xc))(param_1,param_2,*(code **)(*piVar3 + 0xc));
  if (iVar1 == 1) {
    uVar2 = unaff_gp + 0x10;
  }
  else {
    uVar2 = unaff_gp + 0x14;
  }
  FUN_0000e198((byte *)s_uSD_voltage__sV_00009e38,uVar2,extraout_r2,extraout_r3,extraout_r4,
               extraout_r5);
  if (iVar1 == 1) {
    iVar1 = FUN_0000a4d4();
    if ((iVar1 == 0) && (*(int *)(unaff_gp + 0x2d4) != 0)) {
      uVar2 = FUN_00000532();
      FUN_0000daca(uVar2 & 0xff,*(uint *)(unaff_gp + 0x2d4) & 0xff);
    }
    if ((*(int *)(unaff_gp + 0x98) == 0x11) && (*(uint *)(unaff_gp + 0x90) < 3)) {
      (**(code **)(*piVar3 + 0x88))(*(undefined4 *)(unaff_gp + 0x2c8));
    }
    else {
      (**(code **)(*piVar3 + 0xa4))(0);
      (**(code **)(*piVar3 + 0xa8))(0);
      FUN_0000bf1c(20000);
      *(uint *)(extraout_r5_00 + 0x20) = *(uint *)(unaff_gp + 0x52c) | 0x5a000000;
      iVar1 = FUN_0000b8a2();
      (**(code **)(iVar1 + 0xd4))();
    }
  }
  return;
}

