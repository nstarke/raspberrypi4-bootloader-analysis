
uint FUN_0000d9c4(void)

{
  int iVar1;
  int extraout_r4;
  uint uVar2;
  int unaff_gp;
  uint local_18;
  uint local_14;
  undefined auStack_10 [4];
  
  iVar1 = *(int *)(unaff_gp + 0x74);
  FUN_0000d4ba();
  FUN_0000d186(auStack_10,iVar1 + -8);
  iVar1 = FUN_0000d2ac(3,extraout_r4,3,&local_18,8);
  if (((iVar1 < 0) || (local_18 != ~local_14)) || (uVar2 = local_14, local_14 == 0xffffffff)) {
    uVar2 = 0;
  }
  FUN_0000d298();
  return uVar2;
}

