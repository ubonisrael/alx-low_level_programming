#include "main.h"

/**
 * print_last_digit - prints the last digit of an argument
 * @n: argument
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar('0' + x);
	return (x);
}
