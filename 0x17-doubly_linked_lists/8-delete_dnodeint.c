#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - a function that retutns number of elements in linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
/**
 * delete_dnodeint_at_index - function that deletes a particular node
 * @head: head pointer
 * @index: index of node to delete
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *list;
	unsigned int a;
	unsigned int i = 0;

	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = 0;
		free(new);
		return (1);
	}
	a = dlistint_len(*head);
	if (a == index)
	{
		while (new)
			new = new->next;
		new->prev->next = 0;
		free(new);
		return (1);
	}
	while (i < a)
	{
		if (index == i)
		{
			list = new;
			list->prev->next = list->next;
			list->next->prev = list->prev;
			free(list);
			return (1);
		}
		new = new->next;
		i++;
	}
	return (-1);
}
