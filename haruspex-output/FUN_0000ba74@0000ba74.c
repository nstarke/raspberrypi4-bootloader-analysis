
void FUN_0000ba74(void)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = version();
  if ((uVar2 >> 4 & 0xff) < 0x17) {
    do {
      pcVar1 = (code *)swi(0xe);
      (*pcVar1)();
    } while( true );
  }
  return;
}

