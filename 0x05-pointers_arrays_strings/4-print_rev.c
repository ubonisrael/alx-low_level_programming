#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int length;
	int x;
	char *temp;

	temp = s;
	length = 0;
	while (*s++ != '\0')
		length++;
	s = temp;
	for (x = length - 1; x >= 0; x--)
		_putchar(*(s + x));
	_putchar('\n');
}
