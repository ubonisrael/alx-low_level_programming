#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *curr = head;

	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	head = NULL;
}
