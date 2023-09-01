#include "main.h"

/**
 * _memcpy - copies first n bytes from src to dest
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
