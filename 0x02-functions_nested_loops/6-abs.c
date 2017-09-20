#include "holberton.h"
/**
 * _abs- Returns absolute value of input
 * @n: Character for variable
 * Prints absolute value of integer.
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
