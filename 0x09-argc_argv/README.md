# 0x09. C - argc, argv

## Description

The purpose of this project is to read and use arguments passed from stdin:

 - What are two prototypes of main that you know of, and in which case do you use one or the other
 - How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters


## Tasks

###0. It ain't what they call you, it's what you answer to 

This program prints its name, followed by a new line.

$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
$ ./mynameis

###1. Silence is argument carried out by other means

This program prints the number of arguments passed into it.

$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
$ ./nargs "hello, world"

###2. The best argument against democracy is a five-minute conversation with the average voter

This program prints all arguments it receives.

$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
$ ./args You can do anything, but not everything.

###3. Neither irony nor sarcasm is argument

This program multiplies two numbers.

$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
$ ./mul 2 3

###4. To infinity and beyond

This program adds positive numbers.

$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
$ ./add 1 1
