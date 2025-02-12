
int FUN_00007a10(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                uint param_6,undefined param_7 [500])

{
  bool bVar1;
  uint *puVar2;
  undefined3 extraout_var;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 4);
  puVar3 = (uint *)0x0;
  if ((param_4 == 1) && (*(int *)(param_1 + 0xa4) != 0)) {
    iVar5 = -0x4080;
  }
  else {
    puVar2 = (uint *)FUN_00005872(1,uVar4);
    if ((puVar2 == (uint *)0x0) || (puVar3 = (uint *)FUN_00005872(1,uVar4), puVar3 == (uint *)0x0))
    {
      iVar5 = -0x10;
    }
    else {
      iVar5 = FUN_0000c67c(param_5,param_6,(undefined4 *)param_7._0_4_,uVar4,puVar3);
      if ((iVar5 == 0) && (iVar5 = FUN_000079a8(param_1,param_7._4_4_,puVar2), iVar5 == 0)) {
        bVar1 = FUN_0000c7a8(puVar2,puVar3,uVar4);
        iVar5 = CONCAT31(extraout_var,bVar1);
        if (iVar5 != 0) {
          iVar5 = -0x4380;
        }
      }
    }
    if (puVar2 != (uint *)0x0) {
      FUN_0000798c(puVar2,uVar4);
      FUN_00005972(puVar2);
    }
    if (puVar3 != (uint *)0x0) {
      FUN_0000798c(puVar3,uVar4);
      FUN_00005972(puVar3);
    }
  }
  return iVar5;
}

