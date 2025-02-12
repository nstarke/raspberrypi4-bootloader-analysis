
undefined4
FUN_0000c67c(int param_1,uint param_2,undefined4 *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint unaff_r7;
  bool bVar4;
  bool bVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c;
  
  local_34 = DAT_0000ed20;
  local_30 = DAT_0000ed24;
  local_2c = DAT_0000ed28;
  if (param_1 == 0) {
    if (param_4 < param_2) {
      return 0xffffbf80;
    }
    iVar1 = -param_2;
  }
  else {
    if (0x7f < param_2 + 0x11) {
      return 0xffffbf80;
    }
    uVar2 = param_2 + 10;
    bVar4 = param_2 == uVar2;
    bVar5 = param_2 < uVar2;
    if (param_2 <= uVar2) {
      unaff_r7 = param_2 + 0x13;
      bVar4 = uVar2 == unaff_r7;
      bVar5 = uVar2 < unaff_r7;
    }
    if (!bVar5 && !bVar4) {
      return 0xffffbf80;
    }
    if (param_4 < unaff_r7) {
      return 0xffffbf80;
    }
    iVar1 = -unaff_r7;
  }
  if (10 < param_4 + iVar1) {
    *(undefined *)param_5 = 0;
    uVar2 = (param_4 + iVar1) - 3;
    *(undefined *)((int)param_5 + 1) = 1;
    puVar3 = (undefined *)((int)param_5 + 2 + uVar2);
    FUN_00007e18((undefined4 *)((int)param_5 + 2),0xff,uVar2);
    *puVar3 = 0;
    if (param_1 == 0) {
      FUN_00007dca((undefined4 *)(puVar3 + 1),param_3,param_2);
      return 0;
    }
    puVar3[1] = 0x30;
    puVar3[2] = (char)param_2 + '\x11';
    puVar3[3] = 0x30;
    puVar3[4] = 0xd;
    puVar3[5] = 6;
    puVar3[6] = 9;
    FUN_00007dca((undefined4 *)(puVar3 + 7),&local_34,9);
    puVar3[0x10] = 5;
    puVar3[0x11] = 0;
    puVar3[0x12] = 4;
    puVar3[0x13] = (char)param_2;
    FUN_00007dca((undefined4 *)(puVar3 + 0x14),param_3,param_2);
    if (param_2 + (int)(puVar3 + 0x14) == (int)param_5 + param_4) {
      return 0;
    }
    FUN_0000798c(param_5,param_4);
  }
  return 0xffffbf80;
}

