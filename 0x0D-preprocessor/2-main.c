#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of file it was compiled on
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
