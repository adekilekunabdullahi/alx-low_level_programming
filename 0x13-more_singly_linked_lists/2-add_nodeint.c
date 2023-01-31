#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at the beginning of a list.
 *@head: pointer to pointer of a linked list.
 *@n: what to add at the begginnig of a linked list.
 *Return: address of newnode.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == 0)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
