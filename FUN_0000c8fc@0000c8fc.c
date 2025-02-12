
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000c8fc(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_0000c7f6();
  iVar3 = 10;
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x1000000;
    }
    if (param_3 == 0) {
      _DAT_7c001090 = 0;
    }
    else {
      _DAT_7c001090 = 0x4000000;
    }
    _DAT_7c001090 = _DAT_7c001090 | (param_4 & 0xff) << 8 | param_1 & 0x7f | uVar2 | 0x20000000;
    while (((_DAT_7c001090 & 0x80000000) == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
      FUN_0000bf1c(1000);
    }
  }
  FUN_0000c7f4();
  return;
}

