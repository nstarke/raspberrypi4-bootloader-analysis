
undefined4 FUN_00007672(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((param_3 & 7) != 0) + (param_3 >> 3);
  if (uVar1 != param_1[1]) {
    FUN_00007450(param_1);
    FUN_000074be(param_1);
    FUN_00007476((int)param_1,uVar1);
  }
  FUN_000074ca(param_1,0,0);
  if (param_2 != (undefined4 *)0x0) {
    FUN_00007dca((undefined4 *)(param_1[2] + (uVar1 * 8 - param_3)),param_2,param_3);
    FUN_00009188((uint *)param_1[2],uVar1);
  }
  return 0;
}

