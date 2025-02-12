
void FUN_000006a8(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  
  if (*(int *)(unaff_gp + 0x2c) == 0) {
    iVar2 = *(int *)(unaff_gp + 0x5fc);
    *(undefined4 *)(unaff_gp + 0x2c) = 1;
    uVar1 = 0;
    *(undefined4 *)(unaff_gp + 0x5fc) = 0;
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      uVar1 = (**(code **)(iVar2 + 4))(uVar1,*(code **)(iVar2 + 4));
    }
  }
  return;
}

