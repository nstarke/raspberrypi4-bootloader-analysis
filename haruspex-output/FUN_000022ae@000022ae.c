
void FUN_000022ae(byte *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_r1;
  int extraout_r2;
  int extraout_r3;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint local_28;
  undefined4 uStack_24;
  
  iVar5 = 0;
  if ((param_3 < param_5) || ((param_3 == param_5 && (param_2 < param_4)))) {
    param_5 = param_3;
    param_4 = param_2;
  }
  if (param_5 == 0 && param_4 == 0) {
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) & 0xffffffef | 0x5a000000;
  }
  else {
    FUN_00001db6((uint)*param_1,&uStack_24,&local_28);
    iVar6 = *(int *)(param_1 + 0x18);
    fVar1 = (float)FUN_0000011a(param_2,param_3);
    fVar2 = (float)FUN_0000011a(param_4,param_5);
    fVar1 = fVar1 / fVar2;
    if (iVar6 != 0) {
      fVar1 = FUN_000019c0(fVar1,extraout_r1,extraout_r2);
    }
    iVar6 = FUN_0000b824(fVar1,local_28);
    if (local_28 < 0xc) {
      iVar5 = 0xc - local_28;
    }
    if ((**(uint **)(param_1 + 4) & 0xf) != *(uint *)(param_1 + 0x14)) {
      **(uint **)(param_1 + 4) = 0x5a000011;
    }
    **(uint **)(param_1 + 8) = iVar6 << iVar5 | 0x5a000000;
    **(uint **)(param_1 + 4) = *(uint *)(param_1 + 0x14) & 0xf | 0x5a000010;
    FUN_000026b6();
    *(int *)(param_1 + 0x20) = iVar6;
    *(uint *)(param_1 + 0x24) = param_4;
    *(uint *)(param_1 + 0x28) = param_5;
    puVar3 = (undefined4 *)(extraout_r3 + (uint)**(byte **)(param_1 + 0xc) * 8);
    uVar4 = puVar3[1];
    *(undefined4 *)(param_1 + 0x2c) = *puVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  return;
}

