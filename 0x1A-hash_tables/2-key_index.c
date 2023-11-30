#include "hash_tables.h"

/**
 * key_index - returns the index of a key in a hash table
 * @key: key of the datum
 * @size: sizeof the hash table
 * Return: index of the key
 */

unsigned long int key_index(const char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
