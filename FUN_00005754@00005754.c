
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005754(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  FUN_0000e28a();
  FUN_0000e2c8(param_1);
  _DAT_7c480800 = &DAT_00040800;
  _DAT_7c480024 = 0x200;
  _DAT_7c480028 = 0x2000200;
  puVar4 = (uint *)&DAT_7c480104;
  uVar2 = 0x400;
  iVar3 = 4;
  do {
    uVar1 = uVar2 | 0x2000000;
    uVar2 = uVar2 + 0x200;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 8;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  return;
}

