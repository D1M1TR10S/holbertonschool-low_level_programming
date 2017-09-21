#include "holberton.h"
/**
 * print_numbers - Print numbers 0-9
 * Return: 0
 */
void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
