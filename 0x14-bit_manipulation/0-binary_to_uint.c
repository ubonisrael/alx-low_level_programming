#include "main.h"

/**
 * _pow - raises x to the power of y
 * @x: the base
 * @y: the exponent
 * Return: the result
 */

unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int res = x;

	if (y == 0)
		return (1);
	else if (y == 1)
		return (res);
	else
		return (res * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary to an unsigned integer
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int len = strlen(b), x, y = 0;

	if (b == NULL)
		return (0);
	for (x = len - 1; x >= 0; x--)
	{
		if (b[x] == 48 || b[x] == 49)
			bin += ((b[x] - 48) * _pow(2, y));
		else
			return (0);
		y++;
	}
	return (bin);
}
