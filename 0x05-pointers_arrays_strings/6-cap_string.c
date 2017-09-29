#include "holberton.h"
/**
 * *cap_string - Capitalize all the first letter of wrods in a string
 * @c: pointer being returned to main.c file
 * Return: c
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{	
		if (c[i] == ' ')
		{
			i++;
			if (c[i] >= 97 && c[i] <= 122)
				c[i] = c[i] - 32;
		}
		if (c[i] == '.')
		{
			i++;
			if (c[i] >= 97 && c[i] <= 122)
				c[i] = c[i] - 32;
		}
		if (c[i] == '\n')
		{
			i++;
			if (c[i] >= 97 && c[i] <= 122)
				c[i] = c[i] - 32;
		}
		if (c[i] == '\t')
		{
			i++;
			if (c[i] >= 97 && c[i] <= 122)
				c[i] = c[i] - 32;
		}
	}
	return (c);
}
