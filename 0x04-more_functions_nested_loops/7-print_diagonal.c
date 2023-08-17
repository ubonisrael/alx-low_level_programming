#include "main.h"

/**
 * print_diagonal - prints diagonal line ne times
 * @n: the argument
 * Return: void
 */

void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar(92);
	}
	_putchar('\n');
}
