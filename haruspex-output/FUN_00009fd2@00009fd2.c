
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009fd2(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  int unaff_gp;
  undefined8 uVar9;
  
  uVar5 = 0;
  _DAT_7c0000b4 = 0;
  uVar6 = _DAT_7c0000bc >> 0x10;
  *(undefined4 *)(unaff_gp + 0xa8) = _DAT_7c003004;
  iVar2 = FUN_0000e682();
  uVar3 = _DAT_7d504004;
  piVar8 = (int *)(unaff_gp + 0x124);
  *piVar8 = iVar2;
  uVar6 = uVar6 & 0xff;
  if ((uVar3 == 0x27120021) || (((int)uVar3 < 0x27120022 && (uVar3 == 0x27120020)))) {
    *(undefined4 *)(unaff_gp + 0x54) = 0x60100000;
  }
  else {
    *(undefined4 *)(unaff_gp + 100) = 1;
    *(undefined4 *)(unaff_gp + 0x54) = 0x60008000;
  }
  FUN_00001df2();
  FUN_00007e18(*(undefined4 **)(unaff_gp + 0x54),0,0x400);
  *(undefined4 *)(unaff_gp + 0x52c) = _DAT_7d200020;
  uVar9 = (**(code **)(*piVar8 + 8))();
  (**(code **)(*piVar8 + 4))((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(code **)(*piVar8 + 4));
  (**(code **)(*piVar8 + 0x10))(*(code **)(*piVar8 + 0x10));
  if (0x10 < (_DAT_7d504004 & 0xff)) {
    switch(uVar6) {
    default:
      uVar6 = 0;
      break;
    case 1:
      uVar6 = 2;
      break;
    case 2:
      uVar6 = 6;
      break;
    case 3:
      uVar6 = 7;
    }
  }
  *(uint *)(unaff_gp + 0x3d8) = uVar6;
  puVar7 = (uint *)(unaff_gp + 0x94);
  uVar3 = (**(code **)(*piVar8 + 0x84))(0x20);
  *puVar7 = uVar3;
  uVar4 = (**(code **)(*piVar8 + 0x84))(0x21);
  uVar3 = *puVar7;
  *(undefined4 *)(unaff_gp + 0x9c) = uVar4;
  if (uVar3 == 0) {
    uVar3 = 0xd04170;
    *puVar7 = 0xd04170;
  }
  *(uint *)(unaff_gp + 0x98) = uVar3 >> 4 & 0xff;
  *(uint *)(unaff_gp + 0x90) = uVar3 & 0xf;
  uVar3 = 0x100 << (uVar3 >> 0x14 & 7);
  *(uint *)(unaff_gp + 0x8c) = uVar3;
  *(uint *)(unaff_gp + 0x88) = uVar3 >> 7;
  uVar4 = (**(code **)(*piVar8 + 0x84))(0x55,*(code **)(*piVar8 + 0x84));
  *(undefined4 *)(unaff_gp + 0xa0) = uVar4;
  uVar4 = (**(code **)(*piVar8 + 0x7c))(*(code **)(*piVar8 + 0x7c));
  *(undefined4 *)(unaff_gp + 0x2c8) = uVar4;
  (**(code **)(*piVar8 + 0x60))(uVar4,*(code **)(*piVar8 + 0x60));
  FUN_0000b33e(1);
  FUN_0000b354(1);
  uVar3 = FUN_00001224(0x1f);
  *(uint *)(unaff_gp + 0x2c4) = uVar3;
  *(uint *)(unaff_gp + 0xa4) = uVar3;
  uVar3 = FUN_00001224(0x32);
  *(uint *)(unaff_gp + 0x310) = uVar3;
  uVar3 = FUN_00001224(0x33);
  *(uint *)(unaff_gp + 0x314) = uVar3;
  FUN_000097fe((undefined4 *)(unaff_gp + 0x310),(undefined *)(unaff_gp + 0x318));
  bVar1 = FUN_0000a7bc();
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (bVar1 = FUN_0000a7d8(), CONCAT31(extraout_var_00,bVar1) == 0)) {
    bVar1 = FUN_0000a7ea();
    if ((CONCAT31(extraout_var_01,bVar1) == 0) || (*(int *)(unaff_gp + 0x90) == 0)) {
      *(undefined4 *)(unaff_gp + 0x3c8) = 0;
      uVar5 = 1;
    }
    else {
      *(undefined4 *)(unaff_gp + 0x3c8) = 2;
    }
  }
  else {
    *(undefined4 *)(unaff_gp + 0x3c8) = 1;
  }
  *(uint *)(unaff_gp + 0x3c4) = uVar5 | 0x80000000;
  return;
}

