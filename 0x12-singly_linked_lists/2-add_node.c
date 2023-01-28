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

	if (head && str)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp != NULL)
			return (NULL);
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;
		return (tmp);
	}
	return (0);
}
/**
 * _strlen - a function that finds the length of the string
 * @a: string to find its length.
 * Return: length.
 */
int _strlen(const char *a)
{
	size_t i;

	for (i = 0; a[i] != '\0'; i++)
		;
	return (i);
}
