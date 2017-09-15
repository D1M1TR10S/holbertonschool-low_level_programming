#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n < ':'; n = n + 1)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
