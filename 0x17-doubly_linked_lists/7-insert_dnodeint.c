#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - a function that inserts to a doubly linked list
 * @h: head pointer
 * @idx: index to insert to
 * @n: data element to insert
 * Return: a pointer to the newly inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *list, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	list = *h;
	if (idx == 0)
	{
		dlistint_t *add_dnodeint(dlistint_t **h, const int n);
	}
	while (list)
	{
		if (i == idx)
		{
			new->prev = list;
			new->next = list->next;
			list->next = new;
			new->next->prev = new;
			return (new);
		}
		list = list->next;
		i++;
	}
	if (idx == i)
	{
		dlistint_t *add_dnodeint_end(dlistint_t **h, const int n);
	}
	return (NULL);
}
