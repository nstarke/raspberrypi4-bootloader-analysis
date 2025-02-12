
int FUN_00004ec4(int param_1,ushort *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *(byte *)param_2;
  iVar2 = (int)(bVar1 & 0x7f) >> 5;
  iVar3 = 0;
  if (iVar2 == 0 && (bVar1 & 0xf) == 0) {
    if ((bVar1 & 0x80) == 0) {
      iVar3 = FUN_00004e3e(param_1,(int)param_2);
    }
    else {
      iVar3 = FUN_00004dcc(param_1,(int)param_2);
    }
  }
  else if (iVar2 == 2) {
    iVar3 = FUN_00004f0e(param_1,param_2);
  }
  FUN_0000e552(param_1,0,param_1 + 8,8);
  return iVar3;
}

