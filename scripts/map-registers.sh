#!/bin/sh
FILENAME="$(pwd)/$1"
sed -i -e "s/r28/esp/g" "$FILENAME"
sed -i -e "s/r29/tp/g" "$FILENAME"
sed -i -e "s/r30/sr/g" "$FILENAME"