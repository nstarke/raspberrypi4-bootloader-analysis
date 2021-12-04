#!/usr/bin/env python3
import sys

TARGET_FILE = sys.argv[1]
DICT_FILE = sys.argv[2]

target = open(TARGET_FILE, 'r')
d = open(DICT_FILE, 'r').readlines()

# allow list these
d.append("usb")
d.append("pi")
d.append("bcm")

# these are long enough they don't need to be allowlisted
d.append(".bin")
d.append(".sig")
d.append(".upd")
d.append("tftp")
d.append("dhcp")

allowlist = [ 'bcm', 'pi', 'usb' ]

result = []

for t_line in target.readlines():
    for d_line in d:
        if len(d_line.strip()) < 4 and d_line not in allowlist:
            continue

        if d_line.lower() in t_line.lower():
            print(t_line)
            result.append(t_line)
            break

target.close()

open(TARGET_FILE, 'w').write("\n".join(result))
