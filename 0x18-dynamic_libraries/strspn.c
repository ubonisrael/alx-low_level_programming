#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to prefix substring
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, stringBegun;
	unsigned int length;

	x = stringBegun = 0;
	length = 0;
	for (; ; x++)
	{
		if (!((s[x] > 64 && s[x] < 91) || (s[x] > 96 && s[x] < 123)))
		{
			if (stringBegun == 0)
				continue;
			else
				break;
		}
		if ((s[x] > 64 && s[x] < 91) || (s[x] > 96 && s[x] < 123))
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				{
					length++;
					break;
				}
			}
			stringBegun++;
		}
	}
	return (length);
}
