
undefined4 FUN_000052a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (param_1[1] != 0x49324300)) {
    FUN_00005014();
  }
  for (iVar2 = 50000; ((*(uint *)(*param_1 + 4) & 0x20) != 0 && (0 < iVar2)); iVar2 = iVar2 + -1) {
    FUN_0000bf1c(1);
  }
  *(undefined4 *)(*param_1 + 4) = 0x302;
  FUN_0000505c(param_1);
  puVar1 = (undefined4 *)*param_1;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_0000bf1c(10);
  if (iVar2 < 0) {
    FUN_00005014();
  }
  return 0;
}

