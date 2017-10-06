#include "holberton.h"
/**
 * wildcmp - Check to see if two strings are the same
 * @s1: Character of first string being compared
 * @s2: Character of 2nd string being compared
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);

	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
		return (0);
}
