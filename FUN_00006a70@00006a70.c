
int FUN_00006a70(int param_1)

{
  int iVar1;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar2;
  
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 8);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        uVar2 = *puVar4;
        uVar3 = puVar4[1];
        break;
      }
      uVar3 = (puVar4 + iVar5 * 2)[1];
      uVar2 = puVar4[iVar5 * 2];
    } while (uVar3 == 0 && uVar2 == 0);
    iVar1 = FUN_00005930(uVar2,uVar3);
    iVar5 = (0x40 - iVar1) + iVar5 * 0x40;
  }
  return iVar5;
}

