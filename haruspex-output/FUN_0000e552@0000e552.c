
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e552(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x10) = param_3;
  if (param_2 == 0) {
    _DAT_7c480b10 = (param_4 & 0x7f) + 0x20080000;
    _DAT_7c480b00 = 0x84008000;
  }
  else {
    *(uint *)(&DAT_7c480b10 + param_2 * 0x20) = (param_4 & 0x7f) + 0x80000;
    *(uint *)(&DAT_7c480b00 + param_2 * 0x20) = param_4 & 0x3ff | 0x84088000;
  }
  return;
}

