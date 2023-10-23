#include "lists.h"

/**
 * free_listint2 - Func that frees a list but sets head to NULL
 * @head: This is the pointer to the 1st node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}

