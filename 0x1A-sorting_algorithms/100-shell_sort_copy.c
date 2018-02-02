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
	int i = 0, j, rev;
	int hold;
	int a_size = size;

	if (array == NULL)
		return;

	while (gap < a_size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		j = i;
		for (;  i < a_size; i += gap)
		{
			if ((i + gap) < a_size && array[i] > array[i + gap])
			{
				hold = array[i];
				array[i] = array[i + gap];
				array[i + gap] = hold;
				for (rev = gap; rev >= 0; rev -= gap)
				{
					if (rev - gap >= 0 && array[rev] < array[rev - gap])
					{
						hold = array[rev];
						array[rev] = array[rev - gap];
						array[rev - gap] = hold;
					}
				}
			}
		}
		i = j + 1;
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
