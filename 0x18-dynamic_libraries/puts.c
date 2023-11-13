#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int count;
	int x;

	count = 0;
	for (x = 0; ; x++)
	{
		if (*(str + x))
			count++;
		else
			break;
	}
	for (x = 0; x < count; x++)
		_putchar(str[x]);
	_putchar('\n');
}
