#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - Returns value of bit at given integer
 * @n: Integer being received
 * @index: Position of binary number to return bit
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 8 * (sizeof(unsigned long int)))
		return (-1);
	return ((n >> index) & 1);
}
