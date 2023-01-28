#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: a singly linked list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
