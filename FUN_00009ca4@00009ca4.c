
undefined4 FUN_00009ca4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)*param_1;
  iVar1 = 0;
  uVar2 = (uint)*pbVar3;
  if ((0x2f < uVar2) && (uVar2 < 0x3a)) {
    do {
      pbVar3 = pbVar3 + 1;
      iVar1 = iVar1 * 10 + uVar2;
      uVar2 = (uint)*pbVar3;
      iVar1 = iVar1 + -0x30;
      if (uVar2 < 0x30) break;
    } while (uVar2 < 0x3a);
    *param_1 = pbVar3;
    if ((iVar1 < 0x30) || (iVar1 == 0x79)) {
      *param_2 = iVar1;
      return 1;
    }
  }
  return 0;
}

