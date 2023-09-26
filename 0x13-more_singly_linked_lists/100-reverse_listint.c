#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the first node
 * Return: pointer to the new first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next = NULL, *prev = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
