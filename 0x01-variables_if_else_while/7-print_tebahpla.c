#include <stdio.h>
 /**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c = c - 1)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
