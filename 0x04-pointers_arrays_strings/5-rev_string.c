#include "holberton.h"
/**
 * rev_string - Reverse the string and printnto output
 * @s: Characters being reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int a;
	int b;
	char c;

	for (a = 0; s[a] != '\0'; a++)
		;

	a = a - 1;
	b = 0;

	while (a > b)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		a--;
		b++;
	}
}
