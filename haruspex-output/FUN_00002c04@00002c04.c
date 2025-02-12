
int FUN_00002c04(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *param_2 = 0;
  iVar1 = FUN_0000de22((uint *)(param_1 + 0x3d),(uint *)&LAB_00002c70);
  if (iVar1 == 0) {
    iVar4 = param_1 + 0x288;
  }
  else {
    iVar1 = FUN_0000de22((uint *)(param_1 + 0x3d),(uint *)s_include_00002c68);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          puVar2 = *(uint **)(*(int *)(param_1 + 0x14) + iVar3 * 0x14 + 4);
          if (puVar2 != (uint *)0x0) {
            iVar1 = FUN_0000de22(puVar2,(uint *)(param_1 + 0x3d));
            if (iVar1 == 0) {
              return *(int *)(param_1 + 0x14) + iVar3 * 0x14;
            }
            iVar1 = *(int *)(param_1 + 0x18);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
  }
  return iVar4;
}

