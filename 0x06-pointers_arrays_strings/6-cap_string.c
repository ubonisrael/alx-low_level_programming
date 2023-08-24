#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to strring
 */

char *cap_string(char *s)
{
	int wdSprtrs[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int x = 0, y;

	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
			for (y = 0; y < 13; y++)
			{
				if (s[x - 1] == wdSprtrs[y])
				{
					s[x] = s[x] - 32;
					break;
				}
			}
		}
		x++;
	}
	return (s);
}
