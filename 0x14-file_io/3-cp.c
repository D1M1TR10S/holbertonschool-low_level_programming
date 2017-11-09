#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_error - Print and error into standard output
 * @arg: Argument where error was found
 * @...: Variable arguments from input
 * Return: void
 */
void print_error(char *arg, ...)
{
	va_list type;
	int error;

	va_start(type, arg);

	error = va_arg(type, int);
	if (error == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

	if (error == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);

	if (error == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);

	if (error == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", va_arg(type, int));

	va_end(type);
	exit(error);
}
/**
 * main - Copy contents of one file into another file
 * @argc: Number of arguments in command line
 * @argv: Each argument string
 * Return: 1 or -1
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_1, wrote, closed;
	char *buffer;

	if (argc != 3)
		print_error(argv[0], 97);

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	buffer = malloc(sizeof(char) * CHARMAX);
	do {
		read_1 = read(fd_from, buffer, CHARMAX);
		if (read_1 == -1)
			print_error(argv[1], 98);
		wrote = write(fd_to, buffer, read_1);
		if (wrote == -1)
			print_error(argv[2], 99);
	} while (read_1 == CHARMAX);

	closed = close(fd_from);
	if (closed == -1)
		print_error(argv[1], 100, -1);
	closed = close(fd_to);
	if (closed == -1)
		print_error(argv[2], 100, -1);
	free(buffer);
	return (1);
}
