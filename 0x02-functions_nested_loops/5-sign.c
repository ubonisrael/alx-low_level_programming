#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the argument
 * Return: 1 if the number is +ve, -1 if -ve, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
