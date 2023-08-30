#include "main.h"

/**
 * _puts_recursion - prints a string, followed ny a new line
 * @s: pointer to string
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(++s);
	else
		_putchar('\n');
}
