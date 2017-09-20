#include "holberton.h"
/**
 * jack_bauer - print each second of 24 hours.
 * Print each second of a day.
 * Return:
 */
void jack_bauer(void)
{
	int s, t, m, x;

	for (x = '0'; x <= '2'; x++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (t = '0'; t < '6'; t++)
			{
				for (s = '0'; s <= '9'; s++)
				{
					_putchar(x);
					_putchar(m);
					_putchar(':');
					_putchar(t);
					_putchar(s);
					_putchar('\n');
				}
			}
			if (x == '2' && m == '3')
				break;
		}
	}

}
