
ulonglong FUN_000000a8(uint param_1)

{
  undefined4 extraout_r0;
  uint uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 * 2 >> 0x18;
  if (uVar1 != 0) {
    if ((int)param_1 < 0) {
      FUN_000003fc(param_1);
      return CONCAT44(extraout_r1,extraout_r0);
    }
    uVar2 = param_1 & 0x7fffff | 0x800000;
    iVar3 = 0x96 - uVar1;
    if (iVar3 < 0) {
      iVar3 = uVar1 - 0x96;
      if (0x28 < iVar3) {
        return 0xffffffffffffffff;
      }
      if (0x1f < iVar3) {
        return (ulonglong)(uVar2 << uVar1 - 0xb6) << 0x20;
      }
      return CONCAT44(uVar2 >> 0x20 - iVar3,uVar2 << iVar3);
    }
    if (iVar3 < 0x20) {
      return (ulonglong)(uVar2 >> iVar3);
    }
  }
  return 0;
}

