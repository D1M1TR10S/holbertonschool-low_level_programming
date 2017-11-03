#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - Sets value of bit at given integer to 0
 * @n: Integer being received
 * @index: Position of binary number to change into 0
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * (sizeof(unsigned long int)))
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
