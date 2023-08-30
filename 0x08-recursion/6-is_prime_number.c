#include "main.h"

/**
 * isDivisible - checks if a number is divisible by another
 * @n: number
 * @x: divisor
 * Return: 1 if true, else 0
 */

int isDivisible(int n, int x)
{
	if (x > ((n + 1) / 2))
		return (1);
	if (n % x == 0)
		return (0);
	else
		return (isDivisible(n, x + 1));
}

/**
 * is_prime_number - checks if the input is a prime number
 * @n: integer
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (isDivisible(n, 2));
}
