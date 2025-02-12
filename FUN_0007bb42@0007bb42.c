
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0007bb54) overlaps instruction at (ram,0x0007bb52)
    */
/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0007bb42(uint param_1,int param_2,undefined4 param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  undefined2 *extraout_r1;
  int unaff_r7;
  short *unaff_r8;
  int unaff_r14;
  char in_N;
  char in_V;
  
  if (!(bool)in_N) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if ((param_5 + param_6) - param_2 < 0) {
    pcVar1 = (code *)swi(((byte)param_1 & 0x1f) + 0x20);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 <= unaff_r7 + param_1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
  } while (((param_4 ^ param_5 + param_6) & 0xff) == 0x37);
  (*(code *)(int)*unaff_r8)(param_1 * unaff_r14,(code *)(int)*unaff_r8);
  if (in_N == in_V) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *extraout_r1 = (short)unaff_r14;
  return;
}

