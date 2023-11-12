#include "lists.h"

/**
 * sum_dlistint -  the sum of all the data (n) of a dlistint_t linked list.
 * @head: head of list
 * Return: sum of list data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
