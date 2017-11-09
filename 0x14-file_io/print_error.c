#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * print_error - Print and error into standard output
 * @arg: Argument where error was found
 * @x: Type of error number returned
 * Return: an error number
 */
void print_error(char *arg, ...)
{
	char *filename;
	va_list type;
	va_start(type, arg);

	if (x == 97)
		dprintf("Usage: cp file_from file_to\n");
		exit (x);

	filename = va_arg(type, char *);
	if (x == 98)
		dprintf("Error: Can't read from file %s\n", filename);
		exit (x);
	
	if (x == 99)
		dprintf("Error: Can't write to %s\n", filename);
		exit (x);

	if (x == 100)
		dprintf("Error: Can't close fd %d\n", va_arg(type, int);
		exit (x);

	va_end(type);
}
