
int FUN_0000d86c(int *param_1,int *param_2,int param_3,byte *param_4,undefined4 *param_5,
                byte *param_6,byte param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 extraout_r4;
  byte *pbVar6;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 uVar7;
  int iVar8;
  byte abStack_7c [32];
  undefined4 auStack_5c [5];
  byte abStack_48 [32];
  
  pbVar5 = (byte *)0x0;
  pbVar6 = param_6;
  for (piVar1 = param_2; iVar8 = *piVar1, iVar8 != 0; piVar1 = piVar1 + 1) {
    pbVar6 = *(byte **)(iVar8 + 0xc);
    pbVar5 = pbVar5 + ((int)pbVar6 - *(int *)(iVar8 + 8));
  }
  if (pbVar5 < param_4) {
    iVar8 = 1;
  }
  else {
    iVar8 = FUN_0000d968(param_2,param_1[7] + param_3,(uint)param_4,(uint)(*param_1 == 0x55aaf33f),
                         (uint)param_7,pbVar6);
    if ((iVar8 == 0) && (param_5 != (undefined4 *)0x0 || param_6 != (byte *)0x0)) {
      FUN_00009d1e((int)param_2,(undefined4 *)abStack_48);
      if (param_5 != (undefined4 *)0x0) {
        FUN_00007dca(param_5,(undefined4 *)abStack_48,0x20);
      }
      if (param_6 == (byte *)0x0) {
        if (*param_1 != 0x55aaf33f) {
          return 0;
        }
        FUN_000018fc(auStack_5c,abStack_7c,0x20);
        iVar8 = FUN_0000d834((int)auStack_5c,(uint)(param_4 + param_1[7] + param_3),0x20,0,
                             extraout_r4,extraout_r5_00);
        param_6 = abStack_7c;
      }
      iVar2 = FUN_00007d9e(abStack_48,param_6,0x20);
      uVar3 = extraout_r2;
      uVar4 = extraout_r3;
      uVar7 = extraout_r5;
      if (iVar2 != 0) {
        for (; iVar8 = *param_2, iVar8 != 0; param_2 = param_2 + 1) {
          FUN_00007e18(*(undefined4 **)(iVar8 + 4),0,*(uint *)(iVar8 + 8));
          uVar3 = extraout_r2_00;
          uVar4 = extraout_r3_00;
          uVar7 = extraout_r5_01;
        }
        _sprintf_to_stdout((byte *)s__s_mismatch_0000d95c,(uint)(param_1 + 2),uVar3,uVar4,0,uVar7);
        iVar8 = 4;
      }
    }
  }
  return iVar8;
}

