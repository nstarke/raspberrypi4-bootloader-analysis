
void FUN_0000cac2(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  switch(param_2) {
  case 1:
    iVar2 = *(int *)(param_1 + 0x3c);
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x38);
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x34);
    break;
  default:
    FUN_00009cdc(param_1,param_2 + -1,param_3,param_1,param_5,param_6);
    return;
  }
  puVar4 = (uint *)(param_3 + 0xc);
  puVar3 = (uint *)(iVar2 + 0xc);
  iVar2 = 3;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + -1;
    *puVar3 = uVar1 | 0x5a000000;
    puVar3 = puVar3 + -1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

