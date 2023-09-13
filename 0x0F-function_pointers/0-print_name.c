#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name string
 * @f: pointer to print function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
