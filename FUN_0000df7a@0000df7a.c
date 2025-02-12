
undefined4 * FUN_0000df7a(undefined4 *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = FUN_00007d84(param_2,'\0',(int)param_3);
  pcVar2 = param_3;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1 + (1 - (int)param_2);
  }
  if (param_3 < pcVar2) {
    pcVar2 = param_3;
  }
  FUN_00007dca(param_1,(undefined4 *)param_2,(uint)pcVar2);
  if (pcVar2 < param_3) {
    FUN_00007e18((undefined4 *)((int)param_1 + (int)pcVar2),0,(int)param_3 - (int)pcVar2);
  }
  return param_1;
}

