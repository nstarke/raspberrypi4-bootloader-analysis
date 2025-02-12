
int FUN_00005872(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_gp;
  
  iVar7 = *(int *)(&DAT_0000307c + unaff_gp);
  iVar4 = 0;
  uVar2 = param_1 * param_2;
  if (0 < iVar7) {
    do {
      iVar5 = iVar4 * 0xc;
      piVar6 = (int *)(&LAB_00003088 + iVar5 + unaff_gp);
      if ((*piVar6 == 0) && (*(uint *)(&DAT_00003084 + iVar5 + unaff_gp) == uVar2))
      goto LAB_000058ec;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  iVar5 = *(int *)(&DAT_00003074 + unaff_gp);
  uVar3 = iVar5 + uVar2;
  if ((*(uint *)(&DAT_00003078 + unaff_gp) < uVar3) || (iVar4 == 0x14)) {
    iVar4 = 0;
    if (0 < iVar7) {
      do {
        iVar5 = iVar4 * 0xc;
        piVar6 = (int *)(&LAB_00003088 + iVar5 + unaff_gp);
        if ((*piVar6 == 0) && (uVar2 < *(uint *)(&DAT_00003084 + iVar5 + unaff_gp)))
        goto LAB_000058ec;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar7);
    }
    pcVar1 = (code *)swi(0xe);
    (*pcVar1)();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar4 = iVar4 * 0xc;
  *(uint *)(&DAT_00003074 + unaff_gp) = uVar3;
  piVar6 = (int *)((int)&PTR_DAT_00003080 + iVar4 + unaff_gp);
  *piVar6 = *(int *)(&DAT_00003070 + unaff_gp) + iVar5;
  *(uint *)(&DAT_00003084 + iVar4 + unaff_gp) = uVar2;
  *(undefined4 *)(&LAB_00003088 + iVar4 + unaff_gp) = 1;
  *(int *)(&DAT_0000307c + unaff_gp) = iVar7 + 1;
LAB_0000592c:
  return *piVar6;
LAB_000058ec:
  *piVar6 = 1;
  piVar6 = (int *)((int)&PTR_DAT_00003080 + iVar5 + unaff_gp);
  goto LAB_0000592c;
}

