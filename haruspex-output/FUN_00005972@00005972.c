
void FUN_00005972(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar2 = 0;
  if (0 < *(int *)(&DAT_0000307c + unaff_gp)) {
    do {
      iVar3 = iVar2 * 0xc;
      if (param_1 == *(undefined4 **)((int)&PTR_DAT_00003080 + iVar3 + unaff_gp)) {
        FUN_00007e18(param_1,0,*(uint *)(&DAT_00003084 + iVar3 + unaff_gp));
        *(undefined4 *)(&LAB_00003088 + iVar3 + unaff_gp) = 0;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(&DAT_0000307c + unaff_gp));
  }
  pcVar1 = (code *)swi(0xe);
  (*pcVar1)();
  return;
}

