
int FUN_0000b6f0(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 == (byte *)0x0) || (param_2 != (byte *)0x0)) {
    if ((param_1 == (byte *)0x0) && (param_2 != (byte *)0x0)) {
      return -1;
    }
    if (param_1 != (byte *)0x0 || param_2 != (byte *)0x0) {
      for (; ((param_3 != 0 && (uVar3 = (uint)*param_1, uVar3 != 0)) &&
             (uVar2 = (uint)*param_2, uVar2 != 0)); param_2 = param_2 + 1) {
        if ((0x40 < uVar3) && (uVar3 < 0x5b)) {
          uVar3 = uVar3 + 0x20 & 0xff;
        }
        if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
          uVar2 = uVar2 + 0x20 & 0xff;
        }
        if (uVar3 != uVar2) {
          return uVar3 - uVar2;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 + -1;
      }
      if (param_3 != 0) {
        if ((*param_1 != 0) && (*param_2 == 0)) goto LAB_0000b762;
        if ((*param_1 == 0) && (*param_2 != 0)) {
          return -1;
        }
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0000b762:
    iVar1 = 1;
  }
  return iVar1;
}

