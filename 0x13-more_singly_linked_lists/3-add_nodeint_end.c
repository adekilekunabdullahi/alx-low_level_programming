#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a a function that adds a new node at the end of a list.
 *@head: linked list.
 *@n: number to be inserted.
 *Return: address of the newly created list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;	
	newnode->next = NULL;
	if (!*head)
	{
		*head = newnode;
		return (*head);
	}
	else
	{
		lastnode = *head;
		while (lastnode->next)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
		return (newnode);
	}
}
