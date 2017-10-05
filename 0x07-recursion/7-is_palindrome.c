#include "holberton.h"
int compare(char *s, int i, int d);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Checks string to see if it's a palindrome
 * @s: String being checked
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int d = _strlen_recursion(s) - 1;

	return (compare(s, i, d));
}

/**
  * _strlen_recursion - Counts length of the string
  * @s: Pointer to string length
  * Return: s
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * compare - incrementing i & d
  * @s: pointer
  * @i: incrementer
  * @d: decrementer
  * Return: 0 or 1
  */

int compare(char *s, int i, int d)
{
	if (s[i] != s[d])
		return (0);

	if ((i > d) || (i == d))
		return (1);

	return (compare(s, i + 1, d - 1));
}
