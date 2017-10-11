#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Points to a 2-dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: ar
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(width * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int *));
		if (arr[i] == NULL)
		{
			free(arr);
			return (NULL);
		}
	}
	for (i = 0, j = 0; i < height; i++)
	{
		for ( ; j < width; j++)
			arr[i][j] = 0;
	}
	free(arr);
	return (arr);
}
