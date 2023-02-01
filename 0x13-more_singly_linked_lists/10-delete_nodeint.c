#include "lists.h"
#include <stdlib.h>
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *list;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if ((*head)->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	list = tmp->next;
	tmp->next = list->next;
	free(list);
	return (1);
}
