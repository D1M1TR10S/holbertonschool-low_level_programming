#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the name of this file
 * @argc: Number of command line argument
 * @argv: Command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (1);
}
