#include "holberton.h"
/**
 * reverse_array - Reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int c;
	int i = 0;

	n--;

	while (n > i)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
		n--;
		i++;
	}
}
