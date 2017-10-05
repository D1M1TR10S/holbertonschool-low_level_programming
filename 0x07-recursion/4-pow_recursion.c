#include "holberton.h"
/**
 * _pow_recursion - Recursively raise x to the power of y
 * @x: Number being raised
 * @y: Number being used as the exponent
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (x / x);
	else
		return (x * _pow_recursion(x, y - 1));
}
