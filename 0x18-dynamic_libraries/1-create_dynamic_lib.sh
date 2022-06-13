#!/bin/bash
gcc -Wall -c *.c fPIC
gcc -shared -o liball.so *.o
