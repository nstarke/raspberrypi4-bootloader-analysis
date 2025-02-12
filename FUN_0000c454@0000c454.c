
undefined4 FUN_0000c454(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  undefined local_15;
  
  if ((param_2 & 3) == 0) {
    local_18 = (undefined)(param_2 >> 0x18);
    local_17 = (undefined)(param_2 >> 0x10);
    local_16 = (undefined)(param_2 >> 8);
    local_15 = (undefined)param_2;
    iVar2 = FUN_0000b8a2();
    (**(code **)(iVar2 + 0x58))(param_1,0xff,&local_18,4);
    iVar2 = FUN_0000b8a2();
    uVar1 = (**(code **)(iVar2 + 0x4c))(param_1,0xff,param_3,param_4,*(code **)(iVar2 + 0x4c));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

