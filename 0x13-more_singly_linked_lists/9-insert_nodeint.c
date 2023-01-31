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

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	list = *head;
	while (i < idx)
	{
		list = list->next;
		i++;
	}
	tmp->next = list->next;
	list->next = tmp;
	return (tmp);
}
