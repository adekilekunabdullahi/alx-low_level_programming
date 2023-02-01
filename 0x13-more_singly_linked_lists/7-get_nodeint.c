#include "lists.h"
#include <stdio.h>
/**
 *get_nodeint_at_index - a function that returns the nth node of a linked list.
 *@head: linked list
 *@index: index of nth list
 *Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *node;

	node = head;
	if (!head)
		return (NULL);
	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
