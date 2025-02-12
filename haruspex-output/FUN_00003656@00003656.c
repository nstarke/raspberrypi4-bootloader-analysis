
void FUN_00003656(int param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00001224(0x1f);
  param_2[1] = (uVar1 & 0xff0000) >> 0x10 | 0xb827eb00;
  *param_2 = (uVar1 + param_1) * 0x10000;
  return;
}

