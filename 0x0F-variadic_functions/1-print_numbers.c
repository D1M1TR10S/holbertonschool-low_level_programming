#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers sent in as arguments
 * @separator: Character printed between each argument in output
 * @n: Number of integers to be printed
 * @...: Variable arguments coming from standard input
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
