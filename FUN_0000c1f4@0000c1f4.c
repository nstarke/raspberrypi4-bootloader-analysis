
undefined4 FUN_0000c1f4(uint *param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  int extraout_r3;
  uint uVar3;
  
  uVar2 = *param_1;
  while( true ) {
    if (*(uint *)(param_2 + 8) <= uVar2) {
      return 4;
    }
    uVar2 = (uint)*(byte *)(*(int *)(param_2 + 4) + uVar2);
    if (uVar2 == 0) {
      return 7;
    }
    iVar1 = FUN_00002cec(uVar2);
    if (iVar1 != 0) {
      return 1;
    }
    if (extraout_r3 == 0x3d) break;
    uVar2 = *param_1 + 1;
    *param_1 = uVar2;
    uVar3 = param_1[0x58] + 1;
    *(char *)((int)param_1 + param_1[0x58] + 0x3d) = (char)extraout_r3;
    param_1[0x58] = uVar3;
    param_2 = extraout_r1;
    if (0x20 < uVar3) {
      return 1;
    }
  }
  return 1;
}

