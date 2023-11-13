#include "main.h"

/**
 * _isalpha - checks is an argument is an alphabet
 * @c: the argument
 *
 * Return: 1 if its a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
