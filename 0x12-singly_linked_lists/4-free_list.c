#include "lists.h"

/**
 * free_list - Function that frees a list of nodes
 * @head: This is the ptr to the 1st node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}

