
undefined8 FUN_000097bc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  do {
    lVar5 = FUN_000003c8(param_1 & 0xff,0,(7 - uVar2) * 8);
    uVar1 = param_2 << 0x18;
    uVar4 = uVar4 | (uint)lVar5;
    uVar3 = uVar3 | (uint)((ulonglong)lVar5 >> 0x20);
    uVar2 = uVar2 + 1 & 0xff;
    param_2 = param_2 >> 8;
    param_1 = param_1 >> 8 | uVar1;
  } while (uVar2 < 8);
  return CONCAT44(uVar3,uVar4);
}

