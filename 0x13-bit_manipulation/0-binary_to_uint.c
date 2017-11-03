#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - Convert binary digit to unsigned integer
 * @b: String of binary number received
 * Return: Decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int idx = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[idx] != '\0')
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] == '0')
			num = num << 1;

		else if (b[idx] == '1')
		{
			num = num << 1;
			num = num | 1;
		}
		idx++;
	}

	return (num);
}
