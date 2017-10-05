#include "holberton.h"
int var(int n, int s);
/**
 * _sqrt_recursion - Find the square root of a number using recursive functions
 * @n: Number being rooted
 * Return: n
 */
int _sqrt_recursion(int n)
{
	return (var(n, 1));
}
/**
 * var - Find the square root with recursive function
 * @s: Square root
 * @n: Number being rooted
 * Return: n, s
 */
int var(int n, int s)
{
	if ((n / s == s) && (n % s == 0))
		return (s);
	if (s >= n)
		return (-1);
	return (var(n, s + 1));
}
