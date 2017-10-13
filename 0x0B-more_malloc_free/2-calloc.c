#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of values in array
 * @size: size of data type being passed
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
