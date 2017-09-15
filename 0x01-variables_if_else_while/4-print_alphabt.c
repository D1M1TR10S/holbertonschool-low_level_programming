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

		while (ch <= 'z') /* While loops can only fit one variable here */
		{
			if (ch != 'e' && ch != 'q') /* Use && to include both statements */
			{
				putchar(ch);
			}
			ch = ch + 1; /* This line must go after the 'if' */
		}
		putchar ('\n');
		return (0);
	}
