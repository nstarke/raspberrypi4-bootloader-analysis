
undefined4 FUN_00006cb2(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 extraout_r5;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_94;
  undefined4 local_90;
  int aiStack_84 [2];
  undefined4 *local_7c;
  int aiStack_78 [2];
  undefined4 *local_70;
  undefined4 auStack_6c [2];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  local_90 = 0;
  iVar2 = FUN_00006b48(param_4,0,0);
  if (iVar2 == 0) {
    local_90 = 0xfffffff4;
  }
  else {
    FUN_000074be(&local_54);
    FUN_000074be(&local_60);
    FUN_000074be(auStack_6c);
    FUN_000074be(aiStack_78);
    FUN_000074be(aiStack_84);
    iVar2 = FUN_00006aaa((int)param_3,(int)param_4);
    if (iVar2 < 0) {
      if (param_1 != (int *)0x0) {
        FUN_000074ca(param_1,0,0);
      }
      if (param_2 != (int *)0x0) {
        FUN_00006c4e(param_2,param_3);
      }
      local_90 = 0;
    }
    else {
      FUN_00006c4e(&local_54,param_3);
      FUN_00006c4e(&local_60,param_4);
      local_60 = 1;
      local_54 = 1;
      FUN_00007476((int)auStack_6c,param_3[1] + 2);
      FUN_000074ca(auStack_6c,0,0);
      FUN_00007476((int)aiStack_78,2);
      FUN_00007476((int)aiStack_84,3);
      uVar3 = FUN_00006a70((int)&local_60);
      if ((uVar3 & 0x3f) < 0x3f) {
        local_94 = 0x3f - (uVar3 & 0x3f);
        FUN_000076d0((int)&local_54,local_94);
        FUN_000076d0((int)&local_60,local_94);
      }
      else {
        local_94 = 0;
      }
      uVar16 = local_50 - 1;
      uVar17 = local_5c - 1;
      uVar3 = (uVar16 - uVar17) * 0x40;
      FUN_000076d0((int)&local_60,uVar3);
      while (iVar2 = FUN_00006b96(&local_54,&local_60), -1 < iVar2) {
        piVar4 = (int *)(local_64 + (uVar16 - uVar17) * 8);
        iVar2 = *piVar4;
        iVar18 = piVar4[1];
        *piVar4 = iVar2 + 1;
        if (iVar2 == -1) {
          iVar18 = iVar18 + 1;
        }
        piVar4[1] = iVar18;
        FUN_000078ba(&local_54,&local_54,&local_60);
      }
      FUN_00007796(&local_60,uVar3);
      if (uVar17 < uVar16) {
        iVar18 = (uVar16 - uVar17) * 8;
        uVar3 = (uVar16 - uVar17) * 0x40;
        iVar2 = uVar16 * 8;
        do {
          uVar3 = uVar3 - 0x40;
          puVar10 = (uint *)(local_4c + iVar2);
          puVar8 = (uint *)(local_58 + uVar17 * 8);
          uVar6 = puVar10[1];
          uVar14 = puVar8[1];
          uVar1 = *puVar8;
          if ((uVar6 < uVar14) || ((uVar6 == uVar14 && (*puVar10 < uVar1)))) {
            uVar20 = FUN_000059de(*puVar10,uVar6,puVar10[-2],puVar10[-1],uVar1,uVar14,
                                  (ulonglong *)0x0);
            *(undefined8 *)(local_64 + iVar18 + -8) = uVar20;
          }
          else {
            *(undefined4 *)(local_64 + iVar18 + -8) = 0xffffffff;
            *(undefined4 *)(local_64 + iVar18 + -4) = 0xffffffff;
          }
          iVar11 = local_64 + iVar18;
          iVar13 = *(int *)(iVar11 + -8);
          iVar5 = *(int *)(iVar11 + -4);
          *(int *)(iVar11 + -8) = iVar13 + 1;
          if (iVar13 == -1) {
            iVar5 = iVar5 + 1;
          }
          *(int *)(iVar11 + -4) = iVar5;
          do {
            iVar11 = local_64 + iVar18;
            iVar13 = *(int *)(iVar11 + -8);
            iVar5 = *(int *)(iVar11 + -4);
            *(int *)(iVar11 + -8) = iVar13 + -1;
            if (iVar13 == 0) {
              iVar5 = iVar5 + -1;
            }
            *(int *)(iVar11 + -4) = iVar5;
            FUN_000074ca(aiStack_78,0,0);
            if (uVar17 == 0) {
              uVar7 = 0;
              uVar9 = 0;
            }
            else {
              iVar13 = local_58 + uVar17 * 8;
              uVar7 = *(undefined4 *)(iVar13 + -8);
              uVar9 = *(undefined4 *)(iVar13 + -4);
            }
            *local_70 = uVar7;
            local_70[1] = uVar9;
            puVar12 = (undefined4 *)(local_58 + uVar17 * 8);
            uVar7 = puVar12[1];
            local_70[2] = *puVar12;
            local_70[3] = uVar7;
            FUN_0000757e(aiStack_78,aiStack_78,*(undefined4 *)(local_64 + iVar18 + -8),
                         *(undefined4 *)(local_64 + iVar18 + -4));
            FUN_000074ca(aiStack_84,0,0);
            if (uVar16 < 2) {
              uVar7 = 0;
              uVar9 = 0;
            }
            else {
              uVar7 = *(undefined4 *)(local_4c + iVar2 + -0x10);
              uVar9 = *(undefined4 *)(local_4c + iVar2 + -0xc);
            }
            bVar19 = uVar16 == 0;
            uVar15 = extraout_r5;
            if (bVar19) {
              uVar15 = 0;
            }
            *local_7c = uVar7;
            local_7c[1] = uVar9;
            if (bVar19) {
              uVar7 = 0;
            }
            puVar12 = (undefined4 *)(local_4c + iVar2);
            if (!bVar19) {
              uVar15 = puVar12[-2];
              uVar7 = puVar12[-1];
            }
            local_7c[2] = uVar15;
            local_7c[3] = uVar7;
            uVar7 = puVar12[1];
            local_7c[4] = *puVar12;
            local_7c[5] = uVar7;
            iVar13 = FUN_00006b96(aiStack_78,aiStack_84);
          } while (0 < iVar13);
          FUN_0000757e(aiStack_78,&local_60,*(undefined4 *)(local_64 + iVar18 + -8),
                       *(undefined4 *)(local_64 + iVar18 + -4));
          FUN_000076d0((int)aiStack_78,uVar3);
          FUN_000078ba(&local_54,&local_54,aiStack_78);
          iVar13 = FUN_00006b48(&local_54,0,0);
          if (iVar13 < 0) {
            FUN_00006c4e(aiStack_78,&local_60);
            FUN_000076d0((int)aiStack_78,uVar3);
            FUN_00006a26(&local_54,&local_54,aiStack_78);
            iVar11 = local_64 + iVar18;
            iVar13 = *(int *)(iVar11 + -8);
            iVar5 = *(int *)(iVar11 + -4);
            *(int *)(iVar11 + -8) = iVar13 + -1;
            if (iVar13 == 0) {
              iVar5 = iVar5 + -1;
            }
            *(int *)(iVar11 + -4) = iVar5;
          }
          iVar18 = iVar18 + -8;
          iVar2 = iVar2 + -8;
          uVar16 = uVar16 - 1;
        } while (uVar17 < uVar16);
      }
      if (param_1 != (int *)0x0) {
        FUN_00006c4e(param_1,auStack_6c);
        *param_1 = *param_4 * *param_3;
      }
      if (param_2 != (int *)0x0) {
        FUN_00007796(&local_54,local_94);
        local_54 = *param_3;
        FUN_00006c4e(param_2,&local_54);
        iVar2 = FUN_00006b48(param_2,0,0);
        if (iVar2 == 0) {
          *param_2 = 1;
        }
      }
      FUN_00007450(&local_54);
      FUN_00007450(&local_60);
      FUN_00007450(auStack_6c);
      FUN_00007450(aiStack_78);
      FUN_00007450(aiStack_84);
    }
  }
  return local_90;
}

