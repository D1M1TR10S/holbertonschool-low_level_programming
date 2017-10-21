#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print all ints, chars, floats and strings from input
 * @format: String of format specifiers
 * @...: va_list of all arguments
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	va_list input;
	int i = 0;
	int n = 0;
	char *str;

	va_start(input, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(input, int));
			break;
		case 'i':
			printf("%d", va_arg(input, int));
			break;
		case 'f':
			printf("%f", va_arg(input, double));
			break;
		case 's':
			str = va_arg(input, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			n = 1;
			break;
		}
		if (format[i + 1] != '\0' && n == 0)
			printf(", ");
		i++;
		n = 0;
	}
	printf("\n");
	va_end(input);
}
