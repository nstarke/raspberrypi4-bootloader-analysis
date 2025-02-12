
void FUN_0000b898(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_gp;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_gp + 0x124) + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x0000b8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}

