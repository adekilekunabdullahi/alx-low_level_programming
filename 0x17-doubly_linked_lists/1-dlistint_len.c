#include "lists.h"
#include <stdio.h>
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
