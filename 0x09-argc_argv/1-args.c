#include <stdio.h>
/**
 * main - print number of arguments in the command line
 * @argc: Argument counter
 * @argv: String printer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	__attribute__((unused)) argv;

	printf("%p\n", argc - 1);
	return (0);
}
