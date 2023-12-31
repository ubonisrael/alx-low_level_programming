#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int temp;
	int x;
	int length;

	length = 0;
	for (x = 0; ; x++)
	{
		if (*(s + x))
			length++;
		else
			break;
	}
	for (x = 0; x < length / 2; x++)
	{
		temp = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = temp;
	}
}
