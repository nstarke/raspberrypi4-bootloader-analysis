
void FUN_0000b3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int unaff_gp;
  
  iVar1 = *(int *)(unaff_gp + 0x1e84);
  if (iVar1 != 0xbadf00d) {
    FUN_00009cdc(param_1,iVar1,param_3,param_4,param_5,param_6);
    iVar1 = extraout_r1;
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    param_5 = extraout_r4;
    param_6 = extraout_r5;
  }
  if (*(int *)(s_tryboot_00002a6c + unaff_gp) != 0xbadf00d) {
    FUN_00009cdc(*(int *)(s_tryboot_00002a6c + unaff_gp),iVar1,param_3,param_4,param_5,param_6);
  }
  return;
}

