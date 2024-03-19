#include "search_algos.h"

listint_t *jump_util(listint_t *list, int jump_factor, listint_t **j);

/**
  * jump_list - searches for a value in a linked list using
  * Jump search Algorithm
  * @list: pointer to head of a list
  * @size: size of list
  * @value: target value
  * Return: pointer to first node that holds value else NULL
  */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump_value;
	listint_t *current, *i, *j;

	if (list == NULL)
		return (NULL);
	jump_value = (int)sqrt(size);
	current = i = j = list;
	current = jump_util(list, jump_value, &j);
	while (current != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		if (current->n >= value || current->index >= size)
			break;
		i = j;
		current = jump_util(current, jump_value, &j);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i->index, j->index);
	while (i && i->index <= j->index && i->index < size)
	{
		printf("Value checked at index [%ld] = [%d]\n", i->index, i->n);
		if (i->n == value)
			return (i);
		i = i->next;
	}
	return (NULL);
}

/**
  * jump_util - jumps "n" number of nodes
  * @list: pointer to linked list
  * @jump_factor: number of nodes to jump
  * @j: pointer to node at which jump process currently on
  * Return: pointer to node jumped to or NULL if it doesn't exist
  */

listint_t *jump_util(listint_t *list, int jump_factor, listint_t **j)
{
	listint_t *tmp = list;

	while (jump_factor > 0 && tmp != NULL)
	{
		if (tmp->next == NULL)
			printf("Value checked at index [%ld] = [%d]\n",
					tmp->index, tmp->n);
		tmp = tmp->next;
		if (tmp)
			*j = tmp;
		*j = *j;
		jump_factor--;
	}
	return (tmp);
}
