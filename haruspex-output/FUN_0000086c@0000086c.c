
uint FUN_0000086c(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 0x17 & 0xff;
  iVar2 = uVar1 - 0x7e;
  if (iVar2 < 1) {
    param_1 = 0;
  }
  else {
    if (iVar2 < 0x19) {
      param_3 = 1 << 0x18 - iVar2;
    }
    if ((int)(uVar1 - 0x96) < 0 != SBORROW4(iVar2,0x18) || iVar2 == 0x18) {
      param_1 = param_1 & ~(param_3 - 1U);
    }
  }
  return param_1;
}

