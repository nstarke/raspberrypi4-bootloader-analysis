
undefined4 FUN_0000d6ce(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  FUN_0000d4ba();
  iVar1 = FUN_0000d2ac(0x9f,0,0,(char *)(unaff_gp + 0x78),3);
  if (iVar1 < 0) {
    FUN_0000d298();
    uVar2 = 8;
  }
  else {
    iVar1 = thunk_FUN_0000411e((char *)(unaff_gp + 0x78));
    *(int *)(unaff_gp + 0x74) = iVar1;
    FUN_0000d298();
    uVar2 = 0;
  }
  return uVar2;
}

