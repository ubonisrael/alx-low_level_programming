#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	int count = 0;
	unsigned long int x = 0;

	printf("{");
	for (; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (count == 1)
				printf(", ");
			printf("\'%s\':\'%s\'",
			       ht->array[x]->key, ht->array[x]->value);
			count = 1;
		}
	}
	printf("}\n");
}
