#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - Sets value of bit at given integer to 1
 * @n: Integer being received
 * @index: Position of binary number to change into 1
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * (sizeof(unsigned long int)))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
