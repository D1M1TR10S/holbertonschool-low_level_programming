#include "holberton.h"
/**
 * print_line - Prints '_' as many times as input says.
 * @n: number of lines spaces.
 * Return: Always 0
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
