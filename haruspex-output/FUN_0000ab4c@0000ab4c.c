
int FUN_0000ab4c(int *param_1,int *param_2,uint param_3,int param_4,int param_5,undefined4 param_6)

{
  uint extraout_r1;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r4;
  undefined4 extraout_r5;
  uint extraout_r5_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_22;
  char local_21;
  
  FUN_0000189e(param_1,(uint)param_2,param_3,param_4,param_5,param_6);
  iVar3 = 0;
  FUN_0000189e(param_2,extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5);
  param_2[2] = 0;
  if (((uint)param_1[2] < param_3 << 1) || ((uint)param_2[3] < param_3)) {
    iVar3 = -1;
  }
  else {
    uVar2 = 0;
    if (param_3 != 0) {
      iVar4 = 0;
      do {
        iVar3 = FUN_0000aaa8((uint)*(byte *)(param_1[1] + iVar4),&local_21,1);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = FUN_0000aaa8(extraout_r5_00,(char *)&local_22,1);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar4 = iVar4 + 2;
        iVar1 = param_2[2];
        *(byte *)(param_2[1] + iVar1) = local_22 | local_21 << 4;
        param_2[2] = iVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3);
    }
  }
  return iVar3;
}

