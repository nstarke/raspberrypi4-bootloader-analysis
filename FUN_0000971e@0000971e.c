
void FUN_0000971e(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = 0;
  if (param_1 != 0) {
    do {
      uVar4 = param_3[1];
      uVar1 = *param_3;
      bVar9 = uVar8 < uVar4;
      if (uVar8 == uVar4) {
        bVar9 = uVar7 < uVar1;
      }
      uVar5 = uVar4 - uVar8;
      uVar3 = (uint)(!bVar9 && (uVar8 != uVar4 || uVar7 != uVar1));
      uVar4 = uVar1 - uVar7;
      if (uVar1 < uVar7) {
        uVar5 = uVar5 - 1;
      }
      *param_3 = uVar4;
      param_3[1] = uVar5;
      puVar2 = param_2 + 1;
      uVar7 = *param_2;
      param_2 = param_2 + 2;
      uVar8 = *puVar2;
      bVar9 = uVar5 < uVar8;
      if (uVar5 == uVar8) {
        bVar9 = uVar4 < uVar7;
      }
      uVar5 = uVar5 - uVar8;
      uVar8 = (uint)CARRY4((uint)bVar9,uVar3);
      if (uVar4 < uVar7) {
        uVar5 = uVar5 - 1;
      }
      *param_3 = uVar4 - uVar7;
      uVar7 = bVar9 + uVar3;
      param_3[1] = uVar5;
      param_3 = param_3 + 2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_1);
  }
  while (uVar8 != 0 || uVar7 != 0) {
    uVar1 = param_3[1];
    uVar6 = *param_3;
    bVar9 = uVar8 == uVar1;
    bVar10 = uVar8 < uVar1;
    if (bVar9) {
      bVar10 = uVar7 < uVar6;
    }
    uVar1 = uVar1 - uVar8;
    *param_3 = uVar6 - uVar7;
    if (uVar6 < uVar7) {
      uVar1 = uVar1 - 1;
    }
    param_3[1] = uVar1;
    param_3 = param_3 + 2;
    uVar7 = (uint)(!bVar10 && (!bVar9 || uVar7 != uVar6));
    uVar8 = 0;
  }
  return;
}

