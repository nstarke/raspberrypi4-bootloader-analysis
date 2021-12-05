#!/usr/bin/env python3

import sys, re, copy

MAP_FILE = sys.argv[1]

prog = re.compile(r'0x([a-fA-F0-9]{8})$')
map_file = open(MAP_FILE, 'r')
lines = map_file.readlines()
map_file.close()

output = [("", False)] * len(lines)

xref_search = copy.deepcopy(lines)

for idx, line in enumerate(lines):
    orig_str = line
    orig_addr = orig_str.split(':')[0]
    if re.search(prog, orig_str):
        orig_xref = orig_str[-11:].strip()
        for xref_idx, xref in enumerate(xref_search):
            xref_str = xref.strip()
            xref_addr = xref_str.split(':')[0]
            if xref_addr == orig_xref:
                b_ref = "\t\t\t\t; BREF: " + orig_addr + '\n'
                output[xref_idx] = (xref_str + b_ref, True)
                break
    
    if not output[idx][1]:  
        output[idx] = (orig_str, False)

def mapper(n):
    return n[0]

open(MAP_FILE, 'w').write(''.join(map(mapper, output)))