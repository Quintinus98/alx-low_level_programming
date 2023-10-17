#!/bin/bash
gcc -fPIC -c *.c
rm 0-main.o
gcc -shared -o libdynamic.so *.o
