#include "holberton.h"
/**
 * *_strncat - concatenates two strings together.
 * @dest: src is appending string to the end of dest
 * @src: string being appended to the end of dest
 * @n: Length of position in array of src
 * Return: char(dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int i = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while ((src[i] != '\0') && (i < n))
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
