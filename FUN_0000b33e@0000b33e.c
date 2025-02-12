
void FUN_0000b33e(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_gp;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_gp + 0x124) + 0x9c);
  *(uint *)(unaff_gp + 0xdc) = (uint)(param_1 != 0);
                    /* WARNING: Could not recover jumptable at 0x0000b352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((uint)(param_1 != 0),UNRECOVERED_JUMPTABLE);
  return;
}

