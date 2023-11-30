#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *tmp;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			while (ht->array[x] != NULL)
			{
				tmp = ht->array[x];
				ht->array[x] = ht->array[x]->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
