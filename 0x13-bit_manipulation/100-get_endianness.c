#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - Check computer to see if it's a little or big endian
 * Return: Always 0.
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
