
void FUN_00006b48(int *param_1,uint param_2,int param_3)

{
  uint local_24;
  int local_20;
  int local_18 [2];
  undefined *local_10;
  
  local_10 = (undefined *)&local_24;
  if (param_3 < 0) {
    local_24 = -param_2;
    local_20 = ((int)(param_2 | local_24) >> 0x1f) - param_3;
    local_18[0] = -1;
  }
  else {
    local_18[0] = 1;
    local_24 = param_2;
    local_20 = param_3;
  }
  local_18[1] = 1;
  FUN_00006b96(param_1,local_18);
  return;
}

