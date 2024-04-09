#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value using the jump-search algorithm
 * @list: This is the input list
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: The index of the num
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, r, s;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	s = (size_t)sqrt((double)size);
	index = 0;
	r = 0;

	do {
		prev = list;
		r++;
		index = r * s;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
