
undefined4 FUN_0000d4ba(void)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint *puVar4;
  int unaff_gp;
  
  puVar4 = (uint *)(unaff_gp + 0x10c);
  *puVar4 = 1;
  iVar1 = FUN_0000b8a2();
  fVar2 = (float)(**(code **)(iVar1 + 0x38))(iVar1,*(code **)(iVar1 + 0x38));
  uVar3 = *puVar4;
  while (*(uint *)(unaff_gp + 0x50) < (uint)(int)FLOOR(fVar2) / uVar3) {
    uVar3 = uVar3 << 1;
    *puVar4 = uVar3;
  }
  *(uint *)(unaff_gp + 0xd8) = uVar3;
  if (*(int *)(unaff_gp + 0xd4) == 0) {
    iVar1 = FUN_0000b8a2();
    (**(code **)(iVar1 + 0x24))(1,1,0x100);
    iVar1 = FUN_0000b8a2();
    (**(code **)(iVar1 + 0x24))(2,2,0x100,*(code **)(iVar1 + 0x24));
    iVar1 = FUN_0000b8a2();
    (**(code **)(iVar1 + 0x24))(3,3,0x100);
    iVar1 = FUN_0000b8a2();
    (**(code **)(iVar1 + 0x24))(4,4,0x100,*(code **)(iVar1 + 0x24));
    *(undefined4 *)(unaff_gp + 0xd4) = 1;
  }
  return 0;
}

