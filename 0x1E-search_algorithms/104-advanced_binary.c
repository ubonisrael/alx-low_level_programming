#include "search_algos.h"

void print_arr(int *array, int start, int end);
int advanced_binary_util(int *array, int start, int end, int value);

/**
  * advanced_binary - searches for a value in a sorted array
  * of integers using an advanced Binary search algorithm
  * linear_search - a function that searches an array using linear algorithm
  * @array: pointer to first element of array of integers
  * @size: size of the array
  * @value: value to be searched
  * Return: index of the first occurrence of value if found else -1
  */

int advanced_binary(int *array, size_t size, int value)
{
	return (advanced_binary_util(array, 0, (int)size - 1, value));
}

/**
  * advanced_binary_util - searches for a value in a sorted array
  * of integers using an advanced Binary search algorithm
  * @array: pointer to first element of array of integers
  * @start: start position of array
  * @end: end position of array
  * @value: value to be searched
  * Return: index of the first occurrence of value if found else -1
  */

int advanced_binary_util(int *array, int start, int end, int value)
{
	int mid;

	if (array == NULL)
		return (-1);
	if (end >= start)
	{
	  print_arr(array, start, end);
		mid = start + (end - start) / 2;
		if ((mid == 0 || value > array[mid - 1]) && array[mid] == value)
			return (mid);
		if (array[mid] >= value)
			return (advanced_binary_util(array, start, mid, value));
		return (advanced_binary_util(array, mid + 1, end, value));
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
