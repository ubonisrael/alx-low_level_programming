#include <unistd.h>
#include <string.h>

/**
 * main - print string to standard error
 *
 * Return: 1
 */

int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, strlen(quote));
	return (1);
}
