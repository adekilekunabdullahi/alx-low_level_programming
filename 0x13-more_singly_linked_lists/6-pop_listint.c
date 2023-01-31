#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint -a function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *@head:linked list;
 *Return: node's head data
 */
int pop_listint(listint_t **head)
{
	int a = 0;

	listint_t *tmp;

	if (*head)
	{
		tmp = (*head)->next;
		a = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (a);
}
