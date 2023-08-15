#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers under 4m
 *
 * Return: 0
 */

int main(void)
{
	long int x;
	long int y;
	long int z;
	long int sum;

	x = 1;
	y = 2;
	sum = 2;
	while (y < 4000000)
	{
		z = x + y;
		if (z % 2 == 0)
			sum += z;
		x = y;
		y = z;
	}
	printf("%ld\n", sum);
	return (0);
}
