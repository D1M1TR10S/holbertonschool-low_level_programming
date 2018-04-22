# 0x16. C - Doubly linked lists

## Description

The purpose of this project is to learn:

 - What is a doubly linked list
 - How to use doubly linked lists
 - Start to look for the right source of information without too much help


## Tasks

##0. Print list

Write a function that prints all the elements of a dlistint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print\_dlistint.c -o a
$ ./a

##1. List length

Write a function that returns the number of elements in a linked dlistint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-dlistint\_len.c -o b
$ ./b

##2. Add node

Write a function that adds a new node at the beginning of a dlistint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add\_dnodeint.c 0-print\_dlistint.c -o c
$ ./c

##3. Add node at the end

Write a function that adds a new node at the end of a dlistint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c -o d
$ ./d 

##4. Free list

Write a function that free a dlistint\_t list.

$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c -o e
$ valgrind ./e

##5. Get node at index

Write a function that returns the nth node of a dlistint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c 5-get\_dnodeint.c -o h
$ ./h

##6. Sum list

Write a function that returns the sum of all the data (n) of a dlistint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add\_dnodeint\_end.c 4-free\_dlistint.c 6-sum\_dlistint.c -o i
$ ./i

##7. Insert at index

Write a function that inserts a new node at a given position.

$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 2-add\_dnodeint.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c 7-insert\_dnodeint.c -o j
$ ./j

##8. Delete at index

Write a function that deletes the node at index index of a dlistint\_t linked list.

$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add\_dnodeint\_end.c 0-print\_dlistint.c 4-free\_dlistint.c 8-delete\_dnodeint.c -o k
$ ./k
