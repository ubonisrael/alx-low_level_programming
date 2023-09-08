#include "main.h"

/**
 * is_positive_num - checks if it's argument is a valid positive integer
 * @n: argument
 * Return: 1 if true 0 if false
 */

int is_positive_num(char *n)
{
	unsigned int x, len = strlen(n);

	for (x = 0; x < len; x++)
	{
		if (n[x] < 48 || n[x] > 57)
			return (0);
	}
	return (1);
}

/**
 * _atoi - converts a string to an integer
 * @str: string
 * Return: integer value
 */

unsigned long int _atoi(char *str)
{
	unsigned long int x, length, num;

	length = strlen(str);
	num = 0;
	for (x = 0; x < length; x++)
	{
		if (str[x] > 47 && str[x] < 58)
			num = num * 10 + (str[x] - 48);
	}
	return (num);
}

/**
 * print_msg - prints string followed by a newline
 * @str: string
 * Return - void
 */

void print_msg(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

/**
 * print_number - prints numbers
 * @number: number
 * Return: void
 */

void print_number(unsigned long int n)
{
	unsigned long int d, count;

	d = n;
	count = 1;
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + 48);
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @ac: number of command line arguments
 * @ag: array of command line arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	unsigned long int num1, num2, result;

	if (ac != 3 || is_positive_num(av[1]) < 1 || is_positive_num(av[2]) < 1)
	{
		print_msg("Error");
		exit(98);
	}
	num1 = _atoi(av[1]);
	num2 = _atoi(av[2]);
	result = num1 * num2;
	print_number(result);
	return (0);
}
