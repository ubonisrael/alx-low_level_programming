#include "search_algos.h"

void print_arr(int *array, int start, int end);
int binary_search_util(int *array, int start, int end, int value);

/**
  * exponential_search - searches for a value in a sorted array
  * of integers using the Exponential search algorithm
  * linear_search - a function that searches an array using linear algorithm
  * @array: pointer to first element of array of integers
  * @size: size of the array
  * @value: value to be searched
  * Return: index of the value if found else -1
  */

int exponential_search(int *array, size_t size, int value)
{
	int i, min, max;

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	min = i / 2;
	max = i >= (int)size ? (int)size - 1 : i;
	printf("Value found between indexes [%d] and [%d]\n", min, max);
	return (binary_search_util(array, min, max, value));
}

/**
  * binary_search_util - searches for a value in a sorted array
  * of integers using the Binary search algorithm
  * linear_search - a function that searches an array using linear algorithm
  * @array: pointer to first element of array of integers
  * @start: start position of array
  * @end: end position of array
  * @value: value to be searched
  * Return: index of the value if found else -1
  */

int binary_search_util(int *array, int start, int end, int value)
{
	int mid = start + (end - start) / 2;

	if (array == NULL)
		return (-1);
	print_arr(array, start, end);
	if (start < end)
	{
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_util(array, start, mid - 1, value));
		return (binary_search_util(array, mid + 1, end, value));
	}
	return (-1);
}

/**
  * print_arr - prints an array of integers
  * @array: pointer to first element of array
  * @start: start index
  * @end: end index
  * Return: void
  */

void print_arr(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end + 1; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
		else
			printf("\n");
	}
}
