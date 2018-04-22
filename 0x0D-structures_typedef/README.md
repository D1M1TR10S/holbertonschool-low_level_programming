# 0x0D. C - Structures, typedef

## Description

The purpose of this project is to learn the following concepts:

 - What are structures, when, why and how to use them
 - How to use typedef


## Tasks

###0. Django 

Define a new type struct dog with the following elements:

$ make gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
$ ./a

###1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type struct dog

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init\_dog.c -o b
$ ./b

###2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print\_dog.c -o c
$ ./c

###3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type dog\_t as a new name for the type struct dog.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
$ ./d

###4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new\_dog.c -o e
$ ./e

###5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function that frees dogs.

$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free\_dog.c 4-new\_dog.c -o f
$ valgrind ./f
