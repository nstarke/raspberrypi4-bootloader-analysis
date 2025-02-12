
int FUN_00004dcc(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = 0;
  switch(*(undefined *)(param_2 + 1)) {
  case 0:
    FUN_0000e598(param_1,0,(undefined4 *)(unaff_gp + 0x1d98),2);
    break;
  default:
    iVar1 = -1;
    break;
  case 6:
    iVar1 = FUN_000041b4(param_1,param_2);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_0000433c(param_1,0);
    if ((iVar1 << 0x19) >> 0x19 == 0xb) {
      FUN_0000e552(param_1,0,param_1 + 8,8);
      iVar1 = FUN_0000433c(param_1,0);
      if ((iVar1 << 0x19) >> 0x19 == 0xc) {
        return 0;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}

