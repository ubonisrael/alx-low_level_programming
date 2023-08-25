#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == alphabet[y])
			{
				s[x] = rot13[y];
				break;
			}
		}
		x++;
	}
	return (s);
}
