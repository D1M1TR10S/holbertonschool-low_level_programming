#include "holberton.h"
/**
 * main - Print largest prime factor of a number
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int l, x, d;
	
	l = n;
	x = n;
	d = 1;

	if (n < 0)
	{
		_putchar('-');
		l = -n;
		x = -n;
	}
	while (x >= 10)
	{
		x = x / 10;
		d = d * 10;
	}
	while (d > 0)
	{
		_putchar(l / d % 10 + '0');
		d = d / 10;
	}

}
