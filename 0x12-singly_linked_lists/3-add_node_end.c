#include "lists.h"

int len(const char *str);
list_t *create_node(const char *str);

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: This is the ptr to the head of the list
 * @str: This is the new node to be added at the end
 * Return: The pointer to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}

/**
 * create_node - Function that creates nodes
 * @str: This is the str to be inputed in the newly created node
 * Return: The pointer to the malloted memory
 */

list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * len - To get the len of the str
 * @str: This is the str to get its len
 * Return: The amount of the len
 */

int len(const char *str)

{
	int p;

	if (str == NULL)
		return (0);

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}
