#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = temp;
	}
}
