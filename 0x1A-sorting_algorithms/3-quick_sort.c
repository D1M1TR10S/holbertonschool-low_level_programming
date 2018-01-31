#include "sort.h"
void quick_sorting(int *array, int lo, int hi, size_t size);
int partition(int *array, int lo, int hi, size_t size);

/**
 * quick_sort - Use quick sort algorithm to sort an array
 * @array: Array being quicksorted
 * @size: Size of array being sorted
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0;
	int hi = size - 1;

	quick_sorting(array, lo, hi, size);
}
/**
 * quick_sorting - Quick sot function that includes lo and hi variables
 * @array: Array being quicksorted
 * @lo: Starting index
 * @hi: index of pivot value
 * @size: Size of array being sorted
 * Return: Index of pivot
 */
void quick_sorting(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quick_sorting(array, lo, p - 1, size);
		quick_sorting(array, p + 1, hi, size);
	}
}
/**
 * partition - Partition function for quick sort algorithm
 * @array: Array being quicksorted
 * @lo: Starting index
 * @hi: index of pivot value
 * @size: Size of array being sorted
 * Return: Index of pivot
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int hold;
	int pivot = array[hi];
	int j;
	int i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			hold = array[j];
			array[j] = array[i];
			array[i] = hold;
			if (hold != array[j])
				print_array(array, size);
		}
	}
	hold = array[i + 1];
	array[i + 1] = array[hi];
	array[hi] = hold;
	if (hold != array[i + 1])
		print_array(array, size);
	return (i + 1);
}
