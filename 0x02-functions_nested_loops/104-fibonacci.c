#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 59 fibonacci numbers starting from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int x;
	unsigned long int y;
	unsigned long int z;
	int count;

	x = 1;
	y = 2;
	count = 2;
	printf("%lu, %lu, ", x, y);
	while (count < 98)
	{
		z = x + y;
		printf("%lu", z);
		if (count < 97)
			printf(", ");
		x = y;
		y = z;
		count++;
	}
	printf("\n");
	return (0);
}
