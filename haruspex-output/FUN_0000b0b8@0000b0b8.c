
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000b0b8(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int unaff_gp;
  bool bVar5;
  undefined4 local_28;
  int local_24;
  
  puVar3 = (uint *)(&DAT_00002f14 + unaff_gp);
  if (*puVar3 != 0) {
    *puVar3 = *puVar3 | 1;
  }
  *puVar3 = *puVar3 | _DAT_7c0000b4 & 0x80000000;
  iVar1 = FUN_0000b8a2();
  uVar2 = (**(code **)(iVar1 + 0x84))(0x16,*(code **)(iVar1 + 0x84));
  bVar5 = (uVar2 & 0x4000) != 0;
  if (bVar5) {
    uVar2 = uVar2 >> 6 & 0xf;
  }
  if (bVar5 && uVar2 != 0) {
    *puVar3 = *puVar3 | 4;
  }
  iVar4 = 0x25;
  iVar1 = 8;
  do {
    local_24 = 0;
    local_28 = 0;
    FUN_0000ca68(iVar4,&local_24,&local_28);
    if (local_24 != 0) {
      uVar2 = *puVar3 | 8;
      *puVar3 = uVar2;
      goto LAB_0000b134;
    }
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  uVar2 = *puVar3;
LAB_0000b134:
  if (uVar2 != 0) {
    _DAT_7c0000b4 = _DAT_7c0000b4 | 0x80000000;
    uVar2 = *puVar3;
  }
  if ((uVar2 & 0xe) != 0) {
    *(uint *)(unaff_gp + 0x2d0) = *(uint *)(unaff_gp + 0x2d0) | 0x80;
    uVar2 = *puVar3;
  }
  return uVar2;
}

