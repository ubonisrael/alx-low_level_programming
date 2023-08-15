#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar('0' + (x / 10));
			_putchar('0' + (x % 10));
			_putchar(':');
			_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));
			_putchar('\n');
		}
	}
}
