
int FUN_000098ec(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0xf;
  if (uVar1 < 10) {
    iVar2 = uVar1 + 0x30;
  }
  else {
    iVar2 = uVar1 + 0x57;
  }
  return iVar2;
}

