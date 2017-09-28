#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print the values of each array position
 * @a: array address
 * @n: array number
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while ((i < n) && (a[i] != '\0'))
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
