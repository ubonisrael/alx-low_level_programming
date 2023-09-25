#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: pointer to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
