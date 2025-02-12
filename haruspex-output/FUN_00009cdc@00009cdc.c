
void FUN_00009cdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  int unaff_gp;
  uint unaff_lr;
  
  _write_to_stderr((byte *)s_Unexpected_error___0x_08x_00009d04,unaff_lr,param_3,param_4,param_5,
                   param_6);
  if (*(int *)(unaff_gp + 0x3d8) == 0) {
    pcVar1 = (code *)swi(0xe);
    (*pcVar1)();
  }
  else {
    FUN_0000a3e8(0x45);
  }
  return;
}

