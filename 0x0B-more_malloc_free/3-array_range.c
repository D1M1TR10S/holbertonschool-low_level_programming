#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Allocate memory for an array of integers
 * @min: Beginning of integers being passed
 * @max: End of integers being passed
 * Return: arr
 */
int *array_range(int min, int max)
{
	int i = 0;
	int n;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (n = min; n <= max; n++, i++)
		arr[i] = n;

	return (arr);
}
