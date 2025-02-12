
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */

void FUN_000287f2(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *unaff_r9;
  bool in_Z;
  bool in_C;
  bool in_V;
  
  unaff_r9[2] = param_5;
  if (in_C || in_Z) {
    version();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_V) {
    uVar1 = (*(code *)param_3)();
    *unaff_r9 = uVar1;
    if (!in_C) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

