#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *create_array - Make an array of chars
 * @size: Size of string
 * @c: character within string
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	
	ar = malloc(size * sizeof(char));
	
	if (ar != NULL)
	{
		for (i = 0; i < size; i++)
			ar[i] = c;
	}
	return(ar);
}
