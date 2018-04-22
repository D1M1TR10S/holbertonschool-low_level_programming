# 0x0E. C - Function pointers

## Description

The purpose of this project is to learn the following concepts:

 - What are function pointers and how to use them
 - What does a function pointer exactly hold
 - Where does a function pointer point to in the virtual memory


## Tasks

###0. What's my name

Write a function that prints a name.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print\_name.c -o a
$ ./a

###1. If you spend too much time thinking about a thing, you'll never get it done 

Write a function that executes a function given as a parameter on each element of an array.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array\_iterator.c -o b
$ ./b

###2. To hell with circumstances; I create opportunities

Write a function that searches for an integer.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int\_index.c -o c
$ ./c

###3. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op\_functions.c 3-get\_op\_func.c -o calc
$ ./calc 1 + 1
