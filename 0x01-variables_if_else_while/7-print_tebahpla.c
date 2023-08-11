#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int x = 'z';

	for (; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
