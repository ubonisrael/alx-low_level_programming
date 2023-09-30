#include "main.h"

/**
 * get_bit - gets the value of a bit
 * @n: number
 * @index: index of bit
 * Return: value if succesful. else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index < 64)
	{
		if (n & (x << index))
			return (1);
		return (0);
	}
	return (-1);
}
