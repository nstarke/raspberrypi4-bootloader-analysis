
void FUN_0000276c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  char *pcVar4;
  undefined4 uVar5;
  undefined3 extraout_var_04;
  int unaff_gp;
  
  thunk_FUN_0000b798((byte *)(param_1 + 0x1c));
  iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a18);
  if (iVar2 == 0) {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x17c) = 1;
    *(undefined4 *)(param_1 + 0x180) = 1;
    *(undefined4 *)(param_1 + 0x178) = 1;
    *(undefined4 *)(param_1 + 0x174) = 1;
    *(undefined4 *)(param_1 + 0x170) = 1;
  }
  else {
    iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a3c);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    else {
      iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a1c);
      if ((((iVar2 != 0) &&
           (iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a44), iVar2 != 0)) &&
          (iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a20), iVar2 != 0)) &&
         (((iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a24), iVar2 != 0 &&
           (iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a28), iVar2 != 0)) &&
          ((iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a4c), iVar2 != 0 &&
           (iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a2c), iVar2 != 0)))))) {
        iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)s_pi400_00002a5c);
        if (iVar2 == 0) {
          bVar1 = FUN_0000a7ea();
          uVar3 = CONCAT31(extraout_var,bVar1);
        }
        else {
          iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a30);
          if (iVar2 == 0) {
            bVar1 = FUN_0000a7bc();
            uVar3 = CONCAT31(extraout_var_00,bVar1);
          }
          else {
            iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a54);
            if (iVar2 == 0) {
              bVar1 = FUN_0000a7ca();
              uVar3 = CONCAT31(extraout_var_01,bVar1);
            }
            else {
              iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a34);
              if (iVar2 == 0) {
                uVar3 = 1;
              }
              else {
                iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)s_pi500_00002a64);
                if (iVar2 == 0) {
                  bVar1 = FUN_0000a814();
                  uVar3 = CONCAT31(extraout_var_02,bVar1);
                }
                else {
                  iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)&DAT_00002a38);
                  if (iVar2 != 0) {
                    iVar2 = FUN_0000096a((byte *)(param_1 + 0x1c),
                                         (byte *)s_psu_current_profile_00002a80,0x13);
                    if ((iVar2 == 0) &&
                       (pcVar4 = FUN_0000ddfa((char *)(param_1 + 0x1c),0x3d), pcVar4 != (char *)0x0)
                       ) {
                      pcVar4 = FUN_0000ddfa((char *)(param_1 + 0x1c),0x3d);
                      uVar5 = FUN_0000a964((byte *)(pcVar4 + 1));
                      *(undefined4 *)(param_1 + 0x180) = uVar5;
                    }
                    else if ((*(int *)(param_1 + 8) == 0) ||
                            (iVar2 = FUN_0000df56((byte *)(param_1 + 0x1c),&LAB_00002c70,(char *)0x4
                                                 ), iVar2 != 0)) {
                      iVar2 = FUN_0000de22((uint *)(param_1 + 0x1c),(uint *)s_tryboot_00002a6c);
                      if (iVar2 == 0) {
                        *(uint *)(param_1 + 0x17c) = (uint)((*(uint *)(unaff_gp + 0x2d4) & 1) != 0);
                      }
                      else {
                        iVar2 = FUN_0000b7b6((byte *)(param_1 + 0x1c),(undefined4 *)0x0,0);
                        if (iVar2 == 0) {
                          iVar2 = FUN_0000096a((byte *)(param_1 + 0x1c),
                                               (byte *)s_board_type_00002a74,10);
                          if ((iVar2 == 0) &&
                             (pcVar4 = FUN_0000ddfa((char *)(param_1 + 0x1c),0x3d),
                             pcVar4 != (char *)0x0)) {
                            pcVar4 = FUN_0000ddfa((char *)(param_1 + 0x1c),0x3d);
                            iVar2 = FUN_0000b7b6((byte *)(pcVar4 + 1),(undefined4 *)0x0,0);
                            uVar3 = (uint)(iVar2 == *(int *)(unaff_gp + 0x98));
                            *(uint *)(param_1 + 0x170) = uVar3;
                            goto LAB_000029da;
                          }
                        }
                        else {
                          iVar2 = FUN_0000b7b6((byte *)(param_1 + 0x1c),(undefined4 *)0x0,0);
                          *(uint *)(param_1 + 0x174) = (uint)(iVar2 == *(int *)(unaff_gp + 0xa4));
                        }
                      }
                    }
                    else {
                      bVar1 = FUN_00002ae0((char *)(param_1 + 0x1c));
                      *(uint *)(param_1 + 0x178) = CONCAT31(extraout_var_04,bVar1);
                    }
                    uVar3 = *(uint *)(param_1 + 0x170);
                    goto LAB_000029da;
                  }
                  bVar1 = FUN_0000a7d8();
                  uVar3 = CONCAT31(extraout_var_03,bVar1);
                }
              }
            }
          }
        }
        *(uint *)(param_1 + 0x170) = uVar3;
        goto LAB_000029da;
      }
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    uVar3 = 0;
  }
LAB_000029da:
  if ((((uVar3 == 0) || (*(int *)(param_1 + 0x174) == 0)) || (*(int *)(param_1 + 0x178) == 0)) ||
     ((*(int *)(param_1 + 0x17c) == 0 || (*(int *)(param_1 + 0x180) == 0)))) {
    *(undefined4 *)(param_1 + 0x16c) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  FUN_00007e18((undefined4 *)(param_1 + 0x1c),0,0x21);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  return;
}

