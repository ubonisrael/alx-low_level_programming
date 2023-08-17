#include "main.h"

/**
 * _isdigit - checks if an argument is a digit
 * @c: the argument
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
