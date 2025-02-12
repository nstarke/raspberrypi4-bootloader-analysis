
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e09e(int param_1,undefined *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int unaff_gp;
  
  if (*(int *)(unaff_gp + 0x114) == 0) {
    if (((int)param_2 < 0x2580) || (0xe1000 < (int)param_2)) {
      param_2 = &DAT_0001c200;
    }
    iVar2 = FUN_0000b8a2();
    (**(code **)(iVar2 + 0x24))(0x3f5,0x3f6,0x100,*(code **)(iVar2 + 0x24));
    (**(code **)(param_1 + 0x2c))(0x3f5,0x3f6,2,*(code **)(param_1 + 0x2c));
    FUN_0000bf1c(1000);
    _DAT_7d001030 = 0;
    FUN_0000e260();
    fVar3 = (float)FUN_0000b83c();
    fVar1 = (float)fexp2(0xc0800000);
    uVar4 = FUN_0000b824((fVar3 * 1e+06) / ((float)(int)param_2 / fVar1),6);
    _DAT_7d001028 = uVar4 & 0x3f;
    _DAT_7d001024 = (int)uVar4 >> 6 & 0xffff;
    _DAT_7d00102c = 0x60;
    _DAT_7d001030 = _DAT_7d001030 | 0x100;
    FUN_0000e260();
    *(undefined4 *)(unaff_gp + 0x114) = 1;
    _DAT_7d001030 = _DAT_7d001030 | 1;
  }
  return;
}

