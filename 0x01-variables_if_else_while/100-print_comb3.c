#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	x = '0';
	y = '1';

	while (x <= '9')
	{
		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			if (x < '8')
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
		y = x + 1;
	}
	putchar('\n');
	return (0);
}
