
longlong FUN_000003c8(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_3 + -0x20;
  if (-1 < iVar1) {
    return (ulonglong)(param_1 << iVar1) << 0x20;
  }
  if (param_3 != 0) {
    uVar2 = param_1 >> -iVar1;
    param_1 = param_1 << param_3;
    param_2 = param_2 << param_3 | uVar2;
  }
  return CONCAT44(param_2,param_1);
}

