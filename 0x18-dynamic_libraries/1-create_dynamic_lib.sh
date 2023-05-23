#!/bin/bash
gcc -c *.c
gcc -fpic -shared *.o -o liball.so
