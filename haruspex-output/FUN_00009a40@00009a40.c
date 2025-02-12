
void FUN_00009a40(byte *gpio_command)

{
  bool bVar1;
  int gpio_function_pointer;
  char *current_gpio_state;
  int command_result;
  undefined3 extraout_var;
  uint temp_gpio_result;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  uint extraout_r2_07;
  uint extraout_r2_08;
  uint extraout_r2_09;
  uint gpio_pin_mask;
  undefined4 temp_gpio_status;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 extraout_r3_05;
  undefined4 extraout_r3_06;
  undefined4 extraout_r3_07;
  undefined4 extraout_r3_08;
  undefined4 extraout_r3_09;
  undefined4 extraout_r3_10;
  undefined4 extraout_r3_11;
  undefined4 extraout_r3_12;
  undefined4 extraout_r3_13;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 extraout_r3_14;
  undefined4 extraout_r3_15;
  undefined4 extraout_r3_16;
  byte *extraout_r4;
  byte *old_gpio_byte;
  byte *extraout_r4_01;
  byte *extraout_r4_02;
  byte *extraout_r4_03;
  byte *extraout_r4_04;
  byte *extraout_r4_05;
  byte *extraout_r4_06;
  byte *extraout_r4_07;
  byte *current_gpio_byte;
  byte *extraout_r4_08;
  byte *extraout_r4_09;
  astruct_3 *extraout_r5;
  astruct_3 *last_command_result;
  astruct_3 *extraout_r5_01;
  astruct_3 *extraout_r5_02;
  astruct_3 *extraout_r5_03;
  astruct_3 *extraout_r5_04;
  astruct_3 *extraout_r5_05;
  astruct_3 *extraout_r5_06;
  astruct_3 *extraout_r5_07;
  astruct_3 *paVar2;
  astruct_3 *extraout_r5_08;
  astruct_3 *extraout_r5_09;
  uint loop_counter;
  byte *pbVar12;
  uint gpio_state;
  uint gpio_command_type;
  astruct_1 *puVar15;
  astruct_2 *piVar16;
  astruct *gpio_device;
  astruct_3 *max_gpio_pin;
  astruct_3 *min_gpio_pin;
  byte *gpio_command_ptr;
  astruct_3 *paVar1;
  
  gpio_state = 0xffffffff;
  gpio_command_ptr = gpio_command;
  gpio_function_pointer = FUN_0000b8a2();
  loop_counter = 0xffffffff;
  current_gpio_state = FUN_0000ddfa((char *)gpio_command_ptr,0x3d);
  gpio_command_type = 0xffffffff;
  gpio_pin_mask = temp_gpio_result;
  uVar8 = temp_gpio_status;
  current_gpio_byte = extraout_r4;
  paVar2 = extraout_r5;
  if (current_gpio_state != (char *)0x0) {
    do {
      pbVar12 = (byte *)(current_gpio_state + 1);
      if (*pbVar12 == 0) {
LAB_00009b20:
        puVar15 = (astruct_1 *)&gpio_device->field189_0xc0;
        piVar16 = (astruct_2 *)&gpio_device->field184_0xb8;
        goto LAB_00009b34;
      }
      command_result = FUN_0000df56(pbVar12,&DAT_00009c34,(char *)0x2);
      if (command_result == 0) {
        gpio_state = 0;
        gpio_pin_mask = extraout_r2_00;
        uVar8 = extraout_r3_00;
        current_gpio_byte = old_gpio_byte;
        paVar2 = last_command_result;
      }
      else {
        command_result = FUN_0000df56(pbVar12,&DAT_00009c38,(char *)0x2);
        if (command_result == 0) {
          gpio_state = 0x10;
          gpio_pin_mask = extraout_r2_01;
          uVar8 = extraout_r3_01;
          current_gpio_byte = extraout_r4_01;
          paVar2 = extraout_r5_01;
        }
        else {
          command_result = FUN_0000df56(pbVar12,&DAT_00009c3c,(char *)0x2);
          if (command_result == 0) {
            loop_counter = 1;
            gpio_pin_mask = extraout_r2_02;
            uVar8 = extraout_r3_02;
            current_gpio_byte = extraout_r4_02;
            paVar2 = extraout_r5_02;
          }
          else {
            command_result = FUN_0000df56(pbVar12,&DAT_00009c40,(char *)0x2);
            if (command_result == 0) {
              loop_counter = 0;
              gpio_pin_mask = extraout_r2_03;
              uVar8 = extraout_r3_03;
              current_gpio_byte = extraout_r4_03;
              paVar2 = extraout_r5_03;
            }
            else {
              command_result = FUN_0000df56(pbVar12,&DAT_00009c44,(char *)0x2);
              gpio_pin_mask = extraout_r2_04;
              uVar8 = extraout_r3_04;
              current_gpio_byte = extraout_r4_04;
              paVar2 = extraout_r5_04;
              if ((command_result == 0) ||
                 (command_result = FUN_0000df56(pbVar12,&DAT_00009c48,(char *)0x2),
                 gpio_pin_mask = extraout_r2_05, uVar8 = extraout_r3_05,
                 current_gpio_byte = extraout_r4_05, paVar2 = extraout_r5_05, command_result == 0))
              {
                gpio_command_type = 0;
              }
              else {
                command_result = FUN_0000df56(pbVar12,&DAT_00009c4c,(char *)0x2);
                if (command_result == 0) {
                  gpio_command_type = 2;
                  gpio_pin_mask = extraout_r2_06;
                  uVar8 = extraout_r3_06;
                  current_gpio_byte = extraout_r4_06;
                  paVar2 = extraout_r5_06;
                }
                else {
                  command_result = FUN_0000df56(pbVar12,&DAT_00009c50,(char *)0x2);
                  gpio_pin_mask = extraout_r2_07;
                  uVar8 = extraout_r3_07;
                  current_gpio_byte = extraout_r4_07;
                  paVar2 = extraout_r5_07;
                  if (command_result != 0) break;
                  gpio_command_type = 1;
                  current_gpio_byte = extraout_r4_07;
                  paVar2 = extraout_r5_07;
                }
              }
            }
          }
        }
      }
      current_gpio_state = current_gpio_state + 3;
      if (*current_gpio_state == '\0') goto LAB_00009b20;
    } while (*current_gpio_state == ',');
  }
LAB_00009b12:
  _sprintf_to_stdout((byte *)s_Invalid_GPIO_command__s_00009c54,(uint)gpio_command,gpio_pin_mask,
                     uVar8,current_gpio_byte,paVar2);
  return;
LAB_00009b34:
  command_result = FUN_00009ca4(&gpio_command_ptr,(int *)&min_gpio_pin);
  gpio_pin_mask = extraout_r2_08;
  uVar8 = extraout_r3_08;
  current_gpio_byte = extraout_r4_08;
  paVar2 = extraout_r5_08;
  if (command_result == 0) goto LAB_00009b12;
  if (*gpio_command_ptr == 0x2d) {
    gpio_command_ptr = gpio_command_ptr + 1;
    command_result = FUN_00009ca4(&gpio_command_ptr,(int *)&max_gpio_pin);
    paVar1 = max_gpio_pin;
    gpio_pin_mask = extraout_r2_09;
    uVar8 = extraout_r3_09;
    current_gpio_byte = extraout_r4_09;
    paVar2 = extraout_r5_09;
    if (command_result == 0) goto LAB_00009b12;
    if ((int)max_gpio_pin < (int)min_gpio_pin) {
      max_gpio_pin = min_gpio_pin;
      min_gpio_pin = paVar1;
    }
  }
  else {
    max_gpio_pin = min_gpio_pin;
  }
  _write_to_stdout((byte *)s_gpio_cmd____s__pins___d__d_drive_00009c6c,(uint)gpio_command,
                   min_gpio_pin,max_gpio_pin,loop_counter,gpio_state);
  uVar8 = extraout_r3_10;
  if ((int)min_gpio_pin <= (int)max_gpio_pin) {
    do {
      if (gpio_function_pointer != 0) {
        if ((-1 < (int)gpio_state) && (piVar16->field0_0x0 != 0)) {
          (**(code **)(piVar16->field0_0x0 + 0x20))
                    (puVar15->field0_0x0,min_gpio_pin,gpio_state & 0xff);
          uVar8 = extraout_r3_11;
        }
        if (loop_counter < 2) {
          bVar1 = FUN_0000a814();
          if ((CONCAT31(extraout_var,bVar1) == 0) || (min_gpio_pin != (astruct_3 *)0x79)) {
            command_result = piVar16->field0_0x0;
            uVar8 = extraout_r3_12;
            if (command_result != 0) {
              if (loop_counter == 0) {
                (**(code **)(command_result + 0x30))(puVar15->field0_0x0,min_gpio_pin,0);
                uVar8 = extraout_r3_16;
              }
              else {
                (**(code **)(command_result + 0x2c))(puVar15->field0_0x0,min_gpio_pin,0);
                uVar8 = extraout_r3_15;
              }
            }
          }
          else {
            (**(code **)(gpio_function_pointer + 0x24))
                      (0x15,0x15,0x10,*(code **)(gpio_function_pointer + 0x24));
            (**(code **)(gpio_function_pointer + 0x30))
                      (0x15,loop_counter,*(code **)(gpio_function_pointer + 0x30));
            uVar8 = extraout_r3_13;
          }
        }
        if ((-1 < (int)gpio_command_type) && (piVar16->field0_0x0 != 0)) {
          pcVar9 = *(code **)(piVar16->field0_0x0 + 0x3c);
          (*pcVar9)(puVar15->field0_0x0,min_gpio_pin,gpio_command_type & 0xff,pcVar9);
          uVar8 = extraout_r3_14;
        }
      }
      min_gpio_pin = min_gpio_pin + 1;
    } while ((int)min_gpio_pin <= (int)max_gpio_pin);
  }
  gpio_pin_mask = (uint)*gpio_command_ptr;
  if (gpio_pin_mask != 0x2c) {
    current_gpio_byte = gpio_command_ptr;
    paVar2 = max_gpio_pin;
    if (gpio_pin_mask == 0x3d) {
      return;
    }
    goto LAB_00009b12;
  }
  gpio_command_ptr = gpio_command_ptr + 1;
  goto LAB_00009b34;
}

