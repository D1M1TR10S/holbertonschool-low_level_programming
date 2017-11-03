#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - Return number of different bits between two numbers
 * @n: First int received
 * @m: Second int received to be compared against first
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip = 0;

	while ((n > 0) || (m > 0))
	{
		if ((n & 1) != (m & 1))
			flip++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
