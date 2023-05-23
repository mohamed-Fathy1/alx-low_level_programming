#!/bin/bash
gcc -fpic *.c
gcc -shared -o liball.so *.o
