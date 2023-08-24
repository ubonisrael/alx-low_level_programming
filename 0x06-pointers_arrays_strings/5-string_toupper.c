#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: poiinter to string
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; ; x++)
	{
		if (s[x] && s[x] > 96 && s[x] < 123)
			s[x] = s[x] - 32;
		else if (!s[x])
			break;
	}
	return (s);
}
