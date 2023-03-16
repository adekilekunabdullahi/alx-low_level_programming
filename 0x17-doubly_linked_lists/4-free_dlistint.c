#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a function that frees a doubly linked list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
