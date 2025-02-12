
void FUN_00009a40(byte *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined3 extraout_var;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  uint extraout_r2_07;
  uint extraout_r2_08;
  uint extraout_r2_09;
  uint uVar7;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 extraout_r3_05;
  undefined4 extraout_r3_06;
  undefined4 extraout_r3_07;
  undefined4 extraout_r3_08;
  undefined4 extraout_r3_09;
  undefined4 extraout_r3_10;
  undefined4 extraout_r3_11;
  undefined4 extraout_r3_12;
  undefined4 extraout_r3_13;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 extraout_r3_14;
  undefined4 extraout_r3_15;
  undefined4 extraout_r3_16;
  byte *extraout_r4;
  byte *extraout_r4_00;
  byte *extraout_r4_01;
  byte *extraout_r4_02;
  byte *extraout_r4_03;
  byte *extraout_r4_04;
  byte *extraout_r4_05;
  byte *extraout_r4_06;
  byte *extraout_r4_07;
  byte *pbVar10;
  byte *extraout_r4_08;
  byte *extraout_r4_09;
  int extraout_r5;
  int extraout_r5_00;
  int extraout_r5_01;
  int extraout_r5_02;
  int extraout_r5_03;
  int extraout_r5_04;
  int extraout_r5_05;
  int extraout_r5_06;
  int extraout_r5_07;
  int extraout_r5_08;
  int extraout_r5_09;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  int unaff_gp;
  int local_34;
  int local_30;
  byte *local_2c;
  
  uVar13 = 0xffffffff;
  local_2c = param_1;
  iVar2 = FUN_0000b8a2();
  uVar11 = 0xffffffff;
  pcVar3 = FUN_0000ddfa((char *)local_2c,0x3d);
  uVar14 = 0xffffffff;
  uVar7 = extraout_r2;
  uVar8 = extraout_r3;
  pbVar10 = extraout_r4;
  iVar4 = extraout_r5;
  if (pcVar3 != (char *)0x0) {
    do {
      pbVar12 = (byte *)(pcVar3 + 1);
      if (*pbVar12 == 0) {
LAB_00009b20:
        puVar15 = (undefined4 *)(unaff_gp + 0xc0);
        piVar16 = (int *)(unaff_gp + 0xb8);
        goto LAB_00009b34;
      }
      iVar4 = FUN_0000df56(pbVar12,&DAT_00009c34,(char *)0x2);
      if (iVar4 == 0) {
        uVar13 = 0;
        uVar7 = extraout_r2_00;
        uVar8 = extraout_r3_00;
        pbVar10 = extraout_r4_00;
        iVar4 = extraout_r5_00;
      }
      else {
        iVar4 = FUN_0000df56(pbVar12,&DAT_00009c38,(char *)0x2);
        if (iVar4 == 0) {
          uVar13 = 0x10;
          uVar7 = extraout_r2_01;
          uVar8 = extraout_r3_01;
          pbVar10 = extraout_r4_01;
          iVar4 = extraout_r5_01;
        }
        else {
          iVar4 = FUN_0000df56(pbVar12,&DAT_00009c3c,(char *)0x2);
          if (iVar4 == 0) {
            uVar11 = 1;
            uVar7 = extraout_r2_02;
            uVar8 = extraout_r3_02;
            pbVar10 = extraout_r4_02;
            iVar4 = extraout_r5_02;
          }
          else {
            iVar4 = FUN_0000df56(pbVar12,&DAT_00009c40,(char *)0x2);
            if (iVar4 == 0) {
              uVar11 = 0;
              uVar7 = extraout_r2_03;
              uVar8 = extraout_r3_03;
              pbVar10 = extraout_r4_03;
              iVar4 = extraout_r5_03;
            }
            else {
              iVar5 = FUN_0000df56(pbVar12,&DAT_00009c44,(char *)0x2);
              uVar7 = extraout_r2_04;
              uVar8 = extraout_r3_04;
              pbVar10 = extraout_r4_04;
              iVar4 = extraout_r5_04;
              if ((iVar5 == 0) ||
                 (iVar5 = FUN_0000df56(pbVar12,&DAT_00009c48,(char *)0x2), uVar7 = extraout_r2_05,
                 uVar8 = extraout_r3_05, pbVar10 = extraout_r4_05, iVar4 = extraout_r5_05,
                 iVar5 == 0)) {
                uVar14 = 0;
              }
              else {
                iVar4 = FUN_0000df56(pbVar12,&DAT_00009c4c,(char *)0x2);
                if (iVar4 == 0) {
                  uVar14 = 2;
                  uVar7 = extraout_r2_06;
                  uVar8 = extraout_r3_06;
                  pbVar10 = extraout_r4_06;
                  iVar4 = extraout_r5_06;
                }
                else {
                  iVar5 = FUN_0000df56(pbVar12,&DAT_00009c50,(char *)0x2);
                  uVar7 = extraout_r2_07;
                  uVar8 = extraout_r3_07;
                  pbVar10 = extraout_r4_07;
                  iVar4 = extraout_r5_07;
                  if (iVar5 != 0) break;
                  uVar14 = 1;
                  pbVar10 = extraout_r4_07;
                  iVar4 = extraout_r5_07;
                }
              }
            }
          }
        }
      }
      pcVar3 = pcVar3 + 3;
      if (*pcVar3 == '\0') goto LAB_00009b20;
    } while (*pcVar3 == ',');
  }
LAB_00009b12:
  FUN_0000a2ac((byte *)s_Invalid_GPIO_command__s_00009c54,(uint)param_1,uVar7,uVar8,pbVar10,iVar4);
  return;
LAB_00009b34:
  iVar5 = FUN_00009ca4(&local_2c,&local_30);
  uVar7 = extraout_r2_08;
  uVar8 = extraout_r3_08;
  pbVar10 = extraout_r4_08;
  iVar4 = extraout_r5_08;
  if (iVar5 == 0) goto LAB_00009b12;
  if (*local_2c == 0x2d) {
    local_2c = local_2c + 1;
    iVar6 = FUN_00009ca4(&local_2c,&local_34);
    iVar5 = local_34;
    uVar7 = extraout_r2_09;
    uVar8 = extraout_r3_09;
    pbVar10 = extraout_r4_09;
    iVar4 = extraout_r5_09;
    if (iVar6 == 0) goto LAB_00009b12;
    if (local_34 < local_30) {
      local_34 = local_30;
      local_30 = iVar5;
    }
  }
  else {
    local_34 = local_30;
  }
  _write_to_stdout((byte *)s_gpio_cmd____s__pins___d__d_drive_00009c6c,(uint)param_1,local_30,
                   local_34,uVar11,uVar13);
  uVar8 = extraout_r3_10;
  if (local_30 <= local_34) {
    do {
      if (iVar2 != 0) {
        if ((-1 < (int)uVar13) && (*piVar16 != 0)) {
          (**(code **)(*piVar16 + 0x20))(*puVar15,local_30,uVar13 & 0xff);
          uVar8 = extraout_r3_11;
        }
        if (uVar11 < 2) {
          bVar1 = FUN_0000a814();
          if ((CONCAT31(extraout_var,bVar1) == 0) || (local_30 != 0x79)) {
            iVar4 = *piVar16;
            uVar8 = extraout_r3_12;
            if (iVar4 != 0) {
              if (uVar11 == 0) {
                (**(code **)(iVar4 + 0x30))(*puVar15,local_30,0);
                uVar8 = extraout_r3_16;
              }
              else {
                (**(code **)(iVar4 + 0x2c))(*puVar15,local_30,0);
                uVar8 = extraout_r3_15;
              }
            }
          }
          else {
            (**(code **)(iVar2 + 0x24))(0x15,0x15,0x10,*(code **)(iVar2 + 0x24));
            (**(code **)(iVar2 + 0x30))(0x15,uVar11,*(code **)(iVar2 + 0x30));
            uVar8 = extraout_r3_13;
          }
        }
        if ((-1 < (int)uVar14) && (*piVar16 != 0)) {
          pcVar9 = *(code **)(*piVar16 + 0x3c);
          (*pcVar9)(*puVar15,local_30,uVar14 & 0xff,pcVar9);
          uVar8 = extraout_r3_14;
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 <= local_34);
  }
  uVar7 = (uint)*local_2c;
  if (uVar7 != 0x2c) {
    pbVar10 = local_2c;
    iVar4 = local_34;
    if (uVar7 == 0x3d) {
      return;
    }
    goto LAB_00009b12;
  }
  local_2c = local_2c + 1;
  goto LAB_00009b34;
}

