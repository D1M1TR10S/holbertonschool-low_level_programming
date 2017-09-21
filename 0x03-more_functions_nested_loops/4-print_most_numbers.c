#include "holberton.h"
/**
 * print_most_numbers - print numbers 0-9 without 2 and 4
 * @n: integer printed
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if ((n != 50) && (n != 52))
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
