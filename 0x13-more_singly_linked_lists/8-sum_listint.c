#include "lists.h"
/**
 *sum_listint - function that returns the sum of all the data of a linked list.
 * @head: linked list.
 * Return: sum of data(integer) of all the nodes in linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
