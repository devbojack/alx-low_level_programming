#!/bin/bash
wget -P .. https://raw.githubusercontent.com/devbojack/alx-low_level_programming/blob/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD="$PWD/../liball.so"
