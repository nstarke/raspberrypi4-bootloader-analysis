
void FUN_00002c76(uint *param_1,int *param_2,uint param_3,int param_4,int param_5,undefined4 param_6
                 )

{
  undefined uVar1;
  uint uVar3;
  undefined4 uVar2;
  
  uVar3 = 0;
  FUN_0000189e(param_2,(uint)param_2,param_3,param_4,param_5,param_6);
  *param_1 = 0;
LAB_00002c86:
  do {
    if ((uint)param_2[2] <= uVar3) {
      return;
    }
    switch(*(undefined *)(param_1 + 4)) {
    case 0:
      goto switchD_00002c94_caseD_0;
    case 1:
      uVar2 = FUN_0000982c(param_1,(int)param_2);
      uVar1 = (undefined)uVar2;
      goto LAB_00002cc4;
    case 2:
      uVar2 = FUN_0000ce80(param_1,(int)param_2);
      uVar1 = (undefined)uVar2;
      goto LAB_00002cc4;
    case 3:
      uVar2 = FUN_0000ceac(param_1,(int)param_2);
      uVar1 = (undefined)uVar2;
      goto LAB_00002cc4;
    case 4:
      uVar2 = FUN_0000c1f4(param_1,(int)param_2);
      uVar1 = (undefined)uVar2;
      goto LAB_00002cc4;
    case 5:
      uVar2 = FUN_0000c308(param_1,(int)param_2);
      uVar1 = (undefined)uVar2;
      goto LAB_00002cc4;
    case 6:
      uVar2 = FUN_0000c2ae(param_1,(int)param_2);
      uVar1 = (undefined)uVar2;
      goto LAB_00002cc4;
    case 7:
      return;
    }
  } while( true );
switchD_00002c94_caseD_0:
  uVar2 = FUN_0000ced8(param_1,(int)param_2);
  uVar1 = (undefined)uVar2;
LAB_00002cc4:
  *(undefined *)(param_1 + 4) = uVar1;
  uVar3 = *param_1;
  goto LAB_00002c86;
}

