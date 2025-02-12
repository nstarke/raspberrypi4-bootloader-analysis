
void FUN_0000bbee(void)

{
  uint unaff_r7;
  int unaff_r8;
  code *unaff_r10;
  int unaff_r11;
  undefined4 unaff_r12;
  char *unaff_r13;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(unaff_r11 + -4);
  iVar1 = 0;
  do {
    FUN_0000b844(uVar2 >> 0x18,unaff_r13);
    FUN_000099ea(unaff_r8,unaff_r10,unaff_r12,unaff_r7,unaff_r13);
    if (iVar1 < 3) {
      (*unaff_r10)();
    }
    uVar2 = uVar2 << 8;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_0000bae2();
  return;
}

