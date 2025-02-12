
undefined4 FUN_00007d9e(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  bool bVar4;
  
  do {
    pbVar3 = param_2;
    pbVar1 = param_1;
    bVar4 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar4) {
      return 0;
    }
    param_1 = pbVar1 + 1;
    param_2 = pbVar3 + 1;
  } while (*pbVar1 == *pbVar3);
  if (*pbVar1 < *pbVar3) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

