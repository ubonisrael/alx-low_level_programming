#include "main.h"

/**
 * _strcmp - compares two strings lexicographically
 * @s1: first string
 * @s2: second string
 * Return: integer difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int x, diff;

	for (x = 0; ; x++)
	{
		if (s1[x] && s2[x] && (s1[x] != s2[x]))
		{
			diff =  s1[x] - s2[x];
			break;
		}
		else if (s1[x] && !s2[x])
		{
			diff = 0 - s1[x];
			break;
		}
		else if (!s1[x] && s2[x])
		{
			diff = s2[x];
			break;
		}
		else if (!s1[x] && !s2[x])
		{
			diff = 0;
			break;
		}
	}
	return (diff);
}
