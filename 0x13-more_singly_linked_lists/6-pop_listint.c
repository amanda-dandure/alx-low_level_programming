#include "lists.h"

/**
 * pop_listint - Func that deletes the head node of a list
 * then returns the head node’s data (n)
 * @head: This is the pointer to the list
 * Return: an int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
