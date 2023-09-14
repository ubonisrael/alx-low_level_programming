#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: string used to separate the integers
 * @n: number of numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);
	if (separator != NULL && n > 0)
	{
		for (x = 0; x < n; x++)
		{
			printf("%d", va_arg(args, int));
			if (x < n - 1)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
