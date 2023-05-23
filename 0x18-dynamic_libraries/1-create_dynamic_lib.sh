#!/bin/bash
gcc -c *.c
gcc -fpic -shared -o liball.so *.o
