#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the prime factors
 * @a: kkk
 * @b: kkk
 * Return: 0
 */

long int prime_factor(long int a, long int b);

int main(void)
{
	long int num;
	long int result;

	num = 612852475143;
	result = prime_factor(num, 2);
	printf("%ld\n", result);

	return (0);
}

/**
 * prime_factor - gets the largest prime factor
 * @a: number
 * @b: prime factor
 * Return: largest prime factor
 */

long int prime_factor(long int a, long int b)
{
	int x;
	int largest;

	for (x = b; x < a + 1; x++)
	{
		if (a % x == 0)
		{
			largest = x;
			if (largest > prime_factor((a / x), x))
				return (largest);
			else
				return (prime_factor((a / x), x));
			break;
		}
	}
	return (b);
}
