#include "main.h"

/**
 * countSetBits - checks a number for flipped bits
 * @a: num
 * Return: number
 */

unsigned int countSetBits(unsigned long int a)
{
	unsigned int count = 0;

	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}

/**
 * flip_bits - returns the number of bits needed for flipping
 * @n: first num
 * @m: second num
 * Return: number needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
