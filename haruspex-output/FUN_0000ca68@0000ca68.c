
undefined4 FUN_0000ca68(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r4;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_0000b8a2();
  uVar2 = (**(code **)(iVar1 + 0x84))(extraout_r4);
  *param_2 = uVar2;
  return 0;
}

