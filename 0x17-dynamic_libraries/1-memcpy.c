#include "holberton.h"

/**
 * *_memcpy - Copies characters from src and puts them into dest
 * @dest: the destination that src is being copied to
 * @src: the pointer to values being pointed
 * @n: Number of times *src is being printed
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
