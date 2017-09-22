#include "holberton.h"
/**
 * print_triangle - Print a triangle of # signs
 * @size: Dimensions of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (z = size - x; z > 0; z--)
			{
				_putchar(' ');
			}
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
