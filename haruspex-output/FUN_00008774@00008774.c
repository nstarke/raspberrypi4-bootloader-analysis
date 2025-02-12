
int FUN_00008774(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  code *pcVar7;
  uint *puVar8;
  uint uVar9;
  uint local_54;
  uint uStack_50;
  undefined auStack_4c [52];
  
  puVar4 = &local_54;
  puVar8 = &local_54;
  puVar5 = (undefined4 *)param_1[10];
  if (puVar5 == (undefined4 *)0x0) {
    uVar3 = 0x12;
LAB_00008a7a:
    FUN_00009170((int)(param_1 + 0x1a),uVar3);
    return 1;
  }
  puVar1 = (undefined *)*puVar5;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = 0x13;
    goto LAB_00008a7a;
  }
  if (puVar5[2] == 0) {
    FUN_00009128(puVar1,s_API_Error_00008c10);
    FUN_000090ee(*(undefined **)param_1[10],0xf);
    uVar3 = 0xf;
    goto LAB_00008a7a;
  }
  if (param_1[5] == 0) {
LAB_000089b8:
    FUN_00009128(puVar1,s_API_Error_00008c10);
    FUN_000090ee(*(undefined **)param_1[10],2);
    uVar3 = 2;
    goto LAB_00008a7a;
  }
  if (param_1[7] == 0) {
LAB_000089d4:
    FUN_00009128(puVar1,s_API_Error_00008c10);
    FUN_000090ee(*(undefined **)param_1[10],3);
    uVar3 = 3;
    goto LAB_00008a7a;
  }
  uVar3 = param_1[9];
  if (((uVar3 & 4) != 0) && (param_1[8] == 0)) {
LAB_000089f0:
    FUN_00009128(puVar1,s_API_Error_00008c10);
    FUN_000090ee(*(undefined **)param_1[10],5);
    uVar3 = 5;
    goto LAB_00008a7a;
  }
  uVar6 = param_1[2];
  uVar9 = 0;
  if (uVar6 != 0) {
    do {
      if ((param_1[3] >> uVar9 & 1) != 0) {
        if (*(int *)(param_1[5] + uVar9 * 4) == 0) goto LAB_000089b8;
        if (*(int *)(param_1[7] + uVar9 * 4) == 0) goto LAB_000089d4;
        if (((uVar3 & 4) != 0) && (*(int *)(param_1[8] + uVar9 * 4) == 0)) goto LAB_000089f0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  uVar9 = uVar3 & 8;
  if (((uVar3 & 8) != 0) && (param_1[0xb] == 0)) {
    FUN_00009128(puVar1,s_API_Error_00008c10);
    FUN_000090ee(*(undefined **)param_1[10],4);
    uVar3 = 4;
    goto LAB_00008a7a;
  }
  if (*(uint *)(param_1[0xc] + 0xc) >> 0x18 != 4) {
    FUN_00009128(puVar1,s_API_Error_00008c10);
    FUN_000090ee(*(undefined **)param_1[10],7);
    uVar3 = 7;
    goto LAB_00008a7a;
  }
  if ((*param_1 == 0) && (uVar3 = 0, uVar6 != 0)) {
    do {
      if ((param_1[3] >> uVar3 & 1) != 0) {
        uVar6 = FUN_000009b0();
        if (uVar6 != 0) {
          FUN_00009128(*(undefined **)param_1[10],s_and_memc_pre_shmoo_Error_00008cd0);
          FUN_000090ee(*(undefined **)param_1[10],uVar6);
          param_1[0xd] = uVar3;
          uVar3 = 0x1d;
          goto LAB_00008a7a;
        }
        pcVar7 = (code *)((undefined4 *)param_1[10])[3];
        if ((pcVar7 != (code *)0x0) && (uVar6 = (*pcVar7)(uVar3,param_1), uVar6 != 0)) {
          FUN_00009128(*(undefined **)param_1[10],s_fp_memsys_begin_Error_00008ca0);
          FUN_000090ee(*(undefined **)param_1[10],uVar6);
          param_1[0xd] = uVar3;
          uVar3 = 0x14;
          goto LAB_00008a7a;
        }
        uVar6 = param_1[2];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
    uVar9 = param_1[9] & 8;
  }
  if (((uVar9 != 0) && (param_1[0xb] != 0)) && (iVar2 = FUN_000084ac((int)param_1), iVar2 != 0)) {
    FUN_00009128(*(undefined **)param_1[10],s_program_segment_error_00008cb8);
    uVar3 = 0x16;
    goto LAB_00008b1a;
  }
  iVar2 = FUN_00008262((int)param_1);
  if (iVar2 != 0) {
    FUN_00009128(*(undefined **)param_1[10],s_cpu_start_error_00008c1c);
    uVar3 = 0x17;
    goto LAB_00008b1a;
  }
  iVar2 = FUN_000082a4(param_1,(int)auStack_4c);
  if (iVar2 == 0) {
    uVar3 = param_1[2];
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        puVar5 = (undefined4 *)((int)puVar8 + 0x34);
        puVar8 = (uint *)((int)puVar8 + 0x34);
        *(undefined4 *)((int)puVar4 + 4) = *puVar5;
        puVar4 = (uint *)((int)puVar4 + 4);
        uVar3 = param_1[2];
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        if ((param_1[3] >> uVar6 & 1) != 0) {
          iVar2 = FUN_0000846c(uVar6,(int)param_1,(int)auStack_4c);
          if (iVar2 != 0) {
            FUN_00009128(*(undefined **)param_1[10],s_populate_mcb_error_00008c58);
            uVar3 = 0x19;
            goto LAB_00008b1a;
          }
          uVar3 = param_1[2];
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    if (((*param_1 != 0) || ((param_1[9] & 4) == 0)) ||
       (iVar2 = FUN_00008174((int)param_1,(int)auStack_4c,2), iVar2 == 0)) {
      iVar2 = FUN_000085b8((int *)param_1,&local_54);
      if (iVar2 != 0) {
        FUN_00009170((int)(param_1 + 0x1a),0x10);
        FUN_00009128(*(undefined **)param_1[10],s_run_shmoo_error_00008c30);
        if ((local_54 & 4) != 4) {
          return iVar2;
        }
        uVar3 = *(uint *)(auStack_4c + param_1[0xd] * 4 + -4);
        if ((uVar3 & 1) != 0) {
          FUN_00009170((int)(param_1 + 0x1a),0x1d);
          uVar3 = *(uint *)(auStack_4c + param_1[0xd] * 4 + -4);
        }
        if ((uVar3 & 2) == 0) {
          return iVar2;
        }
        uVar3 = 0x1e;
        goto LAB_00008b1a;
      }
      iVar2 = FUN_00008426((int)param_1);
      if (iVar2 != 0) {
        FUN_00009170((int)(param_1 + 0x1a),0x1c);
        FUN_00009128(*(undefined **)param_1[10],s_timeout_in_polling_for_dpfe_uart_00008d08);
        return iVar2;
      }
      if (((*(int *)(param_1[0xc] + 8) - 1U != *param_1) || ((param_1[9] & 4) != 0)) ||
         (iVar2 = FUN_00008174((int)param_1,(int)auStack_4c,1), iVar2 == 0)) {
        if ((param_1[0x1c] == 0) || (iVar2 = FUN_000082a4(param_1,(int)auStack_4c), iVar2 == 0)) {
          uVar3 = *param_1;
          uVar6 = *(int *)(param_1[0xc] + 8) - 1;
          if (uVar6 == uVar3) {
            if (*(int *)(param_1[0xc] + 0x10) != 0) goto LAB_00008b6c;
            iVar2 = FUN_00008212((int)param_1);
          }
          else {
            iVar2 = FUN_000081e8((int)param_1);
          }
          if (iVar2 == 0) {
            uVar3 = *param_1;
            uVar6 = *(int *)(param_1[0xc] + 8) - 1;
LAB_00008b6c:
            if (uVar3 == uVar6) {
              uVar3 = param_1[2];
              uVar6 = 0;
              if (uVar3 != 0) {
                do {
                  if ((param_1[3] >> uVar6 & 1) != 0) {
                    uVar3 = FUN_000009ac();
                    if (uVar3 != 0) {
                      FUN_00009128(*(undefined **)param_1[10],s_and_memc_post_shmoo_Error_00008cec);
                      FUN_000090ee(*(undefined **)param_1[10],uVar3);
                      param_1[0xd] = uVar6;
                      uVar3 = 0x1e;
                      goto LAB_00008a7a;
                    }
                    pcVar7 = (code *)((undefined4 *)param_1[10])[4];
                    if ((pcVar7 != (code *)0x0) && (uVar3 = (*pcVar7)(uVar6,param_1), uVar3 != 0)) {
                      FUN_00009128(*(undefined **)param_1[10],s_fp_memsys_end_Error_00008c70);
                      FUN_000090ee(*(undefined **)param_1[10],uVar3);
                      param_1[0xd] = uVar6;
                      uVar3 = 0x15;
                      goto LAB_00008a7a;
                    }
                    uVar3 = param_1[2];
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < uVar3);
              }
            }
            return 0;
          }
          FUN_00009128(*(undefined **)param_1[10],s_cpu_reset_error_00008c44);
          uVar3 = 0x1a;
          goto LAB_00008b1a;
        }
        goto LAB_00008b4a;
      }
      FUN_00009128(*(undefined **)param_1[10],s_run_shmoo_error_00008c30);
    }
    uVar3 = 0x1b;
  }
  else {
LAB_00008b4a:
    FUN_00009128(*(undefined **)param_1[10],s_get_image_info_error_00008c88);
    uVar3 = 0x18;
  }
LAB_00008b1a:
  FUN_00009170((int)(param_1 + 0x1a),uVar3);
  return iVar2;
}

