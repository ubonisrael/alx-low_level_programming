#include <stdio.h>
#include "main.h"

/**
 * main - print the sum of numbers divisble by 3 or 5 under 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int x;

	sum = 0;
	for (x = 1; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
