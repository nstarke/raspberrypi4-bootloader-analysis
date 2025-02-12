
undefined4 FUN_000036e8(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = 0x200;
  }
  bVar1 = false;
  iVar2 = FUN_000003bc(param_4,iVar2);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  while( true ) {
    if (param_2 == 0) {
      iVar2 = 0x40;
    }
    else {
      iVar2 = 0x200;
    }
    iVar3 = param_4;
    if (iVar2 <= param_4) {
      if (param_2 == 0) {
        iVar3 = 0x40;
      }
      else {
        iVar3 = 0x200;
      }
    }
    FUN_0000e598(param_1,param_2,param_3,iVar3);
    iVar2 = FUN_0000433c(param_1,param_2);
    if ((iVar2 << 0x19) >> 0x19 != 0xb) break;
    param_3 = (undefined4 *)((int)param_3 + iVar3);
    param_4 = param_4 - iVar3;
    if (param_4 == 0) {
      if (bVar1) {
        FUN_0000e598(param_1,param_2,param_3,0);
        iVar2 = FUN_0000433c(param_1,param_2);
        if ((iVar2 << 0x19) >> 0x19 != 0xb) {
          return 0xffffffff;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

