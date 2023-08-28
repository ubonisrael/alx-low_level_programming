#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character
 * Return: if found, a pointer to the first occurence else NULL
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) == c)
			return (s + x);
		x++;
	}
	if (c == '\0')
		return (s + x);
	return (NULL);
}
