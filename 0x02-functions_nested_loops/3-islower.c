#include "holberton.h"
/**
 * _islower - prints 1 if c is a lowercase letter, and 0 if otherwise.
 * @c: variable for character
 * Description: checks if char c is lowercase by counting ascii characters.
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
