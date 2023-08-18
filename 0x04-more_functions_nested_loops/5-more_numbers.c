#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
				_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
