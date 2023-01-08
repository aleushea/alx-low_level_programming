#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c *.c
ar -rc liball.a *.o
ranlib liball.a
