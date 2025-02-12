
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000c7f6(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 10;
  _DAT_7c020554 = _DAT_7c020554 & 0xfffffffc;
  _DAT_7c021154 = _DAT_7c021154 & 0xfffffffc;
  while (((_DAT_7c001090 & _DAT_7c001090 & 0x80000000) == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    FUN_0000bf1c(1000);
  }
  uVar1 = 0;
  if ((_DAT_7c001090 & _DAT_7c001090 & 0x80000000) == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

