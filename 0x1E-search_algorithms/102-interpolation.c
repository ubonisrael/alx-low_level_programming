#include "search_algos.h"

int interpolation_util(int *array, size_t size, int low, int high, int value);

/**
  * interpolation_search - searches an array for a value using
  * Interpolation algorithm
  * @array: array to be searched
  * @size: size of the array
  * @value: value to be searched
  * Return: index if value is found else -1
  */

int interpolation_search(int *array, size_t size, int value)
{
	return (interpolation_util(array, size, 0, size - 1, value));
}

/**
  * interpolation_util - searches an array for a value using
  * Interpolation algo - helper function
  * @array: array to be searched
  * @size: size of array
  * @low: lower boundary
  * @high: upper boundary
  * @value: value to be searched for
  * Return: index if valule is found else -1
  */

int interpolation_util(int *array, size_t size, int low, int high, int value)
{
	size_t pos;

	if (low >= high)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (pos < size)
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		return (interpolation_util(array, size, low, pos, value));
	else
		return (interpolation_util(array, size, pos + 1, high, value));
}
