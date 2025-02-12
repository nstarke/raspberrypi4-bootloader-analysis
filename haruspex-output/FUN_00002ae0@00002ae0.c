
bool FUN_00002ae0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r4;
  code *pcVar6;
  undefined4 extraout_r4_00;
  undefined4 uVar7;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 uVar8;
  int unaff_gp;
  bool bVar9;
  int local_18;
  
  bVar9 = false;
  iVar1 = FUN_0000b8a2();
  pcVar2 = FUN_0000ddfa(param_1,0x3d);
  if (pcVar2 != (char *)0x0) {
    uVar3 = FUN_0000b7b6((byte *)(param_1 + 4),(undefined4 *)0x0,0);
    iVar4 = FUN_0000b7b6((byte *)(pcVar2 + 1),(undefined4 *)0x0,0);
    iVar5 = -1;
    uVar7 = extraout_r4;
    uVar8 = extraout_r5;
    if ((iVar1 != 0) && (*(int *)(unaff_gp + 0xb8) != 0)) {
      pcVar6 = *(code **)(*(int *)(unaff_gp + 0xb8) + 0x34);
      (*pcVar6)(*(undefined4 *)(unaff_gp + 0xc0),uVar3,&local_18,0,pcVar6);
      iVar5 = local_18;
      uVar7 = extraout_r4_00;
      uVar8 = extraout_r5_00;
    }
    bVar9 = iVar4 == iVar5;
    _write_to_stdout((byte *)s_gpio_d__d__d_00002b54,uVar3,iVar4,iVar5,uVar7,uVar8);
  }
  return bVar9;
}

