
void FUN_00004590(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_1 < DAT_0000f80c) {
    iVar1 = 0;
  }
  else if (param_1 < DAT_0000f810) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  *param_2 = iVar1;
  *param_3 = param_1 - (&DAT_0000f808)[iVar1];
  return;
}

