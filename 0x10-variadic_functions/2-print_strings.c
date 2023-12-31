#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *temp;
	va_list args;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		temp = va_arg(args, char*);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
