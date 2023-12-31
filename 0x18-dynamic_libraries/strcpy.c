#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: pointer pointint to buffer
 * @src: pointer pointing to string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int length;

	length = 0;
	for (x = 0; ; x++)
	{
		if (*(src + x))
			length++;
		else
			break;
	}
	for (x = 0; x < length; x++)
		*(dest + x) = *(src + x);
	*(dest + (length)) = '\0';

	return (dest);
}
