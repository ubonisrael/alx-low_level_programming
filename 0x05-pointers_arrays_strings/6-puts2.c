#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int length;
	int x;

	length = 0;
	for (x = 0; ; x++)
	{
		if (*(str + x))
			length++;
		else
			break;
	}
	for (x = 0; x < length; x++)
	{
		if (x % 2 == 0)
			_putchar(*(str + x));
	}
	_putchar('\n');
}
