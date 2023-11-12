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
	dlistint_t *new_node, *prev_node, *curr = (*h);
	unsigned int tracker = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	prev_node = (*h)->prev;
	while (curr != NULL)
	{
		if (tracker == idx)
		{
			if (idx == 0)
			{
				new_node->prev = NULL;
				(*h) = new_node;
			}
			else
			{
				new_node->prev = prev_node;
				prev_node->next = new_node;
			}
			new_node->next = curr;
			curr->prev = new_node;
			return (new_node);
		}
		tracker++;
		prev_node = curr;
		curr = curr->next;
	}
	return (NULL);
}
