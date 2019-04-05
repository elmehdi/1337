#!/bin/bash
gcc -c *.c
ar rc libft.a *.o
rm -rf *.o
