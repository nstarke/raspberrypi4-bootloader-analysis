
uint FUN_0000011a(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0 && param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = 0x20;
    for (uVar4 = param_1; uVar4 != 0; uVar4 = uVar4 >> 1) {
      iVar3 = iVar3 + -1;
    }
    iVar2 = -iVar3 + 0x1f;
    iVar3 = -iVar3 + 0x17;
    if (-1 < iVar3) {
      return param_1 << iVar3 & 0xff7fffff | (0x96 - iVar3) * 0x800000;
    }
    param_2 = param_1 << iVar2;
    iVar2 = 0x9e - iVar2;
    uVar4 = param_2 & 0x17f;
  }
  else {
    iVar3 = 0x20;
    for (uVar4 = param_2; uVar4 != 0; uVar4 = uVar4 >> 1) {
      iVar3 = iVar3 + -1;
    }
    iVar3 = 0x1f - iVar3;
    iVar2 = 0xbe - iVar3;
    if (iVar3 != 0) {
      uVar4 = param_1 >> 0x20 - iVar3;
      param_1 = param_1 << iVar3;
      param_2 = param_2 << iVar3 | uVar4;
    }
    uVar4 = param_2 & 0x17f | param_1;
  }
  uVar1 = param_2 >> 8;
  if ((((param_2 & 0x80) != 0) && (uVar4 != 0)) && (uVar1 = uVar1 + 1, uVar1 >> 0x18 != 0)) {
    uVar1 = uVar1 >> 1;
    iVar2 = iVar2 + 1;
  }
  return uVar1 & 0xff7fffff | iVar2 << 0x17;
}

