#include "main.h"

/**
 * alloc_grid - returns a pointer to 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width < 1 || height < 1)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *)malloc(sizeof(int) * width);
		if (ptr[x] == NULL)
			return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
