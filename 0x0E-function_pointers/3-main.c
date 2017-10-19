#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Receive arguments as input and point to arithmetic functions
 * @argv: Argument received
 * @argc: Count of arguments in command line
 * Return: int
 */
int main(int argc, char *argv[])
{
	int val1 = atoi(argv[1]);
	int val2 = atoi(argv[3]);
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	result = (*get_op_func(argv[2]));
	if (result == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", result(val1, val2));
	return (0);
}
