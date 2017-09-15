#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;
	int s;

	for (f = '0'; f <= '9'; f = f + 1)
	{
		for (s = '0'; s <= '9'; s = s + 1)
		{
			putchar (f);
			putchar (s);
			if (s < '9' || f < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
