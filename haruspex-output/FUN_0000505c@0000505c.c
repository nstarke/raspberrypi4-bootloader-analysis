
void FUN_0000505c(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[1] != 0x49324300)) {
    FUN_00005014();
  }
  puVar1 = (uint *)*param_1;
  *puVar1 = *puVar1 | 0x30;
  for (iVar2 = 50000; (puVar1[1] >> 0x1c != 0 && (0 < iVar2)); iVar2 = iVar2 + -1) {
    FUN_0000bf1c(1);
    puVar1 = (uint *)*param_1;
  }
  *puVar1 = *puVar1 | 0x30;
  if (iVar2 < 0) {
    FUN_00005014();
  }
  return;
}

