
void FUN_0000a48c(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r4;
  undefined4 extraout_r5;
  int unaff_gp;
  
  bVar2 = FUN_00000666();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    _write_to_stdout((byte *)s_Halt__power_off___u_0000a4c0,param_2,extraout_r2,extraout_r3,
                     extraout_r4,extraout_r5);
    uVar3 = FUN_0000e072();
    if (param_2 == 0) {
      FUN_0000053c(1);
    }
    else {
      pcVar1 = *(code **)(*(int *)(unaff_gp + 0x124) + 0x78);
      (*pcVar1)(uVar3,pcVar1);
    }
  }
  return;
}

