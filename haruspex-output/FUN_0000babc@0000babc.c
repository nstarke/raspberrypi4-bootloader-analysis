
void FUN_0000babc(undefined *param_1,int param_2,uint param_3,byte *param_4,uint *param_5)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint extraout_r1;
  uint extraout_r2;
  int iVar9;
  uint extraout_r3;
  uint uVar10;
  int extraout_r3_00;
  char *extraout_r4;
  char *pcVar11;
  int extraout_r4_00;
  uint uVar12;
  uint extraout_r5;
  byte *pbVar13;
  uint unaff_r7;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  int unaff_gp;
  ulonglong uVar21;
  char local_70 [20];
  char acStack_5c [4];
  char acStack_58 [4];
  char acStack_54 [8];
  char acStack_4c [4];
  int local_48;
  uint local_44;
  uint local_40;
  
  pcVar11 = local_70;
  local_44 = DAT_0000ed44;
  local_48 = param_2;
  local_40 = param_3;
  if (param_2 != 0) {
    *(undefined *)(param_3 + param_2 + -1) = 0;
  }
  while( true ) {
    while( true ) {
      if (param_4 == (byte *)0x0) {
        FUN_0000beda(local_44);
        return;
      }
      if (*param_4 == 0) {
        FUN_0000beda(local_44);
        return;
      }
      if (local_40 <= local_44) {
        if (local_48 != 0) {
          uVar5 = local_40 - 1;
          if (local_44 < local_40 - 1) {
            uVar5 = local_44;
          }
          *(undefined *)(local_48 + uVar5) = 0;
        }
        iVar17 = *(int *)(unaff_gp + 0x1e84);
        iVar15 = *(int *)(s_tryboot_00002a6c + unaff_gp);
        while ((iVar17 != 0xbadf00d || (iVar15 != 0xbadf00d))) {
          pcVar1 = (code *)swi(0xe);
          (*pcVar1)();
          iVar17 = extraout_r3_00;
          iVar15 = extraout_r4_00;
        }
        return;
      }
      pbVar13 = param_4 + 1;
      if (*param_4 == 0x25) break;
      (*(code *)param_1)(&local_48);
      param_4 = pbVar13;
    }
    bVar4 = *pbVar13;
    bVar2 = bVar4 == 0x2b;
    if (bVar2) {
      pbVar13 = param_4 + 2;
      bVar4 = *pbVar13;
    }
    if (bVar4 == 0x30) {
      pbVar13 = pbVar13 + 1;
      uVar8 = 0x30;
      bVar4 = *pbVar13;
    }
    else {
      uVar8 = 0x20;
    }
    if (bVar4 == 0x20) {
      pbVar13 = pbVar13 + 1;
      uVar8 = 0x20;
    }
    uVar5 = FUN_0000b7b6(pbVar13,(undefined4 *)0x0,10);
    if (-1 < (int)uVar5) {
      unaff_r7 = uVar5;
    }
    if ((int)uVar5 < 0) {
      unaff_r7 = 0;
    }
    for (; ((uVar5 = (uint)*pbVar13, uVar5 != 0 && (0x2f < uVar5)) && (uVar5 < 0x3a));
        pbVar13 = pbVar13 + 1) {
    }
    if (uVar5 != 0x25) break;
    uVar5 = 0x25;
LAB_0000bbe4:
    (*(code *)param_1)(&local_48,uVar5);
    param_4 = pbVar13 + 1;
  }
  puVar14 = param_5;
  switch(uVar5) {
  case 0x48:
    pbVar13 = (byte *)*param_5;
    if ((int)unaff_r7 < 1) {
      FUN_0000bae2();
      return;
    }
    do {
      iVar17 = FUN_000098ec((int)(uint)*pbVar13 >> 4);
      (*(code *)param_1)(&local_48,iVar17);
      iVar17 = FUN_000098ec(*pbVar13 & 0xf);
      (*(code *)param_1)(&local_48,iVar17);
      unaff_r7 = unaff_r7 - 1;
      pbVar13 = pbVar13 + 1;
    } while (0 < (int)unaff_r7);
    FUN_0000bae2();
    return;
  case 0x49:
    uVar10 = 0;
    uVar5 = *param_5;
    uVar12 = 8;
    uVar20 = 0;
    if (uVar5 != 0) {
      uVar6 = 0;
      uVar7 = uVar6;
      do {
        for (; (uVar6 < 8 && (*(short *)(uVar5 + uVar6 * 2) == 0)); uVar6 = uVar6 + 1 & 0xff) {
        }
        uVar16 = uVar6 - uVar7;
        if ((1 < (int)uVar16) && ((int)uVar10 < (int)uVar16)) {
          uVar10 = uVar16 & 0xff;
          uVar12 = uVar7;
        }
        uVar6 = uVar6 + 1 & 0xff;
        uVar7 = uVar6;
      } while (uVar6 < 8);
      uVar6 = 0;
      if (uVar12 != 0) goto LAB_0000bca2;
      do {
        if (uVar6 == 0) {
          local_70[uVar20] = ':';
          uVar20 = uVar20 + 1 & 0xff;
        }
        local_70[uVar20] = ':';
        uVar20 = uVar20 + 1 & 0xff;
        uVar6 = (uVar12 + uVar10) - 1 & 0xff;
        while( true ) {
          uVar6 = uVar6 + 1 & 0xff;
          if (7 < uVar6) {
            local_70[uVar20] = '\0';
            goto LAB_0000bd90;
          }
          if (uVar6 == uVar12) break;
LAB_0000bca2:
          bVar3 = *(byte *)(uVar5 + uVar6 * 2);
          uVar10 = (uint)bVar3;
          bVar4 = *(byte *)(uVar5 + uVar6 * 2 + 1);
          if ((bVar3 & 0xf0) != 0) {
            iVar17 = FUN_000098ec((int)uVar10 >> 4);
            local_70[uVar20] = (char)iVar17;
            uVar20 = uVar20 + 1 & 0xff;
          }
          if (uVar10 == 0) {
            if ((bVar4 & 0xf0) != 0) goto LAB_0000bcfa;
          }
          else {
            iVar17 = FUN_000098ec(uVar10 & 0xf);
            local_70[uVar20] = (char)iVar17;
            uVar20 = uVar20 + 1 & 0xff;
LAB_0000bcfa:
            iVar17 = FUN_000098ec((int)(uint)bVar4 >> 4);
            local_70[uVar20] = (char)iVar17;
            uVar20 = uVar20 + 1 & 0xff;
          }
          iVar17 = FUN_000098ec(bVar4 & 0xf);
          local_70[uVar20] = (char)iVar17;
          uVar20 = uVar20 + 1 & 0xff;
          uVar5 = extraout_r1;
          uVar6 = extraout_r2;
          uVar10 = extraout_r3;
          pcVar11 = extraout_r4;
          uVar12 = extraout_r5;
          if ((int)extraout_r2 < 7) {
            local_70[uVar20] = ':';
            uVar20 = uVar20 + 1 & 0xff;
          }
        }
      } while( true );
    }
    break;
  case 0x58:
  case 0x78:
    goto LAB_0000be5a;
  case 99:
    puVar14 = param_5 + 1;
    uVar5 = *param_5 & 0xff;
  default:
    param_5 = puVar14;
    goto LAB_0000bbe4;
  case 100:
    pcVar11 = acStack_58;
    uVar5 = *param_5;
    if ((int)uVar5 < 0) {
      (*(code *)param_1)(&local_48,0x2d);
      uVar5 = -uVar5;
    }
    else if (bVar2) {
      (*(code *)param_1)(&local_48,0x2b);
    }
    FUN_0000b844(uVar5,pcVar11);
    goto LAB_0000bd90;
  case 0x65:
    iVar17 = 0;
    uVar5 = *param_5;
    while( true ) {
      iVar15 = FUN_000098ec((int)(uint)*(byte *)(uVar5 + iVar17) >> 4);
      (*(code *)param_1)(&local_48,iVar15);
      iVar15 = FUN_000098ec(*(byte *)(uVar5 + iVar17) & 0xf);
      (*(code *)param_1)(&local_48,iVar15);
      iVar17 = iVar17 + 1;
      if (5 < iVar17) break;
      if (0 < iVar17) {
        (*(code *)param_1)(&local_48,0x3a);
      }
    }
    FUN_0000bae2();
    return;
  case 0x68:
  case 0x70:
    (*(code *)param_1)(&local_48,0x30);
    (*(code *)param_1)(&local_48,0x78);
    uVar5 = (uint)*pbVar13;
    if ((uVar5 == 0x70) || (uVar5 == 0x48)) {
      unaff_r7 = 8;
      uVar8 = 0x30;
    }
LAB_0000be5a:
    pcVar11 = acStack_5c;
    bVar2 = false;
    if (uVar5 == 0x58) {
      iVar17 = 0x10;
      uVar5 = *param_5;
      uVar20 = param_5[1];
    }
    else {
      iVar17 = 8;
      uVar5 = *param_5;
      uVar20 = 0;
    }
    iVar15 = 0;
    pcVar18 = pcVar11;
    pcVar19 = pcVar11;
    if (iVar17 != 0) {
      do {
        if (iVar17 == 0x10) {
          iVar9 = 0x3c;
        }
        else {
          iVar9 = 0x1c;
        }
        uVar21 = FUN_0000036e(uVar5,uVar20,iVar9);
        uVar10 = uVar5 >> 0x1c;
        uVar5 = uVar5 << 4;
        uVar20 = uVar20 << 4 | uVar10;
        if (((uint)uVar21 != 0 || bVar2) || (pcVar19 = pcVar18, iVar15 == 7)) {
          iVar9 = FUN_000098ec((uint)uVar21);
          pcVar19 = pcVar18 + 1;
          *pcVar18 = (char)iVar9;
          bVar2 = true;
        }
        iVar15 = iVar15 + 1;
        pcVar18 = pcVar19;
      } while (iVar15 < iVar17);
    }
    *pcVar19 = '\0';
    goto LAB_0000bd90;
  case 0x69:
    uVar5 = *param_5;
    iVar17 = 0;
    do {
      FUN_0000b844(uVar5 >> 0x18,acStack_4c);
      FUN_000099ea((int)&local_48,param_1,uVar8,unaff_r7,acStack_4c);
      if (iVar17 < 3) {
        (*(code *)param_1)(&local_48,0x2e);
      }
      uVar5 = uVar5 << 8;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 4);
    FUN_0000bae2();
    return;
  case 0x73:
    pcVar11 = (char *)*param_5;
    if (pcVar11 != (char *)0x0) goto LAB_0000bd90;
    break;
  case 0x75:
    pcVar11 = acStack_54;
    FUN_0000b844(*param_5,pcVar11);
    goto LAB_0000bd90;
  }
  pcVar11 = &LAB_0000bf14;
LAB_0000bd90:
  FUN_000099ea((int)&local_48,param_1,uVar8,unaff_r7,pcVar11);
  FUN_0000bae2();
  return;
}

