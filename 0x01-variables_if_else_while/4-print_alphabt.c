#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
	{
		int ch; /* Declare ch variable */

		ch = 'a';

		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch = ch + 1;
		}
		putchar ('\n');
		return (0);
	}
