#include "lists.h"
#include <stdlib.h>
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
