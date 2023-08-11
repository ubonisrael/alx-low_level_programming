#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	x = '0';
	y = '1';
	z = '2';

	while (x <= '9')
	{
		while (y <= '9')
		{
			while (z <= '9')
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < '7')
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	putchar('\n');
	return (0);
}
