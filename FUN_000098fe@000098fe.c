
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000098fe(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  _DAT_7d00f008 = param_1;
  FUN_0000bf1c(10);
  uVar2 = 0xffffffff;
  if (param_1 == _DAT_7d00f008) {
    iVar1 = 999;
    _DAT_7d00f008 = _DAT_7d00f008 | 1;
    do {
      FUN_0000bf1c(10);
      if ((_DAT_7d00f00c & 2) != 0) {
        if ((_DAT_7d00f00c & 0xf0000000) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xfffffffd;
        }
        break;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    _DAT_7d00f008 = 0;
    FUN_0000bf1c(10);
  }
  return uVar2;
}

