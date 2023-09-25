#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to head node
 * Return: head node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data = (*head)->n;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(tmp);
	return (data);
}
