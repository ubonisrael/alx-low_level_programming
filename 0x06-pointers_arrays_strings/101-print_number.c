#include "main.h"

/**
 * power - raises a integer to the power of x
 * @base: base number
 * @exp: exponent
 * Return: base n to the power of x
 */

int power(int base, int exp)
{
	int result = base, e = exp;

	if (exp < 0)
		exp *= -1;
	if (exp == 0)
		return (1);
	else if (exp == 1)
	{
		if (e > 0)
			return (result);
		else
			return (1 / result);
	}
	else
	{
		while (exp > 1)
		{
			result *= base;
			exp--;
		}
		if (exp < 0)
			return (1 / result);
		else
			return (result);
	}
}

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int decimal = 0, temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = n = n * -1;
	}

	while (temp > 9)
	{
		temp /= 10;
		decimal++;
	}
	while (decimal >= 1)
	{
		_putchar('0' + ((temp / power(10, decimal)) % 10));
		decimal--;
	}
	_putchar('0' + ((temp / power(10, decimal)) % 10));
}
