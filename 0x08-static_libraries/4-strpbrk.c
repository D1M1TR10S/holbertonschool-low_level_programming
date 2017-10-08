#include "holberton.h"
/**
 * *_strpbrk - Returns 's' at the first character matching bytes in 'accept'
 * @s: String pointer being returned
 * @accept: bytes being checked for in 's'
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int x = 0;

	while (*s != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				return (s);
			}
			x++;
		}
		x = 0;
		s++;
	}
	return (NULL);
}
