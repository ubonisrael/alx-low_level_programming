#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @ac: number of command line arguments
 * @av: array of command line arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	int n, x;
	void (*main_ptr) = &main;
	unsigned char *opcodes = (unsigned char *)main_ptr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x < n; x++)
	{
		printf("%02x", opcodes[x]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
