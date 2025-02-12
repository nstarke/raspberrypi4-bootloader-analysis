
undefined4 FUN_00006aaa(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 8) + uVar5 * 8;
      if (*(int *)(iVar2 + -4) != 0 || *(int *)(iVar2 + -8) != 0) break;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(param_2 + 8) + uVar3 * 8;
      if (*(int *)(iVar2 + -4) != 0 || *(int *)(iVar2 + -8) != 0) break;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (uVar5 != 0 || uVar3 != 0) {
    if (uVar3 < uVar5) {
      return 1;
    }
    if (uVar5 < uVar3) {
      return 0xffffffff;
    }
    if (uVar5 != 0) {
      iVar2 = *(int *)(param_1 + 8) + uVar5 * 8 + -0x40;
      iVar4 = *(int *)(param_2 + 8) + uVar5 * 8 + -0x40;
      do {
        uVar1 = *(uint *)(iVar2 + 0x3c);
        uVar3 = *(uint *)(iVar4 + 0x3c);
        if (uVar3 < uVar1) {
          return 1;
        }
        if ((uVar1 == uVar3) && (*(uint *)(iVar4 + 0x38) < *(uint *)(iVar2 + 0x38))) {
          return 1;
        }
        if (uVar1 < uVar3) {
          return 0xffffffff;
        }
        if ((uVar1 == uVar3) && (*(uint *)(iVar2 + 0x38) < *(uint *)(iVar4 + 0x38))) {
          return 0xffffffff;
        }
        iVar4 = iVar4 + -8;
        iVar2 = iVar2 + -8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return 0;
}

