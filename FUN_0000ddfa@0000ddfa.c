
char * FUN_0000ddfa(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = FUN_00007d84(param_1,'\0',0x7fffffff);
  if (param_2 != 0) {
    pcVar1 = FUN_00007d84(param_1,(char)param_2,(int)pcVar1 - (int)param_1);
  }
  return pcVar1;
}

