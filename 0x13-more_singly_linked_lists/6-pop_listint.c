#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to head node
 * Return: head node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
