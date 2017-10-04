#include "holberton.h"
/**
 * _puts_recursion - Recursively print a string
 * @s: string character
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
