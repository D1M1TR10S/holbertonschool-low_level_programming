#include "holberton.h"
/**
 * print_last_digit - prints the last digit of input from linked file.
 * @n: Character for return value.
 * Return: n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n >= 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n * -1;
		_putchar('0' + n);
		return (n);
	}
}
