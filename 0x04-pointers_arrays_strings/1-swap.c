#include "holberton.h"
/**
 * swap_int - Swap values of integers a & b
 * @a: Turns from 98 to 42
 * @b: Turns from 42 to 98
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
