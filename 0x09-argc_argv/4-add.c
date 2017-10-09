#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add numbers
 * @argc: Number of command line arguments
 * @argv: Command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int c;
	int n;


	for (n = 1; n < argc; n++)
	{
		for (c = 0; argv[n][c] != '\0'; c++)
		{
			if (argv[n][c] > '9' || argv[n][c] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
