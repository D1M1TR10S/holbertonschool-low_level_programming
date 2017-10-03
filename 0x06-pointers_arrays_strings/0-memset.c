#include "holberton.h"

/**
 * *_memset - prints constant byte 'b' 'n' number of times
 * @b: Constant byte being printed
 * @s: Pointer to destination
 * @n: Unsigned int for number of times being copied
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
