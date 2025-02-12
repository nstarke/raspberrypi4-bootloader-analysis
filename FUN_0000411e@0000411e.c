
int FUN_0000411e(char *param_1)

{
  int iVar1;
  
  iVar1 = 0x80000;
  if (*param_1 == -0x11) {
    iVar1 = 0x10000 << ((byte)param_1[2] & 0xf);
  }
  else if (*param_1 == '\x1f') {
    iVar1 = ((byte)param_1[1] & 0x1f) << 0x11;
  }
  return iVar1;
}

