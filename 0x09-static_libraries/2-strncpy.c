#include "main.h"

/**
 * _strncpy - copies a src string up to n chars to a destination string
 * @dest: destination string
 * @src: src string
 * @n: number of chars
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];
	for (; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
