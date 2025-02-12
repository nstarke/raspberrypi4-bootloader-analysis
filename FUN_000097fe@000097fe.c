
void FUN_000097fe(undefined4 *param_1,undefined *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = (char)((uint)uVar1 >> 0x18);
  param_2[1] = (char)((uint)uVar1 >> 0x10);
  param_2[2] = (char)((uint)uVar1 >> 8);
  param_2[3] = (char)uVar1;
  uVar1 = *param_1;
  param_2[4] = (char)((uint)uVar1 >> 0x18);
  param_2[5] = (char)((uint)uVar1 >> 0x10);
  return;
}

