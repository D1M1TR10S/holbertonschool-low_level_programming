#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Find sum of integers from std input
 * @n: Number of parameters coming in
 * @...: List of parameters being passed
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(param, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(param, int);

	va_end(param);
	return (sum);
}
