#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function  that frees a list_t list.
 * @head: a singly linked list.
 */
void free_list(list_t *head)
{
	list_t *tmp, *asd;

	tmp = head;

	while (tmp)
	{
		asd = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = asd;
	}
}
