
void FUN_0000aa0c(void)

{
  int *intPointer;
  uint index;
  int counter;
  uint currentValue;
  bool isExpected;
  
  isExpected = false;
  counter = 0;
  intPointer = (int *)&DAT_c1000000;
  do {
    *intPointer = counter;
    counter = counter + 1;
    intPointer = intPointer + 1;
  } while (counter < 0x100000);
  do {
    if (isExpected) {
      return;
    }
    index = 0;
    do {
      currentValue = *(uint *)(&DAT_c1000000 + index * 4);
      if (index != currentValue) {
        _sprintf_to_stdout((byte *)s_Loop__d_address__p_expected__08x_0000aa58,1,
                           &DAT_c1000000 + index * 4,index,currentValue,counter);
        FUN_0000a3e8(8);
        return;
      }
      index = index + 1;
    } while (index < 0x100000);
    isExpected = true;
  } while( true );
}

