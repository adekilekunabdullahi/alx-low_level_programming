#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - a function that adds a new node at the beginning of a list_t list.
 *@head:  original linked list.
 *@str: string to add to the node.
 *Return:  the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	if (head)
		tmp->next = *head;
	else
		tmp->next = NULL;
	tmp->str = strdup(str);
	tmp->len = _strlen(str);

	*head = tmp;
	return (tmp);	
}
/**
 * _strlen - a function that finds the length of the string
 * @a: string to find its length.
 * Return: length.
 */
int _strlen(const char *a)
{
	unsigned int i;

	for (i = 0; a[i] != '\0'; i++)
		;
	return (i);
}
