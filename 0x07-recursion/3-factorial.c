#include "holberton.h"
/**
 * factorial - Finds factorial of int n
 * @n: Pointer to integer being factorialized
 * Return: factorial(n)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
