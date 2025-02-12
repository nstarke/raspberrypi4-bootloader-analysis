
void FUN_00000482(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  do {
    pcVar1 = (code *)swi(0xe);
    uVar2 = (*pcVar1)((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  } while( true );
}

