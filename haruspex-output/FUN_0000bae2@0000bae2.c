
void FUN_0000bae2(void)

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
  byte *unaff_r6;
  byte *pbVar13;
  uint unaff_r7;
  int *unaff_r8;
  char unaff_r9;
  code *unaff_r10;
  uint *unaff_r11;
  int iVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  int unaff_gp;
  ulonglong uVar20;
  
  while( true ) {
    pbVar13 = unaff_r6 + 1;
    while( true ) {
      uVar5 = unaff_r8[1];
      if (pbVar13 == (byte *)0x0) {
        FUN_0000beda(uVar5);
        return;
      }
      if (*pbVar13 == 0) {
        FUN_0000beda(uVar5);
        return;
      }
      if ((uint)unaff_r8[2] <= uVar5) {
        if (*unaff_r8 != 0) {
          uVar19 = unaff_r8[2] - 1U;
          if (uVar5 < unaff_r8[2] - 1U) {
            uVar19 = uVar5;
          }
          *(char *)(*unaff_r8 + uVar19) = unaff_r9;
        }
        iVar16 = *(int *)(unaff_gp + 0x1e84);
        iVar14 = *(int *)(s_tryboot_00002a6c + unaff_gp);
        while ((iVar16 != 0xbadf00d || (iVar14 != 0xbadf00d))) {
          pcVar1 = (code *)swi(0xe);
          (*pcVar1)();
          iVar16 = extraout_r3_00;
          iVar14 = extraout_r4_00;
        }
        return;
      }
      unaff_r6 = pbVar13 + 1;
      if (*pbVar13 == 0x25) break;
      (*unaff_r10)();
      pbVar13 = unaff_r6;
    }
    bVar4 = *unaff_r6;
    bVar2 = bVar4 == 0x2b;
    if (bVar2) {
      unaff_r6 = pbVar13 + 2;
      bVar4 = *unaff_r6;
    }
    if (bVar4 == 0x30) {
      unaff_r6 = unaff_r6 + 1;
      uVar8 = 0x30;
      bVar4 = *unaff_r6;
    }
    else {
      uVar8 = 0x20;
    }
    if (bVar4 == 0x20) {
      unaff_r6 = unaff_r6 + 1;
      uVar8 = 0x20;
    }
    uVar5 = FUN_0000b7b6(unaff_r6,(undefined4 *)0x0,10);
    if (-1 < (int)uVar5) {
      unaff_r7 = uVar5;
    }
    if ((int)uVar5 < 0) {
      unaff_r7 = 0;
    }
    for (; ((bVar4 = *unaff_r6, bVar4 != 0 && (0x2f < bVar4)) && (bVar4 < 0x3a));
        unaff_r6 = unaff_r6 + 1) {
    }
    if (bVar4 != 0x25) break;
LAB_0000bbe4:
    (*unaff_r10)();
  }
  switch(bVar4) {
  case 0x48:
    pbVar13 = (byte *)*unaff_r11;
    if ((int)unaff_r7 < 1) {
      FUN_0000bae2();
      return;
    }
    do {
      FUN_000098ec((int)(uint)*pbVar13 >> 4);
      (*unaff_r10)();
      FUN_000098ec(*pbVar13 & 0xf);
      (*unaff_r10)();
      unaff_r7 = unaff_r7 - 1;
      pbVar13 = pbVar13 + 1;
    } while (0 < (int)unaff_r7);
    FUN_0000bae2();
    return;
  case 0x49:
    uVar10 = 0;
    uVar5 = *unaff_r11;
    uVar12 = 8;
    uVar19 = 0;
    if (uVar5 != 0) {
      uVar6 = 0;
      uVar7 = uVar6;
      do {
        for (; (uVar6 < 8 && (*(short *)(uVar5 + uVar6 * 2) == 0)); uVar6 = uVar6 + 1 & 0xff) {
        }
        uVar15 = uVar6 - uVar7;
        if ((1 < (int)uVar15) && ((int)uVar10 < (int)uVar15)) {
          uVar10 = uVar15 & 0xff;
          uVar12 = uVar7;
        }
        uVar6 = uVar6 + 1 & 0xff;
        uVar7 = uVar6;
      } while (uVar6 < 8);
      uVar6 = 0;
      pcVar11 = (char *)register0x00000064;
      if (uVar12 != 0) goto LAB_0000bca2;
      do {
        if (uVar6 == 0) {
          (&stack0x00000000)[uVar19] = 0x3a;
          uVar19 = uVar19 + 1 & 0xff;
        }
        (&stack0x00000000)[uVar19] = 0x3a;
        uVar19 = uVar19 + 1 & 0xff;
        uVar6 = (uVar12 + uVar10) - 1 & 0xff;
        while( true ) {
          uVar6 = uVar6 + 1 & 0xff;
          if (7 < uVar6) {
            (&stack0x00000000)[uVar19] = unaff_r9;
            goto LAB_0000bd90;
          }
          if (uVar6 == uVar12) break;
LAB_0000bca2:
          bVar3 = *(byte *)(uVar5 + uVar6 * 2);
          uVar10 = (uint)bVar3;
          bVar4 = *(byte *)(uVar5 + uVar6 * 2 + 1);
          if ((bVar3 & 0xf0) != 0) {
            iVar16 = FUN_000098ec((int)uVar10 >> 4);
            (&stack0x00000000)[uVar19] = (char)iVar16;
            uVar19 = uVar19 + 1 & 0xff;
          }
          if (uVar10 == 0) {
            if ((bVar4 & 0xf0) != 0) goto LAB_0000bcfa;
          }
          else {
            iVar16 = FUN_000098ec(uVar10 & 0xf);
            (&stack0x00000000)[uVar19] = (char)iVar16;
            uVar19 = uVar19 + 1 & 0xff;
LAB_0000bcfa:
            iVar16 = FUN_000098ec((int)(uint)bVar4 >> 4);
            (&stack0x00000000)[uVar19] = (char)iVar16;
            uVar19 = uVar19 + 1 & 0xff;
          }
          iVar16 = FUN_000098ec(bVar4 & 0xf);
          (&stack0x00000000)[uVar19] = (char)iVar16;
          uVar19 = uVar19 + 1 & 0xff;
          uVar5 = extraout_r1;
          uVar6 = extraout_r2;
          uVar10 = extraout_r3;
          pcVar11 = extraout_r4;
          uVar12 = extraout_r5;
          if ((int)extraout_r2 < 7) {
            (&stack0x00000000)[uVar19] = 0x3a;
            uVar19 = uVar19 + 1 & 0xff;
          }
        }
      } while( true );
    }
    break;
  case 0x58:
  case 0x78:
    goto LAB_0000be5a;
  case 99:
    unaff_r11 = unaff_r11 + 1;
  default:
    goto LAB_0000bbe4;
  case 100:
    pcVar11 = &stack0x00000018;
    uVar5 = *unaff_r11;
    if ((int)uVar5 < 0) {
      (*unaff_r10)();
      uVar5 = -uVar5;
    }
    else if (bVar2) {
      (*unaff_r10)();
    }
    FUN_0000b844(uVar5,pcVar11);
    goto LAB_0000bd90;
  case 0x65:
    iVar16 = 0;
    uVar5 = *unaff_r11;
    while( true ) {
      FUN_000098ec((int)(uint)*(byte *)(uVar5 + iVar16) >> 4);
      (*unaff_r10)();
      FUN_000098ec(*(byte *)(uVar5 + iVar16) & 0xf);
      (*unaff_r10)();
      iVar16 = iVar16 + 1;
      if (5 < iVar16) break;
      if (0 < iVar16) {
        (*unaff_r10)();
      }
    }
    FUN_0000bae2();
    return;
  case 0x68:
  case 0x70:
    (*unaff_r10)();
    (*unaff_r10)();
    bVar4 = *unaff_r6;
    if ((bVar4 == 0x70) || (bVar4 == 0x48)) {
      unaff_r7 = 8;
      uVar8 = 0x30;
    }
LAB_0000be5a:
    pcVar11 = &stack0x00000014;
    bVar2 = false;
    if (bVar4 == 0x58) {
      iVar16 = 0x10;
      uVar5 = *unaff_r11;
      uVar19 = unaff_r11[1];
    }
    else {
      iVar16 = 8;
      uVar5 = *unaff_r11;
      uVar19 = 0;
    }
    iVar14 = 0;
    pcVar17 = pcVar11;
    pcVar18 = pcVar11;
    if (iVar16 != 0) {
      do {
        if (iVar16 == 0x10) {
          iVar9 = 0x3c;
        }
        else {
          iVar9 = 0x1c;
        }
        uVar20 = FUN_0000036e(uVar5,uVar19,iVar9);
        uVar10 = uVar5 >> 0x1c;
        uVar5 = uVar5 << 4;
        uVar19 = uVar19 << 4 | uVar10;
        if (((uint)uVar20 != 0 || bVar2) || (pcVar18 = pcVar17, iVar14 == 7)) {
          iVar9 = FUN_000098ec((uint)uVar20);
          pcVar18 = pcVar17 + 1;
          *pcVar17 = (char)iVar9;
          bVar2 = true;
        }
        iVar14 = iVar14 + 1;
        pcVar17 = pcVar18;
      } while (iVar14 < iVar16);
    }
    *pcVar18 = unaff_r9;
    goto LAB_0000bd90;
  case 0x69:
    uVar5 = *unaff_r11;
    iVar16 = 0;
    do {
      FUN_0000b844(uVar5 >> 0x18,&stack0x00000024);
      FUN_000099ea((int)unaff_r8,unaff_r10,uVar8,unaff_r7,&stack0x00000024);
      if (iVar16 < 3) {
        (*unaff_r10)();
      }
      uVar5 = uVar5 << 8;
      iVar16 = iVar16 + 1;
    } while (iVar16 < 4);
    FUN_0000bae2();
    return;
  case 0x73:
    pcVar11 = (char *)*unaff_r11;
    if (pcVar11 != (char *)0x0) goto LAB_0000bd90;
    break;
  case 0x75:
    pcVar11 = &stack0x0000001c;
    FUN_0000b844(*unaff_r11,pcVar11);
    goto LAB_0000bd90;
  }
  pcVar11 = &LAB_0000bf14;
LAB_0000bd90:
  FUN_000099ea((int)unaff_r8,unaff_r10,uVar8,unaff_r7,pcVar11);
  FUN_0000bae2();
  return;
}

