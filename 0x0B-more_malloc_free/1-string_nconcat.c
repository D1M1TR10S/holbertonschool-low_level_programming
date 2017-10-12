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
	unsigned int l;

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
	unsigned int i;
	unsigned int j;
	unsigned int m = _strlen(s1);
	unsigned int n2 = _strlen(s2);
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n2 < n)
		n = _strlen(s2);

	ptr = malloc((m + n) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < m; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	return (ptr);
}
