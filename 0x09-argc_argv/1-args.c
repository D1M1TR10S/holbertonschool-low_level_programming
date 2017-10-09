#include <stdio.h>
/**
 * main - Print the name of this file
 * @argc: Number of command line argument
 * @argv: Command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	*argv = 0;
	printf("%d\n", argc - 1);
	return (0);
}
