#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: element in array
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
