#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of lit
 * @idx: insertion index
 * @n: node data
 * Return: address of new node if successful, else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr = (*h);
	unsigned int tracker = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = curr;
		if (curr != NULL)
			curr->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (; tracker < idx - 1 && curr != NULL; tracker++)
		curr = curr->next;

	if (curr == NULL && tracker < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = curr->next;
	new_node->prev = curr;
	if (curr->next != NULL)
		curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
