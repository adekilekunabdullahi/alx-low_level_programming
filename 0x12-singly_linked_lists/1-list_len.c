#include "lists.h"
#include <stdio.h>
/**
 *list_len - a function that returns the number of elements in a linked list.
 *@h: a linked list.
 *Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
