#include "lists.h"

/**
 * list_len - Function that returns the num of elements in a linked list_t list
 * @h: This is the pointer to the next node
 * Return: The num of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int n;

	if (h == NULL)
		return (0);

	for (n = 1; h->next != NULL; n++)
		h = h->next;
	return (n);
}
