#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print names from functions pointed to
 * @name: name of the person
 * @f: Pointer to function f
 * @*: Pointer to value of char within f
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(f)(name);
}
