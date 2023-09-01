#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: length of arguments array
 * @argv: array of arguments passed to the program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
