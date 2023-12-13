#!/bin/bash
wget -P .. https://raw.githubusercontent.com/amanda-dandure/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
