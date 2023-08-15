#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers form the argument to 98
 * @n: argument
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	printf("%d\n", n);
}
