#include "lists.h"

/**
 * listint_len - Func that returns the num of elements in a linked list
 * @h: This is the pointer to the head
 * Return: The num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
