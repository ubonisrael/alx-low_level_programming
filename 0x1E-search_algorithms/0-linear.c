#include "search_algos.h"

/**
  * linear_search - a function that searches an array using linear algorithm
  * @array: pointer to first element of array of integers
  * @size: size of the array
  * @value: value to be searched
  * Return: index of the value if found else -1
  */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	for (; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
