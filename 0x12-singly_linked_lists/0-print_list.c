#include "lists.h"

/**
 * print_list - Fuction that prints all the elements of list_t
 * @h: This is the head of the list
 * Return: The total num of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
