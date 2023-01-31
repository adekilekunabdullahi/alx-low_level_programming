#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - a function that frees a listint_t list.
 *@head: linked list.
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head)
	{
		while (*head)
		{
			list = *head;
			*head = (*head)->next;
			free(list);
		}
	}
	else
		return;
	free(*head);
	head = NULL;
}
