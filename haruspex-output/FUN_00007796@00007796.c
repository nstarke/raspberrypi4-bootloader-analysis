
undefined4 FUN_00007796(undefined4 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar7 = param_1[1];
  uVar8 = param_2 >> 6;
  uVar6 = param_2 & 0x3f;
  if ((uVar7 < uVar8) || ((uVar8 == uVar7 && (uVar6 != 0)))) {
    uVar2 = FUN_000074ca(param_1,0,0);
  }
  else {
    if (uVar8 != 0) {
      uVar9 = 0;
      if (uVar7 != uVar8) {
        iVar3 = param_1[2];
        do {
          puVar5 = (undefined4 *)(iVar3 + (uVar8 + uVar9) * 8);
          puVar4 = (undefined4 *)(iVar3 + uVar9 * 8);
          uVar2 = puVar5[1];
          *puVar4 = *puVar5;
          puVar4[1] = uVar2;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar7 - uVar8);
      }
      for (; uVar9 < uVar7; uVar9 = uVar9 + 1) {
        puVar4 = (undefined4 *)(param_1[2] + uVar9 * 8);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
    }
    if (uVar6 != 0 && uVar7 != 0) {
      iVar3 = param_1[2] + uVar7 * 8 + -0x40;
      uVar1 = 0;
      do {
        uVar8 = *(uint *)(iVar3 + 0x38);
        uVar9 = *(uint *)(iVar3 + 0x3c);
        uVar10 = FUN_000003c8(uVar8,uVar9,0x40 - uVar6);
        uVar11 = FUN_0000036e(uVar8,uVar9,uVar6);
        *(ulonglong *)(iVar3 + 0x38) = uVar11 | uVar1;
        iVar3 = iVar3 + -8;
        uVar7 = uVar7 - 1;
        uVar1 = uVar10;
      } while (uVar7 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

