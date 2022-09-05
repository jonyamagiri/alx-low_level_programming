#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o liball.so *.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
