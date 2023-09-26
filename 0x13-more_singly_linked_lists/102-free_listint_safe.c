#include "lists.h"

/**
 * _free_listptr - frees a listptr_t list
 * @head: pointer to head of the list
 * Return: void
 */

void _free_listptr(listptr_t **head)
{
	listptr_t *tmp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}


/**
 * free_listint_safe - prints all the elements of a listint list
 * @h: listint list
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current;
	listptr_t *ptr, *new, *add;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;
		add = ptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				_free_listptr(&ptr);
				return (count);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	_free_listptr(&ptr);
	return (count);
}
