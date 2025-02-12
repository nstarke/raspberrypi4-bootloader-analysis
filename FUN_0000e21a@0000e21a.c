
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e21a(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  
  uVar1 = _DAT_7d001000;
  if (*(int *)(unaff_gp + 0x118) == 0) {
    if ((_DAT_7d001030 & 1) == 0) {
      iVar2 = *(int *)(unaff_gp + 0x114);
    }
    else {
      iVar2 = 1;
      *(undefined4 *)(unaff_gp + 0x114) = 1;
    }
    uVar1 = _DAT_7d001000;
    if ((iVar2 != 0) && (iVar2 = FUN_0000af30(&LAB_0000e188,0,2000,0), uVar1 = param_1, iVar2 != 0))
    {
      FUN_0000e260();
      uVar1 = param_1;
    }
  }
  _DAT_7d001000 = uVar1;
  return;
}

