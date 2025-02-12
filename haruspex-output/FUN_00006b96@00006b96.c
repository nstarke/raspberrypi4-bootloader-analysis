
int FUN_00006b96(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    do {
      iVar5 = param_1[2] + uVar7 * 8;
      if (*(int *)(iVar5 + -4) != 0 || *(int *)(iVar5 + -8) != 0) break;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = param_2[1];
  if (uVar8 != 0) {
    do {
      iVar5 = param_2[2] + uVar8 * 8;
      if (*(int *)(iVar5 + -4) != 0 || *(int *)(iVar5 + -8) != 0) break;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar7 != 0 || uVar8 != 0) {
    if (uVar8 < uVar7) {
      return *param_1;
    }
    iVar5 = *param_2;
    if (uVar7 < uVar8) {
      return -iVar5;
    }
    iVar1 = *param_1;
    if ((0 < iVar1) && (iVar5 < 0)) {
      return 1;
    }
    if ((0 < iVar5) && (iVar1 < 0)) {
      return -1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      iVar5 = param_1[2] + uVar7 * 8;
      iVar6 = param_2[2] + uVar7 * 8;
      uVar8 = *(uint *)(iVar5 + -8);
      uVar2 = *(uint *)(iVar6 + -8);
      uVar3 = *(uint *)(iVar5 + -4);
      uVar4 = *(uint *)(iVar6 + -4);
      if (uVar4 < uVar3) {
        return iVar1;
      }
      if ((uVar3 == uVar4) && (uVar2 < uVar8)) {
        return iVar1;
      }
      if ((uVar3 < uVar4) || ((uVar3 == uVar4 && (uVar8 < uVar2)))) {
        return -iVar1;
      }
    }
  }
  return 0;
}

