#include "holberton.h"
/**
 * puts_half - Cuts string in half and return.
 * @str: Pointer referring to string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;

	n = n / 2;

	if (n % 2 == 0)
		n++;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
