#include "lists.h"
/**
 *listint_len - a function that returns the number of elements in a linked list
 *@h: pointer to a linked list.
 *Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
