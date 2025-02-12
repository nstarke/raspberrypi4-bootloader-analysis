
void FUN_000099ea(int param_1,undefined *param_2,undefined4 param_3,uint param_4,char *param_5)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r7;
  bool bVar3;
  
  uVar1 = 0;
  if (param_5 != (char *)0x0) {
    uVar1 = FUN_0000df42(param_5);
  }
  bVar3 = param_4 == uVar1;
  uVar2 = param_4;
  if (uVar1 < param_4) {
    unaff_r7 = 0;
    uVar2 = param_4 - uVar1;
  }
  if (uVar1 < param_4) {
    bVar3 = uVar2 == 0;
  }
  if ((uVar1 < param_4 || uVar1 <= param_4) && !bVar3) {
    do {
      if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 4)) break;
      (*(code *)param_2)(param_1,param_3);
      unaff_r7 = unaff_r7 + 1;
    } while (unaff_r7 < uVar2);
  }
  while (((param_5 != (char *)0x0 && (*param_5 != '\0')) &&
         (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 8)))) {
    param_5 = param_5 + 1;
    (*(code *)param_2)(param_1);
  }
  return;
}

