#include "main.h"

/**
 * _islower - checks if an alphabet is lowercase
 * @c: argument
 *
 * Return: 1 if true, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
