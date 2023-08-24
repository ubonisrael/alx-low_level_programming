#include "main.h"

/**
 * _strncat - appends a src string(up to n bytes) to a destination string
 * @dest: destination string
 * @src: src string
 * @n: number of characters
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; ; x++)
	{
		if (dest[x])
			continue;
		else
			break;
	}
	for (y = 0; y < n; y++)
	{
		if (src[y])
			dest[x + y] = src[y];
		else
			break;
	}
	dest[x + y] = '\0';
	return (dest);
}
