#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees grid made in another program
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: ptr
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	if (height == 0)
		return;
	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
	return;
}
