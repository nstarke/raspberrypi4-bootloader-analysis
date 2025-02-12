
void FUN_0000af96(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_gp;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_gp + 0x124) + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0000af9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}

