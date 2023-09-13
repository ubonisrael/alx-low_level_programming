#include "function_pointers.h"

/**
 * array_iterator - executes a function given as on each element of an array.
 * @array: the array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if (array && action && size > 0)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
