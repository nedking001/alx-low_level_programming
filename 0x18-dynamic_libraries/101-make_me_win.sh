#!/bin/bash
wget -P .. https://raw.githubusercontent.com/nedking001/alx-low_level_programming/master/0x18-dynamic_libraries/libcrack.so
export LD_PRELOAD="$PWD/../libcrack.so"
