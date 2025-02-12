
int FUN_00009142(int param_1,undefined4 *param_2)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = FUN_0000806a();
  if (iVar1 == 0) {
    if (param_1 == 2) {
      FUN_0000cc62(*(int *)(unaff_gp + 0x40));
      FUN_0000803c();
    }
    if (param_1 == 3) {
      FUN_00007e6a();
      *param_2 = 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

