# 0x0A. C - More malloc, free

## Description

The purpose of this project is to learn how to allocate memory for programs in C.

 - What is the difference between automatic and dynamic allocation
 - What is malloc and free and how to use them
 - Why and when use malloc
 - How to use valgrind to check for memory leak


## Tasks

###0. Trust no one

Write a function that allocates memory using malloc.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc\_checked.c -o a
$ ./a

###1. string\_nconcat

Write a function that concatenates two strings.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-string\_nconcat.c -o b
$ ./b

###2. \_calloc

Write a function that allocates memory for an array, using malloc.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-calloc.c -o c
$ ./c

###3. array\_range

Write a function that creates an array of integers.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-array\_range.c -o d
$ ./d

###4. \_realloc

Write a function that reallocates a memory block using malloc and free

$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-realloc.c -o e
$ ./e
