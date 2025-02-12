
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002676(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (((*(uint *)(param_1 + 0x44) & _DAT_7d202114) == 0 && (iVar1 < 0x65))) {
    FUN_0000bf1c(10);
    iVar1 = iVar1 + 1;
  }
  return;
}

