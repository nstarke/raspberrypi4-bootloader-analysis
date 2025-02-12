
/* WARNING: Control flow encountered bad instruction data */

void FUN_00090aec(undefined4 param_1,int param_2,undefined4 param_3)

{
  DAT_0008ea3a = param_3;
  *(undefined4 *)(param_2 + 0x10) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

