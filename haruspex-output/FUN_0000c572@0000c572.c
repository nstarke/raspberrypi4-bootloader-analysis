
undefined4 FUN_0000c572(undefined4 param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  
  if ((param_2 & 3) == 0) {
    do {
      (&DAT_00005434)[unaff_gp] = (char)(param_2 >> 0x18);
      (&DAT_00005435)[unaff_gp] = (char)(param_2 >> 0x10);
      (&DAT_00005436)[unaff_gp] = (char)(param_2 >> 8);
      (&DAT_00005437)[unaff_gp] = (char)param_2;
      if (param_4 < 0x40) {
        FUN_00007dca((undefined4 *)(&DAT_00005438 + unaff_gp),param_3,param_4);
        iVar1 = FUN_0000b8a2();
        iVar3 = param_4 + 4;
        param_4 = 0;
        (**(code **)(iVar1 + 0x58))(param_1,0xff,&DAT_00005434 + unaff_gp,iVar3);
      }
      else {
        FUN_00007dca((undefined4 *)(&DAT_00005438 + unaff_gp),param_3,0x40);
        iVar1 = FUN_0000b8a2();
        param_2 = param_2 + 0x40;
        (**(code **)(iVar1 + 0x58))
                  (param_1,0xff,&DAT_00005434 + unaff_gp,0x44,*(code **)(iVar1 + 0x58));
        param_4 = param_4 - 0x40;
        param_3 = param_3 + 0x10;
      }
    } while (param_4 != 0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

