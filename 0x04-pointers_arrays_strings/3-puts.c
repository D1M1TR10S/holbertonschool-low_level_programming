#include "holberton.h"
/**
 * _puts - Printing string into standard output.
 * @str: Character string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
