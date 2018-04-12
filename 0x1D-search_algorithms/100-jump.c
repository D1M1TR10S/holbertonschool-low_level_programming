#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array using jump search algorithm
 * @array: Array being search
 * @size: Size of array given
 * @value: Value being searched for
 * Return: Index of value in array or -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int i, l, jump = sqrt(size);

	if (array != NULL && size > 1)
	{
		for (i = 0; i < size; i += jump)
		{
			if (array[i] >= value || (i + jump) > size)
			{
				if ((i + jump) > size)
				{
					printf("Value checked array[%d] = [%d]\n", i, array[i]);
					l = i;
					i += jump;
				}
				else
					l = i - jump;
				printf("Value found between indexes [%d] and [%d]\n", l, i);
				while (l <= i && l < size)
				{
					printf("Value checked array[%d] = [%d]\n", l, array[l]);
					if (array[l] == value)
						return (l);
					l++;
				}
			}
			if (i < size)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
