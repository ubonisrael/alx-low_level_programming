#include "hash_tables.h"

/**
 * hash_djb2 - creates a hash using the djb2 algorithm.
 * @str: key to be used for generating hash
 * Return: hash
 */

unsigned long int hash_djb2(const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
