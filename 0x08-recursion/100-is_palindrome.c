#include "main.h"

/**
 * _strlen - returns length of string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen(s + 1);
	}
	return (length);
}

/**
 * isPalin - checks if a character in a string equals its reverse
 * @s: pointer to string
 * @x: index of string
 * @length: length of string
 * Return: 1 if true, 0 otherwise
 */

int isPalin(char *s, int x, int length)
{
	if (x < ((length + 1) / 2))
	{
		if (s[x] == s[length - 1 - x])
			return (isPalin(s, x + 1, length));
		else
			return (0);
	}
	else
		return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string
 * Return: 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = 0;

	length = _strlen(s);

	return (isPalin(s, 0, length));
}
