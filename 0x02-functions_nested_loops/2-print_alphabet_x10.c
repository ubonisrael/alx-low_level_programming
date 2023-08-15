#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y < 123; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
