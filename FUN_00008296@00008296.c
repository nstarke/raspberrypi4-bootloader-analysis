
int * FUN_00008296(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + param_2 * 4);
  return piVar1 + *piVar1 + 1;
}

