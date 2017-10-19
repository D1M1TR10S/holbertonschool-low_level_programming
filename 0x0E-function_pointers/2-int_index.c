#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Compare two array values
 * @array: Array of integers
 * @size: Size of array wit hintegers being compared
 * @cmp: Pointer to function being used to compare variables
 * Return: 0, 1, or 2
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL || cmp != NULL || size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
