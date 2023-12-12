#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRABY_PATH=.:$LD_LIBRABY_PATH
