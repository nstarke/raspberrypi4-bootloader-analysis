
void FUN_00007450(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      FUN_0000798c((undefined4 *)param_1[2],param_1[1]);
      FUN_00005972((undefined4 *)param_1[2]);
    }
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

