#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar rc lib_all.a *.o
mv lib_all.a liball.a
