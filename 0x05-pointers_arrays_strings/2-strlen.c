#include "main.h"

/**
 * _strlen - returrns the length of a string
 * @s: string variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++ != '\0')
		length++;
	return (length);
}
