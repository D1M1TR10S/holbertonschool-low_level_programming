#include "holberton.h"
/**
 * _isdigit - Determines if input is a digit.
 * @c: Variable for input character.
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
