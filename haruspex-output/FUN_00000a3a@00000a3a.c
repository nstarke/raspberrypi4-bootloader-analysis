
undefined4 FUN_00000a3a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  FUN_00000966();
  iVar1 = *(int *)(unaff_gp + 0x1c);
  if (iVar1 < 0x24) {
    if (iVar1 == 0) {
      *(undefined **)(unaff_gp + 0x20) = &LAB_0000377e;
    }
    *(undefined4 *)(&LAB_000031c0 + iVar1 * 4 + unaff_gp) = param_1;
    uVar2 = 0;
    *(int *)(unaff_gp + 0x1c) = iVar1 + 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  FUN_00000968();
  return uVar2;
}

