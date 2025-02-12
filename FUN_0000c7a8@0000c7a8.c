
bool FUN_0000c7a8(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (iVar1 = (int)(((uint)(param_3 >> 1) >> 0x1e) + param_3) >> 2; 0 < iVar1; iVar1 = iVar1 + -1)
  {
    uVar2 = uVar2 | *param_2 ^ *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return uVar2 != 0;
}

