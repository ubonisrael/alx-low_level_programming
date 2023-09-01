#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments on the command line
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
