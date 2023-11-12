#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at nth index of a dlistint_t
 * @head: head of list
 * @index: deletion index
 * Return: 1 if successful, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node, *curr;
	unsigned int tracker = 0;

	if (*head == NULL)
		return (-1);
	curr = (*head);
	prev_node = (*head)->prev;
	while (curr != NULL)
	{
		if (index == tracker)
		{
			if (index == 0)
			{
				if (curr->next != NULL)
				{
					curr->next->prev = NULL;
					(*head) = curr->next;
				}
				else
					*head = NULL;
			}
			else
			{
				if (curr->next != NULL)
				{
					prev_node->next = curr->next;
					curr->next->prev = prev_node;
				}
				else
					prev_node->next = NULL;
			}
			free(curr);
			return (1);
		}
		tracker++;
		prev_node = curr;
		curr = curr->next;
	}
	return (-1);
}
