#include "main.h"

/**
 * print_diagonal - prints diagonal line ne times
 * @n: the argument
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
				{
					_putchar(92);
					break;
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
