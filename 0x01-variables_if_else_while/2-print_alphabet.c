#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 *main - prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	for (; x < 26; x++)
		putchar(alphabet[x]);
	putchar('\n');
	return (0);
}
