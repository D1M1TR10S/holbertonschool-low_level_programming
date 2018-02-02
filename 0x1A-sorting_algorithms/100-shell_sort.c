#include "sort.h"
/**
 * shell_sort - Shell sorts an array
 * @array: Array being sorted
 * @size: Size of array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	int gap = 1;
	int i, j;
	int hold;
	int a_size = size;

	if (array == NULL)
		return;

	while (gap < a_size / 3)
		gap = gap * 3 + 1;

	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = 0; i < a_size; i++)
		{
			hold = array[i];
			for (j = gap; j < a_size && array[j] < array[i]; j += gap)
			{
				array[j] = hold;
				array[i] = array[j];
			}

		}
		print_array(array, size);
	}
}
