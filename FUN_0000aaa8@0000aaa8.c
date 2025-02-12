
undefined4 FUN_0000aaa8(uint param_1,char *param_2,int param_3)

{
  char cVar1;
  
  if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
    param_1 = param_1 + 0x20 & 0xff;
  }
  if (((int)param_1 < 0x30) || (0x39 < (int)param_1)) {
    if ((param_3 == 0) || (((int)param_1 < 0x61 || (0x66 < (int)param_1)))) {
      return 0xffffffff;
    }
    cVar1 = (char)param_1 + -0x57;
  }
  else {
    cVar1 = (char)param_1 + -0x30;
  }
  *param_2 = cVar1;
  return 0;
}

