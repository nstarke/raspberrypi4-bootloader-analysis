
void FUN_00001bb8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int unaff_gp;
  
  iVar1 = *(int *)(unaff_gp + 0x3ec);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_gp + 0x3d8);
    *(undefined4 *)(&DAT_00002db8 + unaff_gp) = 1;
    if (iVar2 != 7) {
      FUN_0000e198(&LAB_00001c00,param_2,param_3,iVar2,1,iVar1);
      bVar3 = FUN_0000a7d8();
      if (CONCAT31(extraout_var,bVar3) == 0) {
        *(undefined4 *)(&DAT_00002db0 + unaff_gp) = 0xf01;
      }
      else {
        *(undefined4 *)(&DAT_00002db0 + unaff_gp) = 0xf06;
      }
    }
  }
  return;
}

