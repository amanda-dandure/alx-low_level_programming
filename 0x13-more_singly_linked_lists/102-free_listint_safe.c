include "lists.h"

/**
 * free_listp2 - To free a linked list
 * @head: This is head of a list
 * Return: void
 */

void free_listp2(listp_t **head)
{
        listp_t *tmp;
        listp_t *current;

        if (head != NULL)
        {
                current = *head;
                while ((tmp = current) != NULL)
                {
                        current = current->next;
                        free(tmp);
                }
                *head = NULL;
        }
}

/**
 * free_listint_safe - To frees a linked list
 * @h: This head of a list
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
        size_t nodes1 = 0;
        listp_t *hptr, *new, *add;
        listint_t *curr;

        hptr = NULL;
        while (*h != NULL)
        {
                new = malloc(sizeof(listp_t));

                if (new == NULL)
                        exit(98);

                new->p = (void *)*h;
                new->next = hptr;
                hptr = new;

                add = hptr;

                while (add->next != NULL)
                {
                        add = add->next;
                        if (*h == add->p)
                        {
                                *h = NULL;
                                free_listp2(&hptr);
                                return (nodes1);
                        }
                }

                curr = *h;
                *h = (*h)->next;
                free(curr);
                nodes1++;
        }

        *h = NULL;
        free_listp2(&hptr);
        return (nodes1);
}
