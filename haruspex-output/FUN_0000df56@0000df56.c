
void FUN_0000df56(byte *param_1,byte *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = FUN_00007d84((char *)param_1,'\0',(int)param_3);
  if (pcVar1 != (char *)0x0) {
    param_3 = pcVar1 + (1 - (int)param_1);
  }
  FUN_00007d9e(param_1,param_2,(int)param_3);
  return;
}

