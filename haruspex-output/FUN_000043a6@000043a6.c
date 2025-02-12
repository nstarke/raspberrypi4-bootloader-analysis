
void FUN_000043a6(int param_1,uint *param_2)

{
  FUN_00004176(param_1,param_2);
  if (((*param_2 == 0) && (param_2[1] == 0)) ||
     (((*param_2 & 0xffff0000) == 0xffff0000 && (param_2[1] == 0xffffffff)))) {
    FUN_0000440a(param_1,param_2);
  }
  if (((*param_2 == 0) && (param_2[1] == 0)) ||
     (((*param_2 & 0xffff0000) == 0xffff0000 && (param_2[1] == 0xffffffff)))) {
    FUN_00003656(param_1,(int *)param_2);
  }
  return;
}

