#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: poiner to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(++s);
	}

	return (length);
}
