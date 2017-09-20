#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints every integer between n and 98, as well as 98.
 * @n: Variable for input integers
 * Result: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{	
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
