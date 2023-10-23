#include "lists.h"

/**
 * add_nodeint - Func that adds a new node at the beginning of the list
 * @head: This is the pointer to the head pointer
 * @n: This is the new int to be added
 * Return: The address of the new elment or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (0);
}
