
void FUN_00007dca(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
    puVar1 = param_2;
    puVar2 = param_1;
    if (3 < param_3) {
      do {
        param_2 = puVar1 + 1;
        param_1 = puVar2 + 1;
        *puVar2 = *puVar1;
        param_3 = param_3 - 4;
        puVar1 = param_2;
        puVar2 = param_1;
      } while (3 < param_3);
    }
  }
  else if (((((uint)param_2 | (uint)param_1) & 1) == 0) &&
          (puVar1 = param_2, puVar2 = param_1, 1 < param_3)) {
    do {
      param_2 = (undefined4 *)((int)puVar1 + 2);
      param_1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = *(undefined2 *)puVar1;
      param_3 = param_3 - 2;
      puVar1 = param_2;
      puVar2 = param_1;
    } while (1 < param_3);
  }
  for (; 0 < (int)param_3; param_3 = param_3 - 1) {
    *(undefined *)param_1 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}

