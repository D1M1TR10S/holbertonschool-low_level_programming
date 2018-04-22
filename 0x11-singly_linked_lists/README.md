# 0x11. C - Singly linked lists

## Description

The purpose of this project is to learn the following concepts:

 - When and why using linked lists vs arrays
 - How to build and use linked lists


## Tasks

###0. Print list

Write a function that prints all the elements of a list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print\_list.c -o a
$ ./a

###1. List length

Write a function that returns the number of elements in a linked list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-list\_len.c -o b
$ ./b

###2. Add node

Write a function that adds a new node at the beginning of a list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add\_node.c 0-print\_list.c -o c
$ ./c

###3. Add node at the end

Write a function that adds a new node at the end of a list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add\_node\_end.c 0-print\_list.c -o d
$ ./d

###4. Free list

Write a function that frees a list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-free\_list.c 3-add\_node\_end.c 0-print\_list.c -o e
$ valgrind ./e

###5. The Hare and the Tortoise

Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.

$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-first.c -o first
$ ./first
