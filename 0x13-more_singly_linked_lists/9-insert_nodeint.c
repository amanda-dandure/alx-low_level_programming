#include "lists.h"

/**
 * create_new_node - To create a new node
 * @n: This is the data of the node
 * Return: The ptr to the node
 */

listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Func to insert a node at an index in a list
 * @head: This is the to the 1st element of the list
 * @idx: This is the index where the new node wil be inserted
 * @n: This is the data of the ne node created
 * Return: The address of the newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *tmp_old;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = new_node;
		new_node->next = tmp_old;
	}
	return (new_node);
}
