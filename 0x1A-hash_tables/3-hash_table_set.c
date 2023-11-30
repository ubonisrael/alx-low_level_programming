#include "hash_tables.h"

/**
 * add_node - adds a node to a linked list
 * @head: head of linkde list
 * @key: key
 * @value: value associated with key
 * Return: the new node created if successful else NULL
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;

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
	/* else add to the beginnig of list */
	new_node = malloc(sizeof(hash_node_t));
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
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if successfull else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = add_node(&(ht->array[index]), key, value);
	if (node == NULL)
		return (0);
	return (1);
}
