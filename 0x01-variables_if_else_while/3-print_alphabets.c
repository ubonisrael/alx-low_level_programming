#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	char *alphabets = "abcdefghijklmnopqrstuvwxyzABCEDFGHIJKLMNOPQRSTUVWXYZ";
	int x = 0;

	for (; x < 56; x++)
		putchar(alphabets[x]);
	putchar('\n');
	return (0);
}
