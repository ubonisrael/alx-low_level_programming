#include "main.h"

/**
 * print_alphabet - prints the alhabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
