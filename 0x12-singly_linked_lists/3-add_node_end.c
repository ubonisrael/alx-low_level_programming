#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to first node
 * @str: string value to be added to new node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *last_node;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	last_node->str = strdup(str);
	last_node-len = strlen(str);
	last_node->next = NULL;
	if ((*head) == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = last_node;
	return (last_node);
}
