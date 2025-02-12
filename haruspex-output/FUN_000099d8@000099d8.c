
void FUN_000099d8(uint param_1,undefined4 param_2)

{
  int unaff_gp;
  
  if (param_1 < 0xc0) {
    *(undefined4 *)(unaff_gp + 0x5854 + param_1 * 4) = param_2;
  }
  return;
}

