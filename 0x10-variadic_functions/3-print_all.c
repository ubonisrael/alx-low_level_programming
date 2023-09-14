#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: character
 * Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: integer
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: float
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @s: string
 * Return: void
 */

void print_string(va_list args)
{
	char* s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of argument passed to fumction
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int x;
	int y;
	char *sep = "";
	format_list list[] = {
		{99, print_char},
		{105, print_int},
		{102, print_float},
		{115, print_string},
	};

	va_list args;
	va_start(args, format);
	x = 0;
	while (format && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (format[x] == list[y].c)
			{
				printf("%s", sep);
				list[y].func(args);
				sep = ", ";
				break;
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(args);
}
