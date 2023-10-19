#include "lists.h"

/**
 * print_list - Fuction that prints all the elements of list_t
 * @h: This is the head of the list
 * Return: The total num of elements in the list
 */

size_t print_list(const list_t *h)
{
	int n;

	if (h == NULL)
		return (0);

	for (n = 1; h->next != NULL; n++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (n);
}
