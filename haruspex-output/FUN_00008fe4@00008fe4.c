
int FUN_00008fe4(int param_1)

{
  undefined4 *puVar1;
  int unaff_gp;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_1 == 0) {
    puVar1 = *(undefined4 **)(unaff_gp + 0xf0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = FUN_0000b27e();
      *(undefined4 **)(unaff_gp + 0xf0) = puVar1;
    }
    puVar1[2] = 0;
    *(undefined4 **)(unaff_gp + 0x57e0) = puVar1;
    *(undefined4 *)(unaff_gp + 0x57e4) = 0;
  }
  else {
    FUN_00008010(&uStack_10,&uStack_14,&uStack_18,&uStack_1c);
    FUN_000018fc((undefined4 *)(unaff_gp + 0x5820),unaff_gp + 0x5848,0xc);
    *(undefined4 **)(unaff_gp + 0x57e0) = (undefined4 *)(unaff_gp + 0x5820);
    FUN_000018fc((undefined4 *)(unaff_gp + 0x5834),uStack_10,uStack_14);
    *(undefined4 **)(unaff_gp + 0x57e4) = (undefined4 *)(unaff_gp + 0x5834);
    FUN_000018fc((undefined4 *)(unaff_gp + 0x580c),uStack_18,uStack_1c);
    *(undefined4 **)(unaff_gp + 0x57e8) = (undefined4 *)(unaff_gp + 0x580c);
    *(undefined4 *)(unaff_gp + 0x57ec) = 0;
  }
  return unaff_gp + 0x57e0;
}

