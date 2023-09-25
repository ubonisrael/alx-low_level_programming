#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position.
 * @head: pointer to the first node
 * @index: insertion index
 * Return: 1 if successful, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *tmp;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (idx + 1 < index)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		idx++;
	}
	if (current != NULL)
	{
		tmp = current->next;
		current->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
