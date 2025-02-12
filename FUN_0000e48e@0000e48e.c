
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0000e48e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_gp;
  uint uStack_14;
  
  puVar3 = (undefined4 *)(unaff_gp + 0x4f48);
  FUN_0000e460(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(int *)(unaff_gp + 0x11c) == 0) {
    *(undefined4 *)(unaff_gp + 0x11c) = 1;
    FUN_00007e18(puVar3,0,900);
    *(undefined4 *)(&DAT_00005188 + unaff_gp) = 0x200;
    if (param_1 != 0) {
      FUN_00003d20(1);
      FUN_00005754(1);
    }
    _DAT_7c480088 = _DAT_7c480088 | 0x30000;
  }
  _DAT_7c480804 = _DAT_7c480804 & 0xfffffffd;
  FUN_0000dfdc(s_BOOT_ORDER_override__0x_08x_00001018 + unaff_gp + 0x16,*(uint *)(unaff_gp + 0xa4));
  cVar1 = (&DAT_00005190)[unaff_gp];
  while( true ) {
    if (cVar1 == '\x04') {
      (&DAT_00005191)[unaff_gp] = 4;
      return puVar3;
    }
    iVar2 = FUN_000019d4((int)puVar3,&uStack_14);
    iVar2 = FUN_0000dd70((int)puVar3,(iVar2 << 0x19) >> 0x19);
    if (iVar2 != 0) break;
    cVar1 = (&DAT_00005190)[unaff_gp];
  }
  return (undefined4 *)0x0;
}

