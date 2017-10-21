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

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(strings, n);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			break;
		printf("%s%s", str, separator);
	}
	printf("%s\n", va_arg(strings, char *));
	va_end(strings);
}
