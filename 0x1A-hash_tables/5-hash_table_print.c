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
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (; x < ht->size; x++)
	{
		tmp = ht->array[x];
		if (tmp != NULL)
		{
			while (tmp != NULL)
			{
				if (count == 1)
					printf(", ");
				printf("\'%s\': \'%s\'",
				       tmp->key, tmp->value);
				count = 1;
				tmp =tmp->next;
			}
		}
	}
	printf("}\n");
}
