#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value of range
 * @max: max value of range
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int x, y;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	y = min;
	x = 0;
	while (y <= max)
	{
		ptr[x] = y;
		x++;
		y++;
	}
	return (ptr);
}
