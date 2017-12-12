#!/bin/bash
gcc -c -Wall -Werror -shared -fPIC *.c && gcc -shared -fPIC -o liball.so *.o
