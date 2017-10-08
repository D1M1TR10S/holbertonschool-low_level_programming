#include "holberton.h"
/**
 * *_strncpy - Copies src to dest with n amount of multiples
 * @dest: Destination of src string
 * @src: Source of string going into dest
 * @n: Length of string being copied
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
