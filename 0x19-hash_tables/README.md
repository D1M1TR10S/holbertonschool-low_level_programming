# 0x19. C - Hash tables

## Description

The purpose of this project is to learn the following concepts:

 - What is a hash function
 - What makes a good hash function
 - What is a hash table, how do they work and how to use them
 - What is a collision and what are the main ways of dealing with collisions in the context of a hash table
 - What are the advantages and drawbacks of using hash tables
 - What are the most common use cases of hash tables


## Tasks

##0. >>> ht = {}

Write a function that creates a hash table.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-hash\_table\_create.c -o a
$ ./a

##1. djb2

Write a hash function implementing the djb2 algorithm.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-djb2.c -o b
$ ./b

##2. key -> index

Write a function that gives you the index of a key.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 1-djb2.c 2-key\_index.c -o c
$ ./c

##3. >>> ht['betty'] = 'holberton'

Write a function that adds an element to the hash table.

##4. >>> ht['betty']

Write a function that retrieves a value associated with a key.

$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c 4-hash\_table\_get.c -o e
$ ./e

##5. >>> print(ht)

Write a function that prints a hash table.

$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c 4-hash\_table\_get.c 5-hash\_table\_print.c -o f
$ ./f

##6. >>> del ht

Write a function that deletes a hash table.

$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash\_table\_create.c 1-djb2.c 2-key\_index.c 3-hash\_table\_set.c 4-hash\_table\_get.c 5-hash\_table\_print.c 6-hash\_table\_delete.c -o g
$ valgrind ./g
