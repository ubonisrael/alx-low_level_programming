#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1-100,replacing multiples of 3 with fizz, 5 with
 * buzz, multiples of 2 and 5 with fizzbuzz
 *
 * Return: void
 */

int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");

		if (x < 100)
			_putchar(' ');
	}
	_putchar('\n');
}
