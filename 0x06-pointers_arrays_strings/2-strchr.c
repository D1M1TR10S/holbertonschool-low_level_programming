#include "holberton.h"
/**
 * *_strchr - Return first occurence of character c in the string s
 * @s: Pointer to string saying hello
 * @c: Variable for letter 'l'
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
