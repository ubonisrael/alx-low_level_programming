#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: pointer to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (*head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
