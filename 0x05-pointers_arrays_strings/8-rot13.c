#include "holberton.h"
/**
 * *rot13 - rot13 encrypt all letters of the alphabet in a string
 * @c: Character declared as s in the main file
 * Return: c
 */
char *rot13(char *c)
{
	int n = 0;

	while (c[n] != '\0')
	{
		while ((c[n] >= 'a' && c[n] <= 'z') ||
				(c[n] >= 'A' && c[n] <= 'Z'))
		{
			if ((c[n] >= 'a' && c[n] <= 'm') ||
					(c[n] >= 'A' && c[n] <= 'M'))
			{
				c[n] = (c[n] + 13);
				break;
			}
			else
			{
				c[n] = (c[n] - 13);
				break;
			}
		}
		n++;
	}
	return (c);
}
