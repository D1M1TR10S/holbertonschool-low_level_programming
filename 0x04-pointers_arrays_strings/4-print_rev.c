#include "holberton.h"
/**
 * print_rev - Print string in reverse
 * @s: pointer to quoted string
 * Return: nothing
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a != '\0')
	{
		_putchar(*(s + (a - 1)));
		a--;
	}
	_putchar('\n');
}
