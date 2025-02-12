
/* WARNING: Removing unreachable block (ram,0x000021da) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00001fbe(uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined3 extraout_var;
  float fVar5;
  float fVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  uint extraout_r4;
  uint extraout_r4_00;
  undefined4 extraout_r4_01;
  undefined4 extraout_r4_02;
  undefined4 extraout_r4_03;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined4 extraout_r5_02;
  undefined4 extraout_r5_03;
  uint uVar9;
  int iVar10;
  int unaff_gp;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined8 local_30;
  
  uVar11 = CONCAT44(param_3,param_2);
  pbVar3 = FUN_00001ed0(param_1);
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  if (*(byte **)(pbVar3 + 0xc) == (byte *)0x0) {
    *(uint *)(pbVar3 + 0x24) = param_2;
    *(uint *)(pbVar3 + 0x28) = param_3;
    return 0;
  }
  FUN_000023ac(*(byte **)(pbVar3 + 0xc),extraout_r1,extraout_r2,extraout_r3,extraout_r4,extraout_r5)
  ;
  if (param_1 == 0x51) {
    FUN_000023ac(*(byte **)(*(int *)(unaff_gp + 0xfc) + 0x10),extraout_r1_00,extraout_r2_00,
                 extraout_r3_00,extraout_r4_00,extraout_r5_00);
  }
  uVar4 = *(uint *)(pbVar3 + 0x28);
  if ((uVar4 == param_3 && *(uint *)(pbVar3 + 0x24) == param_2) &&
     (*(int *)((int)(&LAB_00003170 + (uint)**(byte **)(pbVar3 + 0xc) * 8 + unaff_gp) + 4) ==
      *(int *)(pbVar3 + 0x30) &&
      *(int *)(&LAB_00003170 + (uint)**(byte **)(pbVar3 + 0xc) * 8 + unaff_gp) ==
      *(int *)(pbVar3 + 0x2c))) {
    return 0;
  }
  if (*(int *)(pbVar3 + 0x1c) != 0) {
    uVar4 = uVar4 | *(uint *)(pbVar3 + 0x24);
  }
  if (*(int *)(pbVar3 + 0x1c) != 0 && uVar4 != 0) {
    return 0;
  }
  bVar2 = FUN_00001ebe(*(char **)(pbVar3 + 0xc));
  if (CONCAT31(extraout_var,bVar2) == 0) {
    if (param_3 == 0 && param_2 == 0) {
      **(undefined4 **)(pbVar3 + 4) = 0x5a000001;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 0;
      pbVar3[0x25] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
      pbVar3[0x28] = 0;
      pbVar3[0x29] = 0;
      pbVar3[0x2a] = 0;
      pbVar3[0x2b] = 0;
      return 0;
    }
    if (*(char *)(*(int *)(pbVar3 + 0xc) + 0x1c) == '\x01') {
      iVar10 = *(int *)(pbVar3 + 0x10);
      local_34 = 0;
      FUN_00001d34((int)pbVar3,param_2,param_3,&local_30,&local_34);
      bVar2 = false;
      uVar13 = FUN_00000224((uint)local_30,local_30._4_4_,local_34,0);
      uVar4 = (uint)(uVar13 >> 0x20);
      *(ulonglong *)(*(int *)(*(int *)(pbVar3 + 0xc) + 0x58) + iVar10 * 0x28 + 0x14) = uVar13;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      uVar9 = (uint)(uVar1 >> 0x20);
      FUN_00001db6((uint)*pbVar3,&uStack_38,&local_3c);
      fVar5 = (float)FUN_0000011a((uint)uVar13,uVar4);
      fVar6 = (float)FUN_0000011a((uint)uVar1,uVar9);
      uVar7 = FUN_0000b824(fVar5 / fVar6,local_3c);
      if ((*(uint *)(pbVar3 + 0x20) < uVar7) && ((**(uint **)(pbVar3 + 4) & 0xf) != 1)) {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_000022ae(pbVar3,(uint)uVar13,uVar4,(uint)uVar1,uVar9);
      }
      pbVar8 = *(byte **)(pbVar3 + 0xc);
      uVar7 = *(uint *)(&LAB_00003170 + (uint)*pbVar8 * 8 + unaff_gp) ^ (uint)local_30;
      uVar4 = *(uint *)(*(int *)(pbVar8 + 0x58) + iVar10 * 0x28 + 0x10);
      if ((*(uint *)((int)(&LAB_00003170 + (uint)*pbVar8 * 8 + unaff_gp) + 4) != local_30._4_4_ ||
          uVar7 != 0) || local_34 != uVar4) {
        if (uVar4 < local_34) {
          FUN_00001c60((uint)pbVar8,(uint)local_30,local_30._4_4_,uVar4,uVar7,local_34);
          FUN_00001c04(*(byte **)(pbVar3 + 0xc),(uint)local_30,local_30._4_4_);
        }
        else {
          FUN_00001c04(pbVar8,(uint)local_30,local_30._4_4_);
          FUN_00001c60(*(uint *)(pbVar3 + 0xc),(uint)local_30,local_30._4_4_,extraout_r3_03,
                       extraout_r4_03,extraout_r5_03);
        }
      }
      if (bVar2) {
        return 0;
      }
    }
    else {
      if (*(char *)(*(int *)(pbVar3 + 0xc) + 0x1c) != '\0') {
        return 0;
      }
      FUN_00001db6((uint)*pbVar3,(uint *)((int)&local_30 + 4),(undefined4 *)&local_30);
      uVar13 = FUN_00001e54(*(byte **)(pbVar3 + 0xc),*(uint *)(pbVar3 + 0x10));
      uVar1 = uVar11;
    }
    FUN_000022ae(pbVar3,(uint)uVar13,(uint)(uVar13 >> 0x20),(uint)uVar1,(uint)(uVar1 >> 0x20));
    return 0;
  }
  uVar4 = **(uint **)(*(int *)(pbVar3 + 0xc) + 100);
  if (param_3 == 0 && param_2 == 0) {
    return 0;
  }
  FUN_00001cae((int)pbVar3,param_2,param_3,&local_30,&local_34);
  pbVar8 = *(byte **)(pbVar3 + 0xc);
  if (uVar4 < local_34) {
    **(uint **)(pbVar8 + 100) = local_34;
    FUN_0000bf38((uint)*pbVar8,0);
    FUN_00001c60(*(uint *)(pbVar3 + 0xc),(uint)local_30,local_30._4_4_,extraout_r3_01,extraout_r4_01
                 ,extraout_r5_01);
    FUN_0000bf98((uint)**(byte **)(pbVar3 + 0xc));
    FUN_00001c04(*(byte **)(pbVar3 + 0xc),(uint)local_30,local_30._4_4_);
  }
  else {
    FUN_00001c04(pbVar8,(uint)local_30,local_30._4_4_);
    pbVar8 = *(byte **)(pbVar3 + 0xc);
    **(uint **)(pbVar8 + 100) = local_34;
    if (uVar4 == local_34) goto LAB_000020ec;
    FUN_0000bf38((uint)*pbVar8,0);
    FUN_00001c60(*(uint *)(pbVar3 + 0xc),(uint)local_30,local_30._4_4_,extraout_r3_02,extraout_r4_02
                 ,extraout_r5_02);
    FUN_0000bf98((uint)**(byte **)(pbVar3 + 0xc));
  }
  pbVar8 = *(byte **)(pbVar3 + 0xc);
  local_34 = **(uint **)(pbVar8 + 100);
LAB_000020ec:
  uVar11 = FUN_00000224(*(uint *)(&LAB_00003170 + (uint)*pbVar8 * 8 + unaff_gp),
                        *(uint *)((int)(&LAB_00003170 + (uint)*pbVar8 * 8 + unaff_gp) + 4),local_34,
                        0);
  iVar10 = (int)(uVar11 >> 0x20);
  *(ulonglong *)(pbVar3 + 0x24) = uVar11;
  if (*pbVar3 == 0x30) {
    if ((iVar10 == 0) && ((uint)uVar11 < 2000000000)) {
      uVar4 = 0x5a;
    }
    else {
      uVar4 = 0x4b;
    }
    uVar7 = uVar4;
    if (uVar4 < 0x29) {
      uVar7 = 0x28;
    }
    if (uVar7 < 0x78) {
      if (uVar4 < 0x29) {
        uVar4 = 0x28;
      }
    }
    else {
      uVar4 = 0x78;
    }
    uVar12 = FUN_0000039c(uVar4,0,(uint)uVar11,iVar10);
    uVar11 = FUN_00000224((uint)uVar12,(uint)((ulonglong)uVar12 >> 0x20),100,0);
    FUN_00001fbe(0x4e,(uint)uVar11,(uint)(uVar11 >> 0x20));
  }
  return 0;
}

