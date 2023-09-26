#include "lists.h"

/**
 * free_listptr - frees a listptr_t list
 * @head: pointer to head of the list
 * Return: void
 */

void free_listptr(listptr_t **head)
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
 * print_listint_safe - prints all the elements of a listint list
 * @h: listint list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	listptr_t *ptr, *new, *add;

	ptr = NULL;
	while (h != NULL)
	{
		new = malloc(sizeof(listptr_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)h;
		new->next = ptr;
		ptr = new;
		add = ptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (h == add->p)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				free_listptr(&ptr);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		count++;
	}
	free_listptr(&ptr);
	return (count);
}
