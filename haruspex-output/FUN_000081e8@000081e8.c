
undefined4 FUN_000081e8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    do {
      if ((*(uint *)(param_1 + 0xc) >> uVar2 & 1) != 0) {
        *(undefined4 *)(&DAT_00012000 + *(int *)(*(int *)(param_1 + 0x14) + uVar2 * 4)) = 1;
        uVar1 = *(uint *)(param_1 + 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

