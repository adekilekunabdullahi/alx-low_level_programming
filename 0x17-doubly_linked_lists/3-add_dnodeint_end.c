#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - a function to add a list at end of a doubly linked list
 * @head: head pointer
 * @n: data of elemnt to be added.
 * Return: a pointer to the created list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = 0;
	if (!*head)
	{
		*head = new;
		new->prev = 0;
	}
	else
	{
		tail = *head;
		while (tail->next)
		{
			tail = tail->next;
		}
		new->prev = tail;
		tail->next = new;
	}
	return (new);
}
