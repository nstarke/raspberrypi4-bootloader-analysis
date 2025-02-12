
undefined4 FUN_00008174(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    uVar3 = *(uint *)(param_1 + 8);
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        if (((*(uint *)(param_1 + 0xc) >> uVar5 & 1) != 0) &&
           (iVar1 = *(int *)(iVar4 + uVar5 * 4), iVar1 != 0)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4);
          iVar6 = uVar5 * 0x34 + param_2;
          for (uVar3 = 0; uVar3 < *(uint *)(iVar6 + 0x18); uVar3 = uVar3 + 1) {
            if (param_3 == 1) {
              *(undefined4 *)(iVar1 + uVar3 * 4) =
                   *(undefined4 *)(&DAT_00014000 + uVar3 * 4 + *(int *)(iVar6 + 0x1c) + iVar2);
            }
            else if (param_3 == 2) {
              *(undefined4 *)(&DAT_00014000 + uVar3 * 4 + *(int *)(iVar6 + 0x1c) + iVar2) =
                   *(undefined4 *)(iVar1 + uVar3 * 4);
            }
          }
          uVar3 = *(uint *)(param_1 + 8);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  return 0;
}

