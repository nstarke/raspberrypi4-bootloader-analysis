
int FUN_0000433c(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  int iVar3;
  int iVar4;
  uint local_18;
  
  iVar4 = param_1 + param_2 * 8;
  bVar1 = FUN_00004052(iVar4 + 0x254);
  iVar2 = CONCAT31(extraout_var,bVar1);
  do {
    if (iVar2 == 0) {
      iVar2 = FUN_00004060(iVar4 + 0x254);
      return iVar2;
    }
    while( true ) {
      iVar2 = FUN_000019d4(param_1,&local_18);
      iVar3 = (iVar2 << 0x19) >> 0x19;
      if (iVar3 == 0) break;
      if (param_2 == local_18 || local_18 == 0xffffffff) {
        return iVar3;
      }
      iVar2 = FUN_00004088(param_1 + local_18 * 8 + 0x254,(char)((iVar2 << 0x19) >> 0x19));
      if (iVar2 < 0) {
        return -1;
      }
    }
    bVar1 = FUN_00004052(iVar4 + 0x254);
    iVar2 = CONCAT31(extraout_var_00,bVar1);
  } while( true );
}

