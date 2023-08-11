#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	for (; x < 10; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
