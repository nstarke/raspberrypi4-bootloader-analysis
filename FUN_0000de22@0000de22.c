
int FUN_0000de22(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
      do {
        uVar3 = *param_1;
        uVar4 = *param_2;
        if (uVar3 != uVar4) {
          uVar1 = uVar3 & 0xff;
          if (uVar1 != (uVar4 & 0xff)) {
            if (uVar1 <= (uVar4 & 0xff)) {
              return -1;
            }
            return 1;
          }
          if (uVar1 == 0) {
            return 0;
          }
          uVar1 = uVar3 & 0xff00;
          if (uVar1 != (uVar4 & 0xff00)) {
            if (uVar1 <= (uVar4 & 0xff00)) {
              return -1;
            }
            return 1;
          }
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = (int)uVar3 >> 0x10 & 0xff;
          uVar1 = (int)uVar4 >> 0x10 & 0xff;
          if (uVar2 != uVar1) {
            if (uVar2 <= uVar1) {
              return -1;
            }
            return 1;
          }
          if (uVar2 == 0) {
            return 0;
          }
          return ((int)uVar3 >> 0x10 & 0xff00U) - ((int)uVar4 >> 0x10 & 0xff00U);
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      } while ((uVar3 + 0xfefefeff & ~uVar4 & 0x80808080) == 0);
    }
    else if ((((uint)param_2 | (uint)param_1) & 1) == 0) {
      do {
        uVar3 = (uint)*(short *)param_1;
        uVar4 = (uint)*(short *)param_2;
        if (uVar3 != uVar4) {
          uVar1 = uVar3 & 0xff;
          if (uVar1 != (uVar4 & 0xff)) {
            if (uVar1 <= (uVar4 & 0xff)) {
              return -1;
            }
            return 1;
          }
          if (uVar1 == 0) {
            return 0;
          }
          return (uVar3 & 0xff00) - (uVar4 & 0xff00);
        }
        param_1 = (uint *)((int)param_1 + 2);
        param_2 = (uint *)((int)param_2 + 2);
      } while ((uVar3 - 0x101 & ~uVar4 & 0xffff8080) == 0);
    }
    else {
      do {
        uVar3 = (uint)*(byte *)param_1;
        if (uVar3 != *(byte *)param_2) {
          return uVar3 - *(byte *)param_2;
        }
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
      } while (uVar3 != 0);
    }
  }
  return 0;
}

