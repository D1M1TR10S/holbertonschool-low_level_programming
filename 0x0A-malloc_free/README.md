# 0x0A. C - malloc, free

## Description

The purpose of this project is to learn how to allocate memory for programs in C.

 - What is the difference between automatic and dynamic allocation
 - What is malloc and free and how to use them
 - Why and when use malloc
 - How to use valgrind to check for memory leak


## Tasks

###0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-create\_array.c -o a
$ ./a

###1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strdup.c -o s
$ ./s 

###2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-str\_concat.c -o c
$ ./c

###3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-alloc\_grid.c -o g
$ ./g 

###4. It's not bragging if you can back it up

Write a function that frees a 2 dimensional grid previously created by your alloc\_grid function.

$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-alloc\_grid.c 4-free\_grid.c -o f
$ valgrind ./f

###5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Write a function that concatenates all the arguments of your program.

$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-argstostr.c -o args
$ ./args Hello World
