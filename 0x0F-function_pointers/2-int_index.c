#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to the function used to compare values
 * Return: index of the first element or -1 if there's no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
