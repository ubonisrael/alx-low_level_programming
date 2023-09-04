#include "main.h"

/**
 * create_array - creates and initializes an array of characters
 * @size: size of array
 * @c: character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str;

	if (size == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
