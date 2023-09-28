#include "main.h"

/**
 * get_mask_length - gets the length of the binary amsk
 * @n: number
 * Return: mask length
 */

unsigned long int get_mask_length(unsigned long int n)
{
	unsigned long int length = 0;

	while (n > 0)
	{
		n >>= 1;
		length++;
	}
	return (length);
}

/**
 * print_binary - prints a binary number from a decimal
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, y, length = get_mask_length(n) - 1;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	for (y = i << length; y > 0; y = y >> i)
	{
		if (n & y)
			_putchar(49);
		else
			_putchar(48);
	}
}
