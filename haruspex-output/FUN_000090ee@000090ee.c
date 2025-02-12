
uint FUN_000090ee(undefined *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar5 = 0x1c;
  iVar6 = 7;
  do {
    uVar1 = param_2 >> iVar5 & 0xf;
    if (uVar1 < 10) {
      iVar2 = uVar1 + 0x30;
    }
    else {
      iVar2 = uVar1 + 0x37;
    }
    iVar5 = iVar5 + -4;
    uVar1 = (*(code *)param_1)(iVar2);
    uVar4 = uVar4 | uVar1;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  uVar1 = (*(code *)param_1)(0xd);
  uVar3 = (*(code *)param_1)(10);
  return uVar3 | uVar4 | uVar1;
}

