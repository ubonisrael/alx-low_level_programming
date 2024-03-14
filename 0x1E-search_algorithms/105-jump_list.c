#include "search_algos.h"

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
	int jump_value, tmp;
	listint_t *current, *i, *j;

	if (list == NULL)
		return (NULL);
	tmp = jump_value = (int)sqrt(size);
	current = i = j = list;
	while (tmp > 0 && current != NULL)
	{
		current = current->next;
		if (current)
			j = current;
		tmp--;
	}
	tmp = jump_value;
	while (current != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		if (current->n >= value || current->index >= size)
			break;
		i = j;
		while (tmp > 0 && current != NULL)
		{
			current = current->next;
			if (current)
				j = current;
			tmp--;
		}
		tmp = jump_value;
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
