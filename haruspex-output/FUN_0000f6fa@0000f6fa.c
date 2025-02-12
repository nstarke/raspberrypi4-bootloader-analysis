
/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0000f6fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0xe);
  (*pcVar1)();
  pcVar1 = (code *)swi(0xe);
  (*pcVar1)();
  pcVar1 = (code *)swi(0xe);
  (*pcVar1)();
  pcVar1 = (code *)swi(0xe);
  (*pcVar1)();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

