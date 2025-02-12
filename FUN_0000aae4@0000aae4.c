
int FUN_0000aae4(byte *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  int extraout_r5;
  byte local_11;
  
  uVar1 = (uint)*param_1;
  iVar3 = 0;
  if (uVar1 != 0) {
    do {
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20 & 0xff;
      }
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20 & 0xff;
      }
      iVar2 = FUN_0000aaa8(uVar1,(char *)&local_11,param_3);
      iVar3 = extraout_r3;
      if (iVar2 < 0) break;
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
      iVar3 = extraout_r3 << 4;
      if (extraout_r5 == 0) {
        iVar3 = extraout_r3 * 10;
      }
      iVar3 = (uint)local_11 + iVar3;
      param_3 = extraout_r5;
    } while (uVar1 != 0);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return iVar3;
}

