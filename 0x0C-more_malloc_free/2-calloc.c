#include "main.h"

/**
 * _memset - sets block of memory to a specific value
 * @ptr: pointer to memory block
 * @b: value
 * @size: size of memory block
 * Return: void
 */

void _memset(char *ptr, int b, unsigned int size)
{
	unsigned int x;

	for(x = 0; x < size; x++)
		ptr[x] = b;
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: element in array
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
