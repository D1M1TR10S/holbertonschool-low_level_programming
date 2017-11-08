#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - Append text from "text_content" into "filename"
 * @filename: Name of file to be appended to
 * @text_content: Content to be appended into file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;
	int check;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	check = write(fd, text_content, len);
	if (check == -1)
		return (-1);

	return (1);
}
