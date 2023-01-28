#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: a linked list.
 * @str: string to add.
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *list;

	if (!str)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;

	if (!*head)
	{
		*head = tmp;
		return (*head);
	}
	else
	{
			list = *head;
			while (list->next)
				list = list->next;
			list->next = tmp;
			return (list);
	}
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
