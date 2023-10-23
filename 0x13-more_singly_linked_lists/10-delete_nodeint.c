#include "lists.h"

/**
 * delete_nodeint_at_index - Func that deletes the node at an index
 * @head: This is the head of a list
 * @index: This is the index of the list where the node is deleted
 * Return: 1 if it successful, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
