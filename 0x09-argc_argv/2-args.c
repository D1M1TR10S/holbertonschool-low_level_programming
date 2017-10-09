#include <stdio.h>
/**
 * main - Print all arguments with newlines in between
 * @argc: Counts arguments in command line
 * @argv: Prints arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}

	return (0);
}
