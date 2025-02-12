
undefined4 FUN_000040f8(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = 10;
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '0') {
    uVar1 = 8;
    if ((pcVar2[1] == 'x') || (pcVar2[1] == 'X')) {
      uVar1 = 0x10;
      pcVar2 = pcVar2 + 2;
    }
  }
  *param_1 = (int)pcVar2;
  return uVar1;
}

