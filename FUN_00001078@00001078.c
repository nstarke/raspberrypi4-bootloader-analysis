
void FUN_00001078(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int unaff_gp;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    bVar1 = FUN_0000a7d8();
    if ((CONCAT31(extraout_var,bVar1) == 0) &&
       (bVar1 = FUN_0000a814(), CONCAT31(extraout_var_00,bVar1) == 0)) {
      *(undefined4 *)(&DAT_00002d10 + unaff_gp) = 0;
    }
    else {
      *(undefined4 *)(&DAT_00002d10 + unaff_gp) = 1;
    }
  }
  return;
}

