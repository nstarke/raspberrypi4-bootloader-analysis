
undefined4 FUN_0000c3f8(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  iVar1 = FUN_0000c392((uint)(*(int *)(unaff_gp + 0x104) == 0));
  *(int *)(unaff_gp + 0x60) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_gp + 0x104) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

