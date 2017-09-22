#include "holberton.h"
/**
 * print_diagonal - Prints a diagonal line across the screen.
 * @n: number of spaces before diagonal line.
 * Return: 0
 */
void print_diagonal(int n)
{
	int x, s;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (s = 1; s < x; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
