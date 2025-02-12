
void FUN_00007e18(undefined4 *param_1,undefined param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (7 < param_3) {
    uVar1 = (uint)param_1 & 3;
    while (uVar1 != 0) {
      *(undefined *)param_1 = param_2;
      param_3 = param_3 - 1;
      uVar1 = (uint)((int)param_1 + 1) & 3;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    uVar1 = param_3 >> 2;
    param_3 = param_3 & 3;
    puVar2 = param_1;
    do {
      param_1 = puVar2 + 1;
      *puVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar1 = uVar1 - 1;
      puVar2 = param_1;
    } while (uVar1 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined *)param_1 = param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}

