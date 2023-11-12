#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: head of list
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
