#!/bin/bash
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
gcc -wall -werror -wextra -c *.c
ar -rc liball.a *.o
