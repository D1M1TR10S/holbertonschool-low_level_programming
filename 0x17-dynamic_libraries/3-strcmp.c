#include "holberton.h"
/**
 * _strcmp - Compares strings s1 & s2
 * @s1: First string to be compared
 * @s2: Second string being compared with the first
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int r = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (r == 0)
			r = s1[i] - s2[i];
		else
			break;
	}
	return (r);
}
