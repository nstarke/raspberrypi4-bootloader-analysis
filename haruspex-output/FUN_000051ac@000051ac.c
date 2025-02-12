
undefined4 FUN_000051ac(undefined4 *param_1,int param_2,undefined *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[1] != 0x49324300)) {
    FUN_00005014();
  }
  uVar4 = 0;
  *param_3 = 0;
  FUN_0000505c(param_1);
  puVar5 = (undefined4 *)*param_1;
  iVar3 = 50000;
  if (param_2 != 0xff) {
    puVar5[1] = 0x302;
    puVar5[2] = 1;
    *puVar5 = 0x8080;
    for (iVar2 = 50000; ((puVar5[1] & 0x101) == 0 && (0 < iVar2)); iVar2 = iVar2 + -1) {
      FUN_0000bf1c(1);
      puVar5 = (undefined4 *)*param_1;
    }
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    puVar5[4] = param_2;
    iVar2 = 50000;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = (uint)puVar5[1] >> 0x1c;
      bVar6 = (puVar5[1] & 0x300) != 0;
      if (((uVar1 == 0 || uVar1 == 4) || uVar1 == 5) || bVar6) break;
    } while (0 < iVar2);
    if ((bVar6) || (iVar2 < 1)) {
      return 0xfffffffe;
    }
  }
  puVar5[1] = 0x302;
  puVar5[2] = param_4;
  *puVar5 = 0x8081;
  while( true ) {
    while ((puVar5[1] & 0x20) != 0) {
      if (0 < param_4) {
        *param_3 = (char)puVar5[4];
        param_4 = param_4 + -1;
        param_3 = param_3 + 1;
      }
    }
    if ((puVar5[1] & 2) != 0) break;
    FUN_0000bf1c(1);
    iVar3 = iVar3 + -1;
    if (iVar3 < 1) break;
    puVar5 = (undefined4 *)*param_1;
  }
  if ((0 < param_4) || (iVar3 < 1)) {
    uVar4 = 0xfffffffd;
  }
  return uVar4;
}

