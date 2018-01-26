#include "sort.h"
/**
 * bubble_sort - Function that sorts an array with bubble sort algorithm
 * @array: Pointer to array being sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int holder;
	int sorting = 0;
	size_t i = 0;

	while (i < size - 1)
	{
		sorting = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				holder = array[i + 1];
				array[i + 1] = array[i];
				array[i] = holder;
				print_array(array, size);
				sorting = 1;
			}
			i++;
		}
		if (sorting == 0)
			break;
		i = 0;
	}
}
