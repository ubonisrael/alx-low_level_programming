#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first node
 * @idx: insertion index
 * @n: value of new node
 * Return: address of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	listint_t *tmp;
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *head;
	while (index < idx)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		index++;
	}
	if (current != NULL)
	{
		tmp = current->next;
		current->next = new_node;
		new_node->next = tmp;
		return (new_node);
	}
	return (NULL);
}
