#include "lists.h"

/**
 * reverse_listint - Func that reverses a linked list
 * @head: This is the head of the list
 * Return: pointer to the 1st node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
