
ulonglong FUN_00000224(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_4 != 0) {
    if ((param_4 <= param_2) && ((param_2 != param_4 || (param_3 <= param_1)))) {
      uVar4 = 0;
      uVar7 = 0;
      iVar1 = 0x40;
      uVar6 = 0;
      uVar3 = 0;
      do {
        uVar2 = uVar4 >> 0x1f;
        uVar4 = uVar4 * 2;
        uVar7 = uVar7 << 1 | uVar2;
        uVar3 = uVar3 << 1 | uVar6 >> 0x1f;
        uVar6 = uVar6 << 1 | param_2 >> 0x1f;
        uVar2 = param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 << 1 | uVar2;
        if ((param_4 <= uVar3) && ((uVar3 != param_4 || (param_3 <= uVar6)))) {
          bVar8 = uVar4 == 0xffffffff;
          uVar4 = uVar4 + 1;
          uVar7 = uVar7 + bVar8;
          bVar8 = uVar6 < param_3;
          uVar6 = uVar6 - param_3;
          uVar3 = (uVar3 - param_4) - (uint)bVar8;
        }
        iVar1 = iVar1 + -1;
      } while (0 < iVar1);
      return CONCAT44(uVar7,uVar4);
    }
    return 0;
  }
  if (param_2 == 0) {
    return (ulonglong)(param_1 / param_3);
  }
  if (param_2 < param_3) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_2 / param_3;
    param_2 = param_2 - uVar6 * param_3;
  }
  iVar5 = 0;
  iVar1 = 0x20;
  uVar3 = 0;
LAB_00000252:
  do {
    iVar5 = iVar5 * 2;
    uVar4 = uVar3 << 1 | param_2 >> 0x1f;
    param_2 = param_2 << 1 | param_1 >> 0x1f;
    param_1 = param_1 << 1;
    if (uVar4 != 0) {
      iVar5 = iVar5 + 1;
      param_2 = param_2 - param_3;
      uVar3 = 0;
      iVar1 = iVar1 + -1;
      uVar4 = 0;
      if (0 < iVar1) goto LAB_00000252;
    }
    uVar3 = uVar4;
    if (param_3 <= param_2) {
      iVar5 = iVar5 + 1;
      param_2 = param_2 - param_3;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 < 1) {
      return CONCAT44(uVar6,iVar5);
    }
  } while( true );
}

