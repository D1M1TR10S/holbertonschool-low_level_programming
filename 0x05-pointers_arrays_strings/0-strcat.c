#include "holberton.h"
/**
 * *_strcat - concatenates two strings together.
 * @dest: src is appending string to the end of dest
 * @src: string being appended to the end of dest
 * Return: char(dest)
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
