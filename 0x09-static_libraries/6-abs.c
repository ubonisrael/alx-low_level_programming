#include "main.h"

/**
 * _abs - returns the absolute value of the argument passed to it
 * @n: the argument
 * Return: absolute value of argument
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-1 * n);
	else
		return (0);
}
