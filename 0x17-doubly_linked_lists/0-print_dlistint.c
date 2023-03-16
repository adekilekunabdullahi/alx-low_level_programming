#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - a function that prints all the elements of a dlistint_t list
 *@h: head pointer
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	i++;
	return (i);
}
