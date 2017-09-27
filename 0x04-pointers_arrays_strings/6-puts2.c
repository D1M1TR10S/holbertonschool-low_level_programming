#include "holberton.h"
/**
 * puts2 - Puts one of every two characters into output.
 * @str: String being printed by function
 * Return: Nothing
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
