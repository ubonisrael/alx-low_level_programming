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
	unsigned int index = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || (*head == NULL && idx != 0))
		return (NULL);
	new_node->n = n;
	current = *head;
	while (index < idx)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		index++;
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (current->next)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		current->next = new_node;
	}
	return (new_node);
}
