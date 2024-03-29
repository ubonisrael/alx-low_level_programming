#include "search_algos.h"

/**
  * jump_search - searches an array for a value using
  * the Jump Search Algorithm
  * @array: pointer to first element in the array
  * @size: size of the array
  * @value: value to search for
  * Return: index if value is found else -1
  */

int jump_search(int *array, size_t size, int value)
{
	int i, j, jump_value;

	if (array == NULL || size == 0)
		return (-1);
	jump_value = (int)sqrt(size);
	for (i = 0; i < (int)size; i++)
	{
		j = i * jump_value;
		if (j >= (int)size || array[j] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
	}
	i = (i - 1) * jump_value > 0 ? (i - 1) * jump_value : 0;
	j = j == 0 ? jump_value : j;
	printf("Value found between indexes [%d] and [%d]\n", i, j);
	for (; i <= j; i++)
	{
		if (i >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
