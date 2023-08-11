#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
