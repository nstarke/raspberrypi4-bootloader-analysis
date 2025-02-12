
byte * FUN_00001ed0(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  if (((int)param_1 < 0x55) && (iVar3 = *(int *)(unaff_gp + 0x6c), 0 < iVar3)) {
    iVar2 = 0;
    do {
      pbVar1 = (byte *)(*(int *)(unaff_gp + 0x68) + iVar2);
      if (param_1 == *pbVar1) {
        return pbVar1;
      }
      iVar2 = iVar2 + 0x34;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return (byte *)0x0;
}

