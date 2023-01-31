#include "lists.h"
#include <stdio.h>
/**
 *print_listint - a function that prints all the elements of a listint_t list.
 *@h: linked list.
 *Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 1;

	if (!h)
		return (0);
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	return (i);
}
