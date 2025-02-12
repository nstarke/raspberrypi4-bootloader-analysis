
ulonglong FUN_00001e54(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_gp;
  ulonglong uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar4 = 2;
  if (*(int *)(param_1 + 0x50) != 2) {
    uVar4 = 1;
  }
  if (uVar5 == 0) {
    uVar6 = *(ulonglong *)(&LAB_00003170 + (uint)*param_1 * 8 + unaff_gp);
    uVar5 = **(uint **)(param_1 + 100);
  }
  else {
    uVar2 = param_2;
    pbVar1 = param_1;
    if (uVar5 < param_2) {
      pbVar1 = (byte *)0x0;
      uVar2 = 0;
    }
    if (uVar5 < param_2) {
      return CONCAT44(uVar2,pbVar1);
    }
    iVar3 = *(int *)(param_1 + 0x58) + uVar2 * 0x28;
    uVar5 = *(uint *)(iVar3 + 0x10);
    if (uVar5 == 0) {
      return *(ulonglong *)(iVar3 + 0x14);
    }
    uVar6 = FUN_00000224(*(uint *)(&LAB_00003170 + (uint)*pbVar1 * 8 + unaff_gp),
                         *(uint *)((int)(&LAB_00003170 + (uint)*pbVar1 * 8 + unaff_gp) + 4),uVar4,0)
    ;
  }
  uVar6 = FUN_00000224((uint)uVar6,(uint)(uVar6 >> 0x20),uVar5,0);
  return uVar6;
}

