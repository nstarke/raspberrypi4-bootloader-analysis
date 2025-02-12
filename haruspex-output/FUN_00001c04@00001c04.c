
void FUN_00001c04(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int unaff_gp;
  
  uVar2 = FUN_00001d7e((int)param_1,param_2,param_3);
  uVar2 = uVar2 >> 0x14 & 0x3ff;
  uVar5 = **(uint **)(param_1 + 0x2c) & 0x3ff;
  iVar4 = 1;
  if (uVar2 <= uVar5) {
    iVar4 = -1;
  }
  FUN_00002378((char *)param_1);
  if (uVar2 != uVar5) {
    puVar3 = *(uint **)(param_1 + 0x2c);
    do {
      uVar5 = uVar5 + iVar4;
      *puVar3 = uVar5 & 0x3ff | *puVar3 & 0xfffffc00 | 0x5a000000;
    } while (uVar2 != uVar5);
  }
  FUN_000026b6();
  bVar1 = *param_1;
  *(uint *)(&LAB_00003170 + (uint)bVar1 * 8 + unaff_gp) = param_2;
  *(uint *)((int)(&LAB_00003170 + (uint)bVar1 * 8 + unaff_gp) + 4) = param_3;
  return;
}

