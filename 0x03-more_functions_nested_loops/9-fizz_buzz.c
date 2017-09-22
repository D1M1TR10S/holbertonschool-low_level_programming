#include <stdio.h>
/**
 * main - Print Fizz for Multiples of 3
 * Return: 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");

		else if (n % 5 == 0)
			printf("Buzz");

		else if (n % 3 == 0)
			printf("Fizz");

		else
			printf("%d", n);

		if (n != 100)
			printf(" ");

		n++;
	}
	printf("\n");
	return (0);
}
