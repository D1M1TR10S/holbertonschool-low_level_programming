#include "holberton.h"
/**
 * more_numbers - Print 0-14 ten times.
 * Return: Always 0
 */
void more_numbers(void)
{
	int n = 0;
	int x = 0;

	while (x <= 9)
	{
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		n = 0;
		_putchar('\n');
		x++;
	}
}
