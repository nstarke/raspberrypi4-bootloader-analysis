
undefined4 FUN_000039f4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x2c);
  iVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)((uint)*(ushort *)(param_1 + 0x2a) * iVar3 +
                      *(int *)(param_1 + 0x1c) + param_1);
      if (*piVar2 != 0) {
        puVar4 = (undefined4 *)(piVar2[2] | 0xc0000000);
        if (puVar4 < (undefined4 *)0x2000000) {
          return 0xffffffff;
        }
        uVar1 = piVar2[4];
        if (uVar1 != 0) {
          FUN_00007dca(puVar4,(undefined4 *)(piVar2[1] + param_1),uVar1);
          uVar1 = piVar2[4];
        }
        if (uVar1 < (uint)piVar2[5]) {
          FUN_00007e18((undefined4 *)((int)puVar4 + uVar1),0,piVar2[5] - uVar1);
        }
        uVar1 = (uint)*(ushort *)(param_1 + 0x2c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  *param_3 = *(undefined4 *)(param_1 + 0x18);
  return 0;
}

