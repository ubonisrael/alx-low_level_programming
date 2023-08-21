#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int x;
	int length;
	int n;

	length = 0;
	for (x = 0; ; x++)
	{
		if (*(str + x))
			length++;
		else
			break;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
		for (x = n; x < length; x++)
			_putchar(*(str + x));
	}
	else
	{
		n = (length - 1) / 2;
		for (x = n + 1; x < length; x++)
			_putchar(*(str + x));
	}
	_putchar('\n');
}
