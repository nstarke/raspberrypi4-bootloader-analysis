
undefined4 FUN_000074ca(undefined4 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_00007476((int)param_1,1);
  FUN_00007e18((undefined4 *)param_1[2],0,param_1[1] << 3);
  uVar3 = param_3;
  if ((int)param_3 < 0) {
    uVar3 = param_2 | -param_2;
    param_2 = -param_2;
    uVar3 = ((int)uVar3 >> 0x1f) - param_3;
  }
  puVar1 = (uint *)param_1[2];
  *puVar1 = param_2;
  puVar1[1] = uVar3;
  if ((int)param_3 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return 0;
}

