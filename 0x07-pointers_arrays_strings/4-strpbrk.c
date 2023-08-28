#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string
 * Return: pointer to first occurence of string if found, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
		x++;
	}
	return (NULL);
}
