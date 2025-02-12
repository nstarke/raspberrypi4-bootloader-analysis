
void FUN_0000daf0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint extraout_r4;
  uint uVar6;
  undefined4 extraout_r4_00;
  int iVar7;
  undefined4 extraout_r5;
  int *piVar8;
  int unaff_gp;
  undefined4 auStack_140 [2];
  int local_138;
  int local_134;
  undefined auStack_12b [3];
  byte local_128 [256];
  
  FUN_0000d9c4();
  FUN_0000d4ba();
  piVar8 = (int *)(unaff_gp + 0x74);
  bVar4 = false;
  FUN_0000d186(auStack_12b,*piVar8 + -0x100);
  iVar5 = FUN_0000d2ac(3,(int)auStack_12b,3,local_128,extraout_r4);
  if (iVar5 < 0) goto LAB_0000dc3c;
  if (param_3 == 0) {
    bVar3 = false;
    uVar6 = 0;
    do {
      iVar5 = uVar6 * 2;
      bVar2 = local_128[iVar5];
      *param_1 = bVar2 & 0x3f;
      bVar1 = local_128[iVar5 + 1];
      *param_2 = bVar1;
      if (((bVar2 & 0xc0) == 0x40) && (bVar1 != 0xff)) {
        local_128[iVar5 + 1] = 0;
        bVar3 = true;
        local_128[iVar5] = 0;
        break;
      }
      local_128[iVar5 + 1] = 0;
      uVar6 = uVar6 + 1;
      local_128[iVar5] = 0;
    } while (uVar6 < 0x78);
    if (!bVar3) {
      *param_2 = 0;
      *param_1 = 0;
      goto LAB_0000dc3c;
    }
    if (0x77 < uVar6) goto LAB_0000db84;
  }
  else {
    bVar3 = false;
    iVar5 = 0;
    iVar7 = 0x78;
    do {
      if ((local_128[iVar5] == 0xff) && (local_128[iVar5 + 1] == 0xff)) {
        bVar3 = true;
        local_128[iVar5] = *param_1 & 0x3f | 0x40;
        local_128[iVar5 + 1] = *param_2;
        break;
      }
      local_128[iVar5 + 1] = 0;
      local_128[iVar5] = 0;
      iVar5 = iVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (0 < iVar7);
    if (!bVar3) {
LAB_0000db84:
      bVar4 = true;
    }
  }
  if (bVar4) {
    FUN_0000da10(*piVar8 - 0x1000);
    FUN_00007e18((undefined4 *)local_128,0xff,0xf0);
    if (param_3 != 0) {
      local_128[0] = *param_1 & 0x3f | 0x40;
      local_128[1] = *param_2;
    }
  }
  FUN_000018fc(auStack_140,auStack_12b,0x103);
  local_138 = local_134 - local_138;
  FUN_0000d186(auStack_12b,*piVar8 + -0x100);
  FUN_0000d750((int)auStack_140,extraout_r1,extraout_r2,extraout_r3,extraout_r4_00,extraout_r5);
LAB_0000dc3c:
  FUN_0000d298();
  return;
}

