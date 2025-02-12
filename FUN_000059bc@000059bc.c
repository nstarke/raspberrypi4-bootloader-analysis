
void FUN_000059bc(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  int unaff_gp;
  
  *(undefined4 *)(&DAT_00003070 + unaff_gp) = param_1;
  *(undefined4 *)(&DAT_00003074 + unaff_gp) = 0;
  *(undefined4 *)(&DAT_0000307c + unaff_gp) = 0;
  *(uint *)(&DAT_00003078 + unaff_gp) = param_2;
  if (param_2 < 0x13c8) {
    pcVar1 = (code *)swi(0xe);
    (*pcVar1)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

