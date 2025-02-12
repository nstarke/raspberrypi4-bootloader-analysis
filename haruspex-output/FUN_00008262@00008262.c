
undefined4 FUN_00008262(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    do {
      if ((*(uint *)(param_1 + 0xc) >> uVar3 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(&DAT_00012010 + *(int *)(iVar2 + uVar3 * 4)) = 0;
        *(undefined4 *)(&DAT_00012000 + *(int *)(iVar2 + uVar3 * 4)) = 0;
        uVar1 = *(uint *)(param_1 + 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

