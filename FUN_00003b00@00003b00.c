
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003b00(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = _DAT_7c400034;
  uVar4 = _DAT_7c400030;
  uVar3 = _DAT_7c400024;
  uVar2 = _DAT_7c400004;
  uVar1 = _DAT_7c400000;
  _DAT_7c400000 = _DAT_7c400000 & 0xfffffffe;
  _DAT_7c400004 = _DAT_7c400004 & 0xfffffffe;
  _DAT_7c400024 = _DAT_7c400024 & 0xfffffffe;
  _DAT_7c400030 = _DAT_7c400030 & 0xfffffffe;
  _DAT_7c400034 = _DAT_7c400034 & 0xfffffffe;
  do {
  } while ((uVar1 & 2) != 0);
  do {
  } while ((uVar2 & 2) != 0);
  do {
  } while ((uVar3 & 2) != 0);
  do {
  } while ((uVar4 & 2) != 0);
  do {
  } while ((uVar5 & 2) != 0);
  _DAT_7d200204 = _DAT_7d200204 | 0x5a000080;
  return;
}

