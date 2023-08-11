#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 using putchar
 *
 * Return: 0
 */

int main(void)
{
	int x = '0';

	for (; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
