
undefined4 FUN_0000846c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(uint *)(param_1 * 0x34 + param_3 + 0x24) & 1) != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x14) + param_1 * 4);
    iVar3 = 0;
    iVar2 = 0x98;
    puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x1c) + param_1 * 4);
    do {
      *(undefined4 *)(&DAT_00014000 + iVar3 + *(int *)(param_3 + 0x20) + iVar1) = *puVar4;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (0 < iVar2);
  }
  return 0;
}

