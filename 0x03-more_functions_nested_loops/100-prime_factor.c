#include <stdio.h>
/**
 * main - Print largest prime factor of a number 
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	int c, f;

	c = 3;
	f = 0;

	for (c = 3; f <= n; c = c + 2)
	{
		while (n % c == 0)
			n = n / c;
		f = c;
	}
	printf("%d\n", f);
	return (0);
}
