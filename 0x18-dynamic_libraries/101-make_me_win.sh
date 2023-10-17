#!/bin/bash
wget -P /tmp/ https://raw.github.com/Quintinus98/alx-low_level_programming/master/0x18-dynamic_libraries/makemewin.so
export LD_PRELOAD=/tmp/makemewin.so
