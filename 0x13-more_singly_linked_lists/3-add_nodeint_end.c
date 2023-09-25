#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint list
 * @head: pointer to first node
 * @n: data value of new node
 * Return: address of the new node or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_last_node;

	new_last_node = malloc(sizeof(listint_t));
	if (new_last_node == NULL)
		return (NULL);
	new_last_node->n = n;
	new_last_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_last_node;
		return (new_last_node);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_last_node;
	return (new_last_node);
}
