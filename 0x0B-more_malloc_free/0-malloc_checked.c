#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory for pointer coming in
 * @b: Pointer coming in
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
