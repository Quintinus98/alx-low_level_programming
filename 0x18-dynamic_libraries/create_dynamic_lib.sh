#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
gcc -shared -o libdynamic.so *.o
nm -D libdynamic.so
