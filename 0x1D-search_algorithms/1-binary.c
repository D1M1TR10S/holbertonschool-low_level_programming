#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches an array for a value w/ binary search algorithm
 * @array: Array being search
 * @size: Size of array given
 * @value: Value being searched for
 * Return: Index of value in array or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int front = 0, back;
	unsigned int mid, i;

	if (array == NULL)
		return (-1);

	for (back = size - 1; size > 0; size = size / 2)
	{
		printf("Searching in array: ");
		for (i = front; i <= back; i++)
		{
			if (i < back)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = ((back - front) / 2) + front;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			back = mid;
		else if (array[mid] < value)
			front = mid + 1;
	}
	return (-1);
}
