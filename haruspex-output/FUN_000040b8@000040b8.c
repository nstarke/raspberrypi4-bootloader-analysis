
void FUN_000040b8(undefined4 param_1)

{
  int extraout_r1;
  int iVar1;
  int unaff_gp;
  
  iVar1 = *(int *)(unaff_gp + 0x30);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_gp + 0x30) = 1;
    FUN_00000686();
    iVar1 = extraout_r1;
  }
  thunk_FUN_00000482(param_1,iVar1);
  return;
}

