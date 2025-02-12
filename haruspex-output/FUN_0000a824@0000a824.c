
undefined4
FUN_0000a824(uint *param_1,undefined4 *param_2,byte *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar6;
  uint extraout_r1_02;
  uint extraout_r1_03;
  byte *pbVar7;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint uVar8;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  byte *extraout_r4;
  byte *extraout_r4_00;
  byte *extraout_r4_01;
  byte *pbVar9;
  byte *extraout_r4_02;
  byte *extraout_r4_03;
  int extraout_r5;
  int iVar10;
  int extraout_r5_00;
  int extraout_r5_01;
  int extraout_r5_02;
  int extraout_r5_03;
  int extraout_r5_04;
  int extraout_r5_05;
  int *piVar11;
  int unaff_gp;
  byte abStack_3c [24];
  byte *local_24;
  
  if (*(int *)(unaff_gp + 0x3d8) == 7) {
    piVar11 = (int *)(unaff_gp + 0x120);
    puVar1 = (undefined4 *)*piVar11;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = FUN_0000e48e(1,(uint)param_2,7,param_4,param_5,param_6);
      *piVar11 = (int)puVar1;
    }
    if (puVar1 != (undefined4 *)0x0) {
      pbVar2 = (byte *)FUN_0000e396((int)puVar1,(char *)param_1);
      pbVar9 = pbVar2;
      if ((int)pbVar2 < 1) {
        pcVar4 = s_not_found___s__d_0000a90c;
        iVar5 = extraout_r3;
        iVar10 = extraout_r5;
      }
      else {
        iVar5 = *param_4;
        iVar10 = *(int *)(iVar5 + 0xc);
        pbVar7 = (byte *)(iVar10 - *(int *)(iVar5 + 8));
        if (pbVar7 < pbVar2) {
          pcVar4 = s_too_large___s__d_0000a920;
        }
        else {
          pbVar2 = (byte *)FUN_0000e3f0(*piVar11,*(int *)(iVar5 + 4),(uint)pbVar7);
          if ((int)pbVar2 < 0) {
            pcVar4 = s_read_failed___s__d_0000a934;
            iVar5 = extraout_r3_00;
            pbVar9 = pbVar2;
            iVar10 = extraout_r5_00;
          }
          else {
            *(byte **)(*param_4 + 8) = pbVar2;
            FUN_00009d1e((int)param_4,(undefined4 *)abStack_3c);
            uVar6 = extraout_r1;
            uVar8 = extraout_r2;
            iVar5 = extraout_r3_01;
            pbVar2 = extraout_r4;
            iVar10 = extraout_r5_01;
            if (param_2 != (undefined4 *)0x0) {
              FUN_00007dca(param_2,(undefined4 *)abStack_3c,0x20);
              uVar6 = extraout_r1_00;
              uVar8 = extraout_r2_00;
              iVar5 = extraout_r3_02;
              pbVar2 = extraout_r4_00;
              iVar10 = extraout_r5_02;
            }
            if ((param_3 == (byte *)0x0) ||
               (iVar3 = FUN_00007d9e(param_3,abStack_3c,0x20), uVar6 = extraout_r1_01,
               uVar8 = extraout_r2_01, iVar5 = extraout_r3_03, pbVar2 = extraout_r4_01,
               iVar10 = extraout_r5_03, iVar3 == 0)) goto LAB_0000a8aa;
            pcVar4 = s_Hash_mismatch__s_hash__32H_0000a948;
            pbVar2 = abStack_3c;
            pbVar9 = extraout_r4_01;
          }
        }
      }
      FUN_0000a2ac((byte *)pcVar4,(uint)param_1,pbVar2,iVar5,pbVar9,iVar10);
    }
  }
  else {
    iVar5 = FUN_0000d534(param_1,(undefined4 *)abStack_3c);
    if ((iVar5 == 0) &&
       (iVar3 = FUN_0000d86c((int *)abStack_3c,param_4,0,local_24,param_2,param_3,(byte)param_5),
       uVar6 = extraout_r1_02, uVar8 = extraout_r2_02, iVar5 = extraout_r3_04,
       pbVar2 = extraout_r4_02, iVar10 = extraout_r5_04, iVar3 == 0)) {
LAB_0000a8aa:
      for (iVar3 = 0; (int *)param_4[iVar3] != (int *)0x0; iVar3 = iVar3 + 1) {
        FUN_0000189e((int *)param_4[iVar3],uVar6,uVar8,iVar5,(int)pbVar2,iVar10);
        uVar6 = extraout_r1_03;
        uVar8 = extraout_r2_03;
        iVar5 = extraout_r3_05;
        pbVar2 = extraout_r4_03;
        iVar10 = extraout_r5_05;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

