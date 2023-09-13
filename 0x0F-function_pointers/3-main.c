#include "3-calc.h"

/**
 * main - performs simple math operations
 * @ac: number of command line arguments
 * @av: array of command line arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	int result, num1, num2;
	char *div = "/";
	char *mod = "%";

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if (num2 == 0 && (strcmp(av[2], div) == 0 || strcmp(av[2], mod) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (strlen(av[2]) > 1 || get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = (*get_op_func(av[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
