#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: This is the pointer to the 1st node of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}

