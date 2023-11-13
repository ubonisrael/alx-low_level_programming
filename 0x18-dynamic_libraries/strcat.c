#include "main.h"

/**
 * _strcat - appends a src string to a destination string
 * @dest: destination string
 * @src: src string
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; ; x++)
	{
		if (dest[x])
			continue;
		else
			break;
	}
	for (y = 0; ; y++)
	{
		if (src[y])
			dest[x + y] = src[y];
		else
			break;
	}
	dest[x + y] = '\0';
	return (dest);
}
