
void FUN_00001db6(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == 0x16) {
    *param_2 = 0xb;
LAB_00001de2:
    *param_3 = 0xc;
    return;
  }
  if (param_1 < 0x17) {
    if (param_1 == 1) {
      *param_2 = 0xc;
      goto LAB_00001dec;
    }
  }
  else {
    if (param_1 == 0x1a) {
      *param_2 = 4;
      *param_3 = 0;
      return;
    }
    if (param_1 == 0x1b) {
      *param_2 = 6;
      goto LAB_00001de2;
    }
  }
  *param_2 = 4;
LAB_00001dec:
  *param_3 = 8;
  return;
}

