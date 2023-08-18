#include "main.h"

/**
 * print_triangle - prints a right angle triangle
 * @size: lenght of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	z = size - 1;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y < z)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
		z--;
	}
}
