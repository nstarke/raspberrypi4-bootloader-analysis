
void FUN_0000beda(uint param_1)

{
  code *pcVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  int extraout_r4;
  uint uVar4;
  int *unaff_r8;
  undefined unaff_r9;
  int unaff_gp;
  
  if (*unaff_r8 != 0) {
    uVar4 = unaff_r8[2] - 1U;
    if (param_1 < unaff_r8[2] - 1U) {
      uVar4 = param_1;
    }
    *(undefined *)(*unaff_r8 + uVar4) = unaff_r9;
  }
  iVar2 = *(int *)(unaff_gp + 0x1e84);
  iVar3 = *(int *)(s_tryboot_00002a6c + unaff_gp);
  while ((iVar2 != 0xbadf00d || (iVar3 != 0xbadf00d))) {
    pcVar1 = (code *)swi(0xe);
    (*pcVar1)();
    iVar2 = extraout_r3;
    iVar3 = extraout_r4;
  }
  return;
}

