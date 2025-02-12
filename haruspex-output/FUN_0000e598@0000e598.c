
void FUN_0000e598(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar3 = param_2 * 0x20;
  if (param_2 == 0) {
    *(int *)(iVar3 + 0x7c480910) = param_4 + 0x80000;
    *(uint *)(&DAT_7c480900 + iVar3) = 0x84008000;
  }
  else {
    iVar1 = param_1 + param_2;
    *(int *)(iVar3 + 0x7c480910) =
         ((int)(((uint)(param_4 + 0x1ff >> 8) >> 0x17) + param_4 + 0x1ff) >> 9) * 0x80000 + param_4;
    iVar2 = 0x1d;
    if (*(char *)(iVar1 + 0x38) == '\0') {
      iVar2 = 0x1c;
    }
    *(uint *)(&DAT_7c480900 + iVar3) = 1 << iVar2 | 0x84000000U | param_2 << 0x16 | 0x88200;
    *(bool *)(iVar1 + 0x38) = *(char *)(iVar1 + 0x38) == '\0';
  }
  for (iVar3 = (int)(((uint)(param_4 + 3 >> 1) >> 0x1e) + param_4 + 3) >> 2; 0 < iVar3;
      iVar3 = iVar3 + -1) {
    *(undefined4 *)(&DAT_7c481000 + param_2 * 0x1000) = *param_3;
    param_3 = param_3 + 1;
  }
  *(uint *)(unaff_gp + 0x7c) = *(uint *)(unaff_gp + 0x7c) | 1 << param_2;
  return;
}

