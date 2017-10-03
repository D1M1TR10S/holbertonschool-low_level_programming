#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sums of integers in diagonal lines in an array
 * @a: integer coming in from main.c
 * @size: Dimensions of array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int s1 = 0;
	int s2 = 0;

	while (i < size * size)
	{
		s1 = s1 + a[i];
		i = i + size + 1;

		s2 = s2 + a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", s1, s2);
}
