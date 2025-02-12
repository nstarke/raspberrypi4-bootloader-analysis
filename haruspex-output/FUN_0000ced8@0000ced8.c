
undefined4 FUN_0000ced8(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  uint *extraout_r5;
  
  uVar1 = *param_1;
  while( true ) {
    if (*(uint *)(param_2 + 8) <= uVar1) {
      return 0;
    }
    uVar1 = (uint)*(byte *)(*(int *)(param_2 + 4) + uVar1);
    if (uVar1 == 0) break;
    iVar2 = FUN_00002cec(uVar1);
    if (iVar2 == 0) {
      return 1;
    }
    uVar1 = *extraout_r5 + 1;
    *extraout_r5 = uVar1;
    param_2 = extraout_r1;
  }
  return 7;
}

