
undefined4 FUN_00008212(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 8);
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if ((*(uint *)(param_1 + 0xc) >> uVar5 & 1) != 0) {
        *(undefined4 *)(&DAT_00012000 + *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4)) = 1;
        uVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 8))();
        uVar4 = uVar1;
        do {
          pcVar3 = *(code **)(*(int *)(param_1 + 0x28) + 8);
          iVar2 = (*pcVar3)(uVar4,*(int *)(param_1 + 0x28),pcVar3);
          uVar4 = iVar2 - uVar1;
        } while (uVar4 < 1000);
        *(undefined4 *)(&DAT_00012000 + *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4)) = 5;
        uVar4 = *(uint *)(param_1 + 8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return 0;
}

