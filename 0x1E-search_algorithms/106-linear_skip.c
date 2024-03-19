#include "search_algos.h"

/**
  * linear_skip - searches for a value in a sorted skiplinked list
  * @list: pointer to head of a list
  * @value: target value
  * Return: pointer to first node that holds value else NULL
  */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *i, *j;

	if (list == NULL)
		return (NULL);
	current = i = j = list;
	current = current->express;
	if (current)
		j = current;
	while (current != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
		current = current->express;
		if (current)
		{
			i = j;
			j = current;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i->index, j->index);
	while (i && i->index <= j->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", i->index, i->n);
		if (i->n == value)
			return (i);
		i = i->next;
	}
	return (NULL);
}
