#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for an amount of money
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int x = 0;
	int balance;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	balance = atoi(argv[1]);
	while (balance > 0)
	{
		if (balance >= coins[x])
		{
			balance -= coins[x];
			count++;
		}
		else
			x++;
	}
	printf("%d\n", count);
	return (0);
}
