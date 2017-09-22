#include "holberton.h"
/**
 * print_line - Prints '_' as many times as input says.
 * @n: number of lines spaces.
 * Return: Always 0
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
