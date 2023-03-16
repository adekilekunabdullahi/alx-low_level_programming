#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - a function that adds a list to doubly linked list
 * @head: head pointer
 * @n: data of element to be added.
 * Return: pointer to newly added element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = 0;
	if (*head == NULL)
	{
		new->next = 0;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
