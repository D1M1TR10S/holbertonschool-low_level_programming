#include "holberton.h"
int divi(int n, int d);
/**
 * is_prime_number - Checks 'n' to see if it's a prime number
 * @n: Number being checked for primacy
 * Return: n
 */
int is_prime_number(int n)
{
	return (divi(n, 2));
}
/**
 * divi - Recursively checking 'n' to see if it's divisible by any integers
 * @d: Divisor being checked in n
 * @n: Number being checked for primacy
 * Return: n, d
 */
int divi(int n, int d)
{
	if (n < 0)
		n = n * -1;
	if (n == 1)
		return (0);
	if ((n % d == 0) && (n != d))
		return (0);
	if (n == d)
		return (1);
	return (divi(n, d + 1));
}
