#include "holberton.h"
/**
 * _strlen_recursion - Print length of string
 * @s: String length to be incremented
 * Return: s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
