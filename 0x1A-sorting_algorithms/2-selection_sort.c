#include "sort.h"
/**
 * selection_sort - Sorts an arrays with selection sort algorithm
 * @array: Pointer to array being sorted
 * @size: Size of array being sorted
 * return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, s, idx;
	int small;
	int swap;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		small = i;
		for (s = i + 1; s < size; s++)
		{
			if (array[s] < array[small])
			{
				small = s
			}
		}
		if (small != i)
		{
			swap = array[i]
			array[i] = array[small];
			array[small] = swap;
		}
	}
}
