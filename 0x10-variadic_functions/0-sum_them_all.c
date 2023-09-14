#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameters
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (sum);
	for (x = 0; x < n; x++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
