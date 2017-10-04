#include "holberton.h"
/**
 * _print_rev_recursion - Print string in reverse using a recursive function
 * @s: String characters being printed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
