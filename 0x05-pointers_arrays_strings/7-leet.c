#include "holberton.h"
/**
 * *leet - Converts AEOTL to l33t characters
 * @c: Character declared as s in the main file
 * Return: c
 */
char *leet(char *c)
{
	unsigned int a;
	int n = 0;
	char a1[] = "aAeEoOtTlL";
	char a2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (c[n] != '\0')
	{
		for (a = 0; a < sizeof(a1); a++)
		{
			if (c[n] == a1[a])
				c[n] = a2[a];
		}
		n++;
	}
	return (c);
}
