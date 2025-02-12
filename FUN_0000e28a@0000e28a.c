
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e28a(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0x1000;
  puVar1 = (undefined4 *)&DAT_7c481000;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -4;
    puVar1 = puVar1 + 1;
  } while (0 < iVar2);
  uVar3 = _DAT_7c48004c >> 0x10;
  uVar4 = uVar3;
  while (uVar4 = uVar4 >> 1, uVar4 != 0) {
    uVar3 = uVar3 | uVar4;
  }
  iVar2 = uVar3 + 1;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)&DAT_7c4a0000;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  return;
}

