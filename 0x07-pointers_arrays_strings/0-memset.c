#include "main.h"

/**
 * _memset - fills first n bytes of s with b
 * @s: pointer to memory area
 * @b: character for fill
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
		s[x] = b;
	return (s);
}
