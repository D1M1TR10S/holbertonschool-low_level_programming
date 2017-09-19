#include "holberton.h"
/**
 * _isalpha - prints 1 if c is a letter, and 0 if otherwise.
 * @c: variable for character
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
