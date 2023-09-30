#include "main.h"

/**
 * get_endianess - checks the endianess
 * Return: 1 if lettle endian, 0 if big endian
 */

int get_endianness(void)
{
	int x = 0x01234567;
	char *ptr = (char *)&x;

	if (*ptr)
		return (1);
	return (0);
}
