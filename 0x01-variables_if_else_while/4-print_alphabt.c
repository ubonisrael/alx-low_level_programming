#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in lowercase except q ane e
 *
 * Return: 0
 */

int main(void)
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	for (; x < 26; x++)
	{
		if (alphabets[x] == 'e')
			continue;
		if (alphabets[x] == 'q')
			continue;
		putchar(alphabets[x]);
	}
	putchar('\n');
	return (0);
}
