# 0x04. C - Pointers, arrays and strings

## Description

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

 - What are pointers and how to use them
 - What are arrays and how to use them
 - What are the differences between pointers and arrays
 - How to use strings and how to manipulate them
 - Scope of variables

## Tasks
###0. 98 Battery st.

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset\_to\_98.c -o 0-98
$ ./0-98

###1. Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
$ ./1-swap

###2. This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
$ ./2-strlen

###3. I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.

$ gcc -Wall -pedantic -Werror -Wextra \_putchar.c 3-main.c 3-puts.c -o 3-puts
$ ./3-puts

###4. I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.

$ gcc -Wall -pedantic -Werror -Wextra \_putchar.c 4-main.c 4-print\_rev.c -o 4-print\_rev
$ ./4-print\_rev

###5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.

$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev\_string.c -o 5-rev\_string
$ ./5-rev\_string

###6. Half the lies they tell about me aren't true

Write a function that prints one char out of 2 of a string, followed by a new line.

$ gcc -Wall -pedantic -Werror -Wextra \_putchar.c 6-main.c 6-puts2.c -o 6-puts2
$ ./6-puts2

###7. Winning is only half of it. Having fun is the other half 

Write a function that prints half of a string, followed by a new line.

$ gcc -Wall -pedantic -Werror -Wextra \_putchar.c 7-main.c 7-puts\_half.c -o 7-puts\_half
$ ./7-puts\_half

###8. Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print\_array.c -o 8-print\_array
$ ./8-print\_array 

###9. strcpy

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
$ ./9-strcpy
