#include "main.h"

/**
 * print_diagsums - print the sum of diagonal elements in an array
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int diagonal1, diagonal2, x;

	diagonal1 = diagonal2 = x = 0;
	for (; x < size * size; x++)
	{
		if (x % (size + 1) == 0)
			diagonal1 += a[x];
		if (x % (size - 1) == 0)
			diagonal2 += a[x];
	}
	diagonal2 = diagonal2 - a[0] -  a[x - 1];

	printf("%d, %d\n", diagonal1, diagonal2);
}
