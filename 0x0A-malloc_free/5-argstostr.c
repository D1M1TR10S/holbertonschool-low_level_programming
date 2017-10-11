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
 * argstostr - Concatenate arguments into a string with a new line
 * @ac: argc count of arguments
 * @av: argument values
 * Return: cat
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j;
	int n = 0;
	int size = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != NULL; i++)
		size += _strlen(av[i]) + 1;

	size += 1;
	cat = malloc(size * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cat[n] = av[i][j];
			n++;
		}
		cat[n] = '\n';
		n++;
	}
	return (cat);
}
