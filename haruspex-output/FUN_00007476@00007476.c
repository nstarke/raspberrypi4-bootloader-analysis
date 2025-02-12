
undefined4 FUN_00007476(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x2711) {
    if (*(uint *)(param_1 + 4) < param_2) {
      puVar1 = (undefined4 *)FUN_00005872(param_2,8);
      if (puVar1 == (undefined4 *)0x0) goto LAB_00007496;
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        FUN_00007dca(puVar1,*(undefined4 **)(param_1 + 8),*(int *)(param_1 + 4) << 3);
        FUN_0000798c(*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4));
        FUN_00005972(*(undefined4 **)(param_1 + 8));
      }
      *(uint *)(param_1 + 4) = param_2;
      *(undefined4 **)(param_1 + 8) = puVar1;
    }
    uVar2 = 0;
  }
  else {
LAB_00007496:
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}

