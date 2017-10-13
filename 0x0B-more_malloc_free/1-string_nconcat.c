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
		l++;

	return (l);
}
/**
 * string_nconcat - Concatenate two strings
 * @s1: First string coming in
 * @s2: Second string coming in
 * @n: number of bytes being concatenated from s2
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, count;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	count = _strlen(s1) + 1 + n;

	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
