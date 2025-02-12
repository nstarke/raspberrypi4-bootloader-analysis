
undefined4 FUN_0000692a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  
  puVar4 = param_2;
  if (param_1 == param_3) {
    puVar4 = param_1;
    param_3 = param_2;
  }
  if (param_1 != puVar4) {
    FUN_00006c4e(param_1,puVar4);
  }
  *param_1 = 1;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    do {
      iVar6 = param_3[2] + uVar10 * 8;
      if (*(int *)(iVar6 + -4) != 0 || *(int *)(iVar6 + -8) != 0) break;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_00007476((int)param_1,uVar10);
  puVar13 = (uint *)param_3[2];
  uVar12 = 0;
  puVar5 = (uint *)param_1[2];
  uVar11 = 0;
  uVar9 = 0;
  if (uVar10 != 0) {
    do {
      puVar14 = puVar13 + 1;
      uVar3 = *puVar13;
      uVar1 = puVar5[1] + uVar11;
      uVar7 = *puVar5 + uVar12;
      puVar13 = puVar13 + 2;
      uVar8 = *puVar14;
      if (CARRY4(*puVar5,uVar12)) {
        uVar1 = uVar1 + 1;
      }
      bVar15 = uVar11 < uVar1;
      if (uVar11 == uVar1) {
        bVar15 = uVar12 < uVar7;
      }
      uVar2 = uVar1 + uVar8;
      uVar11 = (uint)(!bVar15 && (uVar11 != uVar1 || uVar12 != uVar7));
      if (CARRY4(uVar7,uVar3)) {
        uVar2 = uVar2 + 1;
      }
      uVar7 = uVar7 + uVar3;
      *puVar5 = uVar7;
      bVar15 = uVar8 < uVar2;
      puVar5[1] = uVar2;
      if (uVar8 == uVar2) {
        bVar15 = uVar3 < uVar7;
      }
      uVar3 = (uint)(!bVar15 && (uVar8 != uVar2 || uVar3 != uVar7));
      uVar12 = uVar11 + uVar3;
      uVar11 = (uint)CARRY4(uVar3,uVar11);
      puVar5 = puVar5 + 2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  while (uVar11 != 0 || uVar12 != 0) {
    if ((uint)param_1[1] <= uVar9) {
      FUN_00007476((int)param_1,uVar9 + 1);
      puVar5 = (uint *)(param_1[2] + uVar9 * 8);
    }
    uVar10 = *puVar5;
    uVar8 = puVar5[1] + uVar11;
    uVar3 = uVar10 + uVar12;
    *puVar5 = uVar3;
    if (CARRY4(uVar10,uVar12)) {
      uVar8 = uVar8 + 1;
    }
    puVar5[1] = uVar8;
    bVar15 = uVar11 < uVar8;
    if (uVar11 == uVar8) {
      bVar15 = uVar12 < uVar3;
    }
    uVar12 = (uint)(!bVar15 && (uVar11 != uVar8 || uVar12 != uVar3));
    puVar5 = puVar5 + 2;
    uVar9 = uVar9 + 1;
    uVar11 = 0;
  }
  return 0;
}

