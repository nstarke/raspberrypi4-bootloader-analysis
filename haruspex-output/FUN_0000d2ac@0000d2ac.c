
void FUN_0000d2ac(uint param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 auStack_2c [5];
  
  local_34 = DAT_0000ee34;
  local_30 = DAT_0000ee38;
  if (param_5 != 0) {
    local_34 = auStack_2c;
    FUN_000018fc(local_34,param_4,param_5);
  }
  FUN_0000d2f0(param_1,param_2,param_3,param_5,(int *)&local_34,0,'\0');
  return;
}

