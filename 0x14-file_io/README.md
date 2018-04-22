# 0x14. C - File I/O

## Description

The purpose of this project is to learn:

 - How to create, open, close, read and write files
 - What are file descriptors
 - What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
 - How to use the I/O system calls open, close, read and write
 - What are and how to use the flags O\_RDONLY, O\_WRONLY, O\_RDWR
 - What are file permissions, and how to set them when creating a file with the open system call
 - What is a system call
 - What is the difference between a function and a system call


## Tasks

##0. Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read\_textfile.c -o a
$ ./a Requiescat

##1. Under the snow

Create a function that creates a file.

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create\_file.c -o b
$ ./b hello world

##2. Speak gently, she can hear

Write a function that appends a text at the end of a file.

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-append\_text\_to\_file.c -o c
$ ./c hello " World!

##3. cp

Write a program that copies the content of a file to another file.

$ gcc -Wall -pedantic -Werror -Wextra 3-cp.c -o cp
$ ./cp incitatous Incitatous
