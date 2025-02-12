
void _write_to_stderr(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r4;
  undefined4 extraout_r4_00;
  undefined4 extraout_r5;
  undefined4 extraout_r5_00;
  undefined4 extraout_r5_01;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined auStack_3c [15];
  undefined local_2d;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  local_4 = param_6;
  uVar2 = FUN_0000b6be();
  uVar3 = FUN_00000224((uint)uVar2,(uint)((ulonglong)uVar2 >> 0x20),1000,0);
  iVar1 = FUN_00000390((uint)uVar3,100);
  FUN_0000b388((int)auStack_3c,0x10,(byte *)s___3d__02d_0000a328,(uint)uVar3 / 1000,iVar1,
               extraout_r5);
  local_2d = 0;
  FUN_0000af7a(&DAT_0000a324,(uint)auStack_3c,extraout_r2,extraout_r3,extraout_r4,extraout_r5_00);
  FUN_0000ba8c(param_1,&local_14);
  FUN_0000af7a(&DAT_0000a320,extraout_r1,extraout_r2_00,extraout_r3_00,extraout_r4_00,extraout_r5_01
              );
  return;
}

