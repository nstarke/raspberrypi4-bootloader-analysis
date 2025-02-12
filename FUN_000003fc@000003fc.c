
longlong FUN_000003fc(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = param_1 * 2 >> 0x18;
  if (uVar2 != 0) {
    uVar5 = param_1 & 0x7fffff | 0x800000;
    iVar1 = -uVar2;
    iVar6 = iVar1 + 0x96;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      if (0x27 < iVar6) {
        uVar4 = 0x80000000;
        uVar3 = 0;
        if (-1 < (int)param_1) {
          uVar4 = 0x7fffffff;
          uVar3 = 0xffffffff;
        }
        return CONCAT44(uVar4,uVar3);
      }
      if (0x1f < iVar6) {
        uVar5 = uVar5 << iVar6 + -0x20;
        if ((int)param_1 < 0) {
          uVar5 = -uVar5;
        }
        return (ulonglong)uVar5 << 0x20;
      }
      uVar2 = uVar5 >> iVar1 + 0xb6;
      iVar6 = uVar5 << iVar6;
      if ((int)param_1 < 0) {
        uVar2 = ~uVar2;
        iVar6 = -iVar6;
      }
      return CONCAT44(uVar2,iVar6);
    }
    if (iVar6 < 0x20) {
      uVar5 = uVar5 >> iVar6;
      uVar3 = 0;
      if ((int)param_1 < 0) {
        uVar5 = -uVar5;
        uVar3 = 0xffffffff;
      }
      return CONCAT44(uVar3,uVar5);
    }
  }
  return 0;
}

