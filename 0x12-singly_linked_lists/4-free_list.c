#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head->next != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
