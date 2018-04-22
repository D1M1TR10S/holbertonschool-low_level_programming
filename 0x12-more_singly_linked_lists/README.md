# 0x12. C - More singly linked lists

## Description

The purpose of this project is to learn the following concepts:

 - How to use linked lists
 - Start to look for the right source of information without too much help

## Tasks

###0. Print list

Write a function that prints all the elements of a list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print\_listint.c -o a
$ ./a

###1. List length

Write a function that returns the number of elements in a linked listint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-listint\_len.c -o b
$ ./b

###2. Add node

Write a function that adds a new node at the beginning of a listint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add\_nodeint.c 0-print\_listint.c -o c
$ ./c

###3. Add node at the end

Write a function that adds a new node at the end of a list\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add\_nodeint\_end.c 0-print\_listint.c -o d
$ ./d

###4. Free list

Write a function that frees a listint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 4-free\_listint.c -o e
$ valgrind ./e

###5. Free

Write a function that frees a listint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 5-free\_listint2.c -o f
$ valgrind ./f

###6. Pop

Write a function that deletes the head node of a listint\_t linked list, and returns the head node’s data (n).

$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 5-free\_listint2.c 6-pop\_listint.c -o g
$ valgrind ./g

###7. Get node at index

Write a function that returns the nth node of a listint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 5-free\_listint2.c 7-get\_nodeint.c -o h
$ ./h

###8. Sum list

Write a function that returns the sum of all the data (n) of a listint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add\_nodeint\_end.c 5-free\_listint2.c 8-sum\_listint.c -o i
$ ./i

###9. Insert

Write a function that inserts a new node at a given position.

$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 5-free\_listint2.c 9-insert\_nodeint.c -o j
$ ./j

###10. Delete at index

Write a function that deletes the node at index index of a listint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 10-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 5-free\_listint2.c 10-delete\_nodeint.c -o k
$ valgrind ./k

###11. Reverse list

Write a function that reverses a listint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 3-add\_nodeint\_end.c 0-print\_listint.c 5-free\_listint2.c 100-reverse\_listint.c -o l
$ valgrind ./l
