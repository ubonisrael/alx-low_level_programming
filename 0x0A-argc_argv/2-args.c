#include <stdio.h>

/**
 * main - prints all arguments passed to it
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;

	for(; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
