
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000042bc(undefined4 *param_1,uint param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_20;
  
  uVar3 = 0;
  if ((_DAT_7d208000 & 0x1fff) == 0) {
    FUN_00009cdc(param_1,param_2,param_3,0,param_5,param_6);
  }
  while (uVar3 < param_2) {
    uVar2 = param_2 - uVar3;
    if (0x40 < uVar2) {
      uVar2 = 0x40;
    }
    uVar3 = uVar3 + uVar2;
    while (puVar1 = param_1, (_DAT_7d208024 & 0xff) < 0x10) {
      FUN_0000bf1c(0x32);
    }
    for (; 4 < (int)uVar2; uVar2 = uVar2 - 4) {
      local_20 = _DAT_7d208020;
      FUN_00007dca(puVar1,&local_20,4);
      puVar1 = puVar1 + 1;
    }
    param_1 = puVar1;
    if (0 < (int)uVar2) {
      param_1 = (undefined4 *)((int)puVar1 + uVar2);
      local_20 = _DAT_7d208020;
      FUN_00007dca(puVar1,&local_20,uVar2);
    }
  }
  *param_3 = param_2;
  return 0;
}

