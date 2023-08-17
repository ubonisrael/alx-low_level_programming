#include "main.h"

/**
 * _isupper - checks if an argment is uppercase
 * @c: the argument
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
