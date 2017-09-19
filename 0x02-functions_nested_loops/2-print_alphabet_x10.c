#include "holberton.h"
/**
 * print_alphabet_x10 -prints the alphabet 10 times
 * void: no argument
 * Return
 */
void print_alphabet_x10(void)
{
	int l;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
