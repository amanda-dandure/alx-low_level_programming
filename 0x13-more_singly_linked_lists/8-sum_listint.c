#include "lists.h"

/**
 * sum_listint - Function to sum up all the data of the list
 * @head: This is the pointer to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
