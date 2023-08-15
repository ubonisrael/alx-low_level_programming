#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z < 10)
			{
				if (y > 0)
					_putchar(' ');
				_putchar('0' + z);
			}
			else
			{
				_putchar('0' + (z / 10));
				_putchar('0' + (z % 10));
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
