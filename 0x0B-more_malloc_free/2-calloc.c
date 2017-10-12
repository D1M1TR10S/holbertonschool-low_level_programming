#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb
 * @size
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	
	return((void *)arr);
}
