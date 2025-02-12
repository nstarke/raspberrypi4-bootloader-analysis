
undefined4 FUN_00008426(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    do {
      if ((*(uint *)(param_1 + 0xc) >> uVar2 & 1) != 0) {
        iVar1 = 9999;
        do {
          if ((*(uint *)(&DAT_00013008 + *(int *)(*(int *)(param_1 + 0x14) + uVar2 * 4)) & 8) == 0)
          break;
          bVar3 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar3);
        if (iVar1 == 0) {
          return 0x1c;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0;
}

