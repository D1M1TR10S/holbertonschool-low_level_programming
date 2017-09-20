#include "holberton.h"
/**
 * times_table - Make a times table
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			z = x * y;

			if ((z < 10) && (x != 0))
			{
				_putchar(' ');
			}
			else if (z > 9)
			{
				_putchar(z / 10 + 48);
			}
			_putchar(z % 10 + 48);
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
