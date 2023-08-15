#include "main.h"

/**
 * main - prints the word _putchar
 *
 * Return: 0
 */

int main(void)
{
	int x;
	char *word = "_putchar";

	for (x = 0; x < 8; x++)
	{
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
