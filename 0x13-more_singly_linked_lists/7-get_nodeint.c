#include "lists.h"

/**
 * get_nodeint_at_index - To retreive a node at an index
 * @head: This is the pointer to the 1st element of a list
 * @index: This is the node desired position to retrieve
 * Return: pointer to the be retrieved
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	for (p = 0; p < index; p++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
