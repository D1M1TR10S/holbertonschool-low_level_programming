#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int c;

	for (n = '0'; n <= '9'; n = n + 1)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c = c + 1)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}
