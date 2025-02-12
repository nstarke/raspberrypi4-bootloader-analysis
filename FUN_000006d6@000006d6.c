
void FUN_000006d6(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = *(int *)(unaff_gp + 0x5f4);
  *(undefined4 *)(unaff_gp + 0x5f4) = 0;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    (**(code **)(iVar1 + 4))(*(code **)(iVar1 + 4));
  }
  if (*(int *)(unaff_gp + 0x34) != 0) {
    FUN_00000a3a(0x6a8);
    *(undefined4 *)(unaff_gp + 0x34) = 0;
  }
  return;
}

