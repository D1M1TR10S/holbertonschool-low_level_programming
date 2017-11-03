#include "holberton.h"
void binary(unsigned long int n)
{
	if (n != 0)
		binary(n >> 1);
	else
		return;
	
	n = n & 1;

	if (n == 1)
		_putchar('1');

	if (n == 0)
		_putchar('0');

}
/**
 * print_binary - Convert decimal integers into binary
 * @n: 
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
		binary(n);
	
	else 
		_putchar('0');
}
