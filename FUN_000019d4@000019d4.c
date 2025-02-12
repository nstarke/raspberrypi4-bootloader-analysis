
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000019d4(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_gp;
  
  uVar5 = _DAT_7c480014;
  iVar1 = _DAT_7c003004;
  uVar2 = *(uint *)(unaff_gp + 0x7c);
  uVar6 = 0;
  *param_2 = 0xffffffff;
  uVar7 = 0xffffffff;
  uVar4 = 0;
  do {
    while (4 < (int)uVar4) {
LAB_00001a24:
      if (((uVar2 == 0) || (-1 < (int)uVar7)) || (1999999 < (uint)(_DAT_7c003004 - iVar1))) {
        if ((uVar2 == 0) || (-1 < (int)uVar7)) {
          if ((uVar5 & 0x800) == 0) {
            if ((int)uVar4 < 5) {
              *param_2 = uVar4;
              *(undefined4 *)(uVar4 * 0x20 + 0x7c480908) = 1;
              uVar6 = 0xb;
            }
            else if ((_DAT_7c480b28 & 1) == 0) {
              if ((uVar5 & 0x10) == 0) {
                if ((uVar5 & 0x1000) == 0) {
                  if ((uVar5 & 0x2000) == 0) {
                    return 0;
                  }
                  uVar6 = 10;
                  _DAT_7c480014 = uVar5 & 0x2000;
                }
                else {
                  uVar6 = 9;
                  _DAT_7c480014 = uVar5 & 0x1000;
                }
                *param_2 = 0xffffffff;
              }
              else {
                do {
                  uVar5 = uVar5 & 0x10;
                  uVar4 = (int)_DAT_7c480020 >> 0x11;
                  uVar7 = (int)_DAT_7c480020 >> 4;
                  uVar2 = _DAT_7c480020 & 0xf;
                  *param_2 = uVar2;
                  uVar7 = uVar7 & 0x7ff;
                  switch(uVar4 & 0xf) {
                  case 2:
                    iVar1 = (int)(uVar7 + 3) >> 2;
                    puVar3 = *(undefined4 **)(param_1 + uVar2 * 4 + 0x10);
                    if (iVar1 != 0) {
                      do {
                        *puVar3 = _DAT_7c481000;
                        iVar1 = iVar1 + -1;
                        puVar3 = puVar3 + 1;
                      } while (0 < iVar1);
                    }
                    uVar6 = 0xc;
                    *(uint *)(param_1 + *param_2 * 4 + 0x24) = uVar7;
                    break;
                  case 4:
                    iVar1 = FUN_00004ec4(param_1,*(ushort **)(param_1 + 0x10));
                    if (iVar1 == 1) {
                      return 0;
                    }
                    uVar6 = 0;
                    break;
                  case 6:
                    puVar3 = *(undefined4 **)(param_1 + 0x10);
                    *puVar3 = _DAT_7c481000;
                    puVar3[1] = _DAT_7c481000;
                    *(uint *)(param_1 + 0x24) = uVar7;
                  }
                  _DAT_7c480014 = uVar5;
                } while (uVar5 != 0);
              }
            }
            else {
              _DAT_7c480b28 = _DAT_7c480b28 | 1;
            }
          }
          else {
            do {
            } while ((_DAT_7c480804 & 8) == 0);
            if ((_DAT_7c480b00 & 0x80000000) != 0) {
              _DAT_7c480b00 = _DAT_7c480b00 | 0x48000000;
            }
            if ((_DAT_7c480b20 & 0x80000000) != 0) {
              _DAT_7c480b20 = _DAT_7c480b20 | 0x48000000;
            }
            if ((_DAT_7c480b40 & 0x80000000) != 0) {
              _DAT_7c480b40 = _DAT_7c480b40 | 0x48000000;
            }
            do {
            } while ((_DAT_7c480b40 & 0x40000000) != 0 ||
                     ((_DAT_7c480b20 & 0x40000000) != 0 || (_DAT_7c480b00 & 0x40000000) != 0));
            uVar6 = 8;
            _DAT_7c480804 = _DAT_7c480804 | 0x600;
            _DAT_7c480814 = uVar5;
            *(undefined *)(param_1 + 0x248) = 0;
            FUN_0000e28a();
            FUN_00005754(1);
          }
        }
        else {
          uVar6 = 0xfffffffe;
        }
        return uVar6;
      }
      uVar4 = 0;
    }
    if ((*(uint *)(uVar4 * 0x20 + 0x7c480908) & 1) != 0) {
      uVar2 = uVar2 & ~(1 << uVar4);
      *(uint *)(unaff_gp + 0x7c) = uVar2;
      uVar7 = uVar4;
      goto LAB_00001a24;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

