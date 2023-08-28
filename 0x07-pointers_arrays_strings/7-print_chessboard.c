#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to string used for printing the board
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int y = 0;

	while (y < 64)
	{
		_putchar(a[0][y]);
		y++;
		if (y % 8 == 0)
			_putchar('\n');
	}
}
