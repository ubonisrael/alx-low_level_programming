#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to be encoded
 * Return: pointer to string
 */

char *leet(char *s)
{
	int x = 0, y;
	int uppercaseLeet[] = {65, 69, 79, 84, 76};
	int lowercaseLeet[] = {97, 101, 111, 116, 108};
	int numbersLeet[] = {52, 51, 48, 55, 49};

	while (s[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (s[x] == uppercaseLeet[y] || s[x] == lowercaseLeet[y])
				s[x] = numbersLeet[y];
		}
		x++;
	}
	return (s);
}
