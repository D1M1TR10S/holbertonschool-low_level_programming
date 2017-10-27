#include <stdio.h>
/**
 * premain - Prints a string before main
 * Return: Void
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
