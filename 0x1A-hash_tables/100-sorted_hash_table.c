#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size: size of the table
 * Return: the created table hash table or NULL if it fails.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (; x < size; x++)
		table->array[x] = NULL;

	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * insert_sorted_list - inserts a newly created node in a sorted list
 * @shead: head of sorted linked list
 * @stail: tail of sorted linked list
 * @new_node: node to be inserted
 * Return: void
 */

void insert_sorted_list(shash_node_t **shead, shash_node_t **stail,
			shash_node_t *new_node)
{
	shash_node_t *curr, *stmp;

	curr = *shead;
	if (*shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = *shead;
		*shead = new_node;
		*stail = new_node;
		return;
	}
	if (strcmp(curr->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = curr;
		*shead = new_node;
		curr->sprev = new_node;
		return;
	}
	while (curr->snext != NULL)
	{
		if (strcmp(curr->snext->key, new_node->key) > 0)
		{
			stmp = curr->snext;
			new_node->snext = stmp;
			new_node->sprev = curr;
			curr->snext = new_node;
			stmp->sprev = new_node;
			return;
		}
		curr = curr->snext;
	}
	/* add new_node to end of sorted list */
	curr->snext = new_node;
	new_node->sprev = curr;
	new_node->snext = NULL;
	*stail = new_node;
}

/**
 * sadd_node - adds a node to a sorted linked list
 * @shead: head of sorted linked list
 * @stail: tail of sorted linked list
 * @head: head of bucket
 * @key: key
 * @value: value associated with key
 * Return: the new node created if successful else NULL
 */

shash_node_t *sadd_node(shash_node_t **shead, shash_node_t **stail,
			shash_node_t **head, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;

	tmp = *head;
	/* check if key already exists and update */
	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (tmp);
			}
			tmp = tmp->next;
		}
	}
	/* else add to the beginning of list */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	/* Now traverse the sorted list and find the right position */
	insert_sorted_list(shead, stail, new_node);
	return (new_node);
}


/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if successfull else 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = sadd_node(&(ht->shead), &(ht->stail),
			 &(ht->array[index]), key, value);
	if (node == NULL)
		return (0);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key being looked for
 * Return: the value associated with key else NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			break;
		tmp = tmp->next;
	}
	return (tmp->value);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *curr;

	if (ht == NULL)
		return;
	curr = ht->shead;
	if (curr == NULL)
		return;
	printf("{");
	while (curr != NULL)
	{
		if (count == 1)
			printf(", ");
		printf("\'%s\': \'%s\'", curr->key, curr->value);
		count = 1;
		curr = curr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table reversed
 * @ht: hash table
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int count = 0;
	shash_node_t *curr;

	if (ht == NULL)
		return;
	curr = ht->stail;
	if (curr == NULL)
		return;
	printf("{");
	while (curr != NULL)
	{
		if (count == 1)
			printf(", ");
		printf("\'%s\': \'%s\'", curr->key, curr->value);
		count = 1;
		curr = curr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x;
	shash_node_t *tmp;

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
