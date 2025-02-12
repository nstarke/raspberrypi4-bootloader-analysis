
uint FUN_00009128(undefined *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (; *param_2 != '\0'; param_2 = param_2 + 1) {
    uVar1 = (*(code *)param_1)();
    uVar2 = uVar2 | uVar1;
  }
  return uVar2;
}

