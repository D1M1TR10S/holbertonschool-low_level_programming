#include "holberton.h"
/**
 * _isupper - Returns 1 if c is uppercase.
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
