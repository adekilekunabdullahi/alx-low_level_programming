#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a linked list.
 * @head: linked list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
	free(head);
}
