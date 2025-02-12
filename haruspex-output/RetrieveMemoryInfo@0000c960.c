
int RetrieveMemoryInfo(undefined4 *output_controller,uint *status_code,undefined4 *device_status,
                      int *data_size)

{
  int loop_counter;
  uint temporary_value;
  undefined *stack_pointer;
  int internal_index;
  int nested_index;
  undefined auStack_54 [16];
  uint status_flags;
  uint comparison_value;
  int condition_check;
  
  loop_counter = FUN_0000b2a4();
  if (loop_counter == 0) {
    FUN_00009e56();
  }
  internal_index = 0;
  loop_counter = 0;
  do {
    nested_index = 0;
    stack_pointer = auStack_54 + loop_counter;
    do {
      temporary_value = FUN_0000c854(5,nested_index,internal_index);
      *(uint *)(stack_pointer + 0x20) = temporary_value;
      FUN_0000c854(6,nested_index,internal_index);
      temporary_value = FUN_0000c854(8,nested_index,internal_index);
      *(uint *)(stack_pointer + 0x10) = temporary_value;
      stack_pointer = stack_pointer + 8;
      nested_index = nested_index + 1;
    } while (nested_index < 2);
    loop_counter = loop_counter + 4;
    internal_index = internal_index + 1;
  } while (internal_index < 2);
  if (condition_check == 6) {
    *output_controller = s_Hynix_0000ca48;
  }
  else if (condition_check < 7) {
    if (condition_check == 1) {
      *output_controller = s_Samsung_0000ca58;
    }
    else {
LAB_0000c9dc:
      *output_controller = s_Unknown_0000ca60;
    }
  }
  else {
    if (condition_check != 0xff) goto LAB_0000c9dc;
    *output_controller = s_Micron_0000ca50;
  }
  switch((int)(status_flags & 0x3f) >> 2) {
  case 0:
    loop_counter = 4;
    break;
  case 1:
    loop_counter = 6;
    goto LAB_0000ca00;
  default:
    *data_size = 8;
    goto LAB_0000ca1c;
  case 3:
    loop_counter = 0xc;
    goto LAB_0000ca06;
  case 4:
    loop_counter = 0x10;
LAB_0000ca00:
    *data_size = loop_counter;
    goto LAB_0000ca1c;
  case 5:
    loop_counter = 0x18;
LAB_0000ca06:
    *data_size = loop_counter;
    goto LAB_0000ca1c;
  case 6:
    loop_counter = 0x20;
  }
  *data_size = loop_counter;
LAB_0000ca1c:
  loop_counter = 2;
  if (status_flags != comparison_value) {
    loop_counter = 1;
  }
  *status_code = (uint)(loop_counter == 2);
  if ((int)status_flags >> 6 == 1) {
    loop_counter = loop_counter << 1;
    *device_status = 1;
  }
  else {
    *device_status = 0;
  }
  return *data_size * loop_counter;
}

