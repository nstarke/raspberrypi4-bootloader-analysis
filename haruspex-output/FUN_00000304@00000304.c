
ulonglong FUN_00000304(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  if (param_2 != 0) {
    FUN_00000224(param_1,param_2,param_3,param_4);
    return CONCAT44(extraout_r3,extraout_r2);
  }
  if (param_4 == 0) {
    return (ulonglong)(param_1 - (param_1 / param_3) * param_3);
  }
  return (ulonglong)param_1;
}

