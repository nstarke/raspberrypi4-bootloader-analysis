
undefined4
FUN_0000d968(int *param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int extraout_r4;
  int extraout_r5;
  undefined4 uVar2;
  int unaff_gp;
  undefined auStack_20 [3];
  undefined local_1d;
  
  FUN_0000189e((int *)*param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_0000d4ba();
  uVar2 = 4;
  if (*(uint *)(unaff_gp + 0x74) < param_3 + param_2) {
    uVar2 = 3;
  }
  else {
    FUN_0000d186(auStack_20,param_2);
    local_1d = 0;
    uVar1 = FUN_0000d2f0(0xb,extraout_r4,4,param_3,param_1,extraout_r5,(char)param_5);
    if (-1 < (int)uVar1) {
      uVar2 = 0;
    }
  }
  FUN_0000d298();
  return uVar2;
}

