
int FUN_00009e56(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_gp;
  
  pcVar1 = *(code **)(*(int *)(unaff_gp + 0x124) + 0xcc);
  iVar2 = (*pcVar1)(pcVar1);
  if (iVar2 != 0) {
    FUN_0000a3e8(8);
  }
  return iVar2;
}

