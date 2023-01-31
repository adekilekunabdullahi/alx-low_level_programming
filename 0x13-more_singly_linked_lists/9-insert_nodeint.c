#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that add node at a particular index.
 * @head: linked list.
 * @idx: index to insert into.
 * @n: what to insert.
 * Return: address of the node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *list;
	unsigned int i = 1;

	if (*head)
	{
		tmp = malloc(sizeof(listint_t));
		if (!tmp)
			return (NULL);
		tmp->n = n;
		if (idx > 0)
		{
			list = *head;
			while (list)
			{
				if (i == idx)
				{
					tmp->next = list->next;
					list->next = tmp;
					return (tmp);
				}
				list = list->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			tmp->next = *head;
			*head = tmp;
		}
		return (tmp);
	}
	return (NULL);
}
