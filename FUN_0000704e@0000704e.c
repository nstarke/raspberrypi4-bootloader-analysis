
/* WARNING: Removing unreachable block (ram,0x00007350) */

undefined4 FUN_0000704e(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int extraout_r4;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  int local_74 [3];
  undefined4 auStack_68 [3];
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  
  puVar2 = (undefined4 *)FUN_00005872(0x80,0xc);
  iVar3 = FUN_00006b48(param_4,0,0);
  iVar7 = 0;
  if (((iVar3 < 1) || ((*(uint *)param_4[2] & 1) == 0)) ||
     (iVar3 = FUN_00006b48(param_3,0,0), iVar3 < 0)) {
    return 0xfffffffc;
  }
  FUN_000091bc((int *)&local_50,(int)param_4);
  FUN_000074be(&local_5c);
  FUN_000074be(auStack_68);
  FUN_000074be(local_74);
  FUN_00007e18(puVar2,0,0xc);
  uVar4 = FUN_00006a70((int)param_3);
  if (uVar4 < 0x2a0) {
    if (uVar4 < 0xf0) {
      if (uVar4 < 0x50) {
        uVar13 = 3;
        if (uVar4 < 0x18) {
          uVar13 = 1;
        }
      }
      else {
        uVar13 = 4;
      }
    }
    else {
      uVar13 = 5;
    }
  }
  else {
    uVar13 = 6;
  }
  iVar3 = param_4[1];
  if (6 < uVar13) {
    uVar13 = 6;
  }
  FUN_00007476((int)param_1,iVar3 + 1);
  FUN_00007476((int)(puVar2 + 3),iVar3 + 1);
  FUN_00007476((int)auStack_68,iVar3 * 2 + 2);
  iVar3 = *param_2;
  if (iVar3 == -1) {
    FUN_00006c4e(local_74,param_2);
    local_74[0] = 1;
    param_2 = local_74;
  }
  if ((param_5 == (int *)0x0) || (param_5[2] == 0)) {
    FUN_000074ca(&local_5c,1,0);
    FUN_000076d0((int)&local_5c,param_4[1] << 7);
    FUN_00007520(&local_5c,&local_5c,param_4);
    if (param_5 != (int *)0x0) {
      *param_5 = local_5c;
      param_5[1] = local_58;
      param_5[2] = local_54;
    }
  }
  else {
    local_5c = *param_5;
    local_58 = param_5[1];
    local_54 = param_5[2];
  }
  iVar5 = FUN_00006b96(param_2,param_4);
  if (iVar5 < 0) {
    FUN_00006c4e(puVar2 + 3,param_2);
  }
  else {
    FUN_00007520(puVar2 + 3,param_2,param_4);
  }
  FUN_00009222((int)(puVar2 + 3),(int)&local_5c,(int)param_4,local_50,local_4c,(int)auStack_68);
  FUN_00006c4e(param_1,&local_5c);
  uVar4 = uVar13 - 1;
  FUN_00009336((int)param_1,(int)param_4,local_50,local_4c,(int)auStack_68);
  uVar12 = 1 << uVar4;
  if (1 < uVar13) {
    uVar11 = 0;
    FUN_00007476((int)(puVar2 + uVar12 * 3),param_4[1] + 1);
    FUN_00006c4e(puVar2 + uVar12 * 3,puVar2 + 3);
    if (uVar4 != 0) {
      do {
        FUN_00009222((int)(puVar2 + uVar12 * 3),(int)(puVar2 + uVar12 * 3),(int)param_4,local_50,
                     local_4c,(int)auStack_68);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar4);
    }
    uVar4 = uVar12 + 1;
    if (uVar4 < (uint)(1 << uVar13)) {
      puVar8 = puVar2 + uVar12 * 3 + 3;
      puVar10 = puVar8 + -3;
      do {
        FUN_00007476((int)puVar8,param_4[1] + 1);
        FUN_00006c4e(puVar8,puVar10);
        FUN_00009222((int)puVar8,(int)(puVar2 + 3),(int)param_4,local_50,local_4c,(int)auStack_68);
        puVar8 = puVar8 + 3;
        puVar10 = puVar10 + 3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(1 << uVar13));
    }
  }
  uVar4 = 1 << uVar13;
  iVar5 = param_3[1];
  iVar9 = 0;
  do {
    uVar11 = 0;
    uVar14 = 0;
    do {
      while( true ) {
        do {
          if (iVar9 == 0) {
            if (iVar5 == 0) {
              uVar13 = 0;
              if (uVar11 != 0) {
                do {
                  FUN_00009222((int)param_1,(int)param_1,(int)param_4,local_50,local_4c,
                               (int)auStack_68);
                  uVar14 = uVar14 << 1;
                  if ((uVar4 & uVar14) != 0) {
                    FUN_00009222((int)param_1,(int)(puVar2 + 3),(int)param_4,local_50,local_4c,
                                 (int)auStack_68);
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < uVar11);
              }
              FUN_00009336((int)param_1,(int)param_4,local_50,local_4c,(int)auStack_68);
              if (((iVar3 == -1) && (param_3[1] != 0)) && ((*(uint *)param_3[2] & 1) != 0)) {
                *param_1 = -1;
                FUN_00006a26(param_1,param_4,param_1);
              }
              if (uVar12 < uVar4) {
                puVar8 = puVar2 + uVar12 * 3;
                do {
                  FUN_00007450(puVar8);
                  uVar12 = uVar12 + 1;
                  puVar8 = puVar8 + 3;
                } while (uVar12 < uVar4);
              }
              FUN_00007450(puVar2 + 3);
              FUN_00007450(auStack_68);
              FUN_00007450(local_74);
              if ((param_5 != (int *)0x0) && (param_5[2] != 0)) {
                return 0;
              }
              FUN_00007450(&local_5c);
              return 0;
            }
            iVar5 = iVar5 + -1;
            iVar9 = 0x40;
          }
          iVar9 = iVar9 + -1;
          puVar6 = (uint *)(param_3[2] + iVar5 * 8);
          uVar16 = FUN_0000036e(*puVar6,puVar6[1],iVar9);
          bVar15 = (uVar16 & 1) == 0;
          iVar1 = extraout_r4;
          if (bVar15) {
            iVar1 = iVar7;
          }
        } while (bVar15 && iVar1 == 0);
        if (((uVar16 & 1) != 0) || (iVar7 != 1)) break;
        FUN_00009222((int)param_1,(int)param_1,(int)param_4,local_50,local_4c,(int)auStack_68);
      }
      uVar11 = uVar11 + 1;
      iVar7 = 2;
      lVar17 = FUN_000003c8((uint)uVar16 & 1,0,uVar13 - uVar11);
      uVar14 = uVar14 | (uint)lVar17;
    } while (uVar13 != uVar11);
    uVar11 = 0;
    if (uVar13 != 0) {
      do {
        FUN_00009222((int)param_1,(int)param_1,(int)param_4,local_50,local_4c,(int)auStack_68);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
    FUN_00009222((int)param_1,(int)(puVar2 + uVar14 * 3),(int)param_4,local_50,local_4c,
                 (int)auStack_68);
    iVar7 = 1;
  } while( true );
}

