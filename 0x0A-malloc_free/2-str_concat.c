#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Check the length of a string
 * @s: String being tested
 * Return: l.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * *str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: str.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int n = 0;
	int len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (n = 0; n < len2; n++, i++)
		str[i] = s2[n];
	str[i] = '\0';

	return (str);
}
