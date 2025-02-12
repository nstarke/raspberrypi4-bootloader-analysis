
void FUN_00009188(uint *param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && (puVar1 = param_1 + param_2 * 2 + -2, param_1 <= puVar1)) {
    do {
      uVar2 = thunk_FUN_000097bc(*param_1,param_1[1]);
      uVar3 = thunk_FUN_000097bc(*puVar1,puVar1[1]);
      *(undefined8 *)param_1 = uVar3;
      param_1 = param_1 + 2;
      *(undefined8 *)puVar1 = uVar2;
      puVar1 = puVar1 + -2;
    } while (param_1 <= puVar1);
  }
  return;
}

