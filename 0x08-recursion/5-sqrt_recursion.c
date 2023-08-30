#include "main.h"

/**
 * _sqrt - finds the square root of a number
 * @n: number
 * @x: possible root
 * Return: x if true, else -1
 */

int _sqrt(int n, int x)
{
	if (x > ((n + 1) / 2))
		return (-1);
	if ((x * x) == n)
		return (x);
	else
		return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_sqrt(n, 2));
}
