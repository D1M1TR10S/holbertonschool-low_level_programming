#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include "holberton.h"
/**
 * create_file - Makes a new files an appends content into it
 * @filename: Name of file to be created
 * @text_content: Content to be appended into file
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;
	int check;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	check = write(fd, text_content, len);
	if (check == -1)
		return (-1);

	return (1);
}
