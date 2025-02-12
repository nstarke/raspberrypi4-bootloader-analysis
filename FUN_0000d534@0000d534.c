
undefined4 FUN_0000d534(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_gp;
  undefined auStack_60 [4];
  uint local_5c;
  uint local_58;
  uint auStack_54 [3];
  undefined local_45;
  int local_44;
  int local_40;
  byte abStack_3c [4];
  byte abStack_38 [4];
  char acStack_34 [16];
  
  uVar3 = 0;
  uVar4 = 0xffffffff;
  if ((param_2 == (undefined4 *)0x0 || param_1 == (uint *)0x0) || (*(char *)param_1 == '\0')) {
    uVar4 = 0xfffffffe;
  }
  else {
    FUN_0000d4ba();
    if (*(int *)(unaff_gp + 0x74) != 0) {
      iVar5 = 1;
      do {
        FUN_0000d186(auStack_60,uVar3);
        iVar2 = FUN_0000d2ac(3,(int)auStack_60,3,abStack_3c,0x18);
        if (iVar2 < 0) {
          uVar4 = 0xffffffff;
          break;
        }
        FUN_00007e18(&local_5c,0,0x20);
        local_5c = FUN_0000aa84(abStack_3c);
        local_58 = FUN_0000aa84(abStack_38);
        if (((local_5c & 0xfffff00f) != 0x55aaf00f) || ((local_58 & 0xff000000) != 0)) break;
        if ((int)local_5c < 0x55aaf11f) {
          if (local_5c == 0x55aaf00f) {
            FUN_0000df7a(auStack_54,s_bootcode_bin_0000d6bc,(char *)0xf);
            local_45 = 0;
            local_40 = local_40 + 8;
            local_44 = local_58 - 0x14;
          }
        }
        else {
          if (local_5c == 0x55aaf11f) {
            local_40 = uVar3 + 0x18;
            local_44 = local_58 - 0x10;
            FUN_0000df7a(auStack_54,acStack_34,(char *)0xf);
          }
          else if (local_5c == 0x55aaf22f) {
            local_40 = uVar3 + 0x18;
            FUN_0000df7a(auStack_54,acStack_34,(char *)0xf);
            local_44 = local_58 - 0x24;
          }
          else {
            if (local_5c != 0x55aaf33f) goto LAB_0000d682;
            local_40 = uVar3 + 0x18;
            FUN_0000df7a(auStack_54,acStack_34,(char *)0xf);
            local_44 = local_58 - 0x30;
          }
          local_45 = 0;
          iVar2 = FUN_0000de22(param_1,auStack_54);
          if (iVar2 == 0) {
            uVar4 = 0;
            FUN_00007dca(param_2,&local_5c,0x20);
            break;
          }
        }
LAB_0000d682:
        uVar3 = local_58 + uVar3 + 0xf & 0xfffffff8;
        if ((*(uint *)(unaff_gp + 0x74) <= uVar3) ||
           (bVar1 = 0xff < iVar5, iVar5 = iVar5 + 1, bVar1)) break;
      } while( true );
    }
    FUN_0000d298();
  }
  return uVar4;
}

