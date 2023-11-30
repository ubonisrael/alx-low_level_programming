#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the table
 * Return: the created table hash table or NULL if it fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *table;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (; x < size; x++)
		table->array[x] = NULL;

	return (table);
}
