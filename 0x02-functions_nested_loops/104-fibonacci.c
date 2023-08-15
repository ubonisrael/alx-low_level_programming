#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 59 fibonacci numbers starting from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	long int x;
	long int y;
	long int z;
	int count;

	x = 1;
	y = 2;
	count = 2;
	printf("%ld, %ld, ", x, y);
	while (count < 99)
	{
		z = x + y;
		printf("%ld", z);
		if (count < 98)
			printf(", ");
		x = y;
		y = z;
		count++;
	}
	printf("\n");
	return (0);
}
