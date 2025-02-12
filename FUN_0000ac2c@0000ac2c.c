
undefined4 FUN_0000ac2c(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 uVar6;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  uint extraout_r3;
  uint uVar7;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  int extraout_r4;
  int iVar8;
  int extraout_r4_00;
  int extraout_r4_01;
  int extraout_r4_02;
  int extraout_r4_03;
  int extraout_r4_04;
  int extraout_r4_05;
  uint extraout_r5;
  uint uVar9;
  int extraout_r5_00;
  uint extraout_r5_01;
  undefined4 extraout_r5_02;
  int extraout_r5_03;
  int extraout_r5_04;
  uint uVar10;
  undefined8 uVar11;
  int aiStack_44 [2];
  int local_3c;
  byte abStack_30 [12];
  undefined4 local_24;
  undefined local_20;
  
  local_20 = DAT_0000ee18;
  local_24 = DAT_0000ee14;
  uVar11 = FUN_00007dca((undefined4 *)abStack_30,(undefined4 *)s_rsa2048__0000ee3c,10);
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar10 = 0;
  uVar6 = extraout_r2;
  uVar7 = extraout_r3;
  iVar8 = extraout_r4;
  uVar9 = extraout_r5;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[3];
    uVar11 = CONCAT44(uVar4,iVar1);
    uVar9 = iVar1 - param_2[2];
    if (uVar9 < 0x20) {
      uVar11 = FUN_00009cdc(iVar1,uVar4,extraout_r2,extraout_r3,extraout_r4,uVar9);
      uVar6 = extraout_r2_01;
      uVar7 = extraout_r3_01;
      iVar8 = extraout_r4_01;
      uVar9 = extraout_r5_01;
    }
  }
  uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
  if (param_3 != (int *)0x0) {
    iVar8 = param_3[3];
    uVar7 = iVar8 - param_3[2];
    if (uVar7 < 0x100) {
      FUN_00009cdc((int)uVar11,uVar5,uVar6,uVar7,iVar8,uVar9);
      uVar5 = extraout_r1_00;
      uVar6 = extraout_r2_02;
      uVar7 = extraout_r3_02;
      iVar8 = extraout_r4_02;
    }
  }
  if (param_4 != (uint *)0x0) {
    uVar6 = 0;
    *param_4 = 0;
  }
  if (param_2 == (int *)0x0) goto LAB_0000acb6;
  iVar1 = param_2[3];
  if (((uint)(iVar1 - param_2[2]) < 0x20) ||
     (iVar2 = FUN_0000ab4c(param_1,param_2,0x20,uVar7,iVar8,iVar1), uVar5 = extraout_r1,
     uVar6 = extraout_r2_00, uVar7 = extraout_r3_00, iVar8 = extraout_r4_00, iVar1 = extraout_r5_00,
     iVar2 != 0)) {
LAB_0000ad58:
    _write_to_stderr((byte *)s_Failed_to_parse_signature_file_0000ad8c,uVar5,uVar6,uVar7,iVar8,iVar1
                    );
    return 0xffffffff;
  }
  uVar9 = param_2[1];
  pcVar3 = s_hash___32H_0000ad70;
LAB_0000ad4c:
  FUN_0000e198((byte *)pcVar3,uVar9,uVar6,uVar7,iVar8,iVar1);
LAB_0000acb6:
  do {
    uVar7 = param_1[2];
    while( true ) {
      do {
        uVar9 = uVar10;
        if (uVar7 <= uVar9) {
          return 0;
        }
        uVar10 = uVar9 + 1;
      } while (*(char *)(param_1[1] + uVar9) != '\n');
      if (uVar7 - uVar10 < 9) {
        return 0;
      }
      if ((param_4 != (uint *)0x0) &&
         (iVar8 = FUN_00007d9e((byte *)(param_1[1] + uVar10),(byte *)&local_24,4), iVar8 == 0)) {
        uVar10 = uVar9 + 5;
        uVar9 = FUN_0000b7b6((byte *)(param_1[1] + uVar10),(undefined4 *)0x0,10);
        *param_4 = uVar9;
        if (uVar9 == 0xffffffff) {
          uVar9 = 0;
          *param_4 = 0;
        }
        pcVar3 = s_ts___u_0000ad68;
        uVar6 = extraout_r2_04;
        uVar7 = extraout_r3_04;
        iVar8 = extraout_r4_05;
        iVar1 = extraout_r5_04;
        goto LAB_0000ad4c;
      }
      if (param_3 == (int *)0x0) break;
      iVar8 = FUN_00007d9e((byte *)(param_1[1] + uVar10),abStack_30,9);
      uVar7 = param_1[2];
      if (iVar8 == 0) {
        uVar10 = uVar9 + 10;
        FUN_000018fc(aiStack_44,param_1[1] + uVar10,uVar7 - uVar10);
        local_3c = local_3c + (param_1[2] - uVar10);
        iVar2 = FUN_0000ab4c(aiStack_44,param_3,0x100,local_3c,extraout_r4_03,extraout_r5_02);
        uVar5 = extraout_r1_01;
        uVar6 = extraout_r2_03;
        uVar7 = extraout_r3_03;
        iVar8 = extraout_r4_04;
        iVar1 = extraout_r5_03;
        if (iVar2 < 0) goto LAB_0000ad58;
        uVar9 = param_3[1];
        pcVar3 = s_rsa2048___256H_0000ad7c;
        goto LAB_0000ad4c;
      }
    }
  } while( true );
}

