#include "lists.h"
/**
 *sum_dlistint -a function that sums all the data element in a doubly link list
 * @head: head pointer
 * Return: sum of all integer data elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *new;

	new = head;
	while (new->next)
	{
		sum += new->n;
		new = new->next;
	}
	sum += new->n;
	return (sum);
}
