#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - print all the numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	char *basehex = "0123456789abcdef";
	int x = 0;

	for (; x < 16; x++)
		putchar(basehex[x]);
	putchar('\n');
	return (0);
}
