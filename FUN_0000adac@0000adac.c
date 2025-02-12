
void FUN_0000adac(uint *param_1,uint *param_2)

{
  int iVar1;
  int extraout_r3;
  int extraout_r4;
  undefined4 extraout_r5;
  byte *pbVar2;
  byte *pbVar3;
  int aiStack_d8 [6];
  byte *local_c0;
  undefined auStack_b8 [128];
  int *local_38;
  undefined4 local_34;
  int aiStack_30 [2];
  undefined4 local_28;
  byte *local_24;
  
  local_34 = DAT_0000ed54;
  local_38 = aiStack_30;
  iVar1 = FUN_0000d534(param_2,aiStack_d8);
  pbVar3 = (byte *)0x0;
  if ((iVar1 == 0) && (FUN_000018fc(aiStack_30,auStack_b8,0x80), local_c0 != (byte *)0x0)) {
    do {
      local_28 = 0;
      pbVar2 = local_24;
      if (local_c0 < local_24 + (int)pbVar3) {
        pbVar2 = local_c0 + -(int)pbVar3;
      }
      if ((int)pbVar2 < 1) {
        return;
      }
      FUN_0000d86c(aiStack_d8,(int *)&local_38,(int)pbVar3,pbVar2,(undefined4 *)0x0,(byte *)0x0,0);
      FUN_00002c76(param_1,aiStack_30,0,extraout_r3,extraout_r4,extraout_r5);
      pbVar3 = pbVar3 + (int)pbVar2;
    } while (pbVar3 < local_c0);
  }
  return;
}

