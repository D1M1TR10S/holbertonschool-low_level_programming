#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes each consecutive function within an array.
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: a pointer to the function being used
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (i < size)
	{
		(action)(array[i]);
		i++;
	}
}
