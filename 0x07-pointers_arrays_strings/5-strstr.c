#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string to be searched
 * @needle: substring
 * Return: pointer to location of substring in string if foind, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y;

	while (haystack[x] != '\0')
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] == needle[y])
			{
				if (needle[y + 1] == '\0')
					return (haystack + x);
			}
			else
				break;
		}
		x++;
	}
	return (NULL);
}
