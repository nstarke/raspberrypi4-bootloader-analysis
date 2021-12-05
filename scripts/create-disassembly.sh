#!/bin/sh

# This is the pieeprom.bin file path
FILENAME="$1"

# A good dictionary to use is "/usr/share/dict/american-english-insane"
# (from Ubuntu).
DICT_FILE="$2"

#
# Must have compiled "objdump" as part of the vc4-toolchain from here:
# https://github.com/itszor/vc4-toolchain
# Make sure vc4-toolchain/binutils-build/binutils/objdump is on the
# path as "vc4-objdump"
#

if [ ! -f "$FILENAME.disassembly.txt" ]; then
	vc4-objdump \
		-z \
		-D \
		-b binary \
		-mvc4 \
		--adjust-vma=0x7ffffff8 \
		"$FILENAME" > "$FILENAME.disassembly.txt"
	sed -i -e "s/^8/0x8/g" "$FILENAME.disassembly.txt"
	sed -i -e "s/^7/0x7/g" "$FILENAME.disassembly.txt"
fi

if [ ! -f "$FILENAME.strings.txt" ]; then
	strings --radix=x "$FILENAME" > "$FILENAME.strings.txt"
	sed -i -e "s/^\s*//g" "$FILENAME.strings.txt"
	python3 remove-bad-strings.py "$FILENAME.strings.txt" "$DICT_FILE"
fi

if [ ! -f "$FILENAME.map.txt" ]; then
	python3 map-strings-to-disassembly.py \
		"$FILENAME.strings.txt" \
		"$FILENAME.disassembly.txt" \
		"$FILENAME.map.txt"
	
	sh map-registers.sh "$FILENAME.map.txt"
	python3 map-functions.py "$FILENAME.map.txt"
fi
