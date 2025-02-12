
int FUN_0000b774(byte *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 0x2d) {
    param_1 = param_1 + 1;
  }
  iVar2 = FUN_0000b7b6(param_1,param_2,param_3);
  if (bVar1 == 0x2d) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

