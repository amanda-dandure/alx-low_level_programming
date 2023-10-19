#include "lists.h"

int len(const char *str);
/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * @head: This i the ptr to the head of the list
 * @str: This is the str to be inserted to the 1st position
 * Return: The pointer to the 1st node [newly assigned one
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}

/**
 * len - To get the len of the str
 * @str: This is the str to get its len
 * Return: The len of the str
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
