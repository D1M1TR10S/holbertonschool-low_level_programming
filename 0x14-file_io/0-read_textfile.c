#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - Read a text file and print it to standard output
 * @filename: String being printed in output
 * @letters: Number of letters to read and print
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int num;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, num);
	close(fd);

	return (num);
}
