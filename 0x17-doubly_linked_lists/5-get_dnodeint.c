#include "lists.h"
/**
 * get_dnodeint_at_index - a function that get a node in a doubly linked list
 * @head: head pointer
 * @index: index of node
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int i = 0;

	new = head;
	if (!head)
		return (NULL);
	while (new)
	{
		if (i == index)
			return (new);
		new = new->next;
		i++;
	}
	return (NULL);
}
