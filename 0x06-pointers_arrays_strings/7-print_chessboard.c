#include "holberton.h"
/**
 * print_chessboard - Return chessboard
 * @a: chess character coming in from main.c file
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
