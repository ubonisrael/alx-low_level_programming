#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: node to be returned
 * Return: nth node or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tracker = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		if (tracker == index)
			return (curr);
		tracker++;
		curr = curr->next;
	}
	return (NULL);
}
