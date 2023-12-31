#include <stdio.h>
#include <stdlib.h>

/**
 * isNumber - checks if its argument is a number
 * @x: argument
 * Return: true 1 or false 0
 */

int isNumber(char x[])
{
	int i = 0;

	if (x[i] == '-')
		i++;
	for (; x[i] != 0; x++)
	{
		if (x[i] < 48 || x[i] > 57)
			return (0);
	}
	return (1);
}

/**
 * main - prints the result of the adding two numbers
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 if successful else 1
 */

int main(int argc, char *argv[])
{
	int x = 1;
	int sum = 0;

	if (argc <= 1)
		printf("%d\n", 0);
	else
	{
		while (x < argc)
		{
			if (isNumber(argv[x]) > 0)
				sum += atoi(argv[x]);
			else
			{
				printf("Error\n");
				return (1);
			}
			x++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
