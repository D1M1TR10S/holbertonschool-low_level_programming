#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Reallocates memory from old_size to new_size
 * @ptr: Pointer to allocated memory
 * @old_size: Previously allocated memory.
 * @new_size: Newly allocated memory.
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *block;
	char *point = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		free(ptr);
		block = malloc(new_size);
		return (block);
	}

	block = malloc(new_size);
	if (block == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		block[i] = point[i];

	free(ptr);

	return (block);
}
