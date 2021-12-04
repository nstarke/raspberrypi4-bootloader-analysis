#!/usr/bin/env python3
import sys, math

STRINGS_FILE = sys.argv[1]
DISASSEMBLY_FILE = sys.argv[2]
OUTPUT_FILE = sys.argv[3]

strings = open(STRINGS_FILE, 'r').readlines()
disassembly = open(DISASSEMBLY_FILE, 'r').readlines()

output = []

for d in disassembly:
    d_parts = d.split(':')
    
    if len(d_parts) < 2:
        continue

    d_addr = d_parts[0]
    d_inst = d_parts[1]

    for s in strings:
        str_parts = s.split(' ')
        if len(str_parts) < 2:
            continue
        
        tmp_num = str_parts.pop(0)
        rest_of_str = ' '.join(str_parts).strip()
        str_len = math.floor(len(rest_of_str) / 2)
        str_int = int(tmp_num, 16)
        str_addr = '0x800' + hex(str_int)[2:].rjust(5, '0')

        if str_addr == d_addr:
            print(str_addr, d_addr)
            d = d + '\t\t\t\t; STRING: "' + rest_of_str + '"\n'
            break

        b = False
        for x in range(str_int - str_len - 1, str_int + str_len + 1):
            tmp_addr = '0x800' + hex(x)[2:].rjust(5, '0')
            if tmp_addr in d_inst:
                xref = '"' + rest_of_str + '"\t\t\t\t; XREF: ' + tmp_addr
                print(xref)
                d = d.replace(tmp_addr, xref)
                b = True
                break

        if b:
            break

    output.append(d)

output = "".join(output)

open(OUTPUT_FILE, 'w').write(output)
