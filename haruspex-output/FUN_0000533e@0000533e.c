
undefined4 FUN_0000533e(undefined4 *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[1] != 0x49324300)) {
    FUN_00005014();
  }
  FUN_0000505c(param_1);
  puVar4 = (undefined4 *)*param_1;
  if (param_2 == 0xff) {
    puVar4[2] = param_4;
    puVar4[1] = 0x302;
    *puVar4 = 0x8080;
    uVar1 = puVar4[1];
  }
  else {
    puVar4[2] = param_4 + 1;
    puVar4[1] = 0x302;
    *puVar4 = 0x8080;
    puVar4[4] = param_2;
    uVar1 = puVar4[1];
  }
  if ((uVar1 & 0x100) == 0) {
    iVar2 = 50000;
    iVar3 = 50000;
    while (0 < param_4) {
      for (; ((puVar4[1] & 0x10) == 0 && (0 < iVar3)); iVar3 = iVar3 + -1) {
        FUN_0000bf1c(1);
        puVar4 = (undefined4 *)*param_1;
      }
      if (iVar3 < 1) {
        return 0xffffffff;
      }
      puVar4[4] = (uint)*param_3;
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    }
    for (; ((puVar4[1] & 2) == 0 && (0 < iVar2)); iVar2 = iVar2 + -1) {
      FUN_0000bf1c(1);
      puVar4 = (undefined4 *)*param_1;
    }
    if (0 < iVar2) {
      puVar4[1] = 0x302;
      return 0;
    }
  }
  return 0xffffffff;
}

