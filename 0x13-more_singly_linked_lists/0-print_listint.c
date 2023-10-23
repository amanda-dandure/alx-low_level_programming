#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: This is the head ptr to the list
 * Return: The num of nodes in the lists
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
